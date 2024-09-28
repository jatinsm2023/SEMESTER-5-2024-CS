%{
    #define YYDEBUG 1
    extern int yydebug;
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

        int yylex();
        void yyerror();


    typedef struct _tree_node{
        char *name;
        union{
            int value;
            float fvalue;
            char *svalue;
        };
        struct _tree_node* child[10];
        int child_count;
    }tree_node;

    tree_node* create_leaf_node(char* name,int value,float fvalue,char* svalue);
    tree_node* create_int_node(char* name,tree_node* child[],int child_count);
   void printtree(tree_node* node,int level);
%}

%union{
    int ival;
    float fval;
    char *sval;
    tree_node* node;
}

%start translation_unit

%token<sval> IDENTIFIER
%token<fval> FLO_CONSTANT
%token<ival> INT_CONSTANT
%token<sval> STRING_LITERAL
%token SIZEOF
%type <node>  primary_expression postfix_expression argument_expression_list unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression expression constant_expression
%type <node> unary_operator assignment_operator expressionopt
%type <node>  declaration declaration_specifiers init_declarator_list init_declarator storage_class_specifier type_specifier specifier_qualifier_list type_qualifier function_specifier declarator direct_declarator pointer type_qualifier_list parameter_type_list parameter_list parameter_declaration identifier_list type_name initializer initializer_list designation designator_list designator
%type <node>   statement labeled_statement compound_statement expression_statement selection_statement iteration_statement jump_statement block_item_list block_item
%type <node>  translation_unit declaration_list external_declaration function_definition
%token EXTERN STATIC AUTO REGISTER 
%token VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token CONST RESTRICT VOLATILE INLINE ELLIPSIS
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN 
%token ARROW INCREMENT DECREMENT LEFTSHIFT RIGHTSHIFT LESSEQUAL GREATEREQUAL DOUBLEEQUAL NOTEQUAL  DOUBLEAND DOUBLEOR PLUSEQUAL MINUSEQUAL MULTIPLYEQUAL DIVEQUAL MODEQUAL LEFTSHIFTEQUAL RIGHTSHIFTEQUAL ANDEQUAL OREQUAL XOREQUAL
%token PLUS MINUS MULTIPLY DIV MOD TILDA NOT AND EQUAL SEMICOLON COMMA DOT LESS GREATER OR XOR
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%      


primary_expression:IDENTIFIER                                               {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,$1)};$$=create_int_node("primary_expression",arr,1);}
        | FLO_CONSTANT                                                      {tree_node* arr[] = {create_leaf_node("FLO_CONSTANT",-1,$1,NULL)};$$=create_int_node("primary_expression",arr,1);}
        | INT_CONSTANT                                                      {tree_node* arr[] = {create_leaf_node("INT_CONSTANT",$1,-1,NULL)};$$=create_int_node("primary_expression",arr,1);}
        | STRING_LITERAL                                                    {tree_node* arr[] = {create_leaf_node("STR_CONST",-1,-1,$1)};$$=create_int_node("primary_expression",arr,1);}
        | '(' expression ')'                                                {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")")};$$=create_int_node("primary_expression",arr,3);}
        ;

postfix_expression: primary_expression                                      {tree_node* arr[] = {$1};$$=create_int_node("postfix_expression",arr,1);}
        | postfix_expression '[' expression ']'                             {tree_node* arr[]= {$1,create_leaf_node("[",-1,-1,"["),$3,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("postfix_expression",arr,4);}
        | postfix_expression '(' argument_expression_list ')'               {tree_node* arr[] = {$1,create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")")};$$=create_int_node("postfix_expression",arr,4);}
        | postfix_expression DOT IDENTIFIER                                 {tree_node* arr[] = {$1,create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,$3)};$$=create_int_node("postfix_expression",arr,3);}
        | postfix_expression ARROW IDENTIFIER                             {tree_node* arr[] = {$1,create_leaf_node("->",1,-1,"->"),create_leaf_node("IDENTIFIER",-1,-1,$3)};$$=create_int_node("postfix_expression",arr,3);}
        | postfix_expression INCREMENT                                      {tree_node* arr[] = {$1,create_leaf_node("INCREMENT",-1,-1,"++")};$$=create_int_node("postfix_expression",arr,2);}
        | postfix_expression DECREMENT                                    {tree_node* arr[] = {$1,create_leaf_node("DECREMENT",-1,-1,"-")};$$=create_int_node("postfix_expression",arr,2);}
        | '(' type_name ')' '{' initializer_list '}'                        {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),$5,create_leaf_node("}",-1,-1,"}")};$$=create_int_node("postfix_expression",arr,6);}
        | '(' type_name ')' '{' initializer_list COMMA '}'                    {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),$5,create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};$$=create_int_node("postfix_expression",arr,6);}
        ;

