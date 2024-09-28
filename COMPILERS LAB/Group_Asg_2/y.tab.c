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
    RETURN = 295                   /* RETURN  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "expr.y"

    int ival;
    float fval;
    char *sval;
    tree_node* node;

#line 238 "y.tab.c"

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
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '['  */
  YYSYMBOL_44_ = 44,                       /* ']'  */
  YYSYMBOL_45_ = 45,                       /* '.'  */
  YYSYMBOL_46_ = 46,                       /* '-'  */
  YYSYMBOL_47_ = 47,                       /* '>'  */
  YYSYMBOL_48_ = 48,                       /* '+'  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_52_ = 52,                       /* '!'  */
  YYSYMBOL_53_ = 53,                       /* '~'  */
  YYSYMBOL_54_ = 54,                       /* '&'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '%'  */
  YYSYMBOL_58_ = 58,                       /* '<'  */
  YYSYMBOL_59_ = 59,                       /* '='  */
  YYSYMBOL_60_ = 60,                       /* '^'  */
  YYSYMBOL_61_ = 61,                       /* '|'  */
  YYSYMBOL_62_ = 62,                       /* '?'  */
  YYSYMBOL_63_ = 63,                       /* ':'  */
  YYSYMBOL_64_ = 64,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_primary_expression = 66,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 67,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 68,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 69,          /* unary_expression  */
  YYSYMBOL_unary_operator = 70,            /* unary_operator  */
  YYSYMBOL_cast_expression = 71,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 72, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 73,       /* additive_expression  */
  YYSYMBOL_shift_expression = 74,          /* shift_expression  */
  YYSYMBOL_relational_expression = 75,     /* relational_expression  */
  YYSYMBOL_equality_expression = 76,       /* equality_expression  */
  YYSYMBOL_AND_expression = 77,            /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 78,   /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 79,   /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 80,    /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 81,     /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 82,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 83,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 84,       /* assignment_operator  */
  YYSYMBOL_expression = 85,                /* expression  */
  YYSYMBOL_constant_expression = 86,       /* constant_expression  */
  YYSYMBOL_declaration = 87,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 88,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 89,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 90,           /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 91,   /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 92,            /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 93,  /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 94,            /* type_qualifier  */
  YYSYMBOL_function_specifier = 95,        /* function_specifier  */
  YYSYMBOL_declarator = 96,                /* declarator  */
  YYSYMBOL_direct_declarator = 97,         /* direct_declarator  */
  YYSYMBOL_pointer = 98,                   /* pointer  */
  YYSYMBOL_type_qualifier_list = 99,       /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 100,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 101,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 102,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 103,          /* identifier_list  */
  YYSYMBOL_type_name = 104,                /* type_name  */
  YYSYMBOL_initializer = 105,              /* initializer  */
  YYSYMBOL_initializer_list = 106,         /* initializer_list  */
  YYSYMBOL_designation = 107,              /* designation  */
  YYSYMBOL_designator_list = 108,          /* designator_list  */
  YYSYMBOL_designator = 109,               /* designator  */
  YYSYMBOL_statement = 110,                /* statement  */
  YYSYMBOL_labeled_statement = 111,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 112,       /* compound_statement  */
  YYSYMBOL_block_item_list = 113,          /* block_item_list  */
  YYSYMBOL_block_item = 114,               /* block_item  */
  YYSYMBOL_expression_statement = 115,     /* expression_statement  */
  YYSYMBOL_selection_statement = 116,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 117,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 118,           /* jump_statement  */
  YYSYMBOL_translation_unit = 119,         /* translation_unit  */
  YYSYMBOL_external_declaration = 120,     /* external_declaration  */
  YYSYMBOL_function_definition = 121,      /* function_definition  */
  YYSYMBOL_declaration_list = 122          /* declaration_list  */
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
#define YYLAST   1222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  371

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
       2,     2,     2,    52,     2,     2,     2,    57,    54,     2,
      41,    42,    55,    48,    51,    46,    45,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,    64,
      58,    59,    47,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,    61,    50,    53,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    56,    57,    58,    59,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    74,    75,    79,
      80,    81,    82,    83,    84,    87,    88,    89,    90,    91,
      92,    95,    96,    99,   100,   101,   102,   105,   106,   107,
     110,   111,   112,   115,   116,   117,   118,   119,   122,   123,
     124,   126,   127,   130,   131,   134,   135,   138,   139,   142,
     143,   146,   147,   150,   151,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   167,   168,   170,   175,
     176,   179,   180,   181,   182,   183,   184,   185,   186,   189,
     190,   193,   194,   197,   198,   199,   200,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   217,
     218,   219,   220,   223,   224,   225,   228,   231,   232,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   251,   252,   253,   254,   257,   258,   261,
     262,   265,   266,   269,   270,   273,   274,   277,   280,   281,
     282,   285,   286,   287,   288,   291,   294,   295,   298,   299,
     304,   305,   306,   307,   308,   309,   312,   313,   314,   317,
     318,   321,   322,   325,   326,   329,   330,   333,   334,   335,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   352,   353,   354,   355,   356,   362,   363,   366,
     367,   370,   371,   374,   375
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
  "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "'-'", "'>'",
  "'+'", "'{'", "'}'", "','", "'!'", "'~'", "'&'", "'*'", "'/'", "'%'",
  "'<'", "'='", "'^'", "'|'", "'?'", "':'", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-268)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1180,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,     9,  1180,  1180,  1180,  1180,  1139,  -268,  -268,
    -268,    10,    13,  -268,   -32,  -268,  1042,    64,    12,  -268,
    -268,  -268,  -268,  -268,  -268,   -24,  -268,  -268,    13,    10,
    -268,   304,   782,  -268,     9,  -268,  1062,  1104,   616,    64,
    -268,  -268,  -268,  -268,   -18,   -16,  -268,  -268,  -268,   941,
     970,    43,    30,    70,   120,   460,   123,   137,    80,   102,
     513,   591,   133,   146,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,   222,   126,   970,  -268,    20,   142,     8,    76,    -7,
     148,   151,   145,   159,   131,  -268,  -268,    -5,  -268,  -268,
    -268,  -268,   366,  -268,  -268,  -268,  -268,  -268,  -268,   726,
    -268,  -268,  -268,  -268,  -268,  -268,    10,   183,   157,  -268,
       6,   758,  -268,   191,   193,   649,   460,   591,  -268,  -268,
    -268,   173,   460,   970,   970,   970,   208,   428,   184,  -268,
    -268,  -268,    31,    62,  1196,  -268,  1196,   207,   994,   994,
     811,   970,   247,   154,   205,   196,   210,   200,   212,   217,
     219,   223,   211,  -268,   224,   225,   970,  -268,   970,   970,
     970,   970,   970,   238,   228,   192,   534,   230,   231,   970,
     970,   970,   233,   232,   970,   970,  -268,  -268,  -268,   970,
     263,  -268,   166,   782,    15,  -268,  -268,  -268,  1159,  -268,
     288,   252,   758,  -268,  -268,   970,  -268,   253,   254,  -268,
     257,   460,  -268,    85,    86,    91,   259,   481,    36,   970,
    -268,  -268,  -268,  -268,  -268,   835,   591,  -268,  -268,  -268,
      96,  -268,   118,  -268,  -268,   298,  -268,  -268,   243,  -268,
    -268,  -268,  -268,  -268,   244,  -268,  -268,  -268,  -268,  -268,
    -268,    20,    20,   970,   970,   970,     8,   970,     8,   970,
     970,    -7,   148,   151,   970,   970,    46,  -268,   260,  -268,
    -268,   673,  -268,  -268,  -268,  -268,  -268,  -268,  -268,   292,
     302,  -268,  -268,   283,  -268,   460,   460,   460,   970,   460,
     864,    -8,   888,    50,   726,  -268,   305,  -268,   970,  -268,
    -268,  -268,  -268,   142,   142,     8,     8,    76,    76,   145,
     159,   970,  -268,  -268,  -268,   782,  -268,  -268,   316,  -268,
    -268,    99,  -268,   460,   103,   460,   970,   460,    -2,   917,
     168,   283,  -268,  -268,  -268,   460,   285,  -268,   460,  -268,
     104,  -268,   460,   970,   460,   114,  -268,   702,  -268,  -268,
    -268,   460,  -268,   116,  -268,   460,  -268,  -268,   460,  -268,
    -268
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   113,   114,   115,
     116,   200,     0,    81,    83,    85,    87,     0,   197,   199,
     119,     0,   133,    80,     0,    89,    92,   118,     0,    82,
      84,    86,    88,     1,   198,     0,   137,   135,   134,     0,
      79,     0,     0,   203,     0,   201,     0,     0,     0,   117,
     120,   138,   136,    90,    92,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    25,   169,    27,    28,    29,    30,   175,
       7,    19,    31,     0,    33,    37,    40,    43,    48,    51,
      53,    55,    57,    59,    61,    63,    76,     0,   173,   174,
     160,   161,     0,   171,   162,   163,   164,   165,     2,     0,
     148,    91,   204,   202,   145,   132,   144,     0,   139,   141,
       0,     0,   121,    30,     0,     0,     0,     0,    23,    31,
      78,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     194,   195,     0,     0,   109,   147,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   170,   172,     0,
       0,   151,     0,     0,     0,   156,   143,   130,     0,   131,
       0,     0,     0,   128,   123,     0,   122,    30,     0,   166,
       0,     0,   168,     0,     0,     0,     0,     0,     0,     0,
     192,   196,     6,   110,   112,     0,     0,    21,    20,     9,
       0,    17,     0,    11,    13,     0,    14,    70,     0,    69,
      73,    66,    67,    68,     0,    74,    75,    64,    34,    35,
      36,    39,    38,     0,     0,     0,    45,     0,    44,     0,
       0,    52,    54,    56,     0,     0,     0,    77,     0,   159,
     149,     0,   152,   155,   157,   140,   142,   146,   126,     0,
       0,   129,   124,    24,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,    10,     0,     8,
      12,    72,    71,    42,    41,    47,    46,    50,    49,    58,
      60,     0,   158,   150,   153,     0,   125,   127,   177,   179,
     180,     0,   191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    62,   154,     0,     0,   182,     0,   190,
       0,   183,     0,     0,     0,     0,    15,     0,   178,   181,
     187,     0,   184,     0,   188,     0,    16,   186,     0,   189,
     185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -268,  -268,  -268,  -268,   -60,  -268,   -86,    39,   -36,  -150,
     -38,   162,   165,   169,    87,    88,  -268,   -67,   -52,  -268,
     -59,   163,   -31,     4,  -268,   315,  -268,   -65,    35,    22,
    -268,   -14,   327,    -6,   -35,  -268,  -268,   158,  -268,  -126,
     -51,    63,  -267,  -268,   190,   -73,  -268,   -12,  -268,   286,
    -268,  -268,  -268,  -268,  -268,   381,  -268,  -268
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    90,    91,   240,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   176,
     107,   141,    21,    54,    34,    35,    23,    24,   155,    25,
      26,    64,    37,    38,    48,   127,   128,   129,   130,   157,
     201,   202,   203,   204,   205,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    27,    28,    29,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,   121,   146,   140,    22,    53,   134,   177,    36,   138,
     139,   220,    30,    30,   325,    30,   154,    45,    60,    49,
     108,   152,   153,   135,    55,   122,    47,    39,    40,    41,
      42,    22,    50,   139,   335,   266,   268,    17,    18,    19,
     352,    52,    62,   195,   123,   187,   195,   136,   209,   195,
      31,    31,   188,    31,    46,   183,   336,   210,   199,   196,
     200,   126,   353,   219,    32,    32,   184,   120,    32,   222,
      61,   143,   154,    33,   283,   178,   179,   180,   153,   211,
      46,   108,   195,   218,   223,   224,   225,   195,   228,   154,
     325,   154,   258,   259,   260,   231,   212,   195,   237,   238,
     302,   195,   242,   156,   232,    57,   142,    58,   241,   321,
     306,   144,   206,   195,   339,   315,   229,   316,   139,   139,
     139,   139,   139,   185,   257,   139,   139,   295,   296,   139,
     139,   139,   140,   297,   186,   276,   195,   195,   307,   139,
     148,   346,   195,   277,   149,   348,   361,   308,   294,   305,
     195,   120,   282,    46,   195,   195,   365,    61,   368,   156,
     289,   145,   309,   290,   147,   195,   150,   195,   301,   195,
     303,   154,   165,   166,   167,   139,   156,   153,   156,   158,
     168,   169,   170,   171,   172,   173,   174,   175,   181,   233,
     182,   234,   193,   194,   159,   118,    66,    67,    68,    69,
     244,   245,   189,   139,   139,   139,   191,   139,   208,   139,
     139,   190,   126,   192,   139,   139,   280,   281,   356,   357,
     261,   262,   328,   329,   330,   207,   332,   313,   314,   120,
     324,   317,   318,    81,    61,   213,   221,   214,    82,   331,
      83,   334,   226,   338,    85,    86,    87,    88,   230,   235,
     243,   265,   120,   246,   343,   247,   342,   248,   156,   249,
     347,   139,   349,   160,   351,   161,   279,   162,   163,   254,
     164,   250,   358,   120,   344,   360,   251,   350,   252,   362,
     355,   364,   253,   255,   256,   263,   264,   274,   367,   269,
     270,   287,   369,   275,   363,   370,   288,   291,   292,   293,
     298,   310,   311,   312,   322,   120,   324,    65,    66,    67,
      68,    69,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   304,    70,    71,    72,   326,    73,    74,    75,
      76,    77,    78,    79,    80,    81,   327,   341,   345,   359,
      82,   271,    83,    51,    84,   272,    85,    86,    87,    88,
     273,   319,   278,   320,    63,    59,   286,   340,    89,    65,
      66,    67,    68,    69,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   284,    70,    71,    72,   198,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    44,     0,
       0,     0,    82,     0,    83,    51,   197,     0,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
      89,   118,    66,    67,    68,    69,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,     0,    81,
       0,     0,     0,     0,    82,     0,    83,     0,     0,     0,
      85,    86,    87,    88,   118,    66,    67,    68,    69,    70,
      71,    72,   227,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,    82,     0,    83,    51,
       0,     0,    85,    86,    87,    88,   118,    66,    67,    68,
      69,     0,    81,   299,    89,     0,     0,    82,     0,    83,
       0,     0,     0,    85,    86,    87,    88,   118,    66,    67,
      68,    69,     0,     0,     0,   300,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,     0,     0,    82,
       0,    83,     0,     0,     0,    85,    86,    87,    88,     0,
       0,     0,     0,     0,     0,    81,     0,   151,     0,     0,
      82,     0,    83,     0,     0,     0,    85,    86,    87,    88,
       0,     0,     0,   267,   118,    66,    67,    68,    69,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,   118,
      66,    67,    68,    69,     0,   131,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,    82,     0,    83,
      17,    18,    19,    85,    86,    87,    88,     0,     0,     0,
       0,     0,   118,    66,    67,    68,    69,    81,   215,     0,
     132,     0,    82,     0,    83,     0,     0,     0,    85,    86,
      87,   133,     0,    17,    18,    19,   118,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,   216,     0,    82,     0,    83,     0,     0,
       0,    85,    86,    87,   217,   118,    66,    67,    68,    69,
       0,     0,     0,     0,    81,     0,   199,     0,   200,    82,
       0,    83,   119,   323,     0,    85,    86,    87,    88,   118,
      66,    67,    68,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,   199,     0,   200,    82,     0,
      83,   119,   366,     0,    85,    86,    87,    88,     0,     0,
       0,   118,    66,    67,    68,    69,     0,    81,     0,   199,
       0,   200,    82,     0,    83,   119,     0,     0,    85,    86,
      87,    88,    17,    18,    19,   118,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    82,     0,    83,     0,     0,     0,
      85,    86,    87,    88,   118,    66,    67,    68,    69,     0,
       0,     0,     0,    81,     0,     0,     0,     0,    82,     0,
      83,   119,     0,     0,    85,    86,    87,    88,   118,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,   239,     0,     0,     0,    82,     0,    83,
       0,     0,     0,    85,    86,    87,    88,   118,    66,    67,
      68,    69,     0,     0,     0,     0,    81,     0,     0,     0,
       0,    82,     0,    83,   304,     0,     0,    85,    86,    87,
      88,   118,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,   333,     0,     0,     0,
      82,     0,    83,     0,     0,     0,    85,    86,    87,    88,
     118,    66,    67,    68,    69,     0,     0,     0,     0,    81,
     337,     0,     0,     0,    82,     0,    83,     0,     0,     0,
      85,    86,    87,    88,   118,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,   354,
       0,     0,     0,    82,     0,    83,     0,     0,     0,    85,
      86,    87,    88,   118,    66,    67,    68,    69,     0,     0,
       0,     0,   137,     0,     0,     0,     0,    82,     0,    83,
       0,     0,     0,    85,    86,    87,    88,   118,    66,    67,
      68,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,     0,    82,     0,    83,     0,
       0,     0,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,     0,     0,     0,     0,
      82,     0,    83,     0,     0,     0,    85,    86,    87,    88,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,   124,     0,     0,
       0,    51,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,   125,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   285,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19
};

