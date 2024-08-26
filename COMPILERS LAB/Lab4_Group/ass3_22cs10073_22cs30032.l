%{
    #define KEYWORD 1
    #define IDENTIFIER 2
    #define INTEGER_CONSTANT 3
    #define FLOATING_CONSTANT 4
    #define CHARACTER_CONSTANT 5
    #define STRING_LITERAL 6
    #define PUNCTUATOR 7
    #define SINGLE_LINE_COMMENT 8
    #define MULTI_LINE_COMMENT 9
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

const                   {integer_constant}|{floating_constant}|{character_constant}

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

{singlelinecomment}         {return SINGLE_LINE_COMMENT;}
{multicomment}              {return MULTI_LINE_COMMENT;}
{keywords}                  {return KEYWORD;}
{Identifier}                {return IDENTIFIER;}
{punctuator}                {return PUNCTUATOR;}
{string_literal}            {return STRING_LITERAL;}
{character_constant}        {return CHARACTER_CONSTANT;}
{integer_constant}          {return INTEGER_CONSTANT;}
{floating_constant}         {return FLOATING_CONSTANT;}
{space}                     {}


%%