argument_expression_list: assignment_expression                             {tree_node* arr[] = {$1};$$=create_int_node("argument_expression_list",arr,1);}
        | argument_expression_list COMMA assignment_expression                {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),$3};$$=create_int_node("argument_expression_list",arr,3);}
        ;


unary_expression: postfix_expression                                        {tree_node* arr[] = {$1};$$=create_int_node("unary_expression",arr,1);}
        | INCREMENT unary_expression                                        {tree_node* arr[] = {create_leaf_node("INCREMENT",-1,-1,"++"),$2};$$=create_int_node("unary_expression",arr,3);}
        | DECREMENT unary_expression                                      {tree_node* arr[] = {create_leaf_node("DECREMENT",-1,-1,"--"),$2};$$=create_int_node("unary_expression",arr,3);}
        | unary_operator cast_expression                                    {tree_node* arr[] = {$1,$2};$$=create_int_node("unary_expression",arr,2);}
        | SIZEOF unary_expression                                           {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),$2};$$=create_int_node("unary_expression",arr,2);}
        | SIZEOF '(' type_name ')'                                          {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")")};$$=create_int_node("unary_expression",arr,4);}
        ;

unary_operator: PLUS                                                         {tree_node* arr[]= {create_leaf_node("+",-1,-1,"+")};$$=create_int_node("unary_operator",arr,1);}
        | MINUS                                                            {tree_node* arr[]= {create_leaf_node("-",-1,-1,"-")};$$=create_int_node("unary_operator",arr,1);}
        | NOT                                                               {tree_node* arr[]= {create_leaf_node("!",-1,-1,"!")};$$=create_int_node("unary_operator",arr,1);}
        | TILDA                                                             {tree_node* arr[]= {create_leaf_node("~",-1,-1,"~")};$$=create_int_node("unary_operator",arr,1);}
        | AND                                                               {tree_node* arr[]= {create_leaf_node("&",-1,-1,"&")};$$=create_int_node("unary_operator",arr,1);}
        | MULTIPLY                                                          {tree_node* arr[]= {create_leaf_node("*",-1,-1,"*")};$$=create_int_node("unary_operator",arr,1);}
        ;

cast_expression: unary_expression                                           {tree_node* arr[] = {$1};$$=create_int_node("cast_expression",arr,1);}
        | '(' type_name ')' cast_expression                                 {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")"),$4};$$=create_int_node("cast_expression",arr,4);}
        ;

multiplicative_expression: cast_expression                                  {tree_node* arr[] = {$1};$$=create_int_node("multiplicative_expression",arr,1);}
        | multiplicative_expression MULTIPLY cast_expression                     {tree_node* arr[] = {$1,create_leaf_node("*",-1,-1,"*"),$3};$$=create_int_node("multiplicative_expression",arr,3);}
        | multiplicative_expression DIV cast_expression                     {tree_node* arr[] = {$1,create_leaf_node("/",-1,-1,"/"),$3};$$=create_int_node("multiplicative_expression",arr,3);}
        | multiplicative_expression MOD cast_expression                     {tree_node* arr[] = {$1,create_leaf_node("%",-1,-1,"%"),$3};$$=create_int_node("multiplicative_expression",arr,3);}
        ;

additive_expression: multiplicative_expression                              {tree_node* arr[] = {$1};$$=create_int_node("additive_expression",arr,1);}
        | additive_expression PLUS multiplicative_expression                 {tree_node* arr[] = {$1,create_leaf_node("+",-1,-1,"+"),$3};$$=create_int_node("additive_expression",arr,3);}
        | additive_expression MINUS multiplicative_expression                 {tree_node* arr[] = {$1,create_leaf_node("-",-1,-1,"-"),$3};$$=create_int_node("additive_expression",arr,3);}
        ;

