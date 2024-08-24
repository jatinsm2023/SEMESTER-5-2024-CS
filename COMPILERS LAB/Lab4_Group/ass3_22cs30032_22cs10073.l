%{
    #define COM 1
    #define PUN 2
    #define ESC 3
    #define STR 4
    #define CHAR 5
    #define FR 6
    #define INT 7
    #define ID 8
    #define FL 9
    #define KW 10
%}


commentstart "/*"
commentend "*/"
comment    {commentstart}.*{commentend}
singlelinecomment    "//".*

punctuator ("\.\.\.")|("\.")|("->")|("++")|("--")|("<<")|(">>")|("<=")|(">=")|("==")|("!=")|("&&")|("||")|("\*=")|("/=")|("%=")|("+=")|("-=")|("<<=")|(">>=")|("&=")|("^=")|("|=")|[(){}[\]&\*+\-~!/%<>\^\|\?:;=,#]

escape_sequence  ("\\'")|("\\\"")|("\\?")|("\\\\")|("\\a")|("\\b")|("\\f")|("\\n")|("\\r")|("\\t")|("\\v")
newline "\n"
s_char [^"\\\n]|{escape_sequence}

string_literal \"({s_char}+)*\"

c_char [^'\\\n]|{escape_sequence}

character_constant  '({c_char}+)'

digit   [0-9]
digit_sequence  {digit}+

sign   [+-]

exponent_part   [eE]{sign}?{digit_sequence}

fractional_constant ({digit_sequence}?\.{digit_sequence})|({digit_sequence}\.)

floating_constant  {fractional_constant}({exponent_part})?|{digit_sequence}{exponent_part}

integer_constant {digit_sequence}

Identifier [_a-zA-Z][_a-zA-Z0-9]*

keywords ("auto")|("break")|("case")|("char")|("const")|("continue")|("default")|("do")|("double")|("else")|("enum")|("extern")|("float")|("for")|("goto")|("if")|("inline")|("int")|("long")|("register")|("restrict")|("return")|("short")|("signed")|("sizeof")|("static")|("struct")|("switch")|("typedef")|("union")|("unsigned")|("void")|("volatile")|("while")|("_Bool")|("_Complex")|("_Imaginary")



%%

{comment} {return COM;}
{singlelinecomment} {return COM;}
{punctuator} {return PUN;}
{string_literal} {return STR;}
{character_constant} {return CHAR;}
{floating_constant} {return FL;}
{integer_constant} {return INT;}
{keywords} {return KW;}
{Identifier} {return ID;}

%%