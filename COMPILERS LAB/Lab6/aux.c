#include <stdio.h>
#include <stdlib.h>

int pwr(int arg1, int arg2) {
    int result = 1;
    for (int i = 0; i < arg2; i++) {
        result *= arg1;
    }
    return result;
}

void mprn(int MEM[], int idx) {
    printf("+++ MEM[%d] is set to %d\n",idx, MEM[idx]);
}

void eprn(int R[], int idx) {
    if(idx>=12){
        printf("+++ Error: R[%d] is out of bounds\n", idx);
        exit(1);
    }
    printf("+++ Standalone expression evaluates to %d\n", R[idx]);
}