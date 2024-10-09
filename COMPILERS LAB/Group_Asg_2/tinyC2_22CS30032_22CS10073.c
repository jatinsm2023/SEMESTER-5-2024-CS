#include "lex.yy.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>


tree_node* create_int_node(char* name,tree_node* child[],int child_count){
    tree_node* node = (tree_node*)malloc(sizeof(tree_node));
    node->name = name;
    node->child_count = child_count;
    for(int i=0;i<child_count;i++){
        node->child[i] = child[i];
    }
    return node;
}

tree_node* create_leaf_node(char* name,int ivalue,float fvalue,char* svalue){
    tree_node* node = (tree_node*)malloc(sizeof(tree_node));
    node->child_count = 0;
    //printf("/n%d/n",ivalue);
    if(!strcmp(name,"IDENTIFIER")){
        node->name = name;
        node->all.svalue = svalue;
    }
    else if(!strcmp(name,"FLO_CONSTANT")){
        node->name = name;
        node->all.fvalue = fvalue;
    }
    else if(!strcmp(name,"INT_CONSTANT")){
        node->name = name;
        node->all.value = ivalue;
    }
    else if(!strcmp(name,"STR_CONST")){
        node->name = name;
        node->all.svalue = svalue;
    }
    else{
        node->name = name;
        node->all.svalue = svalue;
    }
    return node;
}


void printtree_helper(tree_node* node,int level){
    for(int i=0;i<level;i++){
        printf("-->");
    }
    if(node->child_count==0){
        if(node->name=="IDENTIFIER"){
            printf("(%s, %s)\n",node->name,node->all.svalue);
        }
        else if(node->name=="FLO_CONSTANT"){
            printf("(%s, %f)\n",node->name,node->all.fvalue);
        }
        else if(node->name=="INT_CONSTANT"){
            printf("(%s, %d)\n",node->name,node->all.value);
        }
        else if(node->name=="STR_CONST"){
            printf("(%s, %s)\n",node->name,node->all.svalue);
        }
        else{
            printf("(%s)\n",node->all.svalue);
        }
    }
    else{
        printf("%s\n",node->name);
        for(int i=0;i<node->child_count;i++){
            printtree_helper(node->child[i],level+1);
        }
    }
}

void printtree(tree_node* node){
    printf("\n- Parse Tree - \n\n\n");
    printtree_helper(node,0);
}
int main(){
    // // debug
    // yydebug = 1;
    yyparse();
    return 0;
}