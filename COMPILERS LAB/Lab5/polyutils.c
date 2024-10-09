#include "lex.yy.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>


TreeNode *create_leaf_node(char *name, int val, char *inherited)
{
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->name = name;
    node->val = val;
    node->inherited = inherited;
    node->child_num = 0;
    for(int i = 0; i < 10; i++){
        node->child[i] = NULL;
    }
    return node;
}

TreeNode *create_node(char *name, char *inherited, int val, TreeNode *arr[], int child_num)
{
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->name = name;
    node->val = val;
    node->inherited = inherited;
    node->child_num = child_num;
    for (int i = 0; i < child_num; i++)
    {
        node->child[i] = arr[i];
    }
    return node;
}

char *int_to_string(int num)
{
    if(num == 0){
        return "0";
    }
    char *str = (char *)malloc(100);
    sprintf(str, "%d", num);
    return str;
}

long long int char_to_int(char *s){
    long long int num = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        num = num * 10 + s[i] - '0';
    }
    return num;
}

long long int power(long long int base, long long int exp) {
    long long int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}


void setatt(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->child_num == 0)
    {
        if (!strcmp(root->name, "+"))
        {
            root->inherited = "+";
            return;
        }
        else if (!strcmp(root->name, "-"))
        {
            root->inherited = "-";
            return;
        }
        else if (!strcmp(root->name, "x"))
        {
            return;
        }
        else if (!strcmp(root->name, "^"))
        {
            return;
        }
        else
        {
            root->val = char_to_int(root->name);
            return;
        }
        return;
    }
    if (!strcmp(root->name, "S"))
    {   
        if (root->child_num == 1)
        {
            // S->P
            if (root->child[0] != NULL)
            {
                root->child[0]->inherited = "";
                setatt(root->child[0]);
            }
            return;
        }
        else if (root->child_num == 2)
        {
            // S -> + P
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
            }
            if (root->child[1] != NULL)
            {
                root->child[1]->inherited = root->child[0]->inherited;
                setatt(root->child[1]);
            }
            return;
        }
        else
        {
            // No rule
            return;
        }
    }
    if (!strcmp(root->name, "P"))
    {   
        if (root->child_num == 1)
        {
            // P -> T
            if (root->child[0] != NULL)
            {
                root->child[0]->inherited = root->inherited;
                setatt(root->child[0]);
            }
            return;
        }
        else if (root->child_num == 3)
        {
            // P -> T + P | T - P
            if (root->child[0] != NULL)
            {
                root->child[0]->inherited = root->inherited;
                setatt(root->child[0]);
            }
            if (root->child[1] != NULL)
            {
                setatt(root->child[1]);
            }
            if (root->child[2] != NULL)
            {
                root->child[2]->inherited = root->child[1]->inherited;
                setatt(root->child[2]);
            }
            return;
        }
        else
        {
            // No rule
            return;
        }
    }
    if (!strcmp(root->name, "T"))
    {   
        if (root->child_num == 1)
        {
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
            }
            return;
        }
        else if (root->child_num == 2)
        {
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
            }
            if (root->child[1] != NULL)
            {
                setatt(root->child[1]);
            }
            return;
        }
        else
        {
            // No rule
            return;
        }
    }
    if (!strcmp(root->name, "X"))
    {   
        if (root->child_num == 1)
        {
            // X -> x
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
            }
            return;
        }
        else if (root->child_num == 3)
        {
            // X -> x ^ N
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
            }
            if (root->child[1] != NULL)
            {
                setatt(root->child[1]);
            }
            if (root->child[2] != NULL)
            {
                setatt(root->child[2]);
            }
            return;
        }
        else
        {
            // No rule
            return;
        }
    }
    if (!strcmp(root->name, "N"))
    {
        if (root->child_num == 1)
        {
            // N -> D
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
                root->val = root->child[0]->val;
            }
            return;
        }
        else if (root->child_num == 2)
        {
            // N -> D M | 1 M
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
            }
            if (root->child[1] != NULL)
            {
                root->child[1]->inherited = int_to_string(root->child[0]->val);
                setatt(root->child[1]);
                root->val = root->child[1]->val;
            }
            return;
        }
        else
        {
            // No rule
            return;
        }
    }
    if (!strcmp(root->name, "M"))
    {
        if (root->child_num == 1)
        {
            // M -> D | 1 | 0
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
                root->val = char_to_int(root->inherited) * 10 + root->child[0]->val;
            }
            return;
        }
        else if (root->child_num == 2)
        {
            // M -> DM | 1M | 0M
            if (root->child[0] != NULL)
            {
                setatt(root->child[0]);
            }
            if (root->child[1] != NULL)
            {
                root->child[1]->inherited = int_to_string(char_to_int(root->inherited) * 10 + root->child[0]->val);
                setatt(root->child[1]);
                root->val = root->child[1]->val;
            }
            return;
        }
    }

    return;
}

