%{
       #include <bits/stdc++.h>
         #include "ass5_19CS10064_19CS30008_translator.h"
        using namespace std;
        extern int yylex();
        void yyerror(string s);

        extern char* yytext; 
        extern int yylineno;
        extern string lastType;
%}

%union{
    int ival;
    char* charval;
    int instruction;
    char unary_op;
    int numparams;
    expression* expr;
    statement* stmt;
    symbol* syent;
    symboltype* syenttype;
    arraytype* arr;
}

%start translation_unit

%token<syent> IDENTIFIER
%token<charval> FLO_CONSTANT CHAR_CONSTANT
%token<ival> INT_CONSTANT
%token<charval> STRING_LITERAL
%token SIZEOF
%type <unary_op> unary_operator
%type <numparams> argument_expression_list argument_expression_list_opt
%type <expr> 
        expression
        primary_expression 
        multiplicative_expression
        additive_expression
        shift_expression
        relational_expression
        equality_expression
        AND_expression
        exclusive_OR_expression
        inclusive_OR_expression
        logical_AND_expression
        logical_OR_expression
        conditional_expression
        assignment_expression
        expression_statement

%type <stmt>
        statement
        compound_statement
        loop_statement
        selection_statement
        iteration_statement
        labeled_statement 
        jump_statement
        block_item
        block_item_list
        block_item_list_opt

%type <syenttype> pointer
%type<syent>  initializer constant
%type<syent> direct_declarator init_declarator declarator 

%type<arr> postfix_expression unary_expression cast_expression
%type <instruction> M
%type <stmt> N

%token EXTERN STATIC AUTO REGISTER 
%token VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token CONST RESTRICT VOLATILE INLINE ELLIPSIS
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN 
%token ARROW INCREMENT DECREMENT LEFTSHIFT RIGHTSHIFT LESSEQUAL GREATEREQUAL DOUBLEEQUAL NOTEQUAL  DOUBLEAND DOUBLEOR PLUSEQUAL MINUSEQUAL MULTIPLYEQUAL DIVEQUAL MODEQUAL LEFTSHIFTEQUAL RIGHTSHIFTEQUAL ANDEQUAL OREQUAL XOREQUAL
%token PLUS MINUS MULTIPLY DIV MOD TILDA NOT AND EQUAL SEMICOLON COMMA DOT LESS GREATER OR XOR
%right THEN ELSE

%token LEFTPAR RIGHTPAR LEFTBRACE RIGHTBRACE LEFTBRACKET RIGHTBRACKET COLON QUESTIONMARK

%%      


primary_expression:IDENTIFIER {
                $$ = new expression();
                $$->loc = $1; // symbol table entry
                $$->type = "non_bool";
        }
        | constant {
                $$ = new expression();
                $$->loc = $1;
        }
        | STRING_LITERAL {
                $$ = new expression();
                $$->loc = symboltable::gentemp(new symboltype("ptr"),$1);
                $$->loc->type->arrtype = new symboltype("char");
        }
        | LEFTPAR expression RIGHTPAR {
                $$ = $2;
        }                                      
        ;

constant: 
        INT_CONSTANT
        {
            $$ = symboltable::gentemp(new symboltype("int"), int_to_string($1));   // Create a new temporary, and store the value in that temporary
            emit("=", $$->name, $1);
        }
        | FLO_CONSTANT
        {
            $$ = symboltable::gentemp(new symboltype("float"), string($1));     // Create a new temporary, and store the value in that temporary
            emit("=", $$->name, string($1));
        }
        |CHAR_CONSTANT
        {
            $$ = symboltable::gentemp(new symboltype("float"), string($1));     // Create a new temporary, and store the value in that temporary
            emit("=", $$->name, string($1));
        }
        ;
