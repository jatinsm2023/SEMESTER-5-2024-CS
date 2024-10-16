%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(char *s);

    int memlocation = 0; // memory offset
    int reglocation = 2; // register offset
    int currentlocation = 0; // current memory location
    int rzeroused = 0;  // flag to check if R[0] is used or not

    typedef struct symtable {
        char *name;
        int location;
        struct symtable *next;
    }Table;

    Table *head = NULL;

    // function to add id to the table
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

    // function to get location of id
    int getlocation(char *name) 
    {
        Table *temp = head;
        while(temp != NULL) {
            if(strcmp(temp->name, name) == 0) {
                return temp->location;
            }
            temp = temp->next;
        }

        // if id doesn't exist in the table then add it to the table  
        Table *new = (Table *)malloc(sizeof(Table));
        new->name = name;
        new->location = memlocation;
        new->next = head;
        head = new;
        memlocation++;
        return memlocation-1;
    }
    
    // structure to store the arguments
    typedef struct argvals{
        int type; // 0 for id, 1 for num, 2 for expr
        char *id;
        int regidx;
        int value;
        int inmemory;
        int memorylocation;
    }Arg;
%}

%union {int num; char* id; char op; struct argvals *args;}
%start PROGRAM
%token <num> NUM
%token set
%token <id> ID 
%token <op> '+' '-' '*' '/' '%' '^'
%type <args> EXPR STMT SETSTMT ARG EXPRSTMT
%type <op> OP

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
        |   '(' set ID {reglocation = 2;} EXPR ')'   {
                    head = addTable($3);
                    if($5->inmemory==1){
                        printf("\tMEM[%d] = MEM[%d];\n", currentlocation, $5->memorylocation);
                    }
                    else{
                        printf("\tMEM[%d] = R[%d];\n", currentlocation, $5->regidx);
                    }
                    printf("\tmprn(MEM, %d);\n", currentlocation);
                    rzeroused = 0;
                    
                }   
        ;
EXPRSTMT:   EXPR   {
                    reglocation = 2;
                    printf("\teprn(R, %d);\n", $1->regidx);
                    rzeroused = 0;
            }
        ;
EXPR    :   '(' OP ARG {
                if($3->type==2){ // if ARG1 is EXPR
                    reglocation++;
                }
            }
            ARG ')'  {

                if($3->type==0){ // if ARG1 is ID
                    if(rzeroused==0){
                        printf("\tR[0] = MEM[%d];\n", getlocation($3->id));
                        $3->regidx = 0;
                        rzeroused = 1;
                    }
                    else{
                        printf("\tR[1] = MEM[%d];\n", getlocation($3->id));
                        $3->regidx = 1;
                        rzeroused = 0;
                    }
                }
                if($5->type==0){ // if ARG2 is ID
                    if(rzeroused==0){
                        printf("\tR[0] = MEM[%d];\n", getlocation($5->id));
                        $5->regidx = 0;
                        rzeroused = 1;
                    }
                    else{
                        printf("\tR[1] = MEM[%d];\n", getlocation($5->id));
                        $5->regidx = 1;
                        rzeroused = 0;
                    }
                }
                if($3->inmemory==1){  // if ARG1 is in memory
                    if(rzeroused==0){
                        printf("\tR[0] = MEM[%d];\n", $3->memorylocation);
                        $3->regidx = 0;
                        rzeroused = 1;
                    }
                    else{
                        printf("\tR[1] = MEM[%d];\n", $3->memorylocation);
                        $3->regidx = 1;
                        rzeroused = 0;
                    }
                }
                if($5->inmemory==1) { // if ARG2 is in memory
                    if(rzeroused==0){
                        printf("\tR[0] = MEM[%d];\n", $5->memorylocation);
                        $5->regidx = 0;
                        rzeroused = 1;
                    }
                    else{
                        printf("\tR[1] = MEM[%d];\n", $5->memorylocation);
                        $5->regidx = 1;
                        rzeroused = 0;
                    }
                }
                if($3->type==2){ // if ARG1 is EXPR
                    reglocation--;
                }
                if($2=='^'){ // if operator is power
                    printf("\tR[%d] = pwr(",(reglocation<12)?reglocation:0);
                    // if ARG1 is ID
                    if($3->type == 0){
                        printf("R[%d],", $3->regidx);
                    }
                    // if ARG1 is NUM
                    else if($3->type == 1){
                        printf("%d,", $3->value);
                    }
                    // if ARG1 is EXPR
                    else if($3->type == 2){
                        printf("R[%d],", $3->regidx);
                    }
                    // if ARG2 is ID
                    if($5->type == 0){
                      
                            printf("R[%d]);\n", $5->regidx);
                        
                    }
                    // if ARG2 is NUM
                    else if($5->type == 1){
                        printf("%d);\n", $5->value);
                    }
                    // if ARG2 is EXPR
                    else if($5->type == 2){
                       
                            printf("R[%d]);\n", $5->regidx);
                    }
                } else{
                    printf("\tR[%d] = ", (reglocation<12)?reglocation:0);
                    // if ARG1 is ID
                    if($3->type == 0){
                        printf("R[%d] %c ", $3->regidx, $2);
                    }
                    // if ARG1 is NUM
                    else if($3->type == 1){
                        printf("%d %c ", $3->value, $2);
                    }
                    // if ARG1 is EXPR
                    else if($3->type == 2){
                        printf("R[%d] %c ", $3->regidx, $2);
                    }
                    // if ARG2 is ID
                    if($5->type == 0){
                        printf("R[%d];\n", $5->regidx);
                    }
                    // if ARG2 is NUM
                    else if($5->type == 1){
                        printf("%d;\n", $5->value);
                    }
                    // if ARG2 is EXPR
                    else if($5->type == 2){
                        printf("R[%d];\n", $5->regidx);
                    }
                }


                Arg *temp = (Arg *)malloc(sizeof(Arg));
                temp->type = 2;
                if(reglocation>=12){ // if all registers are used
                    temp->regidx = -1;
                    temp->inmemory = 1;
                    printf("\tMEM[%d] = R[%d];\n", memlocation, 0);
                    temp->memorylocation = memlocation;
                    memlocation++;
                }
                else{ // if registers are available
                    temp->regidx = reglocation;
                }
                temp->value = -1;
                $$ = temp;
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
                    Arg *temp = (Arg *)malloc(sizeof(Arg));
                    temp->type = 0;
                    temp->id = $1;
                    temp->inmemory = 0;
                    temp->regidx = -1;
                    temp->value = -1;
                    $$ = temp;
            }
        |   NUM    {
                    Arg *temp = (Arg *)malloc(sizeof(Arg));
                    temp->type = 1;
                    temp->regidx = -1;
                    temp->inmemory = 0;
                    temp->value = $1;
                    $$ = temp;
            }
        
        |   EXPR   { 
                    $$ = $1;
            }
        ;
%%