shift_expression: additive_expression                                       {tree_node* arr[] = {$1};$$=create_int_node("shift_expression",arr,1);}
        | shift_expression LEFTSHIFT additive_expression                      {tree_node* arr[] = {$1,create_leaf_node("<<",-1,-1,"<<"),$3};$$=create_int_node("shift_expression",arr,3);}
        | shift_expression RIGHTSHIFT additive_expression                      {tree_node* arr[] = {$1,create_leaf_node(">>",-1,-1,">>"),$3};$$=create_int_node("shift_expression",arr,3);}
        ;

relational_expression: shift_expression                                     {tree_node* arr[] = {$1};$$=create_int_node("relational_expression",arr,1);}
        | relational_expression LESS shift_expression                        {tree_node* arr[] = {$1,create_leaf_node("<",-1,-1,"<"),$3};$$=create_int_node("relational_expression",arr,3);}
        | relational_expression GREATER shift_expression                        {tree_node* arr[] = {$1,create_leaf_node(">",-1,-1,">"),$3};$$=create_int_node("relational_expression",arr,3);}
        | relational_expression LESSEQUAL shift_expression                    {tree_node* arr[] = {$1,create_leaf_node("<=",-1,-1,"<="),$3};$$=create_int_node("relational_expression",arr,3);}
        | relational_expression GREATEREQUAL shift_expression                    {tree_node* arr[] = {$1,create_leaf_node(">=",-1,-1,">="),$3};$$=create_int_node("relational_expression",arr,3);}
        ;

equality_expression: relational_expression                                  {tree_node* arr[] = {$1};$$=create_int_node("equality_expression",arr,1);}
        | equality_expression DOUBLEEQUAL relational_expression                 {tree_node* arr[] = {$1,create_leaf_node("==",-1,-1,"=="),$3};$$=create_int_node("equality_expression",arr,3);}
        | equality_expression NOTEQUAL relational_expression                 {tree_node* arr[] = {$1,create_leaf_node("!=",-1,-1,"!="),$3};$$=create_int_node("equality_expression",arr,3);}

AND_expression: equality_expression                                         {tree_node* arr[] = {$1};$$=create_int_node("AND_expression",arr,1);}
        | AND_expression AND equality_expression                            {tree_node* arr[] = {$1,create_leaf_node("&",-1,-1,"&"),$3};$$=create_int_node("AND_expression",arr,3);}
        ;

exclusive_OR_expression: AND_expression                                     {tree_node* arr[] = {$1};$$=create_int_node("exclusive_OR_expression",arr,1);}
        | exclusive_OR_expression XOR AND_expression                        {tree_node* arr[] = {$1,create_leaf_node("^",-1,-1,"^"),$3};$$=create_int_node("exclusive_OR_expression",arr,3);}
        ;

inclusive_OR_expression: exclusive_OR_expression                            {tree_node* arr[] = {$1};$$=create_int_node("inclusive_OR_expression",arr,1);}
        | inclusive_OR_expression OR exclusive_OR_expression               {tree_node* arr[] = {$1,create_leaf_node("|",-1,-1,"|"),$3};$$=create_int_node("inclusive_OR_expression",arr,3);}
        ;

logical_AND_expression: inclusive_OR_expression                             {tree_node* arr[] = {$1};$$=create_int_node("logical_AND_expression",arr,1);}
        | logical_AND_expression DOUBLEAND inclusive_OR_expression            {tree_node* arr[] = {$1,create_leaf_node("&&",-1,-1,"&&"),$3};$$=create_int_node("logical_AND_expression",arr,3);}
        ;

logical_OR_expression: logical_AND_expression                               {tree_node* arr[] = {$1};$$=create_int_node("logical_OR_expression",arr,1);}
        | logical_OR_expression DOUBLEOR logical_AND_expression              {tree_node* arr[] = {$1,create_leaf_node("||",-1,-1,"||"),$3};$$=create_int_node("logical_OR_expression",arr,3);}
        ;

conditional_expression: logical_OR_expression                               {tree_node* arr[] = {$1};$$=create_int_node("conditional_expression",arr,1);}
        | logical_OR_expression '?' expression ':' conditional_expression   {tree_node* arr[] = {$1,create_leaf_node("?",-1,-1,"?"),$3,create_leaf_node(":",-1,-1,":"),$5};$$=create_int_node("conditional_expression",arr,5);}
        ;

assignment_expression: conditional_expression                               {tree_node* arr[] = {$1};$$=create_int_node("assignment_expression",arr,1);}
        | unary_expression assignment_operator assignment_expression        {tree_node* arr[] = {$1,$2,$3};$$=create_int_node("assignment_expression",arr,3);}
        ;