static const yytype_int16 yycheck[] =
{
      52,    52,    75,    70,     0,    36,    58,    93,    22,    69,
      70,   137,     3,     3,   281,     3,    81,    31,    42,    51,
      51,    80,    81,    58,    36,    56,    32,    23,    24,    25,
      26,    27,    64,    93,    42,   185,   186,    24,    25,    26,
      42,    59,    48,    51,    56,    52,    51,    63,    42,    51,
      41,    41,    59,    41,    32,    47,    64,    51,    43,    64,
      45,    57,    64,   136,    55,    55,    58,   119,    55,   142,
      48,    41,   137,    64,    59,    55,    56,    57,   137,   131,
      58,   112,    51,   135,   143,   144,   145,    51,   147,   154,
     357,   156,   178,   179,   180,    64,   131,    51,   158,   159,
      64,    51,   161,    81,    42,    41,    63,    43,   160,    63,
     236,    41,   126,    51,    64,   265,   147,   267,   178,   179,
     180,   181,   182,    47,   176,   185,   186,    42,    42,   189,
     190,   191,   199,    42,    58,   194,    51,    51,    42,   199,
       3,    42,    51,   195,    64,    42,    42,    51,   221,   235,
      51,   203,   203,   131,    51,    51,    42,   135,    42,   137,
     212,    41,    44,   215,    41,    51,    64,    51,   227,    51,
     229,   236,    46,    47,    48,   235,   154,   236,   156,    46,
      54,    55,    56,    57,    58,    59,    60,    61,    46,   154,
      48,   156,    61,    62,    48,     3,     4,     5,     6,     7,
      46,    47,    54,   263,   264,   265,    61,   267,    51,   269,
     270,    60,   208,    54,   274,   275,    50,    51,    50,    51,
     181,   182,   295,   296,   297,    42,   299,   263,   264,   281,
     281,   269,   270,    41,   212,    44,    63,    44,    46,   298,
      48,   300,    34,   302,    52,    53,    54,    55,    64,    42,
       3,    59,   304,    48,   321,    59,   308,    47,   236,    59,
     333,   321,   335,    41,   337,    43,     3,    45,    46,    58,
      48,    59,   345,   325,   325,   348,    59,   336,    59,   352,
     339,   354,    59,    59,    59,    47,    58,    54,   361,    59,
      59,     3,   365,    61,   353,   368,    44,    44,    44,    42,
      41,     3,    59,    59,    44,   357,   357,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    49,    29,    30,    31,    44,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    44,    42,    32,    64,
      46,   189,    48,    49,    50,   190,    52,    53,    54,    55,
     191,   274,   199,   275,    49,    38,   208,   304,    64,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   204,    29,    30,    31,   112,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    -1,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    41,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,
      52,    53,    54,    55,     3,     4,     5,     6,     7,    29,
      30,    31,    64,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    -1,    48,    49,
      -1,    -1,    52,    53,    54,    55,     3,     4,     5,     6,
       7,    -1,    41,    42,    64,    -1,    -1,    46,    -1,    48,
      -1,    -1,    -1,    52,    53,    54,    55,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,
      -1,    48,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    64,    -1,    -1,
      46,    -1,    48,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    59,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    -1,    48,
      24,    25,    26,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    41,     9,    -1,
      44,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,    53,
      54,    55,    -1,    24,    25,    26,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    46,    -1,    48,    -1,    -1,
      -1,    52,    53,    54,    55,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    54,    55,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    54,    55,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    41,    -1,    43,
      -1,    45,    46,    -1,    48,    49,    -1,    -1,    52,    53,
      54,    55,    24,    25,    26,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,
      52,    53,    54,    55,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    -1,
      48,    49,    -1,    -1,    52,    53,    54,    55,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    -1,    48,
      -1,    -1,    -1,    52,    53,    54,    55,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,    48,    49,    -1,    -1,    52,    53,    54,
      55,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    -1,    48,    -1,    -1,    -1,    52,    53,    54,    55,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,
      52,    53,    54,    55,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    55,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    -1,    48,
      -1,    -1,    -1,    52,    53,    54,    55,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      46,    -1,    48,    -1,    -1,    -1,    52,    53,    54,    55,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    49,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
      -1,    -1,    -1,    -1,    -1,    -1,    42,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    87,    88,    91,    92,    94,    95,   119,   120,   121,
       3,    41,    55,    64,    89,    90,    96,    97,    98,    88,
      88,    88,    88,     0,   120,    96,    94,    98,    99,    51,
      64,    49,    59,    87,    88,   112,   122,    41,    43,    97,
      42,    94,    98,    90,    96,     3,     4,     5,     6,     7,
      29,    30,    31,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    46,    48,    50,    52,    53,    54,    55,    64,
      66,    67,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    85,    87,   110,
     111,   112,   113,   114,   115,   116,   117,   118,     3,    49,
      83,   105,    87,   112,     3,    42,    88,   100,   101,   102,
     103,     9,    44,    55,    83,    99,    63,    41,    69,    69,
      82,    86,    63,    41,    41,    41,   110,    41,     3,    64,
      64,    64,    85,    85,    92,    93,    94,   104,    46,    48,
      41,    43,    45,    46,    48,    46,    47,    48,    54,    55,
      56,    57,    58,    59,    60,    61,    84,    71,    55,    56,
      57,    46,    48,    47,    58,    47,    58,    52,    59,    54,
      60,    61,    54,    61,    62,    51,    64,    50,   114,    43,
      45,   105,   106,   107,   108,   109,    96,    42,    51,    42,
      51,    83,    99,    44,    44,     9,    44,    55,    83,   110,
     104,    63,   110,    85,    85,    85,    34,    64,    85,    87,
      64,    64,    42,    93,    93,    42,    41,    69,    69,    42,
      68,    83,    85,     3,    46,    47,    48,    59,    47,    59,
      59,    59,    59,    59,    58,    59,    59,    83,    71,    71,
      71,    72,    72,    47,    58,    59,    74,    59,    74,    59,
      59,    76,    77,    78,    54,    61,    85,    83,    86,     3,
      50,    51,   105,    59,   109,    28,   102,     3,    44,    83,
      83,    44,    44,    42,   110,    42,    42,    42,    41,    42,
      64,    85,    64,    85,    49,    71,   104,    42,    51,    44,
       3,    59,    59,    73,    73,    74,    74,    75,    75,    79,
      80,    63,    44,    50,   105,   107,    44,    44,   110,   110,
     110,    85,   110,    42,    85,    42,    64,    42,    85,    64,
     106,    42,    83,    82,   105,    32,    42,   110,    42,   110,
      85,   110,    42,    64,    42,    85,    50,    51,   110,    64,
     110,    42,   110,    85,   110,    42,    50,   110,    42,   110,
     110
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    71,    71,    72,    72,    72,    72,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    75,    75,    76,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    90,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    94,    94,    94,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   105,   105,
     105,   106,   106,   106,   106,   107,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   111,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     4,     3,     3,     6,     7,     1,     3,     1,
       3,     3,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     4,     4,     1,     3,     3,     4,     4,     1,     4,
       4,     1,     3,     1,     3,     1,     3,     1,     4,     1,
       4,     1,     5,     1,     3,     1,     2,     2,     2,     2,
       2,     3,     3,     2,     2,     2,     1,     3,     1,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     2,     1,     1,
       3,     3,     4,     4,     5,     6,     5,     6,     4,     5,
       4,     4,     3,     1,     2,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     3,
       4,     1,     2,     3,     4,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     5,     7,     5,
       5,     7,     6,     6,     7,     9,     8,     7,     7,     8,
       6,     5,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     3,     4,     1,     2
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
#line 55 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1780 "y.tab.c"
    break;

  case 3: /* primary_expression: FLO_CONSTANT  */
#line 56 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("primary_expression",-1,(yyvsp[0].fval),NULL)};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1786 "y.tab.c"
    break;

  case 4: /* primary_expression: INT_CONSTANT  */
#line 57 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("primary_expression",(yyvsp[0].ival),-1,NULL)};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1792 "y.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 58 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("STRING_LITERAL",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1798 "y.tab.c"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 59 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("primary_expression",arr,3);}
#line 1804 "y.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 62 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("postfix_expression",arr,1);}
#line 1810 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 63 "expr.y"
                                                                            {tree_node* arr[]= {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("postfix_expression",arr,4);}
#line 1816 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' ')'  */
#line 64 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("(",1,-1,"("),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1822 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 65 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("postfix_expression",arr,4);}
#line 1828 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 66 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1834 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression '-' '>' IDENTIFIER  */
#line 67 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("->",1,-1,"->"),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1840 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression '-' '-'  */
#line 68 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("PLUS",-1,-1,"+"),create_leaf_node("PLUS",-1,-1,"+")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1846 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression '+' '+'  */
#line 69 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("MINUS",-1,-1,"-"),create_leaf_node("MINUS",-1,-1,"-")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1852 "y.tab.c"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 70 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("postfix_expression",arr,6);}
#line 1858 "y.tab.c"
    break;

  case 16: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 71 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-5].node),create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),(yyvsp[-2].node),create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("postfix_expression",arr,6);}
