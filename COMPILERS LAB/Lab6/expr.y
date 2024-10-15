%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(char *s);

    int memlocation = 0;
    int reglocation = 2;
    int currentlocation = 0;
    int rzeroused = 0;

    typedef struct symtable {
        char *name;
        int location;
        struct symtable *next;
    }Table;

    Table *head = NULL;

    Table *addTable(char *name) 
    {
        // if already exits 
        Table *temp = head;
        while(temp != NULL) {
            if(strcmp(temp->name, name) == 0) {
                currentlocation = temp->location;
                return head;
            }
            temp = temp->next;
        }

        // if not exits
        Table *new = (Table *)malloc(sizeof(Table));
        new->name = name;
        new->location = memlocation;
        currentlocation = memlocation;
        new->next = head;
        head = new;
        memlocation++;
        return head;
    }

    int getlocation(char *name) 
    {
        Table *temp = head;
        while(temp != NULL) {
            if(strcmp(temp->name, name) == 0) {
                return temp->location;
            }
            temp = temp->next;
        }
        
        printf("// Warning - Variable %s is not intialized\n// Assigned %s to MEM[0];\n", name,name);
        return 0;
    }
    
    typedef struct argvals{
        int type; // 0 for id, 1 for num, 2 for expr
        int regidx;
        int value;
    }Arg;
%}

%union {int num; char* id; char op; struct argvals *args;}
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
%type <args> ARG

%%

PROGRAM :   STMT PROGRAM  
        |   STMT
        ;
STMT    :   SETSTMT {reglocation = 2;}
        |   EXPRSTMT {reglocation = 2;}
        ;
SETSTMT :   '(' set ID NUM ')'  {
                    head = addTable($3);
                    printf("\tMEM[%d] = %d;\n", currentlocation, $4);
                    printf("\tmprn(MEM, %d);\n", currentlocation);
                }
        |   '(' set ID ID ')'   {
                    head = addTable($3);
                    printf("\tR[0] = MEM[%d];\n", getlocation($4));
                    printf("\tMEM[%d] = R[0];\n", currentlocation);
                    printf("\tmprn(MEM, %d);\n", currentlocation);
                }
        |   '(' set ID EXPR ')'   {
                    head = addTable($3);
                    printf("\tMEM[%d] = R[%d];\n", currentlocation, $4);
                    printf("\tmprn(MEM, %d);\n", currentlocation);
                    reglocation = 2;
                }   
        ;
EXPRSTMT:   EXPR   {
                    reglocation = 2;
                    printf("\teprn(R, %d);\n", $1);
            }
        ;
EXPR    :   '(' OP ARG {
                if($3->type==2){
                    reglocation++;
                }
            }
            ARG ')'  {
                if($3->type==2){
                    reglocation--;
                }
                if($2=='^'){
                    printf("\tR[%d] = pwr(",reglocation);
                    // if ARG is ID
                    if($3->type == 0){
                        printf("R[%d],", $3->regidx);
                    }
                    // if ARG is NUM
                    else if($3->type == 1){
                        printf("%d,", $3->value);
                    }
                    // if ARG is EXPR
                    else if($3->type == 2){
                        printf("R[%d],", $3->regidx);
                    }
                    // if ARG is ID
                    if($5->type == 0){
                        printf("R[%d]);\n", $5->regidx);
                    }
                    else if($5->type == 1){
                        printf("%d);\n", $5->value);
                    }
                    else if($5->type == 2){
                        printf("R[%d]);\n", $5->regidx);
                    }
                } else{
                    printf("\tR[%d] = ", reglocation);
                    // if ARG is ID
                    if($3->type == 0){
                        printf("R[%d] %c ", $3->regidx, $2);
                    }
                    // if ARG is NUM
                    else if($3->type == 1){
                        printf("%d %c ", $3->value, $2);
                    }
                    // if ARG is EXPR
                    else if($3->type == 2){
                        printf("R[%d] %c ", $3->regidx, $2);
                    }
                    // if ARG is ID
                    if($5->type == 0){
                        printf("R[%d];\n", $5->regidx);
                    }
                    // if ARG is NUM
                    else if($5->type == 1){
                        printf("%d;\n", $5->value);
                    }
                    // if ARG is EXPR
                    else if($5->type == 2){
                        printf("R[%d];\n", $5->regidx);
                    }
                }

                $$ = reglocation;
               
            }
        ;
OP      :   '+'     {
                    $$ = '+';
                }
        |   '-'     {
                    $$ = '-';
                }
        |   '*'     {
                    $$ = '*';
                }
        |   '/'     {
                    $$ = '/';
                }
        |   '%'     {
                    $$ = '%';
                }
        |   '^'     {
                    $$ = '^';
                }
        ;
ARG     :   ID      {
                if(rzeroused==0) {
                    printf("\tR[0] = MEM[%d];\n", getlocation($1));
                    rzeroused = 1;
                    Arg *temp = (Arg *)malloc(sizeof(Arg));
                    temp->type = 0;
                    temp->regidx = 0;
                    temp->value = -1;
                    $$ = temp;
                }
                else {
                    printf("\tR[1] = MEM[%d];\n", getlocation($1));
                    Arg *temp = (Arg *)malloc(sizeof(Arg));
                    temp->type = 0;
                    temp->regidx = 1;
                    temp->value = -1;
                    $$ = temp;
                    rzeroused = 0;
                }
            }
        |   NUM    {
                    Arg *temp = (Arg *)malloc(sizeof(Arg));
                    temp->type = 1;
                    temp->regidx = -1;
                    temp->value = $1;
                    $$ = temp;
            }
        
        |   EXPR   { 
                    Arg *temp = (Arg *)malloc(sizeof(Arg));
                    temp->type = 2;
                    temp->regidx = $1;
                    temp->value = -1;
                    $$ = temp;
            }
        ;
%%