assignment_operator: EQUAL                                                    {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"=")};$$=create_int_node("assignment_operator",arr,1);}
        | MULTIPLYEQUAL                                                           {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"*=")};$$=create_int_node("assignment_operator",arr,1);}
        | DIVEQUAL                                                           {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"/=")};$$=create_int_node("assignment_operator",arr,1);}
        | MODEQUAL                                                           {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"%=")};$$=create_int_node("assignment_operator",arr,1);}
        | PLUSEQUAL                                                           {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"+=")};$$=create_int_node("assignment_operator",arr,1);}
        | MINUSEQUAL                                                           {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"-=")};$$=create_int_node("assignment_operator",arr,1);}
        | LEFTSHIFTEQUAL                                                       {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"<<=")};$$=create_int_node("assignment_operator",arr,1);}
        | RIGHTSHIFTEQUAL                                                       {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,">>=")};$$=create_int_node("assignment_operator",arr,1);}
        | ANDEQUAL                                                           {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"&=")};$$=create_int_node("assignment_operator",arr,1);}
        | XOREQUAL                                                           {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"^=")};$$=create_int_node("assignment_operator",arr,1);}
        | OREQUAL                                                           {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"|=")};$$=create_int_node("assignment_operator",arr,1);}
        ;
        
expression: assignment_expression                                           {tree_node* arr[] = {$1};$$=create_int_node("expression",arr,1); printtree($$,0);}
        | expression COMMA assignment_expression                              {tree_node* arr[] = {$1,create_leaf_node("COMMA",1,-1,","),$3};$$=create_int_node("expression",arr,3);}
        ;
constant_expression: conditional_expression                                 {tree_node* arr[] = {$1};$$=create_int_node("constant_expression",arr,1);} 
        ;
        


declaration: declaration_specifiers init_declarator_list SEMICOLON                {tree_node* arr[] = {$1,$2,create_leaf_node(";",-1,-1,";")};$$=create_int_node("declaration",arr,3);}
        | declaration_specifiers SEMICOLON                                       {tree_node* arr[] = {$1,create_leaf_node(";",-1,-1,";")};$$=create_int_node("declaration",arr,2);}
        ;

declaration_specifiers: storage_class_specifier                         {tree_node* arr[] = {$1};$$=create_int_node("declaration_specifiers",arr,1);}
        | storage_class_specifier declaration_specifiers                   {tree_node* arr[] = {$1,$2};$$=create_int_node("declaration_specifiers",arr,2);}
        | type_specifier                                                {tree_node* arr[] = {$1};$$=create_int_node("declaration_specifiers",arr,1);}
        | type_specifier declaration_specifiers                         {tree_node* arr[] = {$1,$2};$$=create_int_node("declaration_specifiers",arr,2);}
        | type_qualifier                                                {tree_node* arr[] = {$1};$$=create_int_node("declaration_specifiers",arr,1);}
        | type_qualifier declaration_specifiers                         {tree_node* arr[] = {$1,$2};$$=create_int_node("declaration_specifiers",arr,2);}
        | function_specifier                                            {tree_node* arr[] = {$1};$$=create_int_node("declaration_specifiers",arr,1);}
        | function_specifier declaration_specifiers                     {tree_node* arr[] = {$1,$2};$$=create_int_node("declaration_specifiers",arr,2);}
        ;

init_declarator_list: init_declarator                                    {tree_node* arr[] = {$1};$$=create_int_node("init_declarator_list",arr,1);}
        | init_declarator_list COMMA init_declarator                        {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),$3};$$=create_int_node("init_declarator_list",arr,3);}
        ;

init_declarator: declarator EQUAL initializer                                {tree_node* arr[] = {$1,create_leaf_node("=",1,-1,"="),$3};$$=create_int_node("init_declarator",arr,3);}
        | declarator                                                     {tree_node* arr[] = {$1};$$=create_int_node("init_declarator",arr,1);}
        ;

storage_class_specifier: EXTERN                                                         {tree_node* arr[] = {create_leaf_node("EXTERN",-1,-1,"EXTERN")};$$=create_int_node("storage_class_specifier",arr,1);}
        | STATIC                                                         {tree_node* arr[] = {create_leaf_node("STATIC",-1,-1,"STATIC")};$$=create_int_node("storage_class_specifier",arr,1);}
        | AUTO                                                           {tree_node* arr[] = {create_leaf_node("AUTO",-1,-1,"AUTO")};$$=create_int_node("storage_class_specifier",arr,1);}
        | REGISTER                                                       {tree_node* arr[] = {create_leaf_node("REGISTER",-1,-1,"REGISTER")};$$=create_int_node("storage_class_specifier",arr,1);}
        ;

