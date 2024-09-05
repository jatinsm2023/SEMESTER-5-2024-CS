#include "expr.h"
#include <regex.h>

struct symbolTable setnum(struct symbolTable table, int num) {
    for (int i = 0; i < table.size; i++) {
        if (!strcmp(table.arr[i].id,"-num-")  && table.arr[i].val == num) {
            return table;
        }
    }
    table.arr[table.size].id = strdup("-num-");
    table.arr[table.size].val = num;
    table.size++;
    return table;
}


struct symbolTable setidnum(struct symbolTable table, char *s, int num) {
    for (int i = 0; i < table.size; i++) {
        if (!strcmp(table.arr[i].id, s)) {
            table.arr[i].val = num;
            return table;
        }
    }
    table.arr[table.size].id = strdup(s);
    table.arr[table.size].val = num;
    table.size++;
    return table;
}


int getval(struct symbolTable table, char *id) {
    for (int i = 0; i < table.size; i++) {
        if (!strcmp(table.arr[i].id, id)) {
            return table.arr[i].val;
        }
    }
    return -1;  
}


struct symbolTable setidid(struct symbolTable table, char *s, char *t) {
    int num = getval(table, t);
    return setidnum(table, s, num);
}


void printtable(struct symbolTable table) {
    printf("\n\nTable\n");
    for (int i = 0; i < table.size; i++) {
        printf("ID : %s\t%d\n", table.arr[i].id, table.arr[i].val);
    }
    printf("\n\n");
}

int evalexpr(char op, int a, int b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':  if(b == 0){ printf("--Division by zero is not permited--\n"); exit(-1); } return a / b;
        case '%': if(b == 0){ printf("--Division by zero is not permited--\n"); exit(-1); } return a % b;
        case '^': return (int)pow(a, b);
        default: return 0; 
    }
}

int getidindex(struct symbolTable table, char *s){
    for (int i = 0; i < table.size; i++) {
        if (!strcmp(table.arr[i].id, s)) {
            return i;
        }
    }
    return -1;
}

int getnumindex(struct symbolTable table, int num){
    for (int i = 0; i < table.size; i++) {
        if (!strcmp(table.arr[i].id,"-num-") &&   table.arr[i].val == num) {
            return i;
        }
    }
    return -1;
}

struct TreeNode *createleaf(char op, int indx) {
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->op = op;
    node->indx = indx;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode *createNode(char op, struct TreeNode *left, struct TreeNode *right) {
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->op = op;
    node->indx = -1;
    node->left = left;
    node->right = right;
    return node;
}

int evalTree(struct TreeNode *root, struct symbolTable table) {
    if (root->left == NULL && root->right == NULL) {
        return table.arr[root->indx].val;
    }
    int a = evalTree(root->left, table);
    int b = evalTree(root->right, table);
    return evalexpr(root->op, a, b);
}



struct TreeStack *push(struct TreeStack *stack, struct TreeNode *node) {
    struct TreeStack *newNode = (struct TreeStack *)malloc(sizeof(struct TreeStack));
    newNode->node = node;
    newNode->next = stack;
    return newNode;
}

struct TreeStack *pop(struct TreeStack *stack) {
    struct TreeStack *temp = stack;
    stack = stack->next;
    free(temp);
    return stack;
}

struct TreeNode *top(struct TreeStack *stack) {
    return stack->node;
}

int isEmpty(struct TreeStack *stack) {
    return stack == NULL;
}

void printTree(struct TreeNode *root, int num) {
    if (root == NULL) {
        return;
    }
    for (int i = 0; i < num; i++) {
        printf("-->");
    }
    printf("(%c, %d)\n", root->op, root->indx);
    printTree(root->left, num+1);
    printTree(root->right,num+1);
}