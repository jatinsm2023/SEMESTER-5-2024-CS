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
    PLUS = 262,                    /* PLUS  */
    MINUS = 263,                   /* MINUS  */
    MULTIPLY = 264,                /* MULTIPLY  */
    AND = 265,                     /* AND  */
    TILDA = 266,                   /* TILDA  */
    NOT = 267,                     /* NOT  */
    SIZEOF = 268,                  /* SIZEOF  */
    EXTERN = 269,                  /* EXTERN  */
    STATIC = 270,                  /* STATIC  */
    AUTO = 271,                    /* AUTO  */
    REGISTER = 272,                /* REGISTER  */
    VOID = 273,                    /* VOID  */
    CHAR = 274,                    /* CHAR  */
    SHORT = 275,                   /* SHORT  */
    INT = 276,                     /* INT  */
    LONG = 277,                    /* LONG  */
    FLOAT = 278,                   /* FLOAT  */
    DOUBLE = 279,                  /* DOUBLE  */
    SIGNED = 280,                  /* SIGNED  */
    UNSIGNED = 281,                /* UNSIGNED  */
    BOOL = 282,                    /* BOOL  */
    COMPLEX = 283,                 /* COMPLEX  */
    IMAGINARY = 284,               /* IMAGINARY  */
    CONST = 285,                   /* CONST  */
    RESTRICT = 286,                /* RESTRICT  */
    VOLATILE = 287,                /* VOLATILE  */
    INLINE = 288,                  /* INLINE  */
    ELLIPSIS = 289,                /* ELLIPSIS  */
    CASE = 290,                    /* CASE  */
    DEFAULT = 291,                 /* DEFAULT  */
    IF = 292,                      /* IF  */
    ELSE = 293,                    /* ELSE  */
    SWITCH = 294,                  /* SWITCH  */
    WHILE = 295,                   /* WHILE  */
    DO = 296,                      /* DO  */
    FOR = 297,                     /* FOR  */
    GOTO = 298,                    /* GOTO  */
    CONTINUE = 299,                /* CONTINUE  */
    BREAK = 300,                   /* BREAK  */
    RETURN = 301                   /* RETURN  */
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
#define PLUS 262
#define MINUS 263
#define MULTIPLY 264
#define AND 265
#define TILDA 266
#define NOT 267
#define SIZEOF 268
#define EXTERN 269
#define STATIC 270
#define AUTO 271
#define REGISTER 272
#define VOID 273
#define CHAR 274
#define SHORT 275
#define INT 276
#define LONG 277
#define FLOAT 278
#define DOUBLE 279
#define SIGNED 280
#define UNSIGNED 281
#define BOOL 282
#define COMPLEX 283
#define IMAGINARY 284
#define CONST 285
#define RESTRICT 286
#define VOLATILE 287
#define INLINE 288
#define ELLIPSIS 289
#define CASE 290
#define DEFAULT 291
#define IF 292
#define ELSE 293
#define SWITCH 294
#define WHILE 295
#define DO 296
#define FOR 297
#define GOTO 298
#define CONTINUE 299
#define BREAK 300
#define RETURN 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "expr.y"

    int ival;
    float fval;
    char *sval;
    tree_node* node;

#line 166 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