postfix_expression: primary_expression {
                $$ = new arraytype();
                $$->arr = $1->loc;
                $$->type = $1->loc->type;
                $$->loc = $$->arr;
        }                                 
        | postfix_expression LEFTBRACKET expression RIGHTBRACKET {
                $$ = new arraytype();
                $$->type = $1->type->arrtype;
                $$->arr = $1->arr;
                $$->loc = symboltable::gentemp(new symboltype("int"),"");
                $$->arrtype = "arr";

                if($1->arrtype=="arr"){
                        symbol *temp = symboltable::gentemp(new symboltype("int"));
                        int sz = getSize($$->type);
                        emit("*",temp->name,$3->loc->name,int_to_string(sz));
                        emit("+",$$->loc->name,$1->loc->name,temp->name);
                }
                else{
                        int sz = getSize($$->type);
                        emit("*",$$->loc->name,$3->loc->name,int_to_string(sz));
                }
        }                     
        | postfix_expression LEFTPAR argument_expression_list_opt RIGHTPAR {
                $$ = new arraytype();
                $$->arr = symboltable::gentemp($1->type);
                emit("call", $$->arr->name,$1->arr->name,int_to_string($3));
        }             
        | postfix_expression DOT IDENTIFIER  {}                               
        | postfix_expression ARROW IDENTIFIER  {}                          
        | postfix_expression INCREMENT  {
                $$ = new arraytype();
                $$->arr = symboltable::gentemp($1->arr->type);
                emit("=", $$->arr->name,$1->arr->name);
                emit("+",$1->arr->name,$1->arr->name,"1");
        }                                    
        | postfix_expression DECREMENT {
                $$ = new arraytype();
                $$->arr = symboltable::gentemp($1->arr->type);
                emit("=", $$->arr->name,$1->arr->name);
                emit("-",$1->arr->name,$1->arr->name,"1");
        }                       
        | LEFTPAR type_name RIGHTPAR LEFTBRACE initializer_list RIGHTBRACE {}          
        | LEFTPAR type_name RIGHTPAR LEFTBRACE initializer_list COMMA RIGHTBRACE     {}                
        ;

argument_expression_list_opt: argument_expression_list {
                $$ = $1;
        }
        |  {
                $$ = 0;
        }
        ;
        
argument_expression_list: assignment_expression {
                $$ = 1;
                emit("param", $1->loc->name);
        }
        | argument_expression_list COMMA assignment_expression {
                $$ = $1 + 1;
                emit("param", $3->loc->name);
        }
        ;


unary_expression: postfix_expression  {
                $$ = $1;
        }                                     
        | INCREMENT unary_expression {
                emit("+", $2->arr->name,$2->arr->name,"1");
                $$ = $2;
        }                                       
        | DECREMENT unary_expression {
                emit("-", $2->arr->name,$2->arr->name,"1");
                $$ = $2;
        }
        | unary_operator cast_expression {
                $$ = new arraytype();
                switch($1){
                        case '&':
                                $$->arr = symboltable::gentemp(new symboltype("ptr"));
                                $$->arr->type->arrtype = $2->arr->type;
                                emit("= &", $$->arr->name, $2->arr->name);
                                break;
                        case '*':
                                $$->arrtype = "ptr";
                                $$->loc = symboltable::gentemp($2->arr->type->arrtype);
                                $$->arr = $2->arr;

                                emit("= *", $$->loc->name, $2->arr->name);
                                break;
                        case '+':
                                $$ = $2;
                                break;
                        case '-':
                                $$->arr = symboltable::gentemp(new symboltype($2->arr->type->type));
                                emit("= -", $$->arr->name, $2->arr->name);
                                break;
                        case '~':
                                $$->arr = symboltable::gentemp(new symboltype($2->arr->type->type));
                                emit("= ~", $$->arr->name, $2->arr->name);
                                break;
                        case '!':
                                $$->arr = symboltable::gentemp(new symboltype($2->arr->type->type));
                                emit("= !", $$->arr->name, $2->arr->name);
                                break;
                        default:
                                break;
                }
        }                                  
        | SIZEOF unary_expression {}
        | SIZEOF LEFTPAR type_name RIGHTPAR  {}                                        
        ;

unary_operator: PLUS { $$ = '+'; }
        | MINUS { $$ = '-'; }
        | NOT  { $$ = '!'; }
        | TILDA { $$ = '~'; }
        | AND  { $$ = '&'; }
        | MULTIPLY { $$ = '*'; }
        ;

