%{
    #include "y.tab.c"
    #include "y.tab.h"
   
%}


Identifier              [_a-zA-Z][_a-zA-Z0-9]*

digit                   [0-9]
digit_sequence          {digit}+
integer_constant        {digit}+
sign                    [+-]
exponent_part           [eE]{sign}?{digit_sequence}

fractional_constant     ({digit_sequence}?\.{digit_sequence})|({digit_sequence}\.)
floating_constant       ({fractional_constant}{exponent_part}?)|{digit_sequence}{exponent_part}

escape_sequence         \\(['"\\?abfnrtv])

s_char                  [^"\\\n]|{escape_sequence}
string_literal          \"({s_char}*)\"



space                   [ \t\n]
commentstart           "/*"
commentend             "*/"
commmentbody            [^*]|(\*[^/])
comment                 {commentstart}{commmentbody}*{commentend}
line_comment            "//"[^\n]*

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

"sizeof"                   {return SIZEOF;}  
"++"                       {return INCREMENT;}
"--"                       {return DECREMENT;}
"->"                       {return ARROW;}
"<<"                       {return LEFTSHIFT;}
">>"                       {return RIGHTSHIFT;}
"<="                       {return LESSEQUAL;}
">="                       {return GREATEREQUAL;}
"=="                       {return DOUBLEEQUAL;}
"!="                       {return NOTEQUAL;}
"&&"                       {return DOUBLEAND;}
"||"                       {return DOUBLEOR;}
"+="                       {return PLUSEQUAL;}
"-="                       {return MINUSEQUAL;}
"*="                       {return MULTIPLYEQUAL;}
"/="                       {return DIVEQUAL;}
"%="                       {return MODEQUAL;}
"<<="                      {return LEFTSHIFTEQUAL;}
">>="                      {return RIGHTSHIFTEQUAL;}
"&="                       {return ANDEQUAL;}
"^="                       {return XOREQUAL;}
"|="                       {return OREQUAL;}
"="                        {return EQUAL;}
";"                        {return SEMICOLON;}
","                        {return COMMA;}
"+"                        {return PLUS;}
"-"                        {return MINUS;}
"*"                        {return MULTIPLY;}
"/"                        {return DIV;}
"%"                        {return MOD;}
"~"                        {return TILDA;}  
"&"                        {return AND;}
"."                        {return DOT;}
"!"                        {return NOT;}
"|"                        {return OR;}
"^"                        {return XOR;}
">"                        {return GREATER;}
"<"                        {return LESS;}
"("                        {return LEFTPAR;}
")"                        {return RIGHTPAR;}
"{"                        {return LEFTBRACE;}
"}"                        {return RIGHTBRACE;}
"["                        {return LEFTBRACKET;}
"]"                        {return RIGHTBRACKET;}
":"                        {return COLON;}
"?"                        {return QUESTIONMARK;}


{Identifier}                {yylval.sval = strdup(yytext); return IDENTIFIER;}
{string_literal}            {yylval.sval = strdup(yytext); return STRING_LITERAL;}
{floating_constant}         {yylval.fval = atof(yytext); return FLO_CONSTANT;}
{integer_constant}          {yylval.ival = atoi(yytext);return INT_CONSTANT;}

{space}                     {}
.                         {}
{comment}                  {}
{line_comment}             {}

%%


int yywrap(void){return 1;}