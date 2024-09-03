%{
    #define YYDEBUG 1
    extern int yydebug;
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "expr.h" 
    
    struct symbolTable table;
%}

%union {int num; char* id; char op;}
%start PROGRAM
%token <num> NUM
%token set
%token <id> ID 
%token <op> '+' '-' '*' '/' '%' '^'
%type <num> STMT
%type <num> SETSTMT
%type <num> EXPRSTMT
%type <num> EXPR
%type <op> OP
%type <num> ARG

%%

PROGRAM :   STMT PROGRAM  
        |   STMT
        ;
STMT    :   SETSTMT
        |   EXPRSTMT
        ;
SETSTMT :   '(' set ID NUM ')'  { printf("variable %s is set to %d\n", $3, $4); table = setidnum(table, $3, $4); }
        |   '(' set ID ID ')'   { printf("variable %s is set to %d\n", $3, getval(table, $4)); table = setidid(table, $3, $4); }
        |   '(' set ID EXPR ')' { printf("variable %s is set to %d\n", $3, $4); table = setidnum(table, $3, $4); }
        ;
EXPRSTMT:   EXPR    { printf("Standalone expression evaluates to %d\n", $$); $$ = $1; }
        ;
EXPR    :   '(' OP ARG ARG ')'  { $$ = evalexpr($2, $3, $4); }
        ;
OP      :   '+'     { $$ = '+'; }
        |   '-'     { $$ = '-'; }
        |   '*'     { $$ = '*'; }
        |   '/'     { $$ = '/'; }
        |   '%'     { $$ = '%'; }
        |   '^'     { $$ = '^'; }
        ;
ARG     :   ID      { $$ = getval(table, $1); }
        |   NUM     { table = setnum(table, $1); $$ = $1; }
        |   EXPR    { $$ = $1; }
        ;
%%

int main() {
    table.size = 0;  
    yyparse();
    printtable(table);
    return 0;
}

void yyerror(char* s) {
    printf("Error: %s\n", s);
}