#line 1864 "y.tab.c"
    break;

  case 17: /* argument_expression_list: assignment_expression  */
#line 74 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("argument_expression_list",arr,1);}
#line 1870 "y.tab.c"
    break;

  case 18: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 75 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("argument_expression_list",arr,3);}
#line 1876 "y.tab.c"
    break;

  case 19: /* unary_expression: postfix_expression  */
#line 79 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,1);}
#line 1882 "y.tab.c"
    break;

  case 20: /* unary_expression: '+' '+' unary_expression  */
#line 80 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("PLUS",-1,-1,"+"),create_leaf_node("PLUS",-1,-1,"+"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,3);}
#line 1888 "y.tab.c"
    break;

  case 21: /* unary_expression: '-' '-' unary_expression  */
#line 81 "expr.y"
                                                                        {tree_node* arr[] = {create_leaf_node("MINUS",-1,-1,"-"),create_leaf_node("MINUS",-1,-1,"-"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,3);}
#line 1894 "y.tab.c"
    break;

  case 22: /* unary_expression: unary_operator cast_expression  */
#line 82 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,2);}
#line 1900 "y.tab.c"
    break;

  case 23: /* unary_expression: SIZEOF unary_expression  */
#line 83 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,2);}
#line 1906 "y.tab.c"
    break;

  case 24: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 84 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("unary_expression",arr,4);}
