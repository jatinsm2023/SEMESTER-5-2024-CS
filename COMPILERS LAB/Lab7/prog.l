
%{
  #include "y.tab.h"
  #include "y.tab.c"
%}

IDEN   [_a-zA-Z][_0-9a-zA-Z]*
NUMB   [-]?([0]|[1-9][0-9]*)
space   [ \t\n]

%%

"("       {return LP;}
")"       {return RP;}
"set"     {return SET;}
"when"    {return WHEN;}
"loop"    {return LOOPTOKEN;}
"while"   {return WHILE;}
"<"       {return LT;}
">"       {return GT;}
"<="      {return LTE;}
">="      {return GTE;}
"/="      {return NOTEQ;}
"="       {return ASG;}

"%"       {return MOD;}
"+"       {return ADD;}
"-"       {return SUB;}
"*"       {return MUL;}
"/"       {return DIV;}

{IDEN}    {yylval.id=strdup(yytext);return IDEN;}
{NUMB}    {yylval.id=strdup(yytext);return NUMB; }
{space}   {}
%%

int yywrap()
{
  return 1;
}