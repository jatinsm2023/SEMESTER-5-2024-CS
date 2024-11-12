%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

    void yyerror(const char * s);
    int yylex();

    typedef struct quad_{
        int quad_no;
        int bl_no;
        int flag;
        char* oper;
        char *x;
        char *y;
        char * z;
        struct quad_* next;
    }quad;

    typedef struct symb{
        char * name;
        int val;
        int reg_or_mem;
        int *locs;
        struct symb*next;
    }symboltable;

    typedef struct target{
        int targ_no;
        int bl_no;
        int flag;
        char * oper;
        char * x;
        char * y;
        char *z;
        struct target* next;
    }targetquad;



    typedef struct regs{
        int val;
        int * vars;
    }reg;


    typedef struct tempz_list
    {
        int val;
        struct tempz_list * next;
    }temp_table;

    typedef struct pai{
        int qno;
        int tno;
    }Pair;

    void add_target_temp(targetquad *newt);
    void add_node(int val);
    temp_table *delete_all_nodes();
    void add_quad(const char *op, const char *x, const char *y, const char *z);
    void add_targ(const char *op, const char *x, const char *y, const char *z);
    void add_targ1(targetquad *newq);
    void add_sym(char *id);
    void backpatch(int x);
    void set_leader(int x);
    void set_leaders();
    void put_size();
    void init_reg_desc();
    void add_size();
    int get_sym_index(char *x);
    void remove_mem(char *x);
    void change_to_reg(char *x, int reg_no);
    void change_reg_status(int reg_no, int x);
    symboltable *get_symble(int ind);
    int get_free_reg();
    void remove_all_regs_for_sym(int symno);
    int all_in_mem(int reg_no);
    int all_temps(int reg_no);
    int check_for_noreg(symboltable *x);
    void clear_reg(int reg_no);
    void clear_reg1(int reg_no);
    int no_use_in_block(int reg_no, int blo_no, int q_no);
    int get_reg_min();
    int get_reg(char *x, int blo_no, int q_no);
    int get_tno(int num);
    void quad_encoding(quad *tac);
    targetquad *init_targ(const char *oper,const char *x,const char *y, const char *z);
    void init_temp_targ(quad *tac);
    void filljumps();
    int isleader(int num);
    int temp();
    int instruction();

%}

%start list

%union {
    int nums;
    char * id;
}

%token SET WHEN LOOPTOKEN WHILE 
%token LT GT LTE GTE NOTEQ ASG  RP LP
%token ADD SUB MUL DIV MOD
%token <id> IDEN
%token <id> NUMB

%type <id> oper reln atom expr bool
%type  stmt list asgn loop 
%type cond
%type <nums> M


%%

list : stmt 
    
     | stmt list 
     ;
stmt  : asgn 
    
     | cond

     |loop

     ;
asgn : LP SET IDEN atom RP{
        add_sym($3);
        add_quad("=",$4,"",$3);
    }
    ;

cond : LP WHEN bool M list RP  {  
        backpatch($4-1);
    }
    ;

loop  : LP LOOPTOKEN WHILE M bool M list RP {    
        char *z=(char*)malloc(60*sizeof(char));
        sprintf(z,"%d",$4);
        add_quad("goto","","",z);
        backpatch($6-1);
    }
    ;

expr : LP oper atom atom RP  {
        $$=(char*)malloc(60*sizeof(char));
        sprintf($$,"$%d",temp());
        add_sym($$);
        add_quad($2,$3,$4,$$);
    }
    ;

bool : LP reln atom atom RP {
        $$ = (char*)malloc(60*sizeof(char));
        char * tem=(char*)malloc(60*sizeof(char));
        sprintf(tem,"i%s",$2);
        sprintf($$,"%s %s %s",$3,$2,$4);
        add_quad(tem,$3,$4,"");
    }
    ;

atom :    IDEN   {$$=strdup($1);add_sym($1);}
        | NUMB   {$$=strdup($1);}
        | expr   {$$=strdup($1);}

    ;

oper :    ADD   {$$ = strdup("+");}
        | SUB   {$$ = strdup("-");}
        | MUL   {$$ = strdup("*");}
        | DIV   {$$ = strdup("/");}
        | MOD   {$$ = strdup("%");}
        ;

reln :   ASG    {$$ =strdup("==");}
        |NOTEQ  {$$ = strdup("!=");}
        |LT     {$$ = strdup("<");}
        |GT     {$$ = strdup(">");}
        |LTE    {$$ = strdup("<=");}
        |GTE    {$$ = strdup(">=");}
        ;

M : {
        $$=instruction()+1;
    }
    ;

%%


void yyerror(const char *s)
{
    printf("Error :%s", s);
}