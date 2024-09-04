%{

#define CMD 1
#define ENVBEGIN 2
#define ENVEND 3
#define COMM 4
#define INMATH 5
#define DISPMATH 6

%}

space         [ \t\n]
spaces        {space}*
tilde         [~]
alphabet      [a-zA-Z]
envstart      \\[b][e][g][i][n]{spaces}[{].*[}]
envend        \\[e][n][d]{spaces}[{].*[}]
normalcmd     \\{alphabet}+
singlecmd     \\[^~]
comment       [%].*

%%

{spaces}        {}
"\\["            {return DISPMATH;}
"\\]"            { return DISPMATH;}
{}              {return DISPMATH;}
{tilde}         {return CMD;}
{envstart}      {return ENVBEGIN;}
{envend}        {return ENVEND;}
{normalcmd}     {return CMD;}
{singlecmd}     {return CMD;}
{comment}       {return COMM;}
"$$"            {return DISPMATH;}
"$"             {return INMATH;}
.               {}

%%
