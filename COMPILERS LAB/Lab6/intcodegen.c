#include <stdio.h>
#include <stdlib.h>
#include "aux.c"
#include "lex.yy.c"

int main(){
    printf("#include <stdio.h>\n#include <stdlib.h>\n#include \"aux.c\"\n\nint main ( )\n{");
    printf("\n    int R[1000];\n    int MEM[65536];\n\n");
    yyparse();
    printf("}");
}

void yyerror(char *s){
    fprintf(stderr, "%s\n", s);
}