#line 1912 "y.tab.c"
    break;

  case 25: /* unary_operator: '+'  */
#line 87 "expr.y"
                                                                           {tree_node* arr[]= {create_leaf_node("+",-1,-1,"+")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1918 "y.tab.c"
    break;

  case 26: /* unary_operator: '-'  */
#line 88 "expr.y"
                                                                         {tree_node* arr[]= {create_leaf_node("-",-1,-1,"-")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1924 "y.tab.c"
    break;

  case 27: /* unary_operator: '!'  */
#line 89 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("!",-1,-1,"!")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1930 "y.tab.c"
    break;

  case 28: /* unary_operator: '~'  */
#line 90 "expr.y"
                                                                          {tree_node* arr[]= {create_leaf_node("~",-1,-1,"~")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1936 "y.tab.c"
    break;

  case 29: /* unary_operator: '&'  */
#line 91 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("&",-1,-1,"&")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1942 "y.tab.c"
    break;

  case 30: /* unary_operator: '*'  */
#line 92 "expr.y"
                                                                       {tree_node* arr[]= {create_leaf_node("*",-1,-1,"*")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1948 "y.tab.c"
    break;

  case 31: /* cast_expression: unary_expression  */
#line 95 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("cast_expression",arr,1);}
#line 1954 "y.tab.c"
    break;

  case 32: /* cast_expression: '(' type_name ')' cast_expression  */
#line 96 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("cast_expression",arr,4);}
#line 1960 "y.tab.c"
    break;

  case 33: /* multiplicative_expression: cast_expression  */
#line 99 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,1);}
#line 1966 "y.tab.c"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 100 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1972 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 101 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("/",-1,-1,"/"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1978 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 102 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("%",-1,-1,"%"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1984 "y.tab.c"
    break;

  case 37: /* additive_expression: multiplicative_expression  */
#line 105 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,1);}
#line 1990 "y.tab.c"
    break;

  case 38: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 106 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("+",-1,-1,"+"),(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,3);}
#line 1996 "y.tab.c"
    break;

  case 39: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 107 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("-",-1,-1,"-"),(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,3);}
#line 2002 "y.tab.c"
    break;

  case 40: /* shift_expression: additive_expression  */
#line 110 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,1);}
#line 2008 "y.tab.c"
    break;

  case 41: /* shift_expression: shift_expression '<' '<' additive_expression  */
#line 111 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("<<",-1,-1,"<<"),(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,3);}
#line 2014 "y.tab.c"
    break;

  case 42: /* shift_expression: shift_expression '>' '>' additive_expression  */
#line 112 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(">>",-1,-1,">>"),(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,3);}
#line 2020 "y.tab.c"
    break;

  case 43: /* relational_expression: shift_expression  */
#line 115 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,1);}
#line 2026 "y.tab.c"
    break;

  case 44: /* relational_expression: relational_expression '<' shift_expression  */
#line 116 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("<",-1,-1,"<"),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2032 "y.tab.c"
    break;

  case 45: /* relational_expression: relational_expression '>' shift_expression  */
#line 117 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(">",-1,-1,">"),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2038 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression '<' '=' shift_expression  */
#line 118 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("<=",-1,-1,"<="),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2044 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression '>' '=' shift_expression  */
#line 119 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(">=",-1,-1,">="),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2050 "y.tab.c"
    break;

  case 48: /* equality_expression: relational_expression  */
#line 122 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,1);}
#line 2056 "y.tab.c"
    break;

  case 49: /* equality_expression: equality_expression '=' '=' relational_expression  */
#line 123 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("==",-1,-1,"=="),(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,3);}
#line 2062 "y.tab.c"
    break;

  case 50: /* equality_expression: equality_expression '!' '=' relational_expression  */
#line 124 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("!=",-1,-1,"!="),(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,3);}
#line 2068 "y.tab.c"
    break;

  case 51: /* AND_expression: equality_expression  */
#line 126 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("AND_expression",arr,1);}
#line 2074 "y.tab.c"
    break;

  case 52: /* AND_expression: AND_expression '&' equality_expression  */
#line 127 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("&",-1,-1,"&"),(yyvsp[0].node)};(yyval.node)=create_int_node("AND_expression",arr,3);}
#line 2080 "y.tab.c"
    break;

  case 53: /* exclusive_OR_expression: AND_expression  */
#line 130 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("exclusive_OR_expression",arr,1);}
#line 2086 "y.tab.c"
    break;

  case 54: /* exclusive_OR_expression: exclusive_OR_expression '^' AND_expression  */
#line 131 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("^",-1,-1,"^"),(yyvsp[0].node)};(yyval.node)=create_int_node("exclusive_OR_expression",arr,3);}
#line 2092 "y.tab.c"
    break;

  case 55: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 134 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("inclusive_OR_expression",arr,1);}
#line 2098 "y.tab.c"
    break;

  case 56: /* inclusive_OR_expression: inclusive_OR_expression '|' exclusive_OR_expression  */
#line 135 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("|",-1,-1,"|"),(yyvsp[0].node)};(yyval.node)=create_int_node("inclusive_OR_expression",arr,3);}
#line 2104 "y.tab.c"
    break;

  case 57: /* logical_AND_expression: inclusive_OR_expression  */
#line 138 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("logical_AND_expression",arr,1);}
#line 2110 "y.tab.c"
    break;

  case 58: /* logical_AND_expression: logical_AND_expression '&' '&' inclusive_OR_expression  */
#line 139 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("&&",-1,-1,"&&"),(yyvsp[0].node)};(yyval.node)=create_int_node("logical_AND_expression",arr,3);}
#line 2116 "y.tab.c"
    break;

  case 59: /* logical_OR_expression: logical_AND_expression  */
#line 142 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("logical_OR_expression",arr,1);}
#line 2122 "y.tab.c"
    break;

  case 60: /* logical_OR_expression: logical_OR_expression '|' '|' logical_AND_expression  */
#line 143 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("||",-1,-1,"||"),(yyvsp[0].node)};(yyval.node)=create_int_node("logical_OR_expression",arr,3);}
#line 2128 "y.tab.c"
    break;

  case 61: /* conditional_expression: logical_OR_expression  */
#line 146 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("conditional_expression",arr,1);}
#line 2134 "y.tab.c"
    break;

  case 62: /* conditional_expression: logical_OR_expression '?' expression ':' conditional_expression  */
#line 147 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("?",-1,-1,"?"),(yyvsp[-2].node),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("conditional_expression",arr,5);}
#line 2140 "y.tab.c"
    break;

  case 63: /* assignment_expression: conditional_expression  */
#line 150 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("assignment_expression",arr,1);}
#line 2146 "y.tab.c"
    break;

  case 64: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 151 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("assignment_expression",arr,3);}
#line 2152 "y.tab.c"
    break;

  case 65: /* assignment_operator: '='  */
#line 154 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("=",-1,-1,"=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2158 "y.tab.c"
    break;

  case 66: /* assignment_operator: '*' '='  */
#line 155 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("*=",-1,-1,"*=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2164 "y.tab.c"
    break;

  case 67: /* assignment_operator: '/' '='  */
#line 156 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("/=",-1,-1,"/=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2170 "y.tab.c"
    break;

  case 68: /* assignment_operator: '%' '='  */
#line 157 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("%=",-1,-1,"%=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2176 "y.tab.c"
    break;

  case 69: /* assignment_operator: '+' '='  */
#line 158 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("+=",-1,-1,"+=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2182 "y.tab.c"
    break;

  case 70: /* assignment_operator: '-' '='  */
#line 159 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("-=",-1,-1,"-=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2188 "y.tab.c"
    break;

  case 71: /* assignment_operator: '<' '<' '='  */
#line 160 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("<<=",-1,-1,"<<=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2194 "y.tab.c"
    break;

  case 72: /* assignment_operator: '>' '>' '='  */
#line 161 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node(">>=",-1,-1,">>=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2200 "y.tab.c"
    break;

  case 73: /* assignment_operator: '&' '='  */
#line 162 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("&=",-1,-1,"&=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2206 "y.tab.c"
    break;

  case 74: /* assignment_operator: '^' '='  */
#line 163 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("^=",-1,-1,"^=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2212 "y.tab.c"
    break;

  case 75: /* assignment_operator: '|' '='  */
#line 164 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("|=",-1,-1,"|=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2218 "y.tab.c"
    break;

  case 76: /* expression: assignment_expression  */
#line 167 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("expression",arr,1);}
#line 2224 "y.tab.c"
    break;

  case 77: /* expression: expression ',' assignment_expression  */
#line 168 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("expression",arr,3);}
#line 2230 "y.tab.c"
    break;

  case 78: /* constant_expression: conditional_expression  */
#line 170 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("constant_expression",arr,1);}
#line 2236 "y.tab.c"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 175 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("declaration",arr,3);}
#line 2242 "y.tab.c"
    break;

  case 80: /* declaration: declaration_specifiers ';'  */
#line 176 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("declaration",arr,2);}
#line 2248 "y.tab.c"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier  */
#line 179 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2254 "y.tab.c"
    break;

  case 82: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 180 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2260 "y.tab.c"
    break;

  case 83: /* declaration_specifiers: type_specifier  */
#line 181 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2266 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 182 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2272 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: type_qualifier  */
#line 183 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2278 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 184 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2284 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: function_specifier  */
#line 185 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2290 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 186 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2296 "y.tab.c"
    break;

  case 89: /* init_declarator_list: init_declarator  */
#line 189 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator_list",arr,1);}
#line 2302 "y.tab.c"
    break;

  case 90: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 190 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator_list",arr,3);}
#line 2308 "y.tab.c"
    break;

  case 91: /* init_declarator: declarator '=' initializer  */
#line 193 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("=",1,-1,"="),(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator",arr,3);}
#line 2314 "y.tab.c"
    break;

  case 92: /* init_declarator: declarator  */
#line 194 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator",arr,1);}
#line 2320 "y.tab.c"
    break;

  case 93: /* storage_class_specifier: EXTERN  */
#line 197 "expr.y"
                                                                                        {tree_node* arr[] = {create_leaf_node("EXTERN",-1,-1,"EXTERN")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2326 "y.tab.c"
    break;

  case 94: /* storage_class_specifier: STATIC  */
#line 198 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("STATIC",-1,-1,"STATIC")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2332 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: AUTO  */
#line 199 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("AUTO",-1,-1,"AUTO")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2338 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: REGISTER  */
#line 200 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("REGISTER",-1,-1,"REGISTER")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2344 "y.tab.c"
    break;

  case 97: /* type_specifier: VOID  */
#line 203 "expr.y"
                                                                                 {tree_node* arr[] = {create_leaf_node("VOID",-1,-1,"VOID")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2350 "y.tab.c"
    break;

  case 98: /* type_specifier: CHAR  */
#line 204 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("CHAR",-1,-1,"CHAR")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2356 "y.tab.c"
    break;

  case 99: /* type_specifier: SHORT  */
#line 205 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("SHORT",-1,-1,"SHORT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2362 "y.tab.c"
    break;

  case 100: /* type_specifier: INT  */
#line 206 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("INT",-1,-1,"INT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2368 "y.tab.c"
    break;

  case 101: /* type_specifier: LONG  */
#line 207 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("LONG",-1,-1,"LONG")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2374 "y.tab.c"
    break;

  case 102: /* type_specifier: FLOAT  */
#line 208 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("FLOAT",-1,-1,"FLOAT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2380 "y.tab.c"
    break;

  case 103: /* type_specifier: DOUBLE  */
#line 209 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("DOUBLE",-1,-1,"DOUBLE")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2386 "y.tab.c"
    break;

  case 104: /* type_specifier: SIGNED  */
#line 210 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("SIGNED",-1,-1,"SIGNED")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2392 "y.tab.c"
    break;

  case 105: /* type_specifier: UNSIGNED  */
#line 211 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("UNSIGNED",-1,-1,"UNSIGNED")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2398 "y.tab.c"
    break;

  case 106: /* type_specifier: BOOL  */
#line 212 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("BOOL",-1,-1,"BOOL")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2404 "y.tab.c"
    break;

  case 107: /* type_specifier: COMPLEX  */
#line 213 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("COMPLEX",-1,-1,"COMPLEX")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2410 "y.tab.c"
    break;

  case 108: /* type_specifier: IMAGINARY  */
#line 214 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IMAGINARY",-1,-1,"IMAGINARY")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2416 "y.tab.c"
    break;

  case 109: /* specifier_qualifier_list: type_specifier  */
#line 217 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,1);}
#line 2422 "y.tab.c"
    break;

  case 110: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 218 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,2);}
#line 2428 "y.tab.c"
    break;

  case 111: /* specifier_qualifier_list: type_qualifier  */
#line 219 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,1);}
#line 2434 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 220 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,2);}
#line 2440 "y.tab.c"
    break;

  case 113: /* type_qualifier: CONST  */
#line 223 "expr.y"
                                                                              {tree_node* arr[] = {create_leaf_node("CONST",-1,-1,"CONST")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2446 "y.tab.c"
    break;

  case 114: /* type_qualifier: RESTRICT  */
#line 224 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("RESTRICT",-1,-1,"RESTRICT")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2452 "y.tab.c"
    break;

  case 115: /* type_qualifier: VOLATILE  */
#line 225 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("VOLATILE",-1,-1,"VOLATILE")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2458 "y.tab.c"
    break;

  case 116: /* function_specifier: INLINE  */
#line 228 "expr.y"
                                                                               {tree_node* arr[] = {create_leaf_node("INLINE",-1,-1,"INLINE")};(yyval.node)=create_int_node("function_specifier",arr,1);}
#line 2464 "y.tab.c"
    break;

  case 117: /* declarator: pointer direct_declarator  */
#line 231 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declarator",arr,2);}
#line 2470 "y.tab.c"
    break;

  case 118: /* declarator: direct_declarator  */
#line 232 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declarator",arr,1);}
#line 2476 "y.tab.c"
    break;

  case 119: /* direct_declarator: IDENTIFIER  */
#line 235 "expr.y"
                                                                             {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("direct_declarator",arr,1);}
#line 2482 "y.tab.c"
    break;

  case 120: /* direct_declarator: '(' declarator ')'  */
#line 236 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2488 "y.tab.c"
    break;

  case 121: /* direct_declarator: direct_declarator '[' ']'  */
#line 237 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2494 "y.tab.c"
    break;

  case 122: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 238 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2500 "y.tab.c"
    break;

  case 123: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 239 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2506 "y.tab.c"
    break;

  case 124: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 240 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2512 "y.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 241 "expr.y"
                                                                                     {tree_node* arr[] = {(yyvsp[-5].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,6);}
#line 2518 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator '[' STATIC assignment_expression ']'  */
#line 242 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2524 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 243 "expr.y"
                                                                                     {tree_node* arr[] = {(yyvsp[-5].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-3].node),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,6);}
#line 2530 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 244 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("*",-1,-1,"*"),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2536 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 245 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-2].node),create_leaf_node("*",-1,-1,"*"),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2542 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 246 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2548 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 247 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2554 "y.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator '(' ')'  */
#line 248 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("(",1,-1,"("),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2560 "y.tab.c"
    break;

  case 133: /* pointer: '*'  */
#line 251 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*")};(yyval.node)=create_int_node("pointer",arr,1);}
#line 2566 "y.tab.c"
    break;

  case 134: /* pointer: '*' type_qualifier_list  */
#line 252 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,2);}
#line 2572 "y.tab.c"
    break;

  case 135: /* pointer: '*' pointer  */
#line 253 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,2);}
#line 2578 "y.tab.c"
    break;

  case 136: /* pointer: '*' type_qualifier_list pointer  */
#line 254 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,3);}
#line 2584 "y.tab.c"
    break;

  case 137: /* type_qualifier_list: type_qualifier  */
#line 257 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("type_qualifier_list",arr,1);}
#line 2590 "y.tab.c"
    break;

  case 138: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 258 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("type_qualifier_list",arr,2);}
#line 2596 "y.tab.c"
    break;

  case 139: /* parameter_type_list: parameter_list  */
#line 261 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_type_list",arr,1);}
#line 2602 "y.tab.c"
    break;

  case 140: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 262 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),create_leaf_node("ELLIPSIS",-1,-1,"ELLIPSIS")};(yyval.node)=create_int_node("parameter_type_list",arr,3);}
#line 2608 "y.tab.c"
    break;

  case 141: /* parameter_list: parameter_declaration  */
#line 265 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_list",arr,1);}
#line 2614 "y.tab.c"
    break;

  case 142: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 266 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_list",arr,3);}
#line 2620 "y.tab.c"
    break;

  case 143: /* parameter_declaration: declaration_specifiers declarator  */
#line 269 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_declaration",arr,2);}
#line 2626 "y.tab.c"
    break;

  case 144: /* parameter_declaration: declaration_specifiers  */
#line 270 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_declaration",arr,1);}
#line 2632 "y.tab.c"
    break;

  case 145: /* identifier_list: IDENTIFIER  */
#line 273 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("identifier_list",arr,1);}
#line 2638 "y.tab.c"
    break;

  case 146: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 274 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("identifier_list",arr,3);}
#line 2644 "y.tab.c"
    break;

  case 147: /* type_name: specifier_qualifier_list  */
#line 277 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("type_name",arr,1);}
#line 2650 "y.tab.c"
    break;

  case 148: /* initializer: assignment_expression  */
#line 280 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("initializer",arr,1);}
#line 2656 "y.tab.c"
    break;

  case 149: /* initializer: '{' initializer_list '}'  */
#line 281 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("initializer",arr,3);}
#line 2662 "y.tab.c"
    break;

  case 150: /* initializer: '{' initializer_list ',' '}'  */
#line 282 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-2].node),create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("initializer",arr,4);}
#line 2668 "y.tab.c"
    break;

  case 151: /* initializer_list: initializer  */
#line 285 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,1);}
#line 2674 "y.tab.c"
    break;

  case 152: /* initializer_list: designation initializer  */
#line 286 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,2);}
#line 2680 "y.tab.c"
    break;

  case 153: /* initializer_list: initializer_list ',' initializer  */
#line 287 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,3);}
#line 2686 "y.tab.c"
    break;

  case 154: /* initializer_list: initializer_list ',' designation initializer  */
#line 288 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(",",1,-1,","),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,4);}
#line 2692 "y.tab.c"
    break;

  case 155: /* designation: designator_list '='  */
#line 291 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node("=",1,-1,"=")};(yyval.node)=create_int_node("designation",arr,2);}
#line 2698 "y.tab.c"
    break;

  case 156: /* designator_list: designator  */
#line 294 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("designator_list",arr,1);}
#line 2704 "y.tab.c"
    break;

  case 157: /* designator_list: designator_list designator  */
#line 295 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("designator_list",arr,2);}
#line 2710 "y.tab.c"
    break;

  case 158: /* designator: '[' constant_expression ']'  */
#line 298 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("designator",arr,3);}
#line 2716 "y.tab.c"
    break;

  case 159: /* designator: '.' IDENTIFIER  */
#line 299 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("designator",arr,2);}
#line 2722 "y.tab.c"
    break;

  case 160: /* statement: labeled_statement  */
#line 304 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2728 "y.tab.c"
    break;

  case 161: /* statement: compound_statement  */
#line 305 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2734 "y.tab.c"
    break;

  case 162: /* statement: expression_statement  */
#line 306 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2740 "y.tab.c"
    break;

  case 163: /* statement: selection_statement  */
#line 307 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2746 "y.tab.c"
    break;

  case 164: /* statement: iteration_statement  */
#line 308 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2752 "y.tab.c"
    break;

  case 165: /* statement: jump_statement  */
#line 309 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2758 "y.tab.c"
    break;

  case 166: /* labeled_statement: IDENTIFIER ':' statement  */
#line 312 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[-2].sval)),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,3);}
#line 2764 "y.tab.c"
    break;

  case 167: /* labeled_statement: CASE constant_expression ':' statement  */
#line 313 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("CASE",-1,-1,"CASE"),(yyvsp[-2].node),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,4);}
#line 2770 "y.tab.c"
    break;

  case 168: /* labeled_statement: DEFAULT ':' statement  */
#line 314 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("DEFAULT",-1,-1,"DEFAULT"),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,3);}
#line 2776 "y.tab.c"
    break;

  case 169: /* compound_statement: '{' '}'  */
#line 317 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("compound_statement",arr,2);}
#line 2782 "y.tab.c"
    break;

  case 170: /* compound_statement: '{' block_item_list '}'  */
#line 318 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("compound_statement",arr,3);}
#line 2788 "y.tab.c"
    break;

  case 171: /* block_item_list: block_item  */
#line 321 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item_list",arr,1);}
#line 2794 "y.tab.c"
    break;

  case 172: /* block_item_list: block_item_list block_item  */
#line 322 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("block_item_list",arr,2);}
#line 2800 "y.tab.c"
    break;

  case 173: /* block_item: declaration  */
#line 325 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item",arr,1);}
#line 2806 "y.tab.c"
    break;

  case 174: /* block_item: statement  */
#line 326 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item",arr,1);}
#line 2812 "y.tab.c"
    break;

  case 175: /* expression_statement: ';'  */
#line 329 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("expression_statement",arr,1);}
#line 2818 "y.tab.c"
    break;

  case 176: /* expression_statement: expression ';'  */
#line 330 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("expression_statement",arr,2);}
#line 2824 "y.tab.c"
    break;

  case 177: /* selection_statement: IF '(' expression ')' statement  */
#line 333 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IF",-1,-1,"IF"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,5);}
#line 2830 "y.tab.c"
    break;

  case 178: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 334 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("IF",-1,-1,"IF"),create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),create_leaf_node(")",-1,-1,")"),(yyvsp[-2].node),create_leaf_node("ELSE",-1,-1,"ELSE"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,7);}
#line 2836 "y.tab.c"
    break;

  case 179: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 335 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("SWITCH",-1,-1,"SWITCH"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,5);}
