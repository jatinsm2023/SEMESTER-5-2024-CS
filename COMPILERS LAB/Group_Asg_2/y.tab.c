/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "expr.y"

    #define YYDEBUG 1
    extern int yydebug;
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

        int yylex();
        void yyerror();


    typedef struct _tree_node{
        char *name;
        union{
            int value;
            float fvalue;
            char *svalue;
        };
        struct _tree_node* child[10];
        int child_count;
    }tree_node;

    tree_node* create_leaf_node(char* name,int value,float fvalue,char* svalue);
    tree_node* create_int_node(char* name,tree_node* child[],int child_count);
   void printtree(tree_node* node,int level);

#line 98 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    LOWER_THAN_ELSE = 333          /* LOWER_THAN_ELSE  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "expr.y"

    int ival;
    float fval;
    char *sval;
    tree_node* node;

#line 314 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_FLO_CONSTANT = 4,               /* FLO_CONSTANT  */
  YYSYMBOL_INT_CONSTANT = 5,               /* INT_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 7,                     /* SIZEOF  */
  YYSYMBOL_EXTERN = 8,                     /* EXTERN  */
  YYSYMBOL_STATIC = 9,                     /* STATIC  */
  YYSYMBOL_AUTO = 10,                      /* AUTO  */
  YYSYMBOL_REGISTER = 11,                  /* REGISTER  */
  YYSYMBOL_VOID = 12,                      /* VOID  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_SHORT = 14,                     /* SHORT  */
  YYSYMBOL_INT = 15,                       /* INT  */
  YYSYMBOL_LONG = 16,                      /* LONG  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 18,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 19,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 20,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 21,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 22,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 23,                 /* IMAGINARY  */
  YYSYMBOL_CONST = 24,                     /* CONST  */
  YYSYMBOL_RESTRICT = 25,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 26,                  /* VOLATILE  */
  YYSYMBOL_INLINE = 27,                    /* INLINE  */
  YYSYMBOL_ELLIPSIS = 28,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_DEFAULT = 30,                   /* DEFAULT  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_DO = 35,                        /* DO  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_GOTO = 37,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 38,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 39,                     /* BREAK  */
  YYSYMBOL_RETURN = 40,                    /* RETURN  */
  YYSYMBOL_ARROW = 41,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 42,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 43,                 /* DECREMENT  */
  YYSYMBOL_LEFTSHIFT = 44,                 /* LEFTSHIFT  */
  YYSYMBOL_RIGHTSHIFT = 45,                /* RIGHTSHIFT  */
  YYSYMBOL_LESSEQUAL = 46,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 47,              /* GREATEREQUAL  */
  YYSYMBOL_DOUBLEEQUAL = 48,               /* DOUBLEEQUAL  */
  YYSYMBOL_NOTEQUAL = 49,                  /* NOTEQUAL  */
  YYSYMBOL_DOUBLEAND = 50,                 /* DOUBLEAND  */
  YYSYMBOL_DOUBLEOR = 51,                  /* DOUBLEOR  */
  YYSYMBOL_PLUSEQUAL = 52,                 /* PLUSEQUAL  */
  YYSYMBOL_MINUSEQUAL = 53,                /* MINUSEQUAL  */
  YYSYMBOL_MULTIPLYEQUAL = 54,             /* MULTIPLYEQUAL  */
  YYSYMBOL_DIVEQUAL = 55,                  /* DIVEQUAL  */
  YYSYMBOL_MODEQUAL = 56,                  /* MODEQUAL  */
  YYSYMBOL_LEFTSHIFTEQUAL = 57,            /* LEFTSHIFTEQUAL  */
  YYSYMBOL_RIGHTSHIFTEQUAL = 58,           /* RIGHTSHIFTEQUAL  */
  YYSYMBOL_ANDEQUAL = 59,                  /* ANDEQUAL  */
  YYSYMBOL_OREQUAL = 60,                   /* OREQUAL  */
  YYSYMBOL_XOREQUAL = 61,                  /* XOREQUAL  */
  YYSYMBOL_PLUS = 62,                      /* PLUS  */
  YYSYMBOL_MINUS = 63,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 64,                  /* MULTIPLY  */
  YYSYMBOL_DIV = 65,                       /* DIV  */
  YYSYMBOL_MOD = 66,                       /* MOD  */
  YYSYMBOL_TILDA = 67,                     /* TILDA  */
  YYSYMBOL_NOT = 68,                       /* NOT  */
  YYSYMBOL_AND = 69,                       /* AND  */
  YYSYMBOL_EQUAL = 70,                     /* EQUAL  */
  YYSYMBOL_SEMICOLON = 71,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 72,                     /* COMMA  */
  YYSYMBOL_DOT = 73,                       /* DOT  */
  YYSYMBOL_LESS = 74,                      /* LESS  */
  YYSYMBOL_GREATER = 75,                   /* GREATER  */
  YYSYMBOL_OR = 76,                        /* OR  */
  YYSYMBOL_XOR = 77,                       /* XOR  */
  YYSYMBOL_LOWER_THAN_ELSE = 78,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_79_ = 79,                       /* '('  */
  YYSYMBOL_80_ = 80,                       /* ')'  */
  YYSYMBOL_81_ = 81,                       /* '['  */
  YYSYMBOL_82_ = 82,                       /* ']'  */
  YYSYMBOL_83_ = 83,                       /* '{'  */
  YYSYMBOL_84_ = 84,                       /* '}'  */
  YYSYMBOL_85_ = 85,                       /* '?'  */
  YYSYMBOL_86_ = 86,                       /* ':'  */
  YYSYMBOL_87_ = 87,                       /* '*'  */
  YYSYMBOL_YYACCEPT = 88,                  /* $accept  */
  YYSYMBOL_primary_expression = 89,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 90,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 91,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 92,          /* unary_expression  */
  YYSYMBOL_unary_operator = 93,            /* unary_operator  */
  YYSYMBOL_cast_expression = 94,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 95, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 96,       /* additive_expression  */
  YYSYMBOL_shift_expression = 97,          /* shift_expression  */
  YYSYMBOL_relational_expression = 98,     /* relational_expression  */
  YYSYMBOL_equality_expression = 99,       /* equality_expression  */
  YYSYMBOL_AND_expression = 100,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 101,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 102,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 103,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 104,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 105,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 106,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 107,      /* assignment_operator  */
  YYSYMBOL_expression = 108,               /* expression  */
  YYSYMBOL_constant_expression = 109,      /* constant_expression  */
  YYSYMBOL_declaration = 110,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 111,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 112,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 113,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 114,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 115,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 116, /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 117,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 118,       /* function_specifier  */
  YYSYMBOL_declarator = 119,               /* declarator  */
  YYSYMBOL_direct_declarator = 120,        /* direct_declarator  */
  YYSYMBOL_pointer = 121,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 122,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 123,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 124,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 125,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 126,          /* identifier_list  */
  YYSYMBOL_type_name = 127,                /* type_name  */
  YYSYMBOL_initializer = 128,              /* initializer  */
  YYSYMBOL_initializer_list = 129,         /* initializer_list  */
  YYSYMBOL_designation = 130,              /* designation  */
  YYSYMBOL_designator_list = 131,          /* designator_list  */
  YYSYMBOL_designator = 132,               /* designator  */
  YYSYMBOL_statement = 133,                /* statement  */
  YYSYMBOL_labeled_statement = 134,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 135,       /* compound_statement  */
  YYSYMBOL_block_item_list = 136,          /* block_item_list  */
  YYSYMBOL_block_item = 137,               /* block_item  */
  YYSYMBOL_expression_statement = 138,     /* expression_statement  */
  YYSYMBOL_selection_statement = 139,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 140,      /* iteration_statement  */
  YYSYMBOL_expressionopt = 141,            /* expressionopt  */
  YYSYMBOL_jump_statement = 142,           /* jump_statement  */
  YYSYMBOL_translation_unit = 143,         /* translation_unit  */
  YYSYMBOL_external_declaration = 144,     /* external_declaration  */
  YYSYMBOL_function_definition = 145,      /* function_definition  */
  YYSYMBOL_declaration_list = 146          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  329

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      79,    80,    87,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,     2,
       2,     2,     2,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,    84,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    63,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    77,    78,    82,    83,
      84,    85,    86,    87,    90,    91,    92,    93,    94,    95,
      98,    99,   102,   103,   104,   105,   108,   109,   110,   113,
     114,   115,   118,   119,   120,   121,   122,   125,   126,   127,
     129,   130,   133,   134,   137,   138,   141,   142,   145,   146,
     149,   150,   153,   154,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   170,   171,   173,   178,   179,
     182,   183,   184,   185,   186,   187,   188,   189,   192,   193,
     196,   197,   200,   201,   202,   203,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   220,   221,
     222,   223,   226,   227,   228,   231,   234,   235,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   254,   255,   256,   257,   260,   261,   264,   265,
     268,   269,   272,   273,   276,   277,   280,   283,   284,   285,
     288,   289,   290,   291,   294,   297,   298,   301,   302,   307,
     308,   309,   310,   311,   312,   315,   316,   317,   320,   321,
     324,   325,   328,   329,   332,   333,   336,   337,   338,   341,
     342,   343,   344,   347,   348,   351,   352,   353,   354,   355,
     361,   362,   365,   366,   369,   370,   373,   374
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "FLO_CONSTANT", "INT_CONSTANT", "STRING_LITERAL", "SIZEOF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "VOID", "CHAR", "SHORT", "INT", "LONG",
  "FLOAT", "DOUBLE", "SIGNED", "UNSIGNED", "BOOL", "COMPLEX", "IMAGINARY",
  "CONST", "RESTRICT", "VOLATILE", "INLINE", "ELLIPSIS", "CASE", "DEFAULT",
  "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "ARROW", "INCREMENT", "DECREMENT", "LEFTSHIFT",
  "RIGHTSHIFT", "LESSEQUAL", "GREATEREQUAL", "DOUBLEEQUAL", "NOTEQUAL",
  "DOUBLEAND", "DOUBLEOR", "PLUSEQUAL", "MINUSEQUAL", "MULTIPLYEQUAL",
  "DIVEQUAL", "MODEQUAL", "LEFTSHIFTEQUAL", "RIGHTSHIFTEQUAL", "ANDEQUAL",
  "OREQUAL", "XOREQUAL", "PLUS", "MINUS", "MULTIPLY", "DIV", "MOD",
  "TILDA", "NOT", "AND", "EQUAL", "SEMICOLON", "COMMA", "DOT", "LESS",
  "GREATER", "OR", "XOR", "LOWER_THAN_ELSE", "'('", "')'", "'['", "']'",
  "'{'", "'}'", "'?'", "':'", "'*'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "AND_expression", "exclusive_OR_expression",
  "inclusive_OR_expression", "logical_AND_expression",
  "logical_OR_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "expressionopt",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1130,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,     1,  1130,  1130,  1130,  1130,  1110,  -255,  -255,
    -255,  -255,    10,    -6,    38,  -255,  1014,    -4,    13,  -255,
    -255,  -255,  -255,  -255,  -255,   -34,  -255,  -255,    -6,  -255,
      10,   607,   341,  -255,     1,  -255,  1034,   726,   188,    -4,
    -255,  -255,  -255,  -255,     9,  -255,  -255,  -255,  -255,   865,
     896,   896,  -255,  -255,  -255,  -255,  -255,  -255,   819,   578,
    -255,   -12,   120,   942,  -255,    86,    53,   119,   -20,   154,
     -26,    49,    17,    23,   -41,  -255,  -255,  -255,    82,   942,
     103,   132,   138,   139,   565,   143,   195,   152,   153,   852,
    -255,  -255,  -255,   134,  -255,  -255,  -255,  -255,   423,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,    10,   156,
     160,  -255,    -2,   785,  -255,   151,   155,   256,   819,  -255,
     819,  -255,  -255,     4,   271,  -255,   271,   159,   240,   942,
    -255,   -22,   607,   -13,  -255,   241,  -255,  -255,   243,   942,
     942,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,   942,  -255,  -255,   942,   942,   942,   942,   942,
     942,   942,   942,   942,   942,   942,   942,   942,   942,   942,
     942,   942,   942,   942,   565,  -255,   161,   565,   942,   942,
     942,   215,   751,   182,  -255,  -255,  -255,   136,  -255,   942,
    -255,  -255,  -255,  -255,  1054,   251,  -255,   176,   785,  -255,
    -255,   942,  -255,   186,   187,   191,   192,  -255,  -255,  -255,
     649,  -255,   194,   466,  -255,  -255,  -255,  -255,  -255,  -255,
      40,  -255,   -37,  -255,  -255,  -255,  -255,    86,    86,    53,
      53,   119,   119,   119,   119,   -20,   -20,   154,   -26,    49,
      17,    23,   -30,  -255,   565,  -255,    42,    75,    85,   198,
     201,   942,   203,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
     196,   197,  -255,  -255,   217,   217,   578,  -255,  -255,  -255,
    -255,   607,   942,  -255,  -255,   942,  -255,   565,   565,   565,
     942,   230,   942,  -255,  -255,    11,  -255,  -255,  -255,   270,
    -255,  -255,    89,   942,   232,   494,  -255,   565,   233,   225,
     942,  -255,  -255,  -255,   565,   226,  -255,   565,  -255
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   112,   113,   114,
     115,   193,     0,    80,    82,    84,    86,     0,   190,   192,
     118,    79,     0,   132,     0,    88,    91,   117,     0,    81,
      83,    85,    87,     1,   191,     0,   136,   134,   133,    78,
       0,     0,     0,   196,     0,   194,     0,     0,     0,   116,
     119,   137,   135,    89,    91,     2,     3,     4,     5,     0,
       0,     0,    24,    25,    29,    27,    26,    28,     0,     0,
       7,    18,    30,     0,    32,    36,    39,    42,    47,    50,
      52,    54,    56,    58,    60,    62,   147,    90,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     174,   168,    75,     0,   172,   173,   159,   160,     0,   170,
     161,   162,   163,   164,   197,   195,   144,   131,   143,     0,
     138,   140,     0,     0,   120,     0,     0,     0,     0,    22,
       0,    19,    20,     0,   108,   146,   110,     0,     0,     0,
     150,     0,     0,     0,   155,     0,    12,    13,     0,     0,
       0,    68,    69,    65,    66,    67,    70,    71,    72,    74,
      73,    64,     0,    30,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,   183,     0,   186,   187,   188,     0,   175,     0,
     169,   171,   142,   129,     0,     0,   130,     0,     0,   127,
     122,     0,   121,     0,     0,     0,     0,     6,   109,   111,
       0,   158,     0,     0,   148,   151,   154,   156,    11,    10,
       0,    16,     0,    63,    33,    34,    35,    37,    38,    40,
      41,    45,    46,    43,    44,    48,    49,    51,    53,    55,
      57,    59,     0,   165,     0,   167,     0,     0,     0,     0,
     184,   183,     0,   185,   189,    76,   139,   141,   145,   125,
       0,     0,   128,   123,    23,     0,     0,    31,   157,   149,
     152,     0,     0,     9,     8,     0,   166,     0,     0,     0,
       0,     0,   183,   124,   126,     0,   153,    17,    61,   176,
     178,   179,     0,   183,     0,     0,    14,     0,     0,     0,
     183,    15,   177,   180,     0,     0,   182,     0,   181
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,  -255,   -47,  -255,   -71,    31,    35,     3,
      34,   121,   118,   122,   117,   123,  -255,   -91,   -51,  -255,
     -75,   162,   -31,    14,  -255,   260,  -255,   -27,   -46,    16,
    -255,   -21,   275,    -1,   -43,  -255,  -255,   100,  -255,     8,
     -49,    30,  -224,  -255,   164,   -98,  -255,    -3,  -255,   204,
    -255,  -255,  -255,  -254,  -255,  -255,   294,  -255,  -255
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    80,    81,   240,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,   112,   172,
     113,   196,    21,    54,    34,    35,    23,    24,   145,    25,
      26,    64,    37,    38,    48,   129,   130,   131,   132,   147,
     150,   151,   152,   153,   154,   115,   116,   117,   118,   119,
     120,   121,   122,   272,   123,    27,    28,    29,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,    36,    97,   143,    30,    53,   201,   136,   195,   291,
     192,    45,   174,    30,    22,   137,    30,   301,    17,    18,
      19,   114,   139,   141,   142,   124,   182,   183,    96,   155,
     156,   157,    47,    55,   207,   209,   173,    39,    40,    41,
      42,    22,   209,   188,   193,   294,    60,    62,   314,    46,
     233,   144,   173,   125,   184,   185,   295,   236,   195,   319,
     148,   158,   234,   143,    61,   143,   325,   159,   149,   160,
     215,   128,    31,   191,    46,    57,   209,    58,   216,    51,
      32,    33,   217,   315,   227,   242,   224,   114,    33,    32,
     218,   291,    32,   190,   146,   316,   263,    33,   228,   265,
     229,    96,   173,   235,   244,   245,   246,   212,   241,    49,
      50,   144,   292,   144,   209,   178,   179,   144,   262,   144,
     293,   243,   297,   266,   267,   268,   189,   270,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   225,   209,   226,    46,
     175,   176,   177,    61,   146,   298,   146,   209,   275,   287,
     146,   209,   146,   180,   181,   299,   296,   280,   194,   318,
     281,   271,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,    96,   173,   290,   251,   252,   253,   254,   197,
     171,    65,    66,    67,    68,    69,   270,   133,   203,   309,
     310,   311,   186,   187,   308,   208,   209,   274,   209,   247,
     248,   198,    17,    18,    19,   249,   250,   199,   200,   322,
     255,   256,   202,   204,   205,   312,   326,   270,   128,   328,
      70,    71,   214,   219,    61,    96,   213,   220,   270,   230,
      96,   307,   306,   231,   238,   270,   239,   264,   173,   269,
      72,    73,    74,   273,   278,    75,    76,    77,   279,    65,
      66,    67,    68,    69,    96,   221,   290,    78,   282,   283,
     134,   284,   285,   209,   302,   135,   288,   300,   303,   304,
      17,    18,    19,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    70,    71,
     286,   313,   317,   320,   323,   324,   327,   258,   260,   257,
      63,   232,   259,    59,   277,   261,   305,   237,    72,    73,
      74,    44,   211,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,   222,     0,
       0,     0,     0,   223,    98,    66,    67,    68,    69,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
      99,   100,   101,     0,   102,   103,   104,   105,   106,   107,
     108,   109,     0,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,     0,     0,    75,    76,
      77,     0,   110,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,    52,   111,    98,    66,    67,    68,
      69,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,    99,   100,   101,     0,   102,   103,   104,   105,
     106,   107,   108,   109,     0,    70,    71,     0,     0,    65,
      66,    67,    68,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,     0,     0,
      75,    76,    77,     0,   110,     0,     0,    65,    66,    67,
      68,    69,    78,     0,     0,     0,    52,   210,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,     0,     0,    75,    76,    77,    70,    71,     0,   148,
       0,     0,     0,     0,     0,    78,     0,   149,     0,    79,
     289,     0,     0,     0,     0,     0,    72,    73,    74,     0,
       0,    75,    76,    77,     0,     0,     0,   148,    98,    66,
      67,    68,    69,    78,     0,   149,     0,    79,   321,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   101,     0,   102,   103,
     104,   105,   106,   107,   108,   109,     0,    70,    71,     0,
      65,    66,    67,    68,    69,     0,     0,     0,     0,     0,
      70,    71,     0,     0,     0,     0,     0,    72,    73,    74,
       0,     0,    75,    76,    77,     0,   110,     0,     0,     0,
      72,    73,    74,     0,    78,    75,    76,    77,    52,    70,
      71,   148,    65,    66,    67,    68,    69,    78,     0,   149,
       0,    79,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,     0,     0,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
      79,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,     0,     0,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,   126,
       0,     0,   286,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    65,    66,    67,    68,    69,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   127,     0,     0,    17,
      18,    19,     0,    72,    73,    74,     0,     0,    75,    76,
      77,     0,    65,    66,    67,    68,    69,    70,    71,     0,
      78,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,    72,    73,    74,
       0,     0,    75,    76,    77,    65,    66,    67,    68,    69,
       0,    70,    71,     0,    78,     0,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,     0,     0,    75,    76,    77,     0,
       0,     0,     0,     0,    70,    71,     0,     0,    78,    65,
      66,    67,    68,    69,     0,     0,     0,    70,    71,     0,
       0,     0,     0,     0,    72,    73,    74,     0,     0,    75,
      76,    77,     0,   206,     0,     0,     0,    72,    73,    74,
       0,    78,    75,    76,    77,     0,     0,     0,    70,    71,
       0,     0,     0,     0,   138,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,     0,     0,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,     0,     0,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   276,     0,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,    52,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
      51,    22,    51,    78,     3,    36,   104,    58,    99,   233,
      51,    32,    83,     3,     0,    58,     3,   271,    24,    25,
      26,    52,    69,    70,    71,    56,    46,    47,    79,    41,
      42,    43,    33,    36,   109,    72,    83,    23,    24,    25,
      26,    27,    72,    69,    85,    82,    80,    48,   302,    33,
      72,    78,    99,    56,    74,    75,    86,    70,   149,   313,
      73,    73,    84,   138,    48,   140,   320,    79,    81,    81,
      72,    57,    71,    50,    58,    79,    72,    81,    80,    70,
      79,    87,   133,    72,    80,   160,   137,   118,    87,    79,
     133,   315,    79,    76,    78,    84,   194,    87,   144,   197,
     146,   152,   149,   152,   175,   176,   177,   128,   159,    71,
      72,   138,    72,   140,    72,    62,    63,   144,   193,   146,
      80,   172,    80,   198,   199,   200,    77,   202,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   138,    72,   140,   133,
      64,    65,    66,   137,   138,    80,   140,    72,   209,   230,
     144,    72,   146,    44,    45,    80,   264,   218,    86,    80,
     221,   202,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,   233,   230,   233,   182,   183,   184,   185,    86,
      70,     3,     4,     5,     6,     7,   271,     9,     3,   297,
     298,   299,    48,    49,   295,    71,    72,    71,    72,   178,
     179,    79,    24,    25,    26,   180,   181,    79,    79,   317,
     186,   187,    79,    71,    71,   300,   324,   302,   214,   327,
      42,    43,    72,    82,   218,   286,    80,    82,   313,    80,
     291,   292,   291,     3,     3,   320,     3,    86,   295,    34,
      62,    63,    64,    71,     3,    67,    68,    69,    82,     3,
       4,     5,     6,     7,   315,     9,   315,    79,    82,    82,
      82,    80,    80,    72,    71,    87,    82,    79,    82,    82,
      24,    25,    26,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    42,    43,
      83,    71,    32,    71,    71,    80,    80,   189,   191,   188,
      50,   149,   190,    38,   214,   192,   286,   153,    62,    63,
      64,    27,   118,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    -1,    -1,    67,    68,
      69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    83,    84,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,
      67,    68,    69,    -1,    71,    -1,    -1,     3,     4,     5,
       6,     7,    79,    -1,    -1,    -1,    83,    84,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    -1,    -1,    67,    68,    69,    42,    43,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    73,     3,     4,
       5,     6,     7,    79,    -1,    81,    -1,    83,    84,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      -1,    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,
      62,    63,    64,    -1,    79,    67,    68,    69,    83,    42,
      43,    73,     3,     4,     5,     6,     7,    79,    -1,    81,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      83,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,     3,
      -1,    -1,    83,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    24,
      25,    26,    -1,    62,    63,    64,    -1,    -1,    67,    68,
      69,    -1,     3,     4,     5,     6,     7,    42,    43,    -1,
      79,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    62,    63,    64,
      -1,    -1,    67,    68,    69,     3,     4,     5,     6,     7,
      -1,    42,    43,    -1,    79,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    79,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,    67,
      68,    69,    -1,    71,    -1,    -1,    -1,    62,    63,    64,
      -1,    79,    67,    68,    69,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    79,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,    -1,    -1,    -1,    -1,    -1,    -1,    83,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   110,   111,   114,   115,   117,   118,   143,   144,   145,
       3,    71,    79,    87,   112,   113,   119,   120,   121,   111,
     111,   111,   111,     0,   144,   119,   117,   121,   122,    71,
      72,    70,    83,   110,   111,   135,   146,    79,    81,   120,
      80,   117,   121,   113,   119,     3,     4,     5,     6,     7,
      42,    43,    62,    63,    64,    67,    68,    69,    79,    83,
      89,    90,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   128,     3,    29,
      30,    31,    33,    34,    35,    36,    37,    38,    39,    40,
      71,    84,   106,   108,   110,   133,   134,   135,   136,   137,
     138,   139,   140,   142,   110,   135,     3,    80,   111,   123,
     124,   125,   126,     9,    82,    87,   106,   122,    79,    92,
      79,    92,    92,   108,   115,   116,   117,   127,    73,    81,
     128,   129,   130,   131,   132,    41,    42,    43,    73,    79,
      81,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    70,   107,    92,    94,    64,    65,    66,    62,    63,
      44,    45,    46,    47,    74,    75,    48,    49,    69,    77,
      76,    50,    51,    85,    86,   105,   109,    86,    79,    79,
      79,   133,    79,     3,    71,    71,    71,   108,    71,    72,
      84,   137,   119,    80,    72,    72,    80,   106,   122,    82,
      82,     9,    82,    87,   106,   127,   127,    80,   116,   116,
      80,     3,   109,    72,    84,   128,    70,   132,     3,     3,
      91,   106,   108,   106,    94,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    99,   100,   101,
     102,   103,   108,   133,    86,   133,   108,   108,   108,    34,
     108,   110,   141,    71,    71,   106,    28,   125,     3,    82,
     106,   106,    82,    82,    80,    80,    83,    94,    82,    84,
     128,   130,    72,    80,    82,    86,   133,    80,    80,    80,
      79,   141,    71,    82,    82,   129,   128,   106,   105,   133,
     133,   133,   108,    71,   141,    72,    84,    32,    80,   141,
      71,    84,   133,    71,    80,   141,   133,    80,   133
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    97,
      97,    97,    98,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   112,   112,
     113,   113,   114,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     116,   116,   117,   117,   117,   118,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   128,   128,   128,
     129,   129,   129,   129,   130,   131,   131,   132,   132,   133,
     133,   133,   133,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   140,
     140,   140,   140,   141,   141,   142,   142,   142,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     3,
       3,     4,     4,     5,     6,     5,     6,     4,     5,     4,
       4,     3,     1,     2,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     1,     3,     4,
       1,     2,     3,     4,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       1,     2,     1,     1,     1,     2,     5,     7,     5,     5,
       7,     9,     8,     0,     1,     3,     2,     2,     2,     3,
       1,     2,     1,     1,     3,     4,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 59 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1857 "y.tab.c"
    break;

  case 3: /* primary_expression: FLO_CONSTANT  */