cast_expression: unary_expression {
                $$ = $1;
        }
        | LEFTPAR type_name RIGHTPAR cast_expression  {
                $$ = new arraytype();
                $$->arr = convertToSymbol($4->arr,lastType);
        }                           
        ;

multiplicative_expression: cast_expression {
                $$ = new expression();
                if($1->arrtype == "arr"){
                        $$->loc = symboltable::gentemp($1->loc->type);
                        emit("=[]",$$->loc->name,$1->arr->name,$1->loc->name);
                }
                else if($1->arrtype == "ptr"){
                        $$->loc = $1->loc;
                }
                else{
                        $$->loc = $1->arr;
                }
        }
        | multiplicative_expression MULTIPLY cast_expression {
                if(typecheck($1->loc,$3->arr)){
                        $$ = new expression();
                        $$->loc = symboltable::gentemp(new symboltype($1->loc->type->type));
                        emit("*",$$->loc->name,$1->loc->name,$3->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
        | multiplicative_expression DIV cast_expression {
                if(typecheck($1->loc,$3->arr)){
                        $$ = new expression();
                        $$->loc = symboltable::gentemp(new symboltype($1->loc->type->type));
                        emit("/",$$->loc->name,$1->loc->name,$3->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
        | multiplicative_expression MOD cast_expression  {
                if(typecheck($1->loc,$3->arr)){
                        $$ = new expression();
                        $$->loc = symboltable::gentemp(new symboltype($1->loc->type->type));
                        emit("%",$$->loc->name,$1->loc->name,$3->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
        ;

additive_expression: multiplicative_expression {
                $$ = $1;
        }
        | additive_expression PLUS multiplicative_expression {
                if(typecheck($1->loc,$3->loc)){
                        $$ = new expression();
                        $$->loc = symboltable::gentemp(new symboltype($1->loc->type->type));
                        emit("+",$$->loc->name,$1->loc->name,$3->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
        | additive_expression MINUS multiplicative_expression {
                if(typecheck($1->loc,$3->loc)){
                        $$ = new expression();
                        $$->loc = symboltable::gentemp(new symboltype($1->loc->type->type));
                        emit("-",$$->loc->name,$1->loc->name,$3->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
        ;

shift_expression: additive_expression {
                $$ = $1;
        }
        | shift_expression LEFTSHIFT additive_expression {
                if($3->loc->type->type == "int"){
                        $$ = new expression();
                        $$->loc = symboltable::gentemp(new symboltype("int"));
                        emit("<<",$$->loc->name,$1->loc->name,$3->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
        | shift_expression RIGHTSHIFT additive_expression {
                if($3->loc->type->type == "int"){
                        $$ = new expression();
                        $$->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit(">>",$$->loc->name,$1->loc->name,$3->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
        ;

relational_expression: shift_expression {
                $$ = $1;
        }
        | relational_expression LESS shift_expression {
                if(typecheck($1->loc,$3->loc)){
                        $$ = new expression();
                        $$->type = "bool";
                        $$->truelist = makelist(nextinstr());
                        $$->falselist = makelist(nextinstr()+1);
                        emit("<", "", $1->loc->name, $3->loc->name);
                        emit("goto", "");
                }else{
                        yyerror("Type mismatch");
                }
        }
        | relational_expression GREATER shift_expression {
                if(typecheck($1->loc,$3->loc)){
                        $$ = new expression();
                        $$->type = "bool";
                        $$->truelist = makelist(nextinstr());
                        $$->falselist = makelist(nextinstr()+1);
                        emit(">", "", $1->loc->name, $3->loc->name);
                        emit("goto", "");
                }else{
                        yyerror("Type mismatch");
                }
        }
        | relational_expression LESSEQUAL shift_expression {
                if(typecheck($1->loc,$3->loc)){
                        $$ = new expression();
                        $$->type = "bool";
                        $$->truelist = makelist(nextinstr());
                        $$->falselist = makelist(nextinstr()+1);
                        emit("<=", "", $1->loc->name, $3->loc->name);
                        emit("goto", "");
                }else{
                        yyerror("Type mismatch");
                }
        }
        | relational_expression GREATEREQUAL shift_expression {
                if(typecheck($1->loc,$3->loc)){
                        $$ = new expression();
                        $$->type = "bool";
                        $$->truelist = makelist(nextinstr());
                        $$->falselist = makelist(nextinstr()+1);
                        emit(">=", "", $1->loc->name, $3->loc->name);
                        emit("goto", "");
                }else{
                        yyerror("Type mismatch");
                }
        }
        ;

equality_expression: relational_expression {
                $$ = $1;
        }
        | equality_expression DOUBLEEQUAL relational_expression {
                if(typecheck($1->loc,$3->loc)){
                        convertBool2Int($1);
                        convertBool2Int($3);
                        $$ = new expression();
                        $$->type = "bool";
                        $$->truelist = makelist(nextinstr());
                        $$->falselist = makelist(nextinstr()+1);
                        emit("==", "", $1->loc->name, $3->loc->name);
                        emit("goto", "");
                }else{
                        yyerror("Type Error");
                }
        }
        | equality_expression NOTEQUAL relational_expression {
                if(typecheck($1->loc,$3->loc)){
                        convertBool2Int($1);
                        convertBool2Int($3);
                        $$ = new expression();
                        $$->type = "bool";
                        $$->truelist = makelist(nextinstr());
                        $$->falselist = makelist(nextinstr()+1);
                        emit("!=", "", $1->loc->name, $3->loc->name);
                        emit("goto", "");
                }else{
                        yyerror("Type Error");
                }
        }

AND_expression: equality_expression {
                $$ = $1;
        }
        | AND_expression AND equality_expression {
                if(typecheck($1->loc,$3->loc)){
                        convertBool2Int($1);
                        convertBool2Int($3);
                        $$ = new expression();
                        $$->type = "not_bool";
                        $$->loc = symboltable::gentemp(new symboltype("int"));
                        emit("&", $$->loc->name, $1->loc->name, $3->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
        ;

exclusive_OR_expression: AND_expression {
                $$ = $1;
        }
        | exclusive_OR_expression XOR AND_expression {
                if(typecheck($1->loc,$3->loc)){
                        convertBool2Int($1);
                        convertBool2Int($3);
                        $$ = new expression();
                        $$->type = "not_bool";
                        $$->loc = symboltable::gentemp(new symboltype("int"));
                        emit("^", $$->loc->name, $1->loc->name, $3->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
        ;

inclusive_OR_expression: exclusive_OR_expression  {
                $$ = $1;
        }
        | inclusive_OR_expression OR exclusive_OR_expression {
                if(typecheck($1->loc,$3->loc)){
                        convertBool2Int($1);
                        convertBool2Int($3);
                        $$ = new expression();
                        $$->type = "not_bool";
                        $$->loc = symboltable::gentemp(new symboltype("int"));
                        emit("|", $$->loc->name, $1->loc->name, $3->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
        ;

logical_AND_expression: inclusive_OR_expression {
                $$ = $1;
        }
        | logical_AND_expression DOUBLEAND M inclusive_OR_expression {
                convertInt2Bool($1);
                convertInt2Bool($4);

                $$ = new expression();
                $$->type = "bool";
                backpatch($1->truelist, $3);

                $$->truelist = $4->truelist;
                $$->falselist = merge($1->falselist, $4->falselist);
        }
        ;

logical_OR_expression: logical_AND_expression {
                $$ = $1;
        }
        | logical_OR_expression DOUBLEOR M logical_AND_expression {
                convertInt2Bool($1);
                convertInt2Bool($4);

                $$ = new expression();
                 $$->type = "bool";
                backpatch($1->falselist, $3);

                $$->truelist = merge($1->truelist, $4->truelist);
                $$->falselist = $4->falselist;
        }
        ;

conditional_expression: logical_OR_expression {
                $$ = $1;
        }       
        | logical_OR_expression N QUESTIONMARK M expression N COLON  M conditional_expression  {
                $$->loc = symboltable::gentemp($5->loc->type);
                $$->loc->update($5->loc->type);
                emit("=", $$->loc->name, $9->loc->name);

                list<int> temp1 = makelist(nextinstr());
                emit("goto", "");
                backpatch($6->nextlist, nextinstr());
                emit("=", $$->loc->name, $5->loc->name);

                list<int> temp2 = makelist(nextinstr());

                temp1 = merge(temp1,temp2);

                emit("goto", "");

                backpatch($2->nextlist, nextinstr());
                convertInt2Bool($1);
                backpatch($1->truelist,$4);
                backpatch($1->falselist,$8);
                backpatch(temp1,nextinstr());
        }
        ;

M:     {
                $$ = nextinstr();
        }
        ;

N:      {
                $$ = new statement();
                $$->nextlist = makelist(nextinstr());
                emit("goto", "");
        }
        ;       
assignment_expression: conditional_expression {
                $$ = $1;
        }
        | unary_expression assignment_operator assignment_expression {
                if($1->arrtype == "arr"){
                        $3->loc = convertToSymbol($3->loc,$1->type->type);
                        emit("[]=",$1->arr->name,$1->loc->name,$3->loc->name);
                }else if($1->arrtype == "ptr"){
                        emit("*=",$1->arr->name,$3->loc->name);
                }else{
                        $3->loc = convertToSymbol($3->loc,$1->arr->type->type);
                        emit("=", $1->arr->name, $3->loc->name);
                }
                $$ = $3;
        }
        ;

assignment_operator: EQUAL  {}
        | MULTIPLYEQUAL {}
        | DIVEQUAL {}
        | MODEQUAL {}
        | PLUSEQUAL   {}
        | MINUSEQUAL  {}
        | LEFTSHIFTEQUAL  {}
        | RIGHTSHIFTEQUAL {}
        | ANDEQUAL  {}
        | XOREQUAL {}
        | OREQUAL  {}
        ;
        
expression: assignment_expression {
                $$ = $1;
        }                                         
        | expression COMMA assignment_expression {

        }
        ;
constant_expression: conditional_expression  {}
        ;
        


declaration: declaration_specifiers init_declarator_list SEMICOLON  {}
        | declaration_specifiers SEMICOLON  {}
        ;

declaration_specifiers: storage_class_specifier declaration_specifiers { }
        |storage_class_specifier { }
        | type_specifier declaration_specifiers { }
        | type_specifier { }
        | type_qualifier declaration_specifiers { }
        | type_qualifier { }
        | function_specifier declaration_specifiers { }
        | function_specifier { }
        ;

init_declarator_list: init_declarator  {}
        | init_declarator_list COMMA init_declarator  {}
        ;

init_declarator: declarator EQUAL initializer{
                if($3->value != ""){
                        $1->value = $3->value;
                }
                emit("=", $1->name, $3->name);
        }
        | declarator {
                $$ = $1;
        }                                                  
        ;

storage_class_specifier: EXTERN {}
        | STATIC {}
        | AUTO {}
        | REGISTER {}
        ;

type_specifier: VOID {
                lastType = "void";
        }
        | CHAR {
                lastType = "char";
        }
        | SHORT {}
        | INT  {
                lastType = "int";
        }
        | LONG {
                
        }
        | FLOAT  {
                lastType = "float";
        }
        | DOUBLE   {}
        | SIGNED  {}
        | UNSIGNED {}
        | BOOL  {}
        | COMPLEX {}
        | IMAGINARY {}
        ;

specifier_qualifier_list: 
        type_specifier specifier_qualifier_list_opt
        {  }
        | type_qualifier specifier_qualifier_list_opt
        {  }
        ;

specifier_qualifier_list_opt: 
        specifier_qualifier_list
        {}
        | 
        { }
        ;

type_qualifier: CONST {}
        | RESTRICT  {}
        | VOLATILE {}
        ;

function_specifier: INLINE  {}
        ;

declarator: pointer direct_declarator {
                symboltype* temp = $1;
                while(temp->arrtype != NULL){
                        temp = temp->arrtype;
                }
                temp->arrtype = $2->type;
                $$ = $2->update($1);
        }
        | direct_declarator  {}                                           
        ;

direct_declarator: 
        IDENTIFIER
        {
            $$ = $1->update(new symboltype(lastType));   // For an identifier, update the type to lastType
            currentSymbol = $$;                         // Update pointer to current symbol
        }
        | LEFTPAR declarator RIGHTPAR
        {
            $$ = $2;    // Simple assignment
        }
        | direct_declarator LEFTBRACKET type_qualifier_list assignment_expression RIGHTBRACKET
        { /* Ignored */ }
        | direct_declarator LEFTBRACKET type_qualifier_list RIGHTBRACKET
        { /* Ignored */ }
        | direct_declarator LEFTBRACKET assignment_expression RIGHTBRACKET
        {
            symboltype* t = $1->type;
            symboltype* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrtype;
            }
            if(prev == NULL) {
                int temp = atoi($3->loc->value.c_str());                // Get initial value
                symboltype* tp = new symboltype("arr", $1->type, temp); // Create that type
                $$ = $1->update(tp);     
            }
            else {
                int temp = atoi($3->loc->value.c_str());                // Get initial value
                prev->arrtype = new symboltype("arr", t, temp);         // Create that type
                $$ = $1->update($1->type);                              // Update the symbol table for that symbol
            }
        }
        | direct_declarator LEFTBRACKET RIGHTBRACKET
        {
            symboltype* t = $1->type;
            symboltype* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrtype;
            }
            if(prev == NULL) {
                symboltype* tp = new symboltype("arr", $1->type, 0);
                $$ = $1->update(tp);
            }
            else {
                prev->arrtype = new symboltype("arr", t, 0);
                $$ = $1->update($1->type);
            }
        }
        | direct_declarator LEFTBRACKET STATIC type_qualifier_list assignment_expression RIGHTBRACKET
        { /* Ignored */ }
        | direct_declarator LEFTBRACKET STATIC assignment_expression RIGHTBRACKET
        { /* Ignored */ }
        | direct_declarator LEFTBRACKET type_qualifier_list STATIC assignment_expression RIGHTBRACKET
        { /* Ignored */ }
        | direct_declarator LEFTBRACKET type_qualifier_list MULTIPLY RIGHTBRACKET
        { /* Ignored */ }
        | direct_declarator LEFTBRACKET MULTIPLY RIGHTBRACKET
        { /* Ignored */ }
        | direct_declarator LEFTPAR change_table parameter_type_list RIGHTPAR
        {
            currentST->name = $1->name;
            if($1->type->type != "void") {
                symbol* s = currentST->lookup("return");    // Lookup for return value
                s->update($1->type);
            }
            $1->nestedtable = currentST;
            currentST->parent = globalST;   // Update parent symbol table
            changeTable(globalST);          // Switch current table to point to the global symbol table
            currentSymbol = $$;             // Update current symbol
        }
        | direct_declarator LEFTPAR identifier_list RIGHTPAR
        { /* Ignored */ }
        | direct_declarator LEFTPAR change_table RIGHTPAR
        {
            currentST->name = $1->name;
            if($1->type->type != "void") {
                symbol* s = currentST->lookup("return");    // Lookup for return value
                s->update($1->type);
            }
            $1->nestedtable = currentST;
            currentST->parent = globalST;   // Update parent symbol table
            changeTable(globalST);          // Switch current table to point to the global symbol table
            currentSymbol = $$;             // Update current symbol
        }
        ;

type_qualifier_list_opt: 
        type_qualifier_list
        {  }
        | 
        {  }
        ;

pointer:  MULTIPLY type_qualifier_list_opt {
                $$ = new symboltype("ptr");
        }
        | MULTIPLY type_qualifier_list_opt pointer {
                $$ = new symboltype("ptr", $3);
        }
        ;
        
type_qualifier_list: type_qualifier {}
        | type_qualifier_list type_qualifier  {}
        ;

parameter_type_list: parameter_list  {}
        | parameter_list COMMA ELLIPSIS {}
        ;

parameter_list: parameter_declaration {}
        | parameter_list COMMA parameter_declaration  {}
        ;

parameter_declaration: declaration_specifiers declarator    {}
        | declaration_specifiers  {}
        ;

identifier_list: IDENTIFIER  {}
        | identifier_list COMMA IDENTIFIER {}
        ;

type_name: specifier_qualifier_list {}
        ;

initializer: assignment_expression {
                $$ = $1->loc;
        }                                      
        | LEFTBRACE initializer_list RIGHTBRACE {}
        | LEFTBRACE initializer_list COMMA RIGHTBRACE {}
        ;

initializer_list: initializer  
        | designation initializer  {}     
        | initializer_list COMMA initializer {}
        | initializer_list COMMA designation initializer {}
        ;

designation: designator_list EQUAL  {}
        ;

designator_list: designator {}
        | designator_list designator {}
        ;

designator: LEFTBRACKET constant_expression RIGHTBRACKET  {}
        | DOT IDENTIFIER {}
        ;


/* Statements */
statement: labeled_statement {

        }
        | compound_statement { 
                $$ = $1;
        }
        | expression_statement {
                $$ = new statement();
                $$->nextlist = $1->nextlist;
        }
        | selection_statement {
                $$ = $1;
        }
        | iteration_statement {
                $$ = $1;
        }
        | jump_statement {
                $$ = $1;
        }
        ;

loop_statement: labeled_statement{
                
        }
        | expression_statement {
                $$ = new statement();
                $$->nextlist = $1->nextlist;
        }
        | selection_statement {
                $$ = $1;
        }
        | iteration_statement {
                $$ = $1;
        }
        | jump_statement {
                $$ = $1;
        }
        ;

labeled_statement: IDENTIFIER COLON statement {
                
        }
        | CASE constant_expression COLON statement {}
        | DEFAULT COLON statement {}
        ;

compound_statement: LEFTBRACE X change_table block_item_list_opt RIGHTBRACE {
                $$ = $4;
                changeTable(currentST->parent);
        }
        ;

block_item_list_opt: 
        block_item_list
        {
            $$ = $1;    
        }
        | 
        {
            $$ = new statement();   
        }
        ;

block_item_list: block_item   {
                $$ = $1;
        }
        | block_item_list M block_item {
                $$ = $3;
                backpatch($1->nextlist,$2);
        }
        ;

block_item: declaration {
                $$ = new statement();
        }
        | statement {
                $$ = $1;
        }
        ;

expression_statement: SEMICOLON {
                $$ = new expression();
        }
        | expression SEMICOLON {
                $$ = $1;
        }
        ;

selection_statement: IF LEFTPAR expression  N RIGHTPAR M statement N  %prec THEN {
                backpatch($4->nextlist,nextinstr());

                convertInt2Bool($3);
                $$ = new statement();

                backpatch($3->truelist,$6);

                list<int> temp = merge($3->falselist,$7->nextlist);
                $$->nextlist = merge($8->nextlist,temp);
        } 
        | IF LEFTPAR expression N RIGHTPAR M statement N ELSE M statement   {
                backpatch($4->nextlist,nextinstr());

                convertInt2Bool($3);
                $$ = new statement();

                backpatch($3->truelist,$6);
                backpatch($3->falselist,$10);

                list<int> temp = merge($7->nextlist,$8->nextlist);
                $$->nextlist = merge(temp,$11->nextlist);
        }
        | SWITCH LEFTPAR expression RIGHTPAR statement  {}
        ;

iteration_statement: WHILE W LEFTPAR X change_table M expression RIGHTPAR M loop_statement {
                $$ = new statement();
                convertInt2Bool($7);

                backpatch($10->nextlist,$6);

                backpatch($7->truelist,$9);

                $$->nextlist = $7->falselist;

                emit("goto", int_to_string($6));

                blockName = "";
                changeTable(currentST->parent);
        }
        | WHILE W LEFTPAR X change_table M expression RIGHTPAR LEFTBRACE M block_item_list_opt RIGHTBRACE {
                $$ = new statement();
                convertInt2Bool($7);

                backpatch($11->nextlist,$6);

                backpatch($7->truelist,$10);

                $$->nextlist = $7->falselist;

                emit("goto", int_to_string($6));

                blockName = "";
                changeTable(currentST->parent);
        }

        | DO D M loop_statement M WHILE LEFTPAR expression RIGHTPAR SEMICOLON {
                $$ = new statement();
                convertInt2Bool($8);

                backpatch($8->truelist,$3);

                backpatch($4->nextlist,$5);

                $$->nextlist = $8->falselist;

                blockName = "";

        }
        | DO D LEFTBRACE M block_item_list_opt RIGHTBRACE M WHILE LEFTPAR expression RIGHTPAR SEMICOLON {
                $$ = new statement();
                convertInt2Bool($10);

                backpatch($10->truelist,$4);

                backpatch($5->nextlist,$7);

                $$->nextlist = $10->falselist;

                blockName = "";
        }
        | FOR F LEFTPAR X change_table declaration M expression_statement M expression N RIGHTPAR M loop_statement {
                $$ = new statement();
                convertInt2Bool($8);

                backpatch($8->truelist,$13);

                backpatch($11->nextlist,$7);
                backpatch($14->nextlist,$9);

                emit("goto", int_to_string($9));

                $$->nextlist = $8->falselist;


                blockName = "";
                changeTable(currentST->parent);
        }
        | FOR F LEFTPAR X change_table expression_statement M expression_statement M expression N RIGHTPAR M loop_statement {
                $$ = new statement();
                convertInt2Bool($8);

                backpatch($8->truelist,$13);

                backpatch($11->nextlist,$7);
                backpatch($14->nextlist,$9);

                emit("goto", int_to_string($9));

                $$->nextlist = $8->falselist;

                blockName = "";
                changeTable(currentST->parent);
        }
        | FOR F LEFTPAR X change_table declaration M expression_statement M expression N RIGHTPAR M LEFTBRACE block_item_list_opt RIGHTBRACE {
                $$ = new statement();
                convertInt2Bool($8);

                backpatch($8->truelist,$13);

                backpatch($11->nextlist,$7);
                backpatch($15->nextlist,$9);

                emit("goto", int_to_string($9));

                $$->nextlist = $8->falselist;

                blockName = "";
                changeTable(currentST->parent);
        }
        | FOR F LEFTPAR X change_table expression_statement M expression_statement M expression N RIGHTPAR M LEFTBRACE block_item_list_opt RIGHTBRACE {
                $$ = new statement();
                convertInt2Bool($8);

                backpatch($8->truelist,$13);

                backpatch($11->nextlist,$7);
                backpatch($15->nextlist,$9);

                emit("goto", int_to_string($9));

                $$->nextlist = $8->falselist;

                blockName = "";
                changeTable(currentST->parent);
        }
        ;

F :  {
        blockName = "FOR";
};

W :  {
        blockName = "WHILE";
};

D :  {
        blockName = "DO_WHILE";
};

X:  {
        string newST = currentST->name + "." + blockName + "$" + int_to_string(STCount);
        STCount++;
        symbol *temp = currentST->lookup(newST);
        temp->nestedtable = new symboltable(newST);
        temp->name = newST;
        temp->nestedtable->parent = currentST;
        temp->type = new symboltype("block");
        currentSymbol = temp;
}
;

change_table :  {
        if(currentSymbol->nestedtable != NULL){
                changeTable(currentSymbol->nestedtable);
                emit("label",currentST->name);
        }else{
                changeTable(new symboltable(""));
        }
}



jump_statement: GOTO IDENTIFIER SEMICOLON {}
        | CONTINUE SEMICOLON  {
                $$ = new statement();
        }
        | BREAK SEMICOLON {
                $$ = new statement();
        }
        | RETURN SEMICOLON  {
                $$ = new statement();
                emit("return", "");
        }
        | RETURN expression SEMICOLON {
                $$ = new statement();
                emit("return", $2->loc->name);
        }
        ;


/* External Definitions */

translation_unit:  translation_unit external_declaration  {}
        | external_declaration {}
        ;

external_declaration: function_definition  {}
        | declaration {}
        ;

function_definition: declaration_specifiers declarator declaration_list_opt change_table LEFTBRACE block_item_list_opt RIGHTBRACE {
                currentST->parent = globalST;
                STCount = 0;
                changeTable(globalST);
        }
        ;


declaration_list_opt: 
        declaration_list
        {  }
        | 
        {  }
        ;
declaration_list: declaration  {}
        | declaration_list declaration   
        ;
%%


void yyerror(string s) {
    /*
        This function prints any error encountered while parsing
    */
    cout << "Error occurred: " << s << endl;
    cout << "Line no.: " << yylineno << endl;
    cout << "Unable to parse: " << yytext << endl; 
}