void print_tree(TreeNode *root, int depth)
{
    for (int i = 0; i <= depth; i++)
    {
        printf("\t");
    }
    if(depth!=0){
        printf("==> ");
    }
    printf("%s [", root->name);
    if(root->child_num == 0){
        if(!strcmp(root->name, "+") || !strcmp(root->name, "-") || !strcmp(root->name, "x") || !strcmp(root->name, "^")){
            printf("]");
        }
        else{
            printf(" val = %lld ]", root->val);
        }
    }
    else{
        if(!strcmp(root->name,"N")){
            printf(" val = %lld ]", root->val);
        }
        else if(!strcmp(root->name,"M")){
            printf(" inh = %s, val = %lld ]",root->inherited, root->val);
        }
        else if(!strcmp(root->name,"P") || !strcmp(root->name,"T") ){
            printf(" inh = %s ]", root->inherited);
        }
        else{
            printf("]");
        }

    }
    printf("\n");
    for (int i = 0; i < root->child_num; i++)
    {
        print_tree(root->child[i], depth + 1);
    }
}

long long int evalpoly(TreeNode* root, int x){

    if(!strcmp(root->name,"M")){
        return root->val;
    }
    if(!strcmp(root->name,"N")){
        return root->val;
    }
    if(!strcmp(root->name,"X")){
        if(root->child_num == 1){
            return x;
        }
        else{
            return  power(x, evalpoly(root->child[2], x));
        }
    }
    if(!strcmp(root->name,"T")){
        long long ans=0;
        if(root->child_num == 1){
            if(!strcmp(root->child[0]->name,"1")){
                ans = 1LL;
            }
            else{
                ans =  evalpoly(root->child[0], x);
            }
        }
        else{
            ans = evalpoly(root->child[0], x)*evalpoly(root->child[1], x);
        }
        if (!strcmp(root->inherited, "-"))
        {
            ans = (-1LL) * ans;
        }
        return ans;
    }
    if(!strcmp(root->name,"P")){
        if(root->child_num == 1){
            return evalpoly(root->child[0], x);
        }
        else{
            
            return evalpoly(root->child[0], x) + evalpoly(root->child[2], x);
        }
    }
    if(!strcmp(root->name,"S")){
        if(root->child_num == 1){
            return evalpoly(root->child[0], x);
        }
        else{
            return evalpoly(root->child[1], x);
        }
    }
}


void printderivative(TreeNode *root){
    if(!strcmp(root->name,"S")){
        if(root->child_num==1){
            printderivative(root->child[0]);
            return;
        }
        else{
            printderivative(root->child[1]);
            return;
        }
    }
    if(!strcmp(root->name,"P")){
        if(root->child_num==1){
            printderivative(root->child[0]);
            return;
        }
        else{
            printderivative(root->child[0]);
            printderivative(root->child[2]);
            return;
        }
    }
    if(!strcmp(root->name,"T")){
        if(root->child_num==1){
            if(!strcmp(root->child[0]->name,"N")){
                //
            }
            else if(!strcmp(root->child[0]->name,"X")){
                if(root->child[0]->child_num==1){
                    printf(" %s ", root->inherited);
                    printf("1");
                }
                else{
                    printf(" %s ",root->inherited);
                    printf("%lld",root->child[0]->child[2]->val);
                    printderivative(root->child[0]);
                    return;
                }
            }
            return;
        }
        else{
            if(root->child[1]->child_num==1){   
                printf(" %s ",root->inherited);
                printf("%s",int_to_string(root->child[0]->val));
            }
            else{
                printf(" %s ",root->inherited);
                printf("%s",int_to_string(root->child[0]->val*root->child[1]->child[2]->val));
            }
            printderivative(root->child[1]);
            return;
        }
    }
    if(!strcmp(root->name,"X")){
        if(root->child_num==1){
           //
        }
        else{
            if(root->child[2]->val!=2)
                printf("x^%lld",root->child[2]->val-1);
            else{
                printf("x");
            }
        }
        return;
    }
    if(!strcmp(root->name,"N")){
        //
        return;
    }
}

int main()
{
    yyparse();
    setatt(root);
    printf("+++ The annotated parse tree is\n");
    print_tree(root, 0);
    printf("\n");
    for(int i=-5; i<=5; i++){
        printf("+++ f(%d) = %lld\n", i, evalpoly(root, i));
    }
    printf("\n+++ f'(x) = ");
    printderivative(root);
}