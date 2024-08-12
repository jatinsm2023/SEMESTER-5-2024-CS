%{

#define OR 1
#define CR 2
#define NUM 3
#define ID 4
#define OP 5

%}

space          [ \t\n]
spaces         {space}*
digit          [0-9]
num            [-]?{digit}+
id             [a-zA-Z_][a-zA-Z0-9]*
              
%%

{spaces}        {}
"("     {return (OR);}
")"     {return (CR);}
{num}   {return (NUM);}
{id}    {return (ID);}
"+"     {return (OP);}
"-"     {return (OP);}
"/"     {return (OP);}
"*"     {return (OP);}
"%"     {return (OP);}
%%