#line 60 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("FLO_CONSTANT",-1,(yyvsp[0].fval),NULL)};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1863 "y.tab.c"
    break;

  case 4: /* primary_expression: INT_CONSTANT  */
#line 61 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("INT_CONSTANT",(yyvsp[0].ival),-1,NULL)};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1869 "y.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 62 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("STR_CONST",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1875 "y.tab.c"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 63 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("primary_expression",arr,3);}
#line 1881 "y.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 66 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("postfix_expression",arr,1);}
#line 1887 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 67 "expr.y"
                                                                            {tree_node* arr[]= {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("postfix_expression",arr,4);}
#line 1893 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 68 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("postfix_expression",arr,4);}
#line 1899 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 69 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1905 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 70 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("->",1,-1,"->"),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1911 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INCREMENT  */
#line 71 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node("INCREMENT",-1,-1,"++")};(yyval.node)=create_int_node("postfix_expression",arr,2);}
#line 1917 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DECREMENT  */
#line 72 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node("DECREMENT",-1,-1,"-")};(yyval.node)=create_int_node("postfix_expression",arr,2);}
#line 1923 "y.tab.c"
    break;

  case 14: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 73 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("postfix_expression",arr,6);}
#line 1929 "y.tab.c"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list COMMA '}'  */
#line 74 "expr.y"
                                                                              {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-5].node),create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),(yyvsp[-2].node),create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("postfix_expression",arr,6);}