#line 2842 "y.tab.c"
    break;

  case 180: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 338 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("WHILE",-1,-1,"WHILE"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,5);}
#line 2848 "y.tab.c"
    break;

  case 181: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 339 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("DO",-1,-1,"DO"),(yyvsp[-5].node),create_leaf_node("WHILE",-1,-1,"WHILE"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2854 "y.tab.c"
    break;

  case 182: /* iteration_statement: FOR '(' ';' ';' ')' statement  */
#line 340 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),create_leaf_node(";",-1,-1,";"),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,6);}
#line 2860 "y.tab.c"
    break;

  case 183: /* iteration_statement: FOR '(' expression ';' ')' statement  */
#line 341 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-3].node),create_leaf_node(";",-1,-1,";"),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,6);}
#line 2866 "y.tab.c"
    break;

  case 184: /* iteration_statement: FOR '(' expression ';' expression ')' statement  */
#line 342 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2872 "y.tab.c"
    break;

  case 185: /* iteration_statement: FOR '(' expression ';' expression ';' expression ')' statement  */
#line 343 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-6].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,9);}
#line 2878 "y.tab.c"
    break;

  case 186: /* iteration_statement: FOR '(' ';' expression ';' expression ')' statement  */
#line 344 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,8);}
#line 2884 "y.tab.c"
    break;

  case 187: /* iteration_statement: FOR '(' ';' ';' expression ')' statement  */
#line 345 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2890 "y.tab.c"
    break;

  case 188: /* iteration_statement: FOR '(' declaration expression ';' ')' statement  */
#line 346 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),(yyvsp[-3].node),create_leaf_node(";",-1,-1,";"),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2896 "y.tab.c"
    break;

  case 189: /* iteration_statement: FOR '(' declaration expression ';' expression ')' statement  */
#line 347 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-5].node),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,8);}
#line 2902 "y.tab.c"
    break;

  case 190: /* iteration_statement: FOR '(' ';' expression ')' statement  */
#line 348 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,6);}
#line 2908 "y.tab.c"
    break;

  case 191: /* iteration_statement: FOR '(' ';' ')' statement  */
#line 349 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,5);}
#line 2914 "y.tab.c"
    break;

  case 192: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 352 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("GOTO",-1,-1,"GOTO"),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[-1].sval)),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,3);}
