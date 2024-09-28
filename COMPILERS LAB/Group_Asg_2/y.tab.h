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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    INT_CONSTANT = 260,            /* INT_CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    SIZEOF = 262,                  /* SIZEOF  */
    EXTERN = 263,                  /* EXTERN  */
    STATIC = 264,                  /* STATIC  */
    AUTO = 265,                    /* AUTO  */
    REGISTER = 266,                /* REGISTER  */
    VOID = 267,                    /* VOID  */
    CHAR = 268,                    /* CHAR  */
    SHORT = 269,                   /* SHORT  */
    INT = 270,                     /* INT  */
    LONG = 271,                    /* LONG  */
    FLOAT = 272,                   /* FLOAT  */
    DOUBLE = 273,                  /* DOUBLE  */
    SIGNED = 274,                  /* SIGNED  */
    UNSIGNED = 275,                /* UNSIGNED  */
    BOOL = 276,                    /* BOOL  */
    COMPLEX = 277,                 /* COMPLEX  */
    IMAGINARY = 278,               /* IMAGINARY  */
    CONST = 279,                   /* CONST  */
    RESTRICT = 280,                /* RESTRICT  */
    VOLATILE = 281,                /* VOLATILE  */
    INLINE = 282,                  /* INLINE  */
    ELLIPSIS = 283,                /* ELLIPSIS  */
    CASE = 284,                    /* CASE  */
    DEFAULT = 285,                 /* DEFAULT  */
    IF = 286,                      /* IF  */
    ELSE = 287,                    /* ELSE  */
    SWITCH = 288,                  /* SWITCH  */
    WHILE = 289,                   /* WHILE  */
    DO = 290,                      /* DO  */
    FOR = 291,                     /* FOR  */
    GOTO = 292,                    /* GOTO  */
    CONTINUE = 293,                /* CONTINUE  */
    BREAK = 294,                   /* BREAK  */
    RETURN = 295,                  /* RETURN  */
    ARROW = 296,                   /* ARROW  */
    INCREMENT = 297,               /* INCREMENT  */
    DECREMENT = 298,               /* DECREMENT  */
    LEFTSHIFT = 299,               /* LEFTSHIFT  */
    RIGHTSHIFT = 300,              /* RIGHTSHIFT  */
    LESSEQUAL = 301,               /* LESSEQUAL  */
    GREATEREQUAL = 302,            /* GREATEREQUAL  */
    DOUBLEEQUAL = 303,             /* DOUBLEEQUAL  */
    NOTEQUAL = 304,                /* NOTEQUAL  */
    DOUBLEAND = 305,               /* DOUBLEAND  */
    DOUBLEOR = 306,                /* DOUBLEOR  */
    PLUSEQUAL = 307,               /* PLUSEQUAL  */
    MINUSEQUAL = 308,              /* MINUSEQUAL  */
    MULTIPLYEQUAL = 309,           /* MULTIPLYEQUAL  */
    DIVEQUAL = 310,                /* DIVEQUAL  */
    MODEQUAL = 311,                /* MODEQUAL  */
    LEFTSHIFTEQUAL = 312,          /* LEFTSHIFTEQUAL  */
    RIGHTSHIFTEQUAL = 313,         /* RIGHTSHIFTEQUAL  */
    ANDEQUAL = 314,                /* ANDEQUAL  */
    OREQUAL = 315,                 /* OREQUAL  */
    XOREQUAL = 316,                /* XOREQUAL  */
    PLUS = 317,                    /* PLUS  */
    MINUS = 318,                   /* MINUS  */
    MULTIPLY = 319,                /* MULTIPLY  */
    DIV = 320,                     /* DIV  */
    MOD = 321,                     /* MOD  */
    TILDA = 322,                   /* TILDA  */
    NOT = 323,                     /* NOT  */
    AND = 324,                     /* AND  */
    EQUAL = 325,                   /* EQUAL  */
    SEMICOLON = 326,               /* SEMICOLON  */
    COMMA = 327,                   /* COMMA  */
    DOT = 328,                     /* DOT  */
    LESS = 329,                    /* LESS  */
    GREATER = 330,                 /* GREATER  */
    OR = 331,                      /* OR  */
    XOR = 332,                     /* XOR  */
    LOWER_THAN_ELSE = 333,         /* LOWER_THAN_ELSE  */
    LEFTPAR = 334,                 /* LEFTPAR  */
    RIGHTPAR = 335,                /* RIGHTPAR  */
    LEFTBRACE = 336,               /* LEFTBRACE  */
    RIGHTBRACE = 337,              /* RIGHTBRACE  */
    LEFTBRACKET = 338,             /* LEFTBRACKET  */
    RIGHTBRACKET = 339,            /* RIGHTBRACKET  */
    COLON = 340,                   /* COLON  */
    QUESTIONMARK = 341             /* QUESTIONMARK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define FLO_CONSTANT 259
#define INT_CONSTANT 260
#define STRING_LITERAL 261
#define SIZEOF 262
#define EXTERN 263
#define STATIC 264
#define AUTO 265
#define REGISTER 266
#define VOID 267
#define CHAR 268
#define SHORT 269
#define INT 270
#define LONG 271
#define FLOAT 272
#define DOUBLE 273
#define SIGNED 274
#define UNSIGNED 275
#define BOOL 276
#define COMPLEX 277
#define IMAGINARY 278
#define CONST 279
#define RESTRICT 280
#define VOLATILE 281
#define INLINE 282
#define ELLIPSIS 283
#define CASE 284
#define DEFAULT 285
#define IF 286
#define ELSE 287
#define SWITCH 288
#define WHILE 289
#define DO 290
#define FOR 291
#define GOTO 292
#define CONTINUE 293
#define BREAK 294
#define RETURN 295
#define ARROW 296
#define INCREMENT 297
#define DECREMENT 298
#define LEFTSHIFT 299
#define RIGHTSHIFT 300
#define LESSEQUAL 301
#define GREATEREQUAL 302
#define DOUBLEEQUAL 303
#define NOTEQUAL 304
#define DOUBLEAND 305
#define DOUBLEOR 306
#define PLUSEQUAL 307
#define MINUSEQUAL 308
#define MULTIPLYEQUAL 309
#define DIVEQUAL 310
#define MODEQUAL 311
#define LEFTSHIFTEQUAL 312
#define RIGHTSHIFTEQUAL 313
#define ANDEQUAL 314
#define OREQUAL 315
#define XOREQUAL 316
#define PLUS 317
#define MINUS 318
#define MULTIPLY 319
#define DIV 320
#define MOD 321
#define TILDA 322
#define NOT 323
#define AND 324
#define EQUAL 325
#define SEMICOLON 326
#define COMMA 327
#define DOT 328
#define LESS 329
#define GREATER 330
#define OR 331
#define XOR 332
#define LOWER_THAN_ELSE 333
#define LEFTPAR 334
#define RIGHTPAR 335
#define LEFTBRACE 336
#define RIGHTBRACE 337
#define LEFTBRACKET 338
#define RIGHTBRACKET 339
#define COLON 340
#define QUESTIONMARK 341

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "tinyC2_22CS30032_22CS10073.y"

    int ival;
    float fval;
    char *sval;
    tree_node* node;

#line 246 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