type_specifier: VOID                                                             {tree_node* arr[] = {create_leaf_node("VOID",-1,-1,"VOID")};$$=create_int_node("type_specifier",arr,1);}
        | CHAR                                                             {tree_node* arr[] = {create_leaf_node("CHAR",-1,-1,"CHAR")};$$=create_int_node("type_specifier",arr,1);}
        | SHORT                                                            {tree_node* arr[] = {create_leaf_node("SHORT",-1,-1,"SHORT")};$$=create_int_node("type_specifier",arr,1);}
        | INT                                                              {tree_node* arr[] = {create_leaf_node("INT",-1,-1,"INT")};$$=create_int_node("type_specifier",arr,1);}
        | LONG                                                             {tree_node* arr[] = {create_leaf_node("LONG",-1,-1,"LONG")};$$=create_int_node("type_specifier",arr,1);}
        | FLOAT                                                            {tree_node* arr[] = {create_leaf_node("FLOAT",-1,-1,"FLOAT")};$$=create_int_node("type_specifier",arr,1);}
        | DOUBLE                                                           {tree_node* arr[] = {create_leaf_node("DOUBLE",-1,-1,"DOUBLE")};$$=create_int_node("type_specifier",arr,1);}
        | SIGNED                                                           {tree_node* arr[] = {create_leaf_node("SIGNED",-1,-1,"SIGNED")};$$=create_int_node("type_specifier",arr,1);}
        | UNSIGNED                                                         {tree_node* arr[] = {create_leaf_node("UNSIGNED",-1,-1,"UNSIGNED")};$$=create_int_node("type_specifier",arr,1);}
        | BOOL                                                             {tree_node* arr[] = {create_leaf_node("BOOL",-1,-1,"BOOL")};$$=create_int_node("type_specifier",arr,1);}
        | COMPLEX                                                          {tree_node* arr[] = {create_leaf_node("COMPLEX",-1,-1,"COMPLEX")};$$=create_int_node("type_specifier",arr,1);}
        | IMAGINARY                                                        {tree_node* arr[] = {create_leaf_node("IMAGINARY",-1,-1,"IMAGINARY")};$$=create_int_node("type_specifier",arr,1);}
        ;

specifier_qualifier_list: type_specifier                                    {tree_node* arr[] = {$1};$$=create_int_node("specifier_qualifier_list",arr,1);}
        | type_specifier specifier_qualifier_list                           {tree_node* arr[] = {$1,$2};$$=create_int_node("specifier_qualifier_list",arr,2);}
        | type_qualifier                                                  {tree_node* arr[] = {$1};$$=create_int_node("specifier_qualifier_list",arr,1);}
        | type_qualifier specifier_qualifier_list                           {tree_node* arr[] = {$1,$2};$$=create_int_node("specifier_qualifier_list",arr,2);}
        ;

type_qualifier: CONST                                                         {tree_node* arr[] = {create_leaf_node("CONST",-1,-1,"CONST")};$$=create_int_node("type_qualifier",arr,1);}
        | RESTRICT                                                       {tree_node* arr[] = {create_leaf_node("RESTRICT",-1,-1,"RESTRICT")};$$=create_int_node("type_qualifier",arr,1);}
        | VOLATILE                                                       {tree_node* arr[] = {create_leaf_node("VOLATILE",-1,-1,"VOLATILE")};$$=create_int_node("type_qualifier",arr,1);}
        ;

function_specifier: INLINE                                                     {tree_node* arr[] = {create_leaf_node("INLINE",-1,-1,"INLINE")};$$=create_int_node("function_specifier",arr,1);}
        ;

declarator: pointer direct_declarator                                        {tree_node* arr[] = {$1,$2};$$=create_int_node("declarator",arr,2);}
        | direct_declarator                                                {tree_node* arr[] = {$1};$$=create_int_node("declarator",arr,1);}
        ;

