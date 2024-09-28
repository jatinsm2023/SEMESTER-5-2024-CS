%{
    #include "y.tab.c"
    #include "y.tab.h"
   
%}

keywords                "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"

Identifier              [_a-zA-Z][_a-zA-Z0-9]*

digit                   [0-9]
digit_sequence          {digit}+
integer_constant        {digit}+
sign                    [+-]
exponent_part           [eE]{sign}?{digit_sequence}

fractional_constant     ({digit_sequence}?\.{digit_sequence})|({digit_sequence}\.)
floating_constant       ({fractional_constant}{exponent_part}?)|{digit_sequence}{exponent_part}

escape_sequence         \\(['"\\?abfnrtv])
c_char                  [^'\\\n]|{escape_sequence}
character_constant       '({c_char}*)'

const                   {integer_constant}|{floating_constant}

s_char                  [^"\\\n]|{escape_sequence}
string_literal          \"({s_char}*)\"


punctuator              "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"

space                   [ \t\n]

commentstart            "/*"
commentend              "*/"
commmentbody            [^*]|(\*[^/])
multicomment            {commentstart}{commmentbody}*{commentend}
singlelinecomment       "//"[^\n]*


%%
"extern"                   {return EXTERN;}
"auto"                     {return AUTO;}
"static"                   {return STATIC;}
"register"                 {return REGISTER;}
"void"                     {return VOID;}
"char"                     {return CHAR;}
"short"                    {return SHORT;}
"int"                      {return INT;}
"long"                     {return LONG;}
"float"                    {return FLOAT;}
"double"                   {return DOUBLE;}
"signed"                   {return SIGNED;}
"unsigned"                 {return UNSIGNED;}
"_Bool"                    {return BOOL;}
"_Complex"                 {return COMPLEX;}
"_Imaginary"               {return IMAGINARY;}
"const"                    {return CONST;}
"volatile"                 {return VOLATILE;}
"restrict"                 {return RESTRICT;}
"inline"                   {return INLINE;}
"..."                      {return ELLIPSIS;}
"return"                   {return RETURN;}
"goto"                     {return GOTO;}
"continue"                 {return CONTINUE;}
"break"                    {return BREAK;}
"case"                     {return CASE;}
"default"                  {return DEFAULT;}
"if"                       {return IF;}
"else"                     {return ELSE;}
"switch"                   {return SWITCH;}
"while"                    {return WHILE;}
"do"                       {return DO;}
"for"                      {return FOR;}

"sizeof"                    {return SIZEOF;}  
{Identifier}                {yylval.sval = strdup(yytext); return IDENTIFIER;}
{string_literal}            {yylval.sval = strdup(yytext); return STRING_LITERAL;}
{floating_constant}         {yylval.fval = atof(yytext); return FLO_CONSTANT;}
{integer_constant}          {yylval.ival = atoi(yytext); return INT_CONSTANT;}

{space}                     {}


%%


int yywrap(void){return 1;}