#line 2920 "y.tab.c"
    break;

  case 193: /* jump_statement: CONTINUE ';'  */
#line 353 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("CONTINUE",-1,-1,"CONTINUE"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2926 "y.tab.c"
    break;

  case 194: /* jump_statement: BREAK ';'  */
#line 354 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("BREAK",-1,-1,"BREAK"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2932 "y.tab.c"
    break;

  case 195: /* jump_statement: RETURN ';'  */
#line 355 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("RETURN",-1,-1,"RETURN"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2938 "y.tab.c"
    break;

  case 196: /* jump_statement: RETURN expression ';'  */
#line 356 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("RETURN",-1,-1,"RETURN"),(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,3);}
#line 2944 "y.tab.c"
    break;

  case 197: /* translation_unit: external_declaration  */
#line 362 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("translation_unit",arr,1);}
#line 2950 "y.tab.c"
    break;

  case 198: /* translation_unit: translation_unit external_declaration  */
#line 363 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("translation_unit",arr,2);}
#line 2956 "y.tab.c"
    break;

  case 199: /* external_declaration: function_definition  */
#line 366 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("external_declaration",arr,1);}
#line 2962 "y.tab.c"
    break;

  case 200: /* external_declaration: declaration  */
#line 367 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("external_declaration",arr,1);}
#line 2968 "y.tab.c"
    break;

  case 201: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 370 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("function_definition",arr,3);}
#line 2974 "y.tab.c"
    break;

  case 202: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 371 "expr.y"
                                                                                {tree_node* arr[] = {(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("function_definition",arr,4);}
#line 2980 "y.tab.c"
    break;

  case 203: /* declaration_list: declaration  */
#line 374 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_list",arr,1);}
#line 2986 "y.tab.c"
    break;

  case 204: /* declaration_list: declaration_list declaration  */
#line 375 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_list",arr,2);}
#line 2992 "y.tab.c"
    break;


#line 2996 "y.tab.c"

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

#line 377 "expr.y"



// Error handling function
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
