%{
    #define YYDEBUG 1
    extern int yydebug;
    #include <stdio.h>
    #include <stdlib.h>
    #define MAXLEN 10
    int yylex();
    void yyerror(char *s);

    typedef struct _tree_node{
        char *name;
        long long int val;
        char *inherited;
        struct _tree_node *child[MAXLEN];
        int child_num;
    }TreeNode;

    TreeNode *create_leaf_node(char *name, int val, char *inherited);
    TreeNode *create_node(char *name, char *inherited, int val, TreeNode *arr[], int child_num);
    char *int_to_string(int num);

    TreeNode *root = NULL;
%}

%union{
    int num;
    TreeNode *node;
}
%start start
%token <num> D
%token PLUS MINUS POW ONE ZERO EX
%type <node> S P T X N M

%%

start : S {
            root = $1;
        }
    ;


S : P  { 
            TreeNode* arr[] = {$1};
            $$ = create_node("S", "", -1, arr, 1); 
        }
    | PLUS P {
            TreeNode* arr[] = {create_leaf_node("+",-1,""),$2};
            $$ = create_node("S", "", -1, arr, 2); 
        }
    | MINUS P {
            TreeNode* arr[] = {create_leaf_node("-",-1,""),$2};
            $$ = create_node("S", "", -1, arr, 2); 
        }
    ;

P : T {
            TreeNode* arr[] = {$1};
            $$ = create_node("P", "", -1, arr, 1); 
        }
    | T PLUS P {
            TreeNode* arr[] = {$1,create_leaf_node("+",-1,""),$3};
            $$ = create_node("P", "", -1, arr, 3);
    }
    | T MINUS P {
            TreeNode* arr[] = {$1,create_leaf_node("-",-1,""),$3};
            $$ = create_node("P", "", -1, arr, 3);
    }
    ;

T : ONE {
            TreeNode* arr[] = {create_leaf_node("1",1,"")};
            $$ = create_node("T", "", -1, arr, 1); 
        }
    | N {
            TreeNode* arr[] = {$1};
            $$ = create_node("T", "", -1, arr, 1); 
        }
    | X {
            TreeNode* arr[] = {$1};
            $$ = create_node("T", "", -1, arr, 1); 
        }
    | N X {
            TreeNode* arr[] = {$1,$2};
            $$ = create_node("T", "", -1, arr, 2); 
        }
    ;

X : EX {
            TreeNode* arr[] = {create_leaf_node("x",-1,"")};
            $$ = create_node("X", "", -1, arr, 1); 
        }
    | EX POW N {
            TreeNode* arr[] = {create_leaf_node("x",-1,""),create_leaf_node("^",-1,""),$3};
            $$ = create_node("X", "", -1, arr, 3);
        }
    ;

N : D   {
            TreeNode* arr[] = {create_leaf_node(int_to_string($1),-1,"")};
            $$ = create_node("N", "", -1, arr, 1);
        }
    | ONE M {
            TreeNode* arr[] = {create_leaf_node("1",1,""),$2};
            $$ = create_node("N", "", -1, arr, 2);
        }
    | D M {
            TreeNode* arr[] = {create_leaf_node(int_to_string($1),-1,""),$2};
            $$ = create_node("N", "", -1, arr, 2);
        }
    ;

M : ZERO {
            TreeNode* arr[] = {create_leaf_node("0",0,"")};
            $$ = create_node("M", "", -1, arr, 1);
        }
    | ONE {
            TreeNode* arr[] = {create_leaf_node("1",1,"")};
            $$ = create_node("M", "", -1, arr, 1);
        }
    | D {
            TreeNode* arr[] = {create_leaf_node(int_to_string($1),-1,"")};
            $$ = create_node("M", "", -1, arr, 1);
        }
    | ZERO M {
            TreeNode* arr[] = {create_leaf_node("0",0,""),$2};
            $$ = create_node("M", "", -1, arr, 2);
        }
    | ONE M {
            TreeNode* arr[] = {create_leaf_node("1",1,""),$2};
            $$ = create_node("M", "", -1, arr, 2);
        }
    | D M {
            TreeNode* arr[] = {create_leaf_node(int_to_string($1),-1,""),$2};
            $$ = create_node("M", "", -1, arr, 2);
        }
    ;
    
%%

// Error handling function
void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(0); // no need to make tree if syntax error
}