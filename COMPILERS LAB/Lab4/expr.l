%{
    #include "y.tab.h"   
    int yylex();
      void yyerror(char* s);
%}

ID  [_a-zA-Z][_a-zA-Z0-9]*
NUM [-]?[1-9][0-9]*
WS  [ \t\n]
OP  [-+/%*]

%%

"set"       {return set;}
{ID}        {yylval.id = strdup(yytext); return ID;}
{NUM}       {yylval.num = atoi(yytext);return NUM;}
"**"        {return '^';}
{OP}        {return yytext[0];}
"("         {return  '(';}
")"         {return  ')';}
{WS}        {}
.           {printf("Unrecognized character: %s\n", yytext);}

%%

int yywrap(void){return 1;}