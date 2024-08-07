%{
#define LP 1
#define RP 2
#define NUM 3
#define OP 4
#define ID 5
#define ASG 6

%}

space	[ \t\n]
spaces	{space}+
digit	[0-9]
digits	{digit}+
frac	\.{digits}
expt	[Ee][+-]?{digits}
number	{digits}{frac}?{expt}?
id	[a-zA-Z_]+

%%

{spaces}	{ }
{number}	{ return(NUM); }
"("		{ return(LP); }
")"		{ return(RP); }
"+"		{ return(OP); }
"-"		{ return(OP); }
"*"		{ return(OP); }
"/"		{ return(OP); }
"%"		{ return(OP); }
{id}		{ return(ID); }
"="		{ return(ASG); }

%%

