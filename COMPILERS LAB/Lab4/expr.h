
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct symbole {
    char *id;
    int val;
};


struct symbolTable {
    struct symbole arr[100000];
    int size;
};



struct symbolTable setnum(struct symbolTable table, int num);
struct symbolTable setidnum(struct symbolTable table, char *s, int num);
struct symbolTable setidid(struct symbolTable table, char *s, char *t);
int getval(struct symbolTable table, char *id);
void printtable(struct symbolTable table);
int evalexpr(char op, int a, int b);