direct_declarator: IDENTIFIER                                                {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,$1)};$$=create_int_node("direct_declarator",arr,1);}
        | '(' declarator ')'                                                {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")")};$$=create_int_node("direct_declarator",arr,3);}
        | direct_declarator '[' ']'                                         {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,3);}
        | direct_declarator '[' type_qualifier_list ']'                     {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),$3,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,4);}
        | direct_declarator '[' assignment_expression ']'                   {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),$3,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,4);}
        | direct_declarator '[' type_qualifier_list assignment_expression ']' {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),$3,$4,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,5);}
        | direct_declarator '[' STATIC type_qualifier_list assignment_expression ']' {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),create_leaf_node("STATIC",-1,-1,"STATIC"),$4,$5,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,6);}
        | direct_declarator '[' STATIC assignment_expression ']'           {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),create_leaf_node("STATIC",-1,-1,"STATIC"),$4,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,5);}
        | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']' {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),$3,create_leaf_node("STATIC",-1,-1,"STATIC"),$5,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,6);}
        | direct_declarator '[' '*' ']'                                     {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),create_leaf_node("*",-1,-1,"*"),create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,4);}
        | direct_declarator '[' type_qualifier_list '*' ']'                 {tree_node* arr[] = {$1,create_leaf_node("[",-1,-1,"["),$3,create_leaf_node("*",-1,-1,"*"),create_leaf_node("]",-1,-1,"]")};$$=create_int_node("direct_declarator",arr,5);}
        | direct_declarator '(' parameter_type_list ')'                     {tree_node* arr[] = {$1,create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")")};$$=create_int_node("direct_declarator",arr,4);}
        | direct_declarator '(' identifier_list ')'                         {tree_node* arr[] = {$1,create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")")};$$=create_int_node("direct_declarator",arr,4);}
        | direct_declarator '(' ')'                                         {tree_node* arr[] = {$1,create_leaf_node("(",1,-1,"("),create_leaf_node(")",-1,-1,")")};$$=create_int_node("direct_declarator",arr,3);}
        ;

pointer: '*'                                                             {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*")};$$=create_int_node("pointer",arr,1);}
        | '*' type_qualifier_list                                         {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),$2};$$=create_int_node("pointer",arr,2);}
        | '*' pointer                                                     {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),$2};$$=create_int_node("pointer",arr,2);}
        | '*' type_qualifier_list pointer                                 {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),$2,$3};$$=create_int_node("pointer",arr,3);}
        ;
        
type_qualifier_list: type_qualifier                                        {tree_node* arr[] = {$1};$$=create_int_node("type_qualifier_list",arr,1);}
        | type_qualifier_list type_qualifier                               {tree_node* arr[] = {$1,$2};$$=create_int_node("type_qualifier_list",arr,2);}
        ;

parameter_type_list: parameter_list                                        {tree_node* arr[] = {$1};$$=create_int_node("parameter_type_list",arr,1);}
        | parameter_list COMMA ELLIPSIS                                      {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),create_leaf_node("ELLIPSIS",-1,-1,"ELLIPSIS")};$$=create_int_node("parameter_type_list",arr,3);}
        ;

parameter_list: parameter_declaration                                      {tree_node* arr[] = {$1};$$=create_int_node("parameter_list",arr,1);}
        | parameter_list COMMA parameter_declaration                          {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),$3};$$=create_int_node("parameter_list",arr,3);}
        ;

parameter_declaration: declaration_specifiers declarator                   {tree_node* arr[] = {$1,$2};$$=create_int_node("parameter_declaration",arr,2);}
        | declaration_specifiers                                           {tree_node* arr[] = {$1};$$=create_int_node("parameter_declaration",arr,1);}
        ;

identifier_list: IDENTIFIER                                                {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,$1)};$$=create_int_node("identifier_list",arr,1);}
        | identifier_list COMMA IDENTIFIER                                    {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),create_leaf_node("IDENTIFIER",-1,-1,$3)};$$=create_int_node("identifier_list",arr,3);}
        ;

type_name: specifier_qualifier_list                                        {tree_node* arr[] = {$1};$$=create_int_node("type_name",arr,1);}
        ;

initializer: assignment_expression                                        {tree_node* arr[] = {$1};$$=create_int_node("initializer",arr,1);}
        | '{' initializer_list '}'                                         {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),$2,create_leaf_node("}",-1,-1,"}")};$$=create_int_node("initializer",arr,3);}
        | '{' initializer_list COMMA '}'                                     {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),$2,create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};$$=create_int_node("initializer",arr,4);}
        ;

