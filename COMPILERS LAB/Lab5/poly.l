%{
    #include "y.tab.c"
    #include "y.tab.h"
   
%}

D   [2-9]
space  [ \t\n]

%%
{D} { yylval.num = atoi(yytext); return D; }
"+" { return PLUS; }
"-" { return MINUS; }
"^" { return POW; }
"1" { yylval.num = 1; return ONE; }
"0" { yylval.num = 0; return ZERO; }
"x" { return EX; }

. {}
{space} {}
%%

int yywrap() {
    return 1;
}