#line 1935 "y.tab.c"
    break;

  case 16: /* argument_expression_list: assignment_expression  */
#line 77 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("argument_expression_list",arr,1);}
#line 1941 "y.tab.c"
    break;

  case 17: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 78 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("argument_expression_list",arr,3);}
#line 1947 "y.tab.c"
    break;

  case 18: /* unary_expression: postfix_expression  */
#line 82 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,1);}
#line 1953 "y.tab.c"
    break;

  case 19: /* unary_expression: INCREMENT unary_expression  */
#line 83 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("INCREMENT",-1,-1,"++"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,3);}
#line 1959 "y.tab.c"
    break;

  case 20: /* unary_expression: DECREMENT unary_expression  */
#line 84 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("DECREMENT",-1,-1,"--"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,3);}
#line 1965 "y.tab.c"
    break;

  case 21: /* unary_expression: unary_operator cast_expression  */
#line 85 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,2);}
#line 1971 "y.tab.c"
    break;

  case 22: /* unary_expression: SIZEOF unary_expression  */
#line 86 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,2);}
#line 1977 "y.tab.c"
    break;

  case 23: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 87 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("unary_expression",arr,4);}
#line 1983 "y.tab.c"
    break;

  case 24: /* unary_operator: PLUS  */
#line 90 "expr.y"
                                                                             {tree_node* arr[]= {create_leaf_node("+",-1,-1,"+")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1989 "y.tab.c"
    break;

  case 25: /* unary_operator: MINUS  */
#line 91 "expr.y"
                                                                           {tree_node* arr[]= {create_leaf_node("-",-1,-1,"-")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1995 "y.tab.c"
    break;

  case 26: /* unary_operator: NOT  */
#line 92 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("!",-1,-1,"!")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 2001 "y.tab.c"
    break;

  case 27: /* unary_operator: TILDA  */
#line 93 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("~",-1,-1,"~")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 2007 "y.tab.c"
    break;

  case 28: /* unary_operator: AND  */
#line 94 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("&",-1,-1,"&")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 2013 "y.tab.c"
    break;

  case 29: /* unary_operator: MULTIPLY  */
#line 95 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("*",-1,-1,"*")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 2019 "y.tab.c"
    break;

  case 30: /* cast_expression: unary_expression  */
#line 98 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("cast_expression",arr,1);}
#line 2025 "y.tab.c"
    break;

  case 31: /* cast_expression: '(' type_name ')' cast_expression  */
#line 99 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("cast_expression",arr,4);}
#line 2031 "y.tab.c"
    break;

  case 32: /* multiplicative_expression: cast_expression  */
#line 102 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,1);}
#line 2037 "y.tab.c"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 103 "expr.y"
                                                                                 {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 2043 "y.tab.c"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 104 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("/",-1,-1,"/"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 2049 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 105 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("%",-1,-1,"%"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 2055 "y.tab.c"
    break;

  case 36: /* additive_expression: multiplicative_expression  */
#line 108 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,1);}
#line 2061 "y.tab.c"
    break;

  case 37: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 109 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("+",-1,-1,"+"),(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,3);}
#line 2067 "y.tab.c"
    break;

  case 38: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 110 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("-",-1,-1,"-"),(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,3);}
#line 2073 "y.tab.c"
    break;

  case 39: /* shift_expression: additive_expression  */
#line 113 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,1);}
#line 2079 "y.tab.c"
    break;

  case 40: /* shift_expression: shift_expression LEFTSHIFT additive_expression  */
#line 114 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("<<",-1,-1,"<<"),(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,3);}
#line 2085 "y.tab.c"
    break;

  case 41: /* shift_expression: shift_expression RIGHTSHIFT additive_expression  */
#line 115 "expr.y"
                                                                               {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(">>",-1,-1,">>"),(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,3);}
#line 2091 "y.tab.c"
    break;

  case 42: /* relational_expression: shift_expression  */
#line 118 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,1);}
#line 2097 "y.tab.c"
    break;

  case 43: /* relational_expression: relational_expression LESS shift_expression  */
#line 119 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("<",-1,-1,"<"),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2103 "y.tab.c"
    break;

  case 44: /* relational_expression: relational_expression GREATER shift_expression  */
#line 120 "expr.y"
                                                                                {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(">",-1,-1,">"),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2109 "y.tab.c"
    break;

  case 45: /* relational_expression: relational_expression LESSEQUAL shift_expression  */
#line 121 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("<=",-1,-1,"<="),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2115 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression GREATEREQUAL shift_expression  */
#line 122 "expr.y"
                                                                                 {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(">=",-1,-1,">="),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2121 "y.tab.c"
    break;

  case 47: /* equality_expression: relational_expression  */
#line 125 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,1);}
#line 2127 "y.tab.c"
    break;

  case 48: /* equality_expression: equality_expression DOUBLEEQUAL relational_expression  */
#line 126 "expr.y"
                                                                                {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("==",-1,-1,"=="),(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,3);}
#line 2133 "y.tab.c"
    break;

  case 49: /* equality_expression: equality_expression NOTEQUAL relational_expression  */
#line 127 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("!=",-1,-1,"!="),(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,3);}
#line 2139 "y.tab.c"
    break;

  case 50: /* AND_expression: equality_expression  */
#line 129 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("AND_expression",arr,1);}
#line 2145 "y.tab.c"
    break;

  case 51: /* AND_expression: AND_expression AND equality_expression  */
#line 130 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("&",-1,-1,"&"),(yyvsp[0].node)};(yyval.node)=create_int_node("AND_expression",arr,3);}
#line 2151 "y.tab.c"
    break;

  case 52: /* exclusive_OR_expression: AND_expression  */
#line 133 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("exclusive_OR_expression",arr,1);}
#line 2157 "y.tab.c"
    break;

  case 53: /* exclusive_OR_expression: exclusive_OR_expression XOR AND_expression  */
#line 134 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("^",-1,-1,"^"),(yyvsp[0].node)};(yyval.node)=create_int_node("exclusive_OR_expression",arr,3);}
#line 2163 "y.tab.c"
    break;

  case 54: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 137 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("inclusive_OR_expression",arr,1);}
#line 2169 "y.tab.c"
    break;

  case 55: /* inclusive_OR_expression: inclusive_OR_expression OR exclusive_OR_expression  */
#line 138 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("|",-1,-1,"|"),(yyvsp[0].node)};(yyval.node)=create_int_node("inclusive_OR_expression",arr,3);}
#line 2175 "y.tab.c"
    break;

  case 56: /* logical_AND_expression: inclusive_OR_expression  */
#line 141 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("logical_AND_expression",arr,1);}
#line 2181 "y.tab.c"
    break;

  case 57: /* logical_AND_expression: logical_AND_expression DOUBLEAND inclusive_OR_expression  */
#line 142 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("&&",-1,-1,"&&"),(yyvsp[0].node)};(yyval.node)=create_int_node("logical_AND_expression",arr,3);}
#line 2187 "y.tab.c"
    break;

  case 58: /* logical_OR_expression: logical_AND_expression  */
#line 145 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("logical_OR_expression",arr,1);}
#line 2193 "y.tab.c"
    break;

  case 59: /* logical_OR_expression: logical_OR_expression DOUBLEOR logical_AND_expression  */
#line 146 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("||",-1,-1,"||"),(yyvsp[0].node)};(yyval.node)=create_int_node("logical_OR_expression",arr,3);}
#line 2199 "y.tab.c"
    break;

  case 60: /* conditional_expression: logical_OR_expression  */
#line 149 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("conditional_expression",arr,1);}
#line 2205 "y.tab.c"
    break;

  case 61: /* conditional_expression: logical_OR_expression '?' expression ':' conditional_expression  */
#line 150 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("?",-1,-1,"?"),(yyvsp[-2].node),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("conditional_expression",arr,5);}
#line 2211 "y.tab.c"
    break;

  case 62: /* assignment_expression: conditional_expression  */
#line 153 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("assignment_expression",arr,1);}
#line 2217 "y.tab.c"
    break;

  case 63: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 154 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("assignment_expression",arr,3);}
#line 2223 "y.tab.c"
    break;

  case 64: /* assignment_operator: EQUAL  */
#line 157 "expr.y"
                                                                              {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2229 "y.tab.c"
    break;

  case 65: /* assignment_operator: MULTIPLYEQUAL  */
#line 158 "expr.y"
                                                                                  {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"*=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2235 "y.tab.c"
    break;

  case 66: /* assignment_operator: DIVEQUAL  */
#line 159 "expr.y"
                                                                             {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"/=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2241 "y.tab.c"
    break;

  case 67: /* assignment_operator: MODEQUAL  */
#line 160 "expr.y"
                                                                             {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"%=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2247 "y.tab.c"
    break;

  case 68: /* assignment_operator: PLUSEQUAL  */
#line 161 "expr.y"
                                                                              {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"+=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2253 "y.tab.c"
    break;

  case 69: /* assignment_operator: MINUSEQUAL  */
#line 162 "expr.y"
                                                                               {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"-=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2259 "y.tab.c"
    break;

  case 70: /* assignment_operator: LEFTSHIFTEQUAL  */
#line 163 "expr.y"
                                                                               {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"<<=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2265 "y.tab.c"
    break;

  case 71: /* assignment_operator: RIGHTSHIFTEQUAL  */
#line 164 "expr.y"
                                                                                {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,">>=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2271 "y.tab.c"
    break;

  case 72: /* assignment_operator: ANDEQUAL  */
#line 165 "expr.y"
                                                                             {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"&=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2277 "y.tab.c"
    break;

  case 73: /* assignment_operator: XOREQUAL  */
#line 166 "expr.y"
                                                                             {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"^=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2283 "y.tab.c"
    break;

  case 74: /* assignment_operator: OREQUAL  */
#line 167 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("OPERATOR",-1,-1,"|=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2289 "y.tab.c"
    break;

  case 75: /* expression: assignment_expression  */
#line 170 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("expression",arr,1); printtree((yyval.node),0);}
#line 2295 "y.tab.c"
    break;

  case 76: /* expression: expression COMMA assignment_expression  */
#line 171 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("COMMA",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("expression",arr,3);}
#line 2301 "y.tab.c"
    break;

  case 77: /* constant_expression: conditional_expression  */
#line 173 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("constant_expression",arr,1);}
#line 2307 "y.tab.c"
    break;

  case 78: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 178 "expr.y"
                                                                                  {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("declaration",arr,3);}
#line 2313 "y.tab.c"
    break;

  case 79: /* declaration: declaration_specifiers SEMICOLON  */
#line 179 "expr.y"
                                                                                 {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("declaration",arr,2);}
#line 2319 "y.tab.c"
    break;

  case 80: /* declaration_specifiers: storage_class_specifier  */
#line 182 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2325 "y.tab.c"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 183 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2331 "y.tab.c"
    break;

  case 82: /* declaration_specifiers: type_specifier  */
#line 184 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2337 "y.tab.c"
    break;

  case 83: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 185 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2343 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: type_qualifier  */
#line 186 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2349 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 187 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2355 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: function_specifier  */
#line 188 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2361 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 189 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2367 "y.tab.c"
    break;

  case 88: /* init_declarator_list: init_declarator  */
#line 192 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator_list",arr,1);}
#line 2373 "y.tab.c"
    break;

  case 89: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 193 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator_list",arr,3);}
#line 2379 "y.tab.c"
    break;

  case 90: /* init_declarator: declarator EQUAL initializer  */
#line 196 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("=",1,-1,"="),(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator",arr,3);}
#line 2385 "y.tab.c"
    break;

  case 91: /* init_declarator: declarator  */
#line 197 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator",arr,1);}
#line 2391 "y.tab.c"
    break;

  case 92: /* storage_class_specifier: EXTERN  */
#line 200 "expr.y"
                                                                                        {tree_node* arr[] = {create_leaf_node("EXTERN",-1,-1,"EXTERN")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2397 "y.tab.c"
    break;

  case 93: /* storage_class_specifier: STATIC  */
#line 201 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("STATIC",-1,-1,"STATIC")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2403 "y.tab.c"
    break;

  case 94: /* storage_class_specifier: AUTO  */
#line 202 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("AUTO",-1,-1,"AUTO")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2409 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: REGISTER  */
#line 203 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("REGISTER",-1,-1,"REGISTER")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2415 "y.tab.c"
    break;

  case 96: /* type_specifier: VOID  */
#line 206 "expr.y"
                                                                                 {tree_node* arr[] = {create_leaf_node("VOID",-1,-1,"VOID")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2421 "y.tab.c"
    break;

  case 97: /* type_specifier: CHAR  */
#line 207 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("CHAR",-1,-1,"CHAR")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2427 "y.tab.c"
    break;

  case 98: /* type_specifier: SHORT  */
#line 208 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("SHORT",-1,-1,"SHORT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2433 "y.tab.c"
    break;

  case 99: /* type_specifier: INT  */
#line 209 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("INT",-1,-1,"INT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2439 "y.tab.c"
    break;

  case 100: /* type_specifier: LONG  */
#line 210 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("LONG",-1,-1,"LONG")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2445 "y.tab.c"
    break;

  case 101: /* type_specifier: FLOAT  */
#line 211 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("FLOAT",-1,-1,"FLOAT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2451 "y.tab.c"
    break;

  case 102: /* type_specifier: DOUBLE  */
#line 212 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("DOUBLE",-1,-1,"DOUBLE")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2457 "y.tab.c"
    break;

  case 103: /* type_specifier: SIGNED  */
#line 213 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("SIGNED",-1,-1,"SIGNED")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2463 "y.tab.c"
    break;

  case 104: /* type_specifier: UNSIGNED  */
#line 214 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("UNSIGNED",-1,-1,"UNSIGNED")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2469 "y.tab.c"
    break;

  case 105: /* type_specifier: BOOL  */
#line 215 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("BOOL",-1,-1,"BOOL")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2475 "y.tab.c"
    break;

  case 106: /* type_specifier: COMPLEX  */
#line 216 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("COMPLEX",-1,-1,"COMPLEX")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2481 "y.tab.c"
    break;

  case 107: /* type_specifier: IMAGINARY  */
#line 217 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IMAGINARY",-1,-1,"IMAGINARY")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2487 "y.tab.c"
    break;

  case 108: /* specifier_qualifier_list: type_specifier  */
#line 220 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,1);}
#line 2493 "y.tab.c"
    break;

  case 109: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 221 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,2);}
#line 2499 "y.tab.c"
    break;

  case 110: /* specifier_qualifier_list: type_qualifier  */
#line 222 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,1);}
#line 2505 "y.tab.c"
    break;

  case 111: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 223 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,2);}
#line 2511 "y.tab.c"
    break;

  case 112: /* type_qualifier: CONST  */
#line 226 "expr.y"
                                                                              {tree_node* arr[] = {create_leaf_node("CONST",-1,-1,"CONST")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2517 "y.tab.c"
    break;

  case 113: /* type_qualifier: RESTRICT  */
#line 227 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("RESTRICT",-1,-1,"RESTRICT")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2523 "y.tab.c"
    break;

  case 114: /* type_qualifier: VOLATILE  */
#line 228 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("VOLATILE",-1,-1,"VOLATILE")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2529 "y.tab.c"
    break;

  case 115: /* function_specifier: INLINE  */
#line 231 "expr.y"
                                                                               {tree_node* arr[] = {create_leaf_node("INLINE",-1,-1,"INLINE")};(yyval.node)=create_int_node("function_specifier",arr,1);}
#line 2535 "y.tab.c"
    break;

  case 116: /* declarator: pointer direct_declarator  */
#line 234 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declarator",arr,2);}
#line 2541 "y.tab.c"
    break;

  case 117: /* declarator: direct_declarator  */
#line 235 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declarator",arr,1);}
#line 2547 "y.tab.c"
    break;

  case 118: /* direct_declarator: IDENTIFIER  */
#line 238 "expr.y"
                                                                             {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("direct_declarator",arr,1);}
#line 2553 "y.tab.c"
    break;

  case 119: /* direct_declarator: '(' declarator ')'  */
#line 239 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2559 "y.tab.c"
    break;

  case 120: /* direct_declarator: direct_declarator '[' ']'  */
#line 240 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2565 "y.tab.c"
    break;

  case 121: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 241 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2571 "y.tab.c"
    break;

  case 122: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 242 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2577 "y.tab.c"
    break;

  case 123: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 243 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2583 "y.tab.c"
    break;

  case 124: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 244 "expr.y"
                                                                                     {tree_node* arr[] = {(yyvsp[-5].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,6);}
#line 2589 "y.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator '[' STATIC assignment_expression ']'  */
#line 245 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2595 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 246 "expr.y"
                                                                                     {tree_node* arr[] = {(yyvsp[-5].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-3].node),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,6);}
#line 2601 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 247 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("*",-1,-1,"*"),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2607 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 248 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-2].node),create_leaf_node("*",-1,-1,"*"),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2613 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 249 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2619 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 250 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2625 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator '(' ')'  */
#line 251 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("(",1,-1,"("),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2631 "y.tab.c"
    break;

  case 132: /* pointer: '*'  */
#line 254 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*")};(yyval.node)=create_int_node("pointer",arr,1);}
#line 2637 "y.tab.c"
    break;

  case 133: /* pointer: '*' type_qualifier_list  */
#line 255 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,2);}
#line 2643 "y.tab.c"
    break;

  case 134: /* pointer: '*' pointer  */
#line 256 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,2);}
#line 2649 "y.tab.c"
    break;

  case 135: /* pointer: '*' type_qualifier_list pointer  */
#line 257 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,3);}
#line 2655 "y.tab.c"
    break;

  case 136: /* type_qualifier_list: type_qualifier  */
#line 260 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("type_qualifier_list",arr,1);}
#line 2661 "y.tab.c"
    break;

  case 137: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 261 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("type_qualifier_list",arr,2);}
#line 2667 "y.tab.c"
    break;

  case 138: /* parameter_type_list: parameter_list  */
#line 264 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_type_list",arr,1);}
#line 2673 "y.tab.c"
    break;

  case 139: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 265 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),create_leaf_node("ELLIPSIS",-1,-1,"ELLIPSIS")};(yyval.node)=create_int_node("parameter_type_list",arr,3);}
#line 2679 "y.tab.c"
    break;

  case 140: /* parameter_list: parameter_declaration  */
#line 268 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_list",arr,1);}
#line 2685 "y.tab.c"
    break;

  case 141: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 269 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_list",arr,3);}
#line 2691 "y.tab.c"
    break;

  case 142: /* parameter_declaration: declaration_specifiers declarator  */
#line 272 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_declaration",arr,2);}
#line 2697 "y.tab.c"
    break;

  case 143: /* parameter_declaration: declaration_specifiers  */
#line 273 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_declaration",arr,1);}
#line 2703 "y.tab.c"
    break;

  case 144: /* identifier_list: IDENTIFIER  */
#line 276 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("identifier_list",arr,1);}
#line 2709 "y.tab.c"
    break;

  case 145: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 277 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("identifier_list",arr,3);}
#line 2715 "y.tab.c"
    break;

  case 146: /* type_name: specifier_qualifier_list  */
#line 280 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("type_name",arr,1);}
#line 2721 "y.tab.c"
    break;

  case 147: /* initializer: assignment_expression  */
#line 283 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("initializer",arr,1);}
#line 2727 "y.tab.c"
    break;

  case 148: /* initializer: '{' initializer_list '}'  */
#line 284 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("initializer",arr,3);}
#line 2733 "y.tab.c"
    break;

  case 149: /* initializer: '{' initializer_list COMMA '}'  */
#line 285 "expr.y"
                                                                             {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-2].node),create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("initializer",arr,4);}
#line 2739 "y.tab.c"
    break;

  case 150: /* initializer_list: initializer  */
#line 288 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,1);}
#line 2745 "y.tab.c"
    break;

  case 151: /* initializer_list: designation initializer  */
#line 289 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,2);}
#line 2751 "y.tab.c"
    break;

  case 152: /* initializer_list: initializer_list COMMA initializer  */
#line 290 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,3);}
#line 2757 "y.tab.c"
    break;

  case 153: /* initializer_list: initializer_list COMMA designation initializer  */
#line 291 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(",",1,-1,","),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,4);}
#line 2763 "y.tab.c"
    break;

  case 154: /* designation: designator_list EQUAL  */
#line 294 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node("=",1,-1,"=")};(yyval.node)=create_int_node("designation",arr,2);}
#line 2769 "y.tab.c"
    break;

  case 155: /* designator_list: designator  */
#line 297 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("designator_list",arr,1);}
#line 2775 "y.tab.c"
    break;

  case 156: /* designator_list: designator_list designator  */
#line 298 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("designator_list",arr,2);}
#line 2781 "y.tab.c"
    break;

  case 157: /* designator: '[' constant_expression ']'  */
#line 301 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("designator",arr,3);}
#line 2787 "y.tab.c"
    break;

  case 158: /* designator: DOT IDENTIFIER  */
#line 302 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("designator",arr,2);}
#line 2793 "y.tab.c"
    break;

  case 159: /* statement: labeled_statement  */
#line 307 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2799 "y.tab.c"
    break;

  case 160: /* statement: compound_statement  */
#line 308 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2805 "y.tab.c"
    break;

  case 161: /* statement: expression_statement  */
#line 309 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2811 "y.tab.c"
    break;

  case 162: /* statement: selection_statement  */
#line 310 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2817 "y.tab.c"
    break;

  case 163: /* statement: iteration_statement  */
#line 311 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2823 "y.tab.c"
    break;

  case 164: /* statement: jump_statement  */
#line 312 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2829 "y.tab.c"
    break;

  case 165: /* labeled_statement: IDENTIFIER ':' statement  */
#line 315 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[-2].sval)),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,3);}
#line 2835 "y.tab.c"
    break;

  case 166: /* labeled_statement: CASE constant_expression ':' statement  */
#line 316 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("CASE",-1,-1,"CASE"),(yyvsp[-2].node),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,4);}
#line 2841 "y.tab.c"
    break;

  case 167: /* labeled_statement: DEFAULT ':' statement  */
#line 317 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("DEFAULT",-1,-1,"DEFAULT"),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,3);}
#line 2847 "y.tab.c"
    break;

  case 168: /* compound_statement: '{' '}'  */
#line 320 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("compound_statement",arr,2);}
#line 2853 "y.tab.c"
    break;

  case 169: /* compound_statement: '{' block_item_list '}'  */
#line 321 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("compound_statement",arr,3);}
#line 2859 "y.tab.c"
    break;

  case 170: /* block_item_list: block_item  */
#line 324 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item_list",arr,1);}
#line 2865 "y.tab.c"
    break;

  case 171: /* block_item_list: block_item_list block_item  */
#line 325 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("block_item_list",arr,2);}
#line 2871 "y.tab.c"
    break;

  case 172: /* block_item: declaration  */
#line 328 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item",arr,1);}
#line 2877 "y.tab.c"
    break;

  case 173: /* block_item: statement  */
#line 329 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item",arr,1);}
#line 2883 "y.tab.c"
    break;

  case 174: /* expression_statement: SEMICOLON  */
#line 332 "expr.y"
                                                                                {tree_node* arr[] = {create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("expression_statement",arr,1);}
#line 2889 "y.tab.c"
    break;

  case 175: /* expression_statement: expression SEMICOLON  */
#line 333 "expr.y"
                                                                               {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("expression_statement",arr,2);}
#line 2895 "y.tab.c"
    break;

  case 176: /* selection_statement: IF '(' expression ')' statement  */
#line 336 "expr.y"
                                                                                              {tree_node* arr[] = {create_leaf_node("IF",-1,-1,"IF"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,5);}
#line 2901 "y.tab.c"
    break;

  case 177: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 337 "expr.y"
                                                                                   {tree_node* arr[] = {create_leaf_node("IF",-1,-1,"IF"),create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),create_leaf_node(")",-1,-1,")"),(yyvsp[-2].node),create_leaf_node("ELSE",-1,-1,"ELSE"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,7);}
#line 2907 "y.tab.c"
    break;

  case 178: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 338 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("SWITCH",-1,-1,"SWITCH"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,5);}
#line 2913 "y.tab.c"
    break;

  case 179: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 341 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("WHILE",-1,-1,"WHILE"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,5);}
#line 2919 "y.tab.c"
    break;

  case 180: /* iteration_statement: DO statement WHILE '(' expression ')' SEMICOLON  */
#line 342 "expr.y"
                                                                                {tree_node* arr[] = {create_leaf_node("DO",-1,-1,"DO"),(yyvsp[-5].node),create_leaf_node("WHILE",-1,-1,"WHILE"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2925 "y.tab.c"
    break;

  case 181: /* iteration_statement: FOR '(' expressionopt SEMICOLON expressionopt SEMICOLON expressionopt ')' statement  */
#line 343 "expr.y"
                                                                                              {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-6].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,9);}
#line 2931 "y.tab.c"
    break;

  case 182: /* iteration_statement: FOR '(' declaration expressionopt SEMICOLON expressionopt ')' statement  */
#line 344 "expr.y"
                                                                                  {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-5].node),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,8);}
#line 2937 "y.tab.c"
    break;

  case 183: /* expressionopt: %empty  */
#line 347 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("EMPTY",-1,-1,"EMPTY")};(yyval.node)=create_int_node("expressionopt",arr,1);}
#line 2943 "y.tab.c"
    break;

  case 184: /* expressionopt: expression  */
#line 348 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("expressionopt",arr,1);}
#line 2949 "y.tab.c"
    break;

  case 185: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 351 "expr.y"
                                                                                {tree_node* arr[] = {create_leaf_node("GOTO",-1,-1,"GOTO"),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[-1].sval)),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,3);}
#line 2955 "y.tab.c"
    break;

  case 186: /* jump_statement: CONTINUE SEMICOLON  */
#line 352 "expr.y"
                                                                               {tree_node* arr[] = {create_leaf_node("CONTINUE",-1,-1,"CONTINUE"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2961 "y.tab.c"
    break;

  case 187: /* jump_statement: BREAK SEMICOLON  */
#line 353 "expr.y"
                                                                               {tree_node* arr[] = {create_leaf_node("BREAK",-1,-1,"BREAK"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2967 "y.tab.c"
    break;

  case 188: /* jump_statement: RETURN SEMICOLON  */
#line 354 "expr.y"
                                                                               {tree_node* arr[] = {create_leaf_node("RETURN",-1,-1,"RETURN"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2973 "y.tab.c"
    break;

  case 189: /* jump_statement: RETURN expression SEMICOLON  */
#line 355 "expr.y"
                                                                               {tree_node* arr[] = {create_leaf_node("RETURN",-1,-1,"RETURN"),(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,3);}
#line 2979 "y.tab.c"
    break;

  case 190: /* translation_unit: external_declaration  */
#line 361 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("translation_unit",arr,1);printtree((yyval.node),0);}
#line 2985 "y.tab.c"
    break;

  case 191: /* translation_unit: translation_unit external_declaration  */
#line 362 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("translation_unit",arr,2);}
#line 2991 "y.tab.c"
    break;

  case 192: /* external_declaration: function_definition  */
#line 365 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("external_declaration",arr,1);}
#line 2997 "y.tab.c"
    break;

  case 193: /* external_declaration: declaration  */
#line 366 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("external_declaration",arr,1);}
#line 3003 "y.tab.c"
    break;

  case 194: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 369 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("function_definition",arr,3);}
#line 3009 "y.tab.c"
    break;

  case 195: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 370 "expr.y"
                                                                                {tree_node* arr[] = {(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("function_definition",arr,4);}
#line 3015 "y.tab.c"
    break;

  case 196: /* declaration_list: declaration  */
#line 373 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_list",arr,1);}
#line 3021 "y.tab.c"
    break;

  case 197: /* declaration_list: declaration_list declaration  */
#line 374 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_list",arr,2);}
#line 3027 "y.tab.c"
    break;


#line 3031 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 376 "expr.y"



// Error handling function
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
