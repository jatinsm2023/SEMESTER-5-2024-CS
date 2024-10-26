
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct symbole {
    char *id;
    int val;
};


struct symbolTable {
    struct symbole arr[10000];
    int size;
};



struct symbolTable setnum(struct symbolTable table, int num);
struct symbolTable setidnum(struct symbolTable table, char *s, int num);
struct symbolTable setidid(struct symbolTable table, char *s, char *t);
int getval(struct symbolTable table, char *id);
void printtable(struct symbolTable table);
int evalexpr(char op, int a, int b);
int getidindex(struct symbolTable table,char *s);
int getnumindex(struct symbolTable table,int num);

struct TreeNode{
    char op;
    int indx;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createleaf(char op, int indx);
struct TreeNode *createNode(char op, struct TreeNode *left, struct TreeNode *right);
void printTree(struct TreeNode *root, int num);
int evalTree(struct TreeNode *root, struct symbolTable table);

// stack using linked list
struct TreeStack{
    struct TreeNode *node;
    struct TreeStack *next;
};

struct TreeStack *push(struct TreeStack *stack, struct TreeNode *node);
struct TreeStack *pop(struct TreeStack *stack);
struct TreeNode *top(struct TreeStack *stack);
int isEmpty(struct TreeStack *stack);
