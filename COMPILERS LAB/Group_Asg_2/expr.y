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

%}
%start START

%union{
    int ival;
    float fval;
    char *sval;
    tree_node* node;
    char *op;
}


%token<sval> IDENTIFIER
%token<fval> FLO_CONSTANT
%token<ival> INT_CONSTANT
%token<sval> STRING_LITERAL
%token <op> PLUS MINUS MULTIPLY AND TILDA NOT
%token SIZEOF
%type <node> Expression primary_expression postfix_expression argument_expression_list unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression expression constant_expression
%type <node> unary_operator assignment_operator





%%
START:  Expression
        ;



Expression : primary_expression                                             {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | postfix_expression                                                {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | argument_expression_list                                          {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | unary_expression                                                  {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | cast_expression                                                   {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | multiplicative_expression                                         {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | additive_expression                                               {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | shift_expression                                                  {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | relational_expression                                             {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | equality_expression                                               {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | AND_expression                                                    {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | exclusive_OR_expression                                           {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | inclusive_OR_expression                                           {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | logical_AND_expression                                            {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | logical_OR_expression                                             {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | conditional_expression                                            {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | assignment_expression                                             {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | expression                                                        {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        | constant_expression                                               {tree_node* arr[] = {$1};$$=create_int_node("Expression",arr,1);}
        ;

primary_expression:IDENTIFIER                                               {$$=create_leaf_node("primary_expression",-1,-1,$1);}
        | FLO_CONSTANT                                                      {$$=create_leaf_node("primary_expression",-1,$1,NULL);}
        | INT_CONSTANT                                                      {$$=create_leaf_node("primary_expression",$1,-1,NULL);}
        | STRING_LITERAL                                                    {$$=create_leaf_node("primary_expression",-1,-1,$1);}
        | '(' expression ')'                                                {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")")};$$=create_int_node("primary_expression",arr,3);}
        ;

postfix_expression: primary_expression                                      {tree_node* arr[] = {$1};$$=create_int_node("postfix_expression",arr,1);}
        | postfix_expression '[' expression ']'                             {tree_node* arr[]= {$1,create_leaf_node("[",-1,-1,"["),$3,create_leaf_node("]",-1,-1,"]")};$$=create_int_node("postfix_expression",arr,4);}
        | postfix_expression '(' ')'                                        {tree_node* arr[] = {$1,create_leaf_node("(",1,-1,"("),create_leaf_node(")",-1,-1,")")};$$=create_int_node("postfix_expression",arr,3);}
        | postfix_expression '(' argument_expression_list ')'               {tree_node* arr[] = {$1,create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")")};$$=create_int_node("postfix_expression",arr,4);}
        | postfix_expression '.' IDENTIFIER                                 {tree_node* arr[] = {$1,create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,$3)};$$=create_int_node("postfix_expression",arr,3);}
        | postfix_expression '-' '>' IDENTIFIER                             {tree_node* arr[] = {$1,create_leaf_node("->",1,-1,"->"),create_leaf_node("IDENTIFIER",-1,-1,$4)};$$=create_int_node("postfix_expression",arr,3);}
        | postfix_expression PLUS PLUS                                      {tree_node* arr[] = {$1,create_leaf_node("PLUS",-1,-1,"+"),create_leaf_node("PLUS",-1,-1,"+")};$$=create_int_node("postfix_expression",arr,3);}
        | postfix_expression MINUS MINUS                                    {tree_node* arr[] = {$1,create_leaf_node("MINUS",-1,-1,"-"),create_leaf_node("MINUS",-1,-1,"-")};$$=create_int_node("postfix_expression",arr,3);}
        /* | '(' type_name ')' '{' initializer_list '}'                        {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),$5,create_leaf_node("}",-1,-1,"}")};$$=create_int_node("postfix_expression",arr,6);} */
        /* | '(' type_name ')' '{' initializer_list ',' '}'                    {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),$5,create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};$$=create_int_node("postfix_expression",arr,6);} */
        ;

argument_expression_list: assignment_expression                             {tree_node* arr[] = {$1};$$=create_int_node("argument_expression_list",arr,1);}
        | argument_expression_list ',' assignment_expression                {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),$3};$$=create_int_node("argument_expression_list",arr,3);}
        ;


unary_expression: postfix_expression                                        {tree_node* arr[] = {$1};$$=create_int_node("unary_expression",arr,1);}
        | PLUS PLUS unary_expression                                        {tree_node* arr[] = {create_leaf_node("PLUS",-1,-1,"+"),create_leaf_node("PLUS",-1,-1,"+"),$3};$$=create_int_node("unary_expression",arr,3);}
        | MINUS MINUS unary_expression                                      {tree_node* arr[] = {create_leaf_node("MINUS",-1,-1,"-"),create_leaf_node("MINUS",-1,-1,"-"),$3};$$=create_int_node("unary_expression",arr,3);}
        | unary_operator cast_expression                                    {tree_node* arr[] = {$1,$2};$$=create_int_node("unary_expression",arr,2);}
        | SIZEOF unary_expression                                           {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),$2};$$=create_int_node("unary_expression",arr,2);}
        /* | SIZEOF '(' type_name ')'                                          {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),create_leaf_node("(",1,-1,"("),$3,create_leaf_node(")",-1,-1,")")};$$=create_int_node("unary_expression",arr,4);} */
        ;

unary_operator:PLUS                                                         {tree_node* arr[]= {create_leaf_node("+",-1,-1,"+")};$$=create_int_node("unary_operator",arr,1);}
        | MINUS                                                             {tree_node* arr[]= {create_leaf_node("-",-1,-1,"-")};$$=create_int_node("unary_operator",arr,1);}
        | NOT                                                               {tree_node* arr[]= {create_leaf_node("!",-1,-1,"!")};$$=create_int_node("unary_operator",arr,1);}
        | TILDA                                                             {tree_node* arr[]= {create_leaf_node("~",-1,-1,"~")};$$=create_int_node("unary_operator",arr,1);}
        | AND                                                               {tree_node* arr[]= {create_leaf_node("&",-1,-1,"&")};$$=create_int_node("unary_operator",arr,1);}
        | MULTIPLY                                                          {tree_node* arr[]= {create_leaf_node("*",-1,-1,"*")};$$=create_int_node("unary_operator",arr,1);}
        ;

cast_expression: unary_expression                                           {tree_node* arr[] = {$1};$$=create_int_node("cast_expression",arr,1);}
        /* | '(' type_name ')' cast_expression                                 {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),$2,create_leaf_node(")",-1,-1,")"),$4};$$=create_int_node("cast_expression",arr,4);} */
        ;

multiplicative_expression: cast_expression                                  {tree_node* arr[] = {$1};$$=create_int_node("multiplicative_expression",arr,1);}
        | multiplicative_expression '*' cast_expression                {tree_node* arr[] = {$1,create_leaf_node("*",-1,-1,"*"),$3};$$=create_int_node("multiplicative_expression",arr,3);}
        | multiplicative_expression '/' cast_expression                     {tree_node* arr[] = {$1,create_leaf_node("/",-1,-1,"/"),$3};$$=create_int_node("multiplicative_expression",arr,3);}
        | multiplicative_expression '%' cast_expression                     {tree_node* arr[] = {$1,create_leaf_node("%",-1,-1,"%"),$3};$$=create_int_node("multiplicative_expression",arr,3);}
        ;

additive_expression: multiplicative_expression                              {tree_node* arr[] = {$1};$$=create_int_node("additive_expression",arr,1);}
        | additive_expression '+' multiplicative_expression                 {tree_node* arr[] = {$1,create_leaf_node("+",-1,-1,"+"),$3};$$=create_int_node("additive_expression",arr,3);}
        | additive_expression '-' multiplicative_expression                 {tree_node* arr[] = {$1,create_leaf_node("-",-1,-1,"-"),$3};$$=create_int_node("additive_expression",arr,3);}
        ;

shift_expression: additive_expression                                       {tree_node* arr[] = {$1};$$=create_int_node("shift_expression",arr,1);}
        | shift_expression '<' '<' additive_expression                      {tree_node* arr[] = {$1,create_leaf_node("<<",-1,-1,"<<"),$4};$$=create_int_node("shift_expression",arr,3);}
        | shift_expression '>' '>' additive_expression                      {tree_node* arr[] = {$1,create_leaf_node(">>",-1,-1,">>"),$4};$$=create_int_node("shift_expression",arr,3);}
        ;

relational_expression: shift_expression                                     {tree_node* arr[] = {$1};$$=create_int_node("relational_expression",arr,1);}
        | relational_expression '<' shift_expression                        {tree_node* arr[] = {$1,create_leaf_node("<",-1,-1,"<"),$3};$$=create_int_node("relational_expression",arr,3);}
        | relational_expression '>' shift_expression                        {tree_node* arr[] = {$1,create_leaf_node(">",-1,-1,">"),$3};$$=create_int_node("relational_expression",arr,3);}
        | relational_expression '<' '=' shift_expression                    {tree_node* arr[] = {$1,create_leaf_node("<=",-1,-1,"<="),$4};$$=create_int_node("relational_expression",arr,3);}
        | relational_expression '>' '=' shift_expression                    {tree_node* arr[] = {$1,create_leaf_node(">=",-1,-1,">="),$4};$$=create_int_node("relational_expression",arr,3);}
        ;

equality_expression: relational_expression                                  {tree_node* arr[] = {$1};$$=create_int_node("equality_expression",arr,1);}
        | equality_expression '=' '=' relational_expression                 {tree_node* arr[] = {$1,create_leaf_node("==",-1,-1,"=="),$4};$$=create_int_node("equality_expression",arr,3);}
        | equality_expression '!' '=' relational_expression                 {tree_node* arr[] = {$1,create_leaf_node("!=",-1,-1,"!="),$4};$$=create_int_node("equality_expression",arr,3);}

AND_expression: equality_expression                                         {tree_node* arr[] = {$1};$$=create_int_node("AND_expression",arr,1);}
        | AND_expression '&' equality_expression                            {tree_node* arr[] = {$1,create_leaf_node("&",-1,-1,"&"),$3};$$=create_int_node("AND_expression",arr,3);}
        ;

exclusive_OR_expression: AND_expression                                     {tree_node* arr[] = {$1};$$=create_int_node("exclusive_OR_expression",arr,1);}
        | exclusive_OR_expression '^' AND_expression                        {tree_node* arr[] = {$1,create_leaf_node("^",-1,-1,"^"),$3};$$=create_int_node("exclusive_OR_expression",arr,3);}
        ;

inclusive_OR_expression: exclusive_OR_expression                            {tree_node* arr[] = {$1};$$=create_int_node("inclusive_OR_expression",arr,1);}
        | inclusive_OR_expression '|' exclusive_OR_expression               {tree_node* arr[] = {$1,create_leaf_node("|",-1,-1,"|"),$3};$$=create_int_node("inclusive_OR_expression",arr,3);}
        ;

logical_AND_expression: inclusive_OR_expression                             {tree_node* arr[] = {$1};$$=create_int_node("logical_AND_expression",arr,1);}
        | logical_AND_expression '&' '&' inclusive_OR_expression            {tree_node* arr[] = {$1,create_leaf_node("&&",-1,-1,"&&"),$4};$$=create_int_node("logical_AND_expression",arr,3);}
        ;

logical_OR_expression: logical_AND_expression                               {tree_node* arr[] = {$1};$$=create_int_node("logical_OR_expression",arr,1);}
        | logical_OR_expression '|' '|' logical_AND_expression              {tree_node* arr[] = {$1,create_leaf_node("||",-1,-1,"||"),$4};$$=create_int_node("logical_OR_expression",arr,3);}
        ;

conditional_expression: logical_OR_expression                               {tree_node* arr[] = {$1};$$=create_int_node("conditional_expression",arr,1);}
        | logical_OR_expression '?' expression ':' conditional_expression   {tree_node* arr[] = {$1,create_leaf_node("?",-1,-1,"?"),$3,create_leaf_node(":",-1,-1,":"),$5};$$=create_int_node("conditional_expression",arr,5);}
        ;

assignment_expression: conditional_expression                               {tree_node* arr[] = {$1};$$=create_int_node("assignment_expression",arr,1);}
        | unary_expression assignment_operator assignment_expression        {tree_node* arr[] = {$1,$2,$3};$$=create_int_node("assignment_expression",arr,3);}
        ;

assignment_operator: '='                                                    {tree_node* arr[]={create_leaf_node("=",-1,-1,"=")};$$=create_int_node("assignment_operator",arr,1);}
        | '*' '='                                                           {tree_node* arr[]={create_leaf_node("*=",-1,-1,"*=")};$$=create_int_node("assignment_operator",arr,1);}
        | '/' '='                                                           {tree_node* arr[]={create_leaf_node("/=",-1,-1,"/=")};$$=create_int_node("assignment_operator",arr,1);}
        | '%' '='                                                           {tree_node* arr[]={create_leaf_node("%=",-1,-1,"%=")};$$=create_int_node("assignment_operator",arr,1);}
        | '+' '='                                                           {tree_node* arr[]={create_leaf_node("+=",-1,-1,"+=")};$$=create_int_node("assignment_operator",arr,1);}
        | '-' '='                                                           {tree_node* arr[]={create_leaf_node("-=",-1,-1,"-=")};$$=create_int_node("assignment_operator",arr,1);}
        | '<' '<' '='                                                       {tree_node* arr[]={create_leaf_node("<<=",-1,-1,"<<=")};$$=create_int_node("assignment_operator",arr,1);}
        | '>' '>' '='                                                       {tree_node* arr[]={create_leaf_node(">>=",-1,-1,">>=")};$$=create_int_node("assignment_operator",arr,1);}
        | '&' '='                                                           {tree_node* arr[]={create_leaf_node("&=",-1,-1,"&=")};$$=create_int_node("assignment_operator",arr,1);}
        | '^' '='                                                           {tree_node* arr[]={create_leaf_node("^=",-1,-1,"^=")};$$=create_int_node("assignment_operator",arr,1);}
        | '|' '='                                                           {tree_node* arr[]={create_leaf_node("|=",-1,-1,"|=")};$$=create_int_node("assignment_operator",arr,1);}
        ;
        
expression: assignment_expression                                           {tree_node* arr[] = {$1};$$=create_int_node("expression",arr,1);}
        | expression ',' assignment_expression                              {tree_node* arr[] = {$1,create_leaf_node(",",1,-1,","),$3};$$=create_int_node("expression",arr,3);}
        ;
constant_expression: conditional_expression                                 {tree_node* arr[] = {$1};$$=create_int_node("constant_expression",arr,1);} 

%%


// Error handling function
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}