initializer_list: initializer                                              {tree_node* arr[] = {$1};$$=create_int_node("initializer_list",arr,1);}
        | designation initializer                                          {tree_node* arr[] = {$1,$2};$$=create_int_node("initializer_list",arr,2);}
        | initializer_list COMMA initializer                                  {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),$3};$$=create_int_node("initializer_list",arr,3);}
        | initializer_list COMMA designation initializer                      {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),$3,$4};$$=create_int_node("initializer_list",arr,4);}
        ;

designation: designator_list EQUAL                                          {tree_node* arr[] = {$1,create_leaf_node("=",1,-1,"=")};$$=create_int_node("designation",arr,2);}
        ;

designator_list: designator                                               {tree_node* arr[] = {$1};$$=create_int_node("designator_list",arr,1);}
        | designator_list designator                                       {tree_node* arr[] = {$1,$2};$$=create_int_node("designator_list",arr,2);}
        ;

designator: '[' constant_expression ']'                                    {tree_node* arr[] = {create_leaf_node("[",-1,-1,"["),$2,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("designator",arr,3);}
        | DOT IDENTIFIER                                                    {tree_node* arr[] = {create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,$2)};$$=create_int_node("designator",arr,2);}
        ;


/* Statements */
statement: labeled_statement                                               {tree_node* arr[] = {$1};$$=create_int_node("statement",arr,1);}
        | compound_statement                                              {tree_node* arr[] = {$1};$$=create_int_node("statement",arr,1);}
        | expression_statement                                            {tree_node* arr[] = {$1};$$=create_int_node("statement",arr,1);}
        | selection_statement                                             {tree_node* arr[] = {$1};$$=create_int_node("statement",arr,1);}
        | iteration_statement                                             {tree_node* arr[] = {$1};$$=create_int_node("statement",arr,1);}
        | jump_statement                                                  {tree_node* arr[] = {$1};$$=create_int_node("statement",arr,1);}
        ;

labeled_statement: IDENTIFIER ':' statement                                {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,$1),create_leaf_node(":",-1,-1,":"),$3};$$=create_int_node("labeled_statement",arr,3);}
        | CASE constant_expression ':' statement                          {tree_node* arr[] = {create_leaf_node("CASE",-1,-1,"CASE"),$2,create_leaf_node(":",-1,-1,":"),$4};$$=create_int_node("labeled_statement",arr,4);}
        | DEFAULT ':' statement                                          {tree_node* arr[] = {create_leaf_node("DEFAULT",-1,-1,"DEFAULT"),create_leaf_node(":",-1,-1,":"),$3};$$=create_int_node("labeled_statement",arr,3);}
        ;

compound_statement: '{' '}'                                               {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),create_leaf_node("}",-1,-1,"}")};$$=create_int_node("compound_statement",arr,2);}
        | '{' block_item_list '}'                                        {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),$2,create_leaf_node("}",-1,-1,"}")};$$=create_int_node("compound_statement",arr,3);}
        ;

block_item_list: block_item                                               {tree_node* arr[] = {$1};$$=create_int_node("block_item_list",arr,1);}
        | block_item_list block_item                                      {tree_node* arr[] = {$1,$2};$$=create_int_node("block_item_list",arr,2);}
        ;

block_item: declaration                                                   {tree_node* arr[] = {$1};$$=create_int_node("block_item",arr,1);}
        | statement                                                     {tree_node* arr[] = {$1};$$=create_int_node("block_item",arr,1);}
        ;

expression_statement: SEMICOLON                                                 {tree_node* arr[] = {create_leaf_node(";",-1,-1,";")};$$=create_int_node("expression_statement",arr,1);}
        | expression SEMICOLON                                                 {tree_node* arr[] = {$1,create_leaf_node(";",-1,-1,";")};$$=create_int_node("expression_statement",arr,2);}
        ;

selection_statement: IF '(' expression ')' statement   %prec LOWER_THAN_ELSE                  {tree_node* arr[] = {create_leaf_node("IF",-1,-1,"IF"),create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")"),$5};$$=create_int_node("selection_statement",arr,5);}
        | IF '(' expression ')' statement ELSE statement  %prec ELSE               {tree_node* arr[] = {create_leaf_node("IF",-1,-1,"IF"),create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")"),$5,create_leaf_node("ELSE",-1,-1,"ELSE"),$7};$$=create_int_node("selection_statement",arr,7);}
        | SWITCH '(' expression ')' statement                            {tree_node* arr[] = {create_leaf_node("SWITCH",-1,-1,"SWITCH"),create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")"),$5};$$=create_int_node("selection_statement",arr,5);}
        ;

