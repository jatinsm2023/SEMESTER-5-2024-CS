%{
    #define YYDEBUG 1
    extern int yydebug;
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "expr.h" 
    int yylex();
        void yyerror(const char *s);    

    
    struct symbolTable table;
    struct TreeNode *root;
    struct TreeStack *stack;
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
EXPRSTMT:   EXPR    { /* printf("Standalone expression evaluates to %d\n", $1 ); */  $$ = $1; root = top(stack); stack =  pop(stack); printf("Standalone expression evaluates to %d\n", evalTree(root,table) ); /*  printf("\nParse Tree\n\n"); printTree(root,0);  printtable(table); */ }
        ;
EXPR    :   '(' OP ARG ARG ')'  { $$ = evalexpr($2, $3, $4);struct TreeNode *right = top(stack); stack = pop(stack); struct TreeNode *left = top(stack); stack = pop(stack); struct TreeNode *node = createNode($2, left,right);  stack = push(stack, node); }
        ;
OP      :   '+'     { $$ = '+'; }
        |   '-'     { $$ = '-'; }
        |   '*'     { $$ = '*'; }
        |   '/'     { $$ = '/'; }
        |   '%'     { $$ = '%'; }
        |   '^'     { $$ = '^'; }
        ;
ARG     :   ID      { $$ = getval(table, $1); struct TreeNode *node = createleaf('i', getidindex(table,$1)); stack =  push(stack, node); }
        |   NUM     { table = setnum(table, $1); $$ = $1; struct TreeNode *node = createleaf('n', getnumindex(table,$1)); stack = push(stack, node); }
        |   EXPR    { $$ = $1; }
        ;
%%

int main() {
    table.size = 0;  
    yyparse();
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}