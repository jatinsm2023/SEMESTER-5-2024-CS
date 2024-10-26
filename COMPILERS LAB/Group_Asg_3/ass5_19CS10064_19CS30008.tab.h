/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ASS5_19CS10064_19CS30008_TAB_H_INCLUDED
# define YY_YY_ASS5_19CS10064_19CS30008_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    FLO_CONSTANT = 259,            /* FLO_CONSTANT  */
    CHAR_CONSTANT = 260,           /* CHAR_CONSTANT  */
    INT_CONSTANT = 261,            /* INT_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    SIZEOF = 263,                  /* SIZEOF  */
    EXTERN = 264,                  /* EXTERN  */
    STATIC = 265,                  /* STATIC  */
    AUTO = 266,                    /* AUTO  */
    REGISTER = 267,                /* REGISTER  */
    VOID = 268,                    /* VOID  */
    CHAR = 269,                    /* CHAR  */
    SHORT = 270,                   /* SHORT  */
    INT = 271,                     /* INT  */
    LONG = 272,                    /* LONG  */
    FLOAT = 273,                   /* FLOAT  */
    DOUBLE = 274,                  /* DOUBLE  */
    SIGNED = 275,                  /* SIGNED  */
    UNSIGNED = 276,                /* UNSIGNED  */
    BOOL = 277,                    /* BOOL  */
    COMPLEX = 278,                 /* COMPLEX  */
    IMAGINARY = 279,               /* IMAGINARY  */
    CONST = 280,                   /* CONST  */
    RESTRICT = 281,                /* RESTRICT  */
    VOLATILE = 282,                /* VOLATILE  */
    INLINE = 283,                  /* INLINE  */
    ELLIPSIS = 284,                /* ELLIPSIS  */
    CASE = 285,                    /* CASE  */
    DEFAULT = 286,                 /* DEFAULT  */
    IF = 287,                      /* IF  */
    ELSE = 288,                    /* ELSE  */
    SWITCH = 289,                  /* SWITCH  */
    WHILE = 290,                   /* WHILE  */
    DO = 291,                      /* DO  */
    FOR = 292,                     /* FOR  */
    GOTO = 293,                    /* GOTO  */
    CONTINUE = 294,                /* CONTINUE  */
    BREAK = 295,                   /* BREAK  */
    RETURN = 296,                  /* RETURN  */
    ARROW = 297,                   /* ARROW  */
    INCREMENT = 298,               /* INCREMENT  */
    DECREMENT = 299,               /* DECREMENT  */
    LEFTSHIFT = 300,               /* LEFTSHIFT  */
    RIGHTSHIFT = 301,              /* RIGHTSHIFT  */
    LESSEQUAL = 302,               /* LESSEQUAL  */
    GREATEREQUAL = 303,            /* GREATEREQUAL  */
    DOUBLEEQUAL = 304,             /* DOUBLEEQUAL  */
    NOTEQUAL = 305,                /* NOTEQUAL  */
    DOUBLEAND = 306,               /* DOUBLEAND  */
    DOUBLEOR = 307,                /* DOUBLEOR  */
    PLUSEQUAL = 308,               /* PLUSEQUAL  */
    MINUSEQUAL = 309,              /* MINUSEQUAL  */
    MULTIPLYEQUAL = 310,           /* MULTIPLYEQUAL  */
    DIVEQUAL = 311,                /* DIVEQUAL  */
    MODEQUAL = 312,                /* MODEQUAL  */
    LEFTSHIFTEQUAL = 313,          /* LEFTSHIFTEQUAL  */
    RIGHTSHIFTEQUAL = 314,         /* RIGHTSHIFTEQUAL  */
    ANDEQUAL = 315,                /* ANDEQUAL  */
    OREQUAL = 316,                 /* OREQUAL  */
    XOREQUAL = 317,                /* XOREQUAL  */
    PLUS = 318,                    /* PLUS  */
    MINUS = 319,                   /* MINUS  */
    MULTIPLY = 320,                /* MULTIPLY  */
    DIV = 321,                     /* DIV  */
    MOD = 322,                     /* MOD  */
    TILDA = 323,                   /* TILDA  */
    NOT = 324,                     /* NOT  */
    AND = 325,                     /* AND  */
    EQUAL = 326,                   /* EQUAL  */
    SEMICOLON = 327,               /* SEMICOLON  */
    COMMA = 328,                   /* COMMA  */
    DOT = 329,                     /* DOT  */
    LESS = 330,                    /* LESS  */
    GREATER = 331,                 /* GREATER  */
    OR = 332,                      /* OR  */
    XOR = 333,                     /* XOR  */
    LOWER_THAN_ELSE = 334,         /* LOWER_THAN_ELSE  */
    LEFTPAR = 335,                 /* LEFTPAR  */
    RIGHTPAR = 336,                /* RIGHTPAR  */
    LEFTBRACE = 337,               /* LEFTBRACE  */
    RIGHTBRACE = 338,              /* RIGHTBRACE  */
    LEFTBRACKET = 339,             /* LEFTBRACKET  */
    RIGHTBRACKET = 340,            /* RIGHTBRACKET  */
    COLON = 341,                   /* COLON  */
    QUESTIONMARK = 342             /* QUESTIONMARK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "ass5_19CS10064_19CS30008.y"

    int ival;
    char* charval;
    int instruction;
    char unary_op;
    int numparams;
    expression* expr;
    statement* stmt;
    symbol* syent;
    symboltype* syenttype;
    arraytype* arr;

#line 164 "ass5_19CS10064_19CS30008.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASS5_19CS10064_19CS30008_TAB_H_INCLUDED  */