iteration_statement: WHILE '(' expression ')' statement                    {tree_node* arr[] = {create_leaf_node("WHILE",-1,-1,"WHILE"),create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")"),$5};$$=create_int_node("iteration_statement",arr,5);}
        | DO statement WHILE '(' expression ')' SEMICOLON                       {tree_node* arr[] = {create_leaf_node("DO",-1,-1,"DO"),$2,create_leaf_node("WHILE",-1,-1,"WHILE"),create_leaf_node("(",1,-1,"("),$5,create_leaf_node(")",-1,-1,")"),create_leaf_node(";",-1,-1,";")};$$=create_int_node("iteration_statement",arr,7);}
        | FOR '(' expressionopt SEMICOLON expressionopt SEMICOLON expressionopt ')' statement {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),$3,create_leaf_node(";",-1,-1,";"),$5,create_leaf_node(";",-1,-1,";"),$7,create_leaf_node(")",-1,-1,")"),$9};$$=create_int_node("iteration_statement",arr,9);}
        | FOR '(' declaration expressionopt SEMICOLON expressionopt ')' statement {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),$3,$4,create_leaf_node(";",-1,-1,";"),$6,create_leaf_node(")",-1,-1,")"),$8};$$=create_int_node("iteration_statement",arr,8);}
        ;

expressionopt:                                                              {tree_node* arr[] = {create_leaf_node("EMPTY",-1,-1,"EMPTY")};$$=create_int_node("expressionopt",arr,1);}
        | expression                                                     {tree_node* arr[] = {$1};$$=create_int_node("expressionopt",arr,1);}
        ;

jump_statement: GOTO IDENTIFIER SEMICOLON                                       {tree_node* arr[] = {create_leaf_node("GOTO",-1,-1,"GOTO"),create_leaf_node("IDENTIFIER",-1,-1,$2),create_leaf_node(";",-1,-1,";")};$$=create_int_node("jump_statement",arr,3);}
        | CONTINUE SEMICOLON                                                   {tree_node* arr[] = {create_leaf_node("CONTINUE",-1,-1,"CONTINUE"),create_leaf_node(";",-1,-1,";")};$$=create_int_node("jump_statement",arr,2);}
        | BREAK SEMICOLON                                                      {tree_node* arr[] = {create_leaf_node("BREAK",-1,-1,"BREAK"),create_leaf_node(";",-1,-1,";")};$$=create_int_node("jump_statement",arr,2);}
        | RETURN SEMICOLON                                                     {tree_node* arr[] = {create_leaf_node("RETURN",-1,-1,"RETURN"),create_leaf_node(";",-1,-1,";")};$$=create_int_node("jump_statement",arr,2);}
        | RETURN expression SEMICOLON                                          {tree_node* arr[] = {create_leaf_node("RETURN",-1,-1,"RETURN"),$2,create_leaf_node(";",-1,-1,";")};$$=create_int_node("jump_statement",arr,3);}
        ;


/* External Definitions */

translation_unit: external_declaration                                      {tree_node* arr[] = {$1};$$=create_int_node("translation_unit",arr,1);printtree($$,0);}
        | translation_unit external_declaration                           {tree_node* arr[] = {$1,$2};$$=create_int_node("translation_unit",arr,2);}
        ;

external_declaration: function_definition                                   {tree_node* arr[] = {$1};$$=create_int_node("external_declaration",arr,1);}
        | declaration                                                   {tree_node* arr[] = {$1};$$=create_int_node("external_declaration",arr,1);}
        ;

function_definition: declaration_specifiers declarator compound_statement  {tree_node* arr[] = {$1,$2,$3};$$=create_int_node("function_definition",arr,3);}
        | declaration_specifiers declarator declaration_list compound_statement {tree_node* arr[] = {$1,$2,$3,$4};$$=create_int_node("function_definition",arr,4);}
        ;

declaration_list: declaration                                              {tree_node* arr[] = {$1};$$=create_int_node("declaration_list",arr,1);}
        | declaration_list declaration                                    {tree_node* arr[] = {$1,$2};$$=create_int_node("declaration_list",arr,2);}
        ;
%%


// Error handling function
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
