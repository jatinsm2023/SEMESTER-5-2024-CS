#include "lex.yy.c"
extern int yyparse();

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
    if(!strcmp(name,"IDENTIFIER")){
        node->name = name;
        node->value = -1;
        node->svalue = svalue;
    }
    else if(!strcmp(name,"FLO_CONSTANT")){
        node->name = name;
        node->value = fvalue;
        node->svalue = NULL;
    }
    else if(!strcmp(name,"INT_CONSTANT")){
        node->name = name;
        node->value = ivalue;
        node->svalue = NULL;
    }
    else if(!strcmp(name,"STR_CONST")){
        node->name = name;
        node->value = -1;
        node->svalue = svalue;
    }
    return node;
}

void printtree(tree_node* node,int level){
    for(int i=0;i<level;i++){
        printf("-");
    }
    if(node->child_count==0){
        if(node->svalue!=NULL){
            printf("(%s %s)\n",node->name,node->svalue);
        }
        else{
            printf("(%s %d)\n",node->name,node->value);
        }
    }
    else{
        printf("(%s)\n",node->name);
        for(int i=0;i<node->child_count;i++){
            printtree(node->child[i],level+1);
        }
    }
}

int main(){
    yyparse();
    return 0;
}