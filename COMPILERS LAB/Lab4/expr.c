#include "expr.h"
#include <regex.h>

struct symbolTable setnum(struct symbolTable table, int num) {
    for (int i = 0; i < table.size; i++) {
        if (table.arr[i].val == num) {
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
        case '/': return a / b;
        case '%': return a % b;
        case '^': return (int)pow(a, b);
        default: return 0; 
    }
}
