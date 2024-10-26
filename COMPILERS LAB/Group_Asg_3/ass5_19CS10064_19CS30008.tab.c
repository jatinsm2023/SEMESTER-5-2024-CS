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
#line 1 "ass5_19CS10064_19CS30008.y"

        #define YYDEBUG 1
        extern int yydebug;
       #include <bits/stdc++.h>
      #include "ass5_19CS10064_19CS30008_translator.h"
        using namespace std;
        extern int yylex();
        void yyerror(string s);

        extern char* yytext; 
        extern int yylineno;
        extern string lastType;

#line 85 "ass5_19CS10064_19CS30008.tab.c"

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

#include "ass5_19CS10064_19CS30008.tab.h"
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
  YYSYMBOL_LEFTPAR = 79,                   /* LEFTPAR  */
  YYSYMBOL_RIGHTPAR = 80,                  /* RIGHTPAR  */
  YYSYMBOL_LEFTBRACE = 81,                 /* LEFTBRACE  */
  YYSYMBOL_RIGHTBRACE = 82,                /* RIGHTBRACE  */
  YYSYMBOL_LEFTBRACKET = 83,               /* LEFTBRACKET  */
  YYSYMBOL_RIGHTBRACKET = 84,              /* RIGHTBRACKET  */
  YYSYMBOL_COLON = 85,                     /* COLON  */
  YYSYMBOL_QUESTIONMARK = 86,              /* QUESTIONMARK  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_primary_expression = 88,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 89,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 90, /* argument_expression_list_opt  */
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
  YYSYMBOL_M = 106,                        /* M  */
  YYSYMBOL_N = 107,                        /* N  */
  YYSYMBOL_assignment_expression = 108,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 109,      /* assignment_operator  */
  YYSYMBOL_expression = 110,               /* expression  */
  YYSYMBOL_constant_expression = 111,      /* constant_expression  */
  YYSYMBOL_declaration = 112,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 113,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 114,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 115,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 116,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 117,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 118, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 119, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 120,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 121,       /* function_specifier  */
  YYSYMBOL_declarator = 122,               /* declarator  */
  YYSYMBOL_direct_declarator = 123,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 124,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 125,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 126,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 127,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 128,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 129,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 130,          /* identifier_list  */
  YYSYMBOL_type_name = 131,                /* type_name  */
  YYSYMBOL_initializer = 132,              /* initializer  */
  YYSYMBOL_initializer_list = 133,         /* initializer_list  */
  YYSYMBOL_designation = 134,              /* designation  */
  YYSYMBOL_designator_list = 135,          /* designator_list  */
  YYSYMBOL_designator = 136,               /* designator  */
  YYSYMBOL_statement = 137,                /* statement  */
  YYSYMBOL_loop_statement = 138,           /* loop_statement  */
  YYSYMBOL_labeled_statement = 139,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 140,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 141,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 142,          /* block_item_list  */
  YYSYMBOL_block_item = 143,               /* block_item  */
  YYSYMBOL_expression_statement = 144,     /* expression_statement  */
  YYSYMBOL_selection_statement = 145,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 146,      /* iteration_statement  */
  YYSYMBOL_F = 147,                        /* F  */
  YYSYMBOL_W = 148,                        /* W  */
  YYSYMBOL_D = 149,                        /* D  */
  YYSYMBOL_X = 150,                        /* X  */
  YYSYMBOL_change_table = 151,             /* change_table  */
  YYSYMBOL_jump_statement = 152,           /* jump_statement  */
  YYSYMBOL_translation_unit = 153,         /* translation_unit  */
  YYSYMBOL_external_declaration = 154,     /* external_declaration  */
  YYSYMBOL_function_definition = 155,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 156,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 157          /* declaration_list  */
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
#define YYLAST   1254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  388

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   341


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    91,    96,   101,   106,   111,   117,   135,
     140,   141,   142,   148,   154,   155,   158,   161,   166,   170,
     177,   180,   184,   188,   222,   223,   226,   227,   228,   229,
     230,   231,   234,   237,   243,   256,   265,   274,   285,   288,
     297,   308,   311,   320,   331,   334,   346,   358,   370,   384,
     387,   401,   416,   419,   433,   436,   450,   453,   467,   470,
     482,   485,   497,   500,   524,   529,   535,   538,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   565,
     568,   572,   577,   578,   581,   582,   583,   584,   585,   586,
     587,   588,   591,   592,   595,   601,   606,   607,   608,   609,
     612,   615,   618,   619,   622,   625,   628,   629,   630,   631,
     632,   633,   637,   639,   644,   646,   650,   651,   652,   655,
     658,   666,   669,   673,   676,   694,   697,   715,   718,   721,
     724,   727,   730,   733,   745,   748,   762,   764,   768,   771,
     776,   777,   780,   781,   784,   785,   788,   789,   792,   793,
     796,   799,   802,   803,   806,   807,   808,   809,   812,   815,
     816,   819,   820,   825,   826,   829,   833,   836,   839,   844,
     845,   849,   852,   855,   860,   863,   864,   867,   874,   878,
     884,   887,   893,   896,   901,   904,   909,   920,   932,   935,
     950,   966,   979,   991,  1008,  1024,  1040,  1058,  1062,  1066,
    1070,  1082,  1093,  1094,  1097,  1100,  1104,  1113,  1114,  1117,
    1118,  1121,  1130,  1132,  1135,  1136
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
  "GREATER", "OR", "XOR", "LOWER_THAN_ELSE", "LEFTPAR", "RIGHTPAR",
  "LEFTBRACE", "RIGHTBRACE", "LEFTBRACKET", "RIGHTBRACKET", "COLON",
  "QUESTIONMARK", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "M", "N", "assignment_expression",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_opt",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "loop_statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "F", "W", "D", "X", "change_table", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-345)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-214)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1212,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,    40,  1212,  1212,  1212,  1212,  1192,  -345,  -345,
    -345,   196,  -345,    45,   -19,  -345,  1099,   -60,    21,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,   -38,   196,   -63,  -345,
      45,   689,  -345,    40,  -345,  1212,    39,   286,   -60,  -345,
    -345,  -345,  -345,    -8,  -345,  -345,  -345,  -345,   986,  1014,
    1014,  -345,  -345,  -345,  -345,  -345,  -345,   808,   408,  -345,
     -13,   374,  1027,  -345,   179,    51,   123,   151,   125,     3,
       6,    27,    70,   -39,  -345,  -345,  -345,    26,  -345,  -345,
      -7,  1119,   903,    41,  -345,    46,   294,   808,  -345,   808,
    -345,  -345,  -345,    55,  1228,  -345,  1228,    56,   144,  1027,
    -345,   -57,   689,   -24,  -345,   146,  -345,  -345,   153,  1027,
    1027,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  1027,  -345,  -345,  1027,  1027,  1027,  1027,  1027,
    1027,  1027,  1027,  1027,  1027,  1027,  1027,  1027,  1027,  1027,
    1027,  -345,  -345,    85,   489,   177,  -345,  -345,    45,   122,
     134,  -345,   130,   903,  -345,  -345,  1027,   132,  -345,   139,
     129,   147,  1027,  -345,  -345,  -345,  -345,   697,  -345,  -345,
     156,   337,  -345,  -345,  -345,  -345,  -345,  -345,   150,   178,
    -345,   -27,  -345,  -345,  -345,  -345,   179,   179,    51,    51,
     123,   123,   123,   123,   151,   151,   125,     3,     6,  1027,
    1027,  -345,   167,  1027,   168,   183,   188,  -345,  -345,  -345,
     255,   197,   201,   932,  -345,  -345,   111,  -345,  -345,  -345,
    -345,   191,   193,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  1139,  -345,   192,   195,  -345,  -345,   199,   199,  -345,
     408,  -345,  -345,  -345,  -345,   689,  -345,  1027,  -345,    27,
      70,  1027,   542,   198,   542,  1027,  1027,   202,   205,   208,
     217,  -345,  -345,  -345,   120,  -345,  -345,  -345,   489,  -345,
    -345,  -345,  -345,   -50,  -345,  -345,   222,  -345,   542,  -345,
     222,    57,  -345,  -345,   855,  -345,  -345,  -345,   489,  -345,
     379,  -345,   211,  -345,   224,   542,  -345,   489,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,   220,  -345,  -345,  -345,  -345,
    -345,   223,   272,   776,  -345,  1027,   542,  1027,  -345,   228,
    -345,  -345,  -345,  -345,    68,   274,  1027,   945,   945,   281,
     233,   236,    80,  -345,  -345,  -345,  -345,   855,  1027,   245,
    1027,  1027,   542,   489,  -345,    89,  -345,   222,   222,  -345,
     235,   250,   242,   243,  -345,  -345,  -345,  -345,   595,   648,
     489,  -345,   489,  -345,   244,   248,  -345,  -345
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   116,   117,   118,
     119,   210,     0,    85,    87,    89,    91,     0,   208,   209,
     122,   137,    83,     0,     0,    92,    95,   121,     0,    84,
      86,    88,    90,     1,   207,   140,   138,   136,     0,    82,
       0,     0,   214,     0,   201,   212,   201,     0,   120,   139,
     141,   123,    93,    95,     2,     3,     4,     5,     0,     0,
       0,    26,    27,    31,    29,    28,    30,     0,     0,     7,
      20,    32,     0,    34,    38,    41,    44,    49,    52,    54,
      56,    58,    60,    62,    66,   151,    94,     0,   215,   148,
       0,     0,     0,    31,   124,     0,     0,     0,    24,     0,
      21,    22,    79,     0,   115,   150,   115,     0,     0,     0,
     154,     0,     0,     0,   159,     0,    12,    13,     0,    17,
       0,    72,    73,    69,    70,    71,    74,    75,    76,    78,
      77,    68,     0,    32,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    64,     0,   179,     0,   134,   135,   147,     0,
     142,   144,     0,     0,   131,   126,     0,    31,   125,     0,
       0,     0,     0,     6,   114,   112,   113,     0,   162,    81,
       0,     0,   152,   155,   158,   160,    11,    10,     0,    16,
      18,     0,    67,    35,    36,    37,    39,    40,    42,    43,
      47,    48,    45,    46,    50,    51,    53,    55,    57,     0,
       0,    64,     2,     0,     0,     0,     0,   198,   199,   197,
       0,     0,     0,     0,   184,   200,     0,   182,   183,   163,
     164,     0,    64,   180,   165,   166,   167,   168,   149,   146,
     133,     0,   129,     0,     0,   132,   127,    25,     0,    80,
       0,    33,   161,   153,   156,     0,     9,     0,     8,    59,
      61,     0,     0,     0,     0,     0,     0,     0,    64,     0,
       0,   203,   204,   205,     0,   201,   185,   211,     0,   143,
     145,   128,   130,     0,   157,    19,    65,   174,     0,   176,
      65,     0,   200,    64,     0,   200,   202,   206,   179,   181,
       0,    14,     0,   175,     0,     0,   201,   179,    64,   169,
     170,   171,   172,   173,   201,     0,    15,    64,    64,   188,
      64,     0,     0,     0,   177,     0,     0,     0,    64,     0,
      64,    64,    63,    65,     0,     0,     0,     0,     0,   186,
      64,     0,     0,    64,    64,    64,    64,     0,     0,     0,
       0,     0,     0,   179,   189,     0,   191,    65,    65,   187,
       0,     0,     0,     0,   190,   192,    64,    64,     0,     0,
     179,   193,   179,   194,     0,     0,   195,   196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,  -345,  -345,  -345,   -61,  -345,   -71,    63,    96,
      81,    92,   166,   172,   165,   108,   112,  -345,  -117,   -99,
    -130,    -1,  -345,   -76,   115,     0,    14,  -345,   284,  -345,
     101,   -47,   219,    87,  -345,   -17,   301,  -345,   299,   -51,
    -345,  -345,    95,  -345,   -29,   -41,    91,  -187,  -345,   229,
    -254,  -344,  -240,  -345,  -175,  -345,    59,  -202,  -225,  -194,
    -345,  -345,  -345,  -234,   -53,  -192,  -345,   332,  -345,  -345,
    -345
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    79,    80,   198,   199,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,   219,
     163,   112,   142,   236,   190,   237,    53,    34,    35,    23,
      24,   115,   185,    25,    26,    63,    37,    46,    38,    47,
     169,   170,   171,   100,   117,   120,   121,   122,   123,   124,
     238,   318,   239,   240,   241,   242,   243,   244,   245,   246,
     279,   277,   278,   285,    97,   247,    27,    28,    29,    54,
      55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   113,   189,   101,   265,    36,   106,   108,   110,   111,
      96,   144,   162,   364,    22,   191,    48,    61,   297,    56,
     299,   143,   310,    57,    30,   192,    31,    21,   125,   126,
     127,   113,   311,   113,   381,   383,    52,    39,    40,    41,
      42,    22,    99,    30,   313,   182,   194,   -65,    30,   118,
      95,   173,    49,    50,   201,    98,   105,   268,   143,   119,
     128,   329,    51,   220,   319,   165,   129,   184,   316,   184,
     130,   324,   158,   166,   203,   204,   205,    95,   180,   321,
     181,   193,   343,   159,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
      33,   172,   320,   160,    31,   179,   189,   164,   369,    31,
     322,    32,   323,   148,   149,   168,   261,   319,    45,    33,
     161,    95,   271,   265,    33,   174,   143,   182,   200,   182,
     175,   341,   321,   325,    60,   183,   187,   315,   319,   319,
     182,   202,   331,   288,    45,   353,   354,   188,   350,   196,
     264,   249,   182,   321,   321,   320,   197,   284,   143,   143,
     359,   182,   143,   322,   116,   323,   312,   150,   151,   371,
     314,   221,   253,   156,   157,   254,   320,   320,   114,   304,
     248,   259,   286,   182,   322,   322,   323,   323,   370,    45,
      95,   307,   182,    60,   116,   296,   116,   152,   153,   300,
     301,   116,   250,   116,   317,   384,   251,   385,   114,   257,
     114,   206,   207,   349,   252,   114,   255,   114,   342,   332,
      17,    18,    19,   256,   294,   154,   155,   258,   335,   336,
     266,   337,   308,   210,   211,   212,   213,   372,   373,   345,
     262,   347,   348,   145,   146,   147,   208,   209,   214,   215,
     267,   357,   272,   274,   360,   361,   362,   363,   280,    95,
      60,   344,   275,   330,    95,   168,   295,   276,   281,   264,
     352,   333,   282,   287,   143,  -178,   291,   378,   379,   292,
     260,   302,   365,   298,   367,   368,   303,   305,   306,    64,
      65,    66,    67,    68,   182,   102,   327,    64,    65,    66,
      67,    68,   334,   176,   328,   338,   339,   346,   351,    95,
      17,    18,    19,   355,   356,   358,   366,   374,    17,    18,
      19,   375,   376,   377,   216,   218,   386,   269,    69,    70,
     387,   217,   270,   340,    62,   186,    69,    70,   273,    58,
      64,    65,    66,    67,    68,    59,   290,   309,    71,    72,
     103,   293,   195,    74,    75,    76,    71,    72,   177,    44,
       0,    74,    75,    76,     0,    77,     0,     0,     0,     0,
     104,     0,     0,    77,     0,     0,     0,     0,   178,    69,
      70,     0,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,     0,     0,    74,    75,    76,     0,     0,     0,
     118,    64,    65,    66,    67,    68,    77,     0,    78,   263,
     119,    69,    70,     0,     0,     0,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,     0,     0,     0,     0,
       0,    71,    72,    73,   141,     0,    74,    75,    76,     0,
      69,    70,   118,     0,     0,     0,     0,     0,    77,     0,
      78,   326,   119,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,    74,    75,    76,     0,     0,
       0,   118,     0,     0,     0,     0,     0,    77,     0,    78,
       0,   119,   222,    65,    66,    67,    68,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,   223,   224,
     225,     0,   226,   227,   228,   229,   230,   231,   232,   233,
       0,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,    65,    66,    67,    68,
       0,    71,    72,    73,     0,     0,    74,    75,    76,     0,
     234,     0,     0,     0,     0,     0,     0,     0,    77,     0,
     235,   223,   224,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,    65,
      66,    67,    68,     0,    71,    72,    73,     0,     0,    74,
      75,    76,     0,   234,     0,     0,     0,     0,     0,     0,
       0,    77,     0,   235,   223,   224,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,     0,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   222,    65,    66,    67,    68,     0,    71,    72,    73,
       0,     0,    74,    75,    76,     0,   234,     0,     0,     0,
       0,     0,     0,     0,    77,     0,   380,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,     0,
      69,    70,    64,    65,    66,    67,    68,     0,     0,     0,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,    74,    75,    76,     0,   234,
       0,     0,     0,     0,     0,     0,     0,    77,     0,   382,
       0,    69,    70,     0,     0,     0,     0,     0,     0,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,    74,    75,    76,    71,
      72,    73,     0,     0,    74,    75,    76,     0,    77,     0,
      78,     0,     0,     0,     0,     0,    77,     0,   260,    64,
      65,    66,    67,    68,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,     0,     0,    69,    70,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,    71,    72,
      73,     0,     0,    74,    75,    76,     0,   234,     0,     0,
      69,    70,     0,     0,     0,    77,     0,     0,   222,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,    74,    75,    76,     0,     0,
       0,     0,     0,     0,   223,   224,   225,    77,   226,   227,
     228,   229,   230,   231,   232,   233,     0,    69,    70,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    71,    72,    73,
       0,     0,    74,    75,    76,     0,   234,    17,    18,    19,
       0,     0,     0,     0,    77,    64,    65,    66,    67,    68,
       0,     0,     0,     0,     0,    69,    70,     0,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
      74,    75,    76,     0,    69,    70,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,    69,    70,    64,
      65,    66,    67,    68,    71,    72,    73,     0,     0,    74,
      75,    76,     0,   283,     0,     0,     0,    71,    72,    73,
       0,    77,    74,    75,    76,     0,   234,    64,    65,    66,
      67,    68,     0,     0,    77,     0,     0,     0,    69,    70,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,    74,    75,    76,    69,    70,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,    74,    75,    76,     0,     0,     0,     0,     0,    71,
      72,    73,     0,   109,    74,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   289,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,   167,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
       0,    77,   119,    56,   191,    22,    57,    68,    69,    70,
      51,    82,    51,   357,     0,    72,    33,    80,   272,    79,
     274,    82,    72,    83,     3,    82,    64,    27,    41,    42,
      43,   107,    82,   109,   378,   379,    36,    23,    24,    25,
      26,    27,     3,     3,   298,    72,    70,    86,     3,    73,
      51,   102,    71,    72,   130,    55,    57,    84,   119,    83,
      73,   315,    70,   162,   304,    72,    79,   114,   302,   116,
      83,   305,    69,    80,   145,   146,   147,    78,   107,   304,
     109,   122,   336,    77,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
      79,   102,   304,    76,    64,   106,   223,    81,   362,    64,
     304,    71,   304,    62,    63,   101,   187,   357,    31,    79,
      50,   122,   221,   310,    79,    84,   187,    72,   129,    72,
      84,   333,   357,   308,    47,    80,    80,    80,   378,   379,
      72,   142,   317,   242,    57,   347,   348,     3,    80,     3,
     191,   168,    72,   378,   379,   357,     3,   233,   219,   220,
      80,    72,   223,   357,    77,   357,   296,    44,    45,    80,
     300,    86,   173,    48,    49,   176,   378,   379,    77,   278,
       3,   182,    71,    72,   378,   379,   378,   379,   363,   102,
     191,    71,    72,   106,   107,   271,   109,    46,    47,   275,
     276,   114,    80,   116,   303,   380,    72,   382,   107,    80,
     109,   148,   149,   343,    84,   114,    84,   116,   335,   318,
      24,    25,    26,    84,   265,    74,    75,    80,   327,   328,
      80,   330,   285,   152,   153,   154,   155,   367,   368,   338,
      84,   340,   341,    64,    65,    66,   150,   151,   156,   157,
      72,   350,    85,    85,   353,   354,   355,   356,     3,   260,
     173,   337,    79,   316,   265,   251,   267,    79,    71,   310,
     346,   324,    71,    82,   335,    82,    84,   376,   377,    84,
      81,    79,   358,    85,   360,   361,    81,    79,    71,     3,
       4,     5,     6,     7,    72,     9,    85,     3,     4,     5,
       6,     7,    82,     9,    80,    82,    34,    79,    34,   310,
      24,    25,    26,    32,    81,    79,    71,    82,    24,    25,
      26,    71,    80,    80,   158,   160,    82,   219,    42,    43,
      82,   159,   220,   333,    50,   116,    42,    43,   223,    38,
       3,     4,     5,     6,     7,    46,   251,   288,    62,    63,
      64,   260,   123,    67,    68,    69,    62,    63,    64,    27,
      -1,    67,    68,    69,    -1,    79,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    42,
      43,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      73,     3,     4,     5,     6,     7,    79,    -1,    81,    82,
      83,    42,    43,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    70,    -1,    67,    68,    69,    -1,
      42,    43,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    83,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    62,    63,    64,    -1,    -1,    67,    68,    69,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    62,    63,    64,    -1,    -1,    67,
      68,    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    62,    63,    64,
      -1,    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,     3,     4,     5,     6,     7,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    -1,    -1,    67,    68,    69,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    -1,    -1,    67,    68,    69,    62,
      63,    64,    -1,    -1,    67,    68,    69,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    42,    43,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    62,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    71,    -1,    -1,
      42,    43,    -1,    -1,    -1,    79,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    79,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      -1,    -1,    67,    68,    69,    -1,    71,    24,    25,    26,
      -1,    -1,    -1,    -1,    79,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,
      67,    68,    69,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    42,    43,     3,
       4,     5,     6,     7,    62,    63,    64,    -1,    -1,    67,
      68,    69,    -1,    71,    -1,    -1,    -1,    62,    63,    64,
      -1,    79,    67,    68,    69,    -1,    71,     3,     4,     5,
       6,     7,    -1,    -1,    79,    -1,    -1,    -1,    42,    43,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    -1,    -1,    67,    68,    69,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    -1,    79,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    80,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   112,   113,   116,   117,   120,   121,   153,   154,   155,
       3,    64,    71,    79,   114,   115,   122,   123,   125,   113,
     113,   113,   113,     0,   154,   120,   124,   126,   122,    71,
      72,    70,   112,   113,   156,   157,    79,    83,   123,   125,
     120,    80,   115,   122,     3,     4,     5,     6,     7,    42,
      43,    62,    63,    64,    67,    68,    69,    79,    81,    88,
      89,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   108,   132,   151,   112,     3,
     130,   151,     9,    64,    84,   108,   126,    79,    92,    79,
      92,    92,   108,   110,   117,   118,   120,   131,    73,    83,
     132,   133,   134,   135,   136,    41,    42,    43,    73,    79,
      83,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    70,   109,    92,    94,    64,    65,    66,    62,    63,
      44,    45,    46,    47,    74,    75,    48,    49,    69,    77,
      76,    50,    51,   107,    81,    72,    80,    80,   113,   127,
     128,   129,   108,   126,    84,    84,     9,    64,    84,   108,
     131,   131,    72,    80,   118,   119,   119,    80,     3,   105,
     111,    72,    82,   132,    70,   136,     3,     3,    90,    91,
     108,   110,   108,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    98,    98,    99,   100,   101,   106,
     106,    86,     3,    29,    30,    31,    33,    34,    35,    36,
      37,    38,    39,    40,    71,    81,   110,   112,   137,   139,
     140,   141,   142,   143,   144,   145,   146,   152,     3,   122,
      80,    72,    84,   108,   108,    84,    84,    80,    80,   108,
      81,    94,    84,    82,   132,   134,    80,    72,    84,   102,
     103,   106,    85,   111,    85,    79,    79,   148,   149,   147,
       3,    71,    71,    71,   110,   150,    71,    82,   106,    28,
     129,    84,    84,   133,   132,   108,   110,   137,    85,   137,
     110,   110,    79,    81,   106,    79,    71,    71,   151,   143,
      72,    82,   107,   137,   107,    80,   150,   106,   138,   139,
     144,   145,   146,   152,   150,   141,    82,    85,    80,   137,
     151,   141,   106,   151,    82,   106,   106,   106,    82,    34,
     112,   144,   105,   137,   110,   106,    79,   106,   106,   107,
      80,    34,   110,   144,   144,    32,    81,   106,    79,    80,
     106,   106,   106,   106,   138,   110,    71,   110,   110,   137,
     141,    80,   107,   107,    82,    71,    80,    80,   106,   106,
      81,   138,    81,   138,   141,   141,    82,    82
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    94,    94,    95,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    98,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   121,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   132,   132,   132,   133,   133,   133,   133,   134,   135,
     135,   136,   136,   137,   137,   137,   137,   137,   137,   138,
     138,   138,   138,   138,   139,   139,   139,   140,   141,   141,
     142,   142,   143,   143,   144,   144,   145,   145,   145,   146,
     146,   146,   146,   146,   146,   146,   146,   147,   148,   149,
     150,   151,   152,   152,   152,   152,   152,   153,   153,   154,
     154,   155,   156,   156,   157,   157
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     2,     2,     6,     7,     1,     0,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     4,
       1,     4,     1,     9,     0,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     0,     1,     1,     1,     1,
       2,     1,     1,     3,     3,     4,     4,     5,     6,     5,
       6,     4,     5,     5,     4,     4,     1,     0,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     1,     2,     3,     4,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     5,     1,     0,
       1,     3,     1,     1,     1,     2,     8,    11,     5,    10,
      12,    10,    12,    14,    14,    16,    16,     0,     0,     0,
       0,     0,     3,     2,     2,     2,     3,     2,     1,     1,
       1,     7,     1,     0,     1,     2
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
#line 86 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.expr) = new expression();
                (yyval.expr)->loc = (yyvsp[0].syent); // symbol table entry
                (yyval.expr)->type = "non_bool";
        }
#line 1704 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 3: /* primary_expression: FLO_CONSTANT  */
#line 91 "ass5_19CS10064_19CS30008.y"
                       {
                (yyval.expr) = new expression();
                (yyval.expr)->loc = symboltable::gentemp(new symboltype("float"),string((yyvsp[0].charval)));
                emit("=",(yyval.expr)->loc->name,(yyvsp[0].charval));
        }
#line 1714 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 4: /* primary_expression: INT_CONSTANT  */
#line 96 "ass5_19CS10064_19CS30008.y"
                       {
                (yyval.expr) = new expression();
                (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),to_string((yyvsp[0].ival)));
                emit("=",(yyval.expr)->loc->name,to_string((yyvsp[0].ival)));
        }
#line 1724 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 101 "ass5_19CS10064_19CS30008.y"
                         {
                (yyval.expr) = new expression();
                (yyval.expr)->loc = symboltable::gentemp(new symboltype("ptr"),(yyvsp[0].charval));
                (yyval.expr)->loc->type->arrtype = new symboltype("char");
        }
#line 1734 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 6: /* primary_expression: LEFTPAR expression RIGHTPAR  */
#line 106 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.expr) = (yyvsp[-1].expr);
        }
#line 1742 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 111 "ass5_19CS10064_19CS30008.y"
                                       {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = (yyvsp[0].expr)->loc;
                (yyval.arr)->type = (yyvsp[0].expr)->loc->type;
                (yyval.arr)->loc = (yyval.arr)->arr;
        }
#line 1753 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression LEFTBRACKET expression RIGHTBRACKET  */
#line 117 "ass5_19CS10064_19CS30008.y"
                                                                 {
                (yyval.arr) = new arraytype();
                (yyval.arr)->type = (yyvsp[-3].arr)->type->arrtype;
                (yyval.arr)->arr = (yyvsp[-3].arr)->arr;
                (yyval.arr)->loc = symboltable::gentemp(new symboltype("int"),"");
                (yyval.arr)->arrtype = "arr";

                if((yyvsp[-3].arr)->arrtype=="arr"){
                        symbol *temp = symboltable::gentemp(new symboltype("int"),"");
                        int sz = getSize((yyval.arr)->type);
                        emit("*",temp->name,(yyvsp[-1].expr)->loc->name,int_to_string(sz));
                        emit("+",(yyval.arr)->loc->name,(yyvsp[-3].arr)->loc->name,temp->name);
                }
                else{
                        int sz = getSize((yyval.arr)->type);
                        emit("*",(yyval.arr)->loc->name,(yyvsp[-1].expr)->loc->name,int_to_string(sz));
                }
        }
#line 1776 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFTPAR argument_expression_list_opt RIGHTPAR  */
#line 135 "ass5_19CS10064_19CS30008.y"
                                                                           {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = symboltable::gentemp((yyvsp[-3].arr)->type,"");
                emit("call", (yyval.arr)->arr->name,(yyvsp[-3].arr)->arr->name,int_to_string((yyvsp[-1].numparams)));
        }
#line 1786 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 140 "ass5_19CS10064_19CS30008.y"
                                             {}
#line 1792 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 141 "ass5_19CS10064_19CS30008.y"
                                               {}
#line 1798 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INCREMENT  */
#line 142 "ass5_19CS10064_19CS30008.y"
                                        {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = symboltable::gentemp((yyvsp[-1].arr)->arr->type,"");
                emit("=", (yyvsp[-1].arr)->arr->name,(yyval.arr)->arr->name);
                emit("+",(yyval.arr)->arr->name,(yyvsp[-1].arr)->arr->name,"1");
        }
#line 1809 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DECREMENT  */
#line 148 "ass5_19CS10064_19CS30008.y"
                                       {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = symboltable::gentemp((yyvsp[-1].arr)->arr->type,"");
                emit("=", (yyvsp[-1].arr)->arr->name,(yyval.arr)->arr->name);
                emit("-",(yyval.arr)->arr->name,(yyvsp[-1].arr)->arr->name,"1");
        }
#line 1820 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 14: /* postfix_expression: LEFTPAR type_name RIGHTPAR LEFTBRACE initializer_list RIGHTBRACE  */
#line 154 "ass5_19CS10064_19CS30008.y"
                                                                           {}
#line 1826 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 15: /* postfix_expression: LEFTPAR type_name RIGHTPAR LEFTBRACE initializer_list COMMA RIGHTBRACE  */
#line 155 "ass5_19CS10064_19CS30008.y"
                                                                                     {}
#line 1832 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 16: /* argument_expression_list_opt: argument_expression_list  */
#line 158 "ass5_19CS10064_19CS30008.y"
                                                       {
                (yyval.numparams) = (yyvsp[0].numparams);
        }
#line 1840 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 17: /* argument_expression_list_opt: %empty  */
#line 161 "ass5_19CS10064_19CS30008.y"
                 {
                (yyval.numparams) = 0;
        }
#line 1848 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 18: /* argument_expression_list: assignment_expression  */
#line 166 "ass5_19CS10064_19CS30008.y"
                                                {
                (yyval.numparams) = 1;
                emit("param", (yyvsp[0].expr)->loc->name);
        }
#line 1857 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 19: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 170 "ass5_19CS10064_19CS30008.y"
                                                               {
                (yyval.numparams) = (yyvsp[-2].numparams) + 1;
                emit("param", (yyvsp[0].expr)->loc->name);
        }
#line 1866 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 20: /* unary_expression: postfix_expression  */
#line 177 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.arr) = (yyvsp[0].arr);
        }
#line 1874 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 21: /* unary_expression: INCREMENT unary_expression  */
#line 180 "ass5_19CS10064_19CS30008.y"
                                     {
                emit("+", (yyvsp[0].arr)->loc->name,(yyvsp[0].arr)->loc->name,"1");
                (yyval.arr) = (yyvsp[0].arr);
        }
#line 1883 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 22: /* unary_expression: DECREMENT unary_expression  */
#line 184 "ass5_19CS10064_19CS30008.y"
                                     {
                emit("-", (yyvsp[0].arr)->loc->name,(yyvsp[0].arr)->loc->name,"1");
                (yyval.arr) = (yyvsp[0].arr);
        }
#line 1892 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 23: /* unary_expression: unary_operator cast_expression  */
#line 188 "ass5_19CS10064_19CS30008.y"
                                         {
                (yyval.arr) = new arraytype();
                switch((yyvsp[-1].unary_op)){
                        case '&':
                                (yyval.arr)->arr = symboltable::gentemp(new symboltype("ptr"), "");
                                (yyval.arr)->arr->type->arrtype = (yyvsp[0].arr)->arr->type;
                                emit("= &", (yyval.arr)->arr->name, (yyvsp[0].arr)->arr->name);
                                break;
                        case '*':
                                (yyval.arr)->arrtype = "ptr";
                                (yyval.arr)->loc = symboltable::gentemp((yyvsp[0].arr)->arr->type->arrtype,"");
                                (yyval.arr)->arr = (yyvsp[0].arr)->arr;

                                emit("= *", (yyval.arr)->loc->name, (yyvsp[0].arr)->arr->name);
                                break;
                        case '+':
                                (yyval.arr) = (yyvsp[0].arr);
                                break;
                        case '-':
                                (yyval.arr)->arr = symboltable::gentemp(new symboltype((yyvsp[0].arr)->arr->type->type), "");
                                emit("= -", (yyval.arr)->arr->name, (yyvsp[0].arr)->arr->name);
                                break;
                        case '~':
                                (yyval.arr)->arr = symboltable::gentemp(new symboltype((yyvsp[0].arr)->arr->type->type), "");
                                emit("= ~", (yyval.arr)->arr->name, (yyvsp[0].arr)->arr->name);
                                break;
                        case '!':
                                (yyval.arr)->arr = symboltable::gentemp(new symboltype((yyvsp[0].arr)->arr->type->type), "");
                                emit("= !", (yyval.arr)->arr->name, (yyvsp[0].arr)->arr->name);
                                break;
                        default:
                                break;
                }
        }
#line 1931 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 24: /* unary_expression: SIZEOF unary_expression  */
#line 222 "ass5_19CS10064_19CS30008.y"
                                  {}
#line 1937 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF LEFTPAR type_name RIGHTPAR  */
#line 223 "ass5_19CS10064_19CS30008.y"
                                             {}
#line 1943 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 26: /* unary_operator: PLUS  */
#line 226 "ass5_19CS10064_19CS30008.y"
                     { (yyval.unary_op) = '+'; }
#line 1949 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 27: /* unary_operator: MINUS  */
#line 227 "ass5_19CS10064_19CS30008.y"
                { (yyval.unary_op) = '-'; }
#line 1955 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 28: /* unary_operator: NOT  */
#line 228 "ass5_19CS10064_19CS30008.y"
               { (yyval.unary_op) = '!'; }
#line 1961 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 29: /* unary_operator: TILDA  */
#line 229 "ass5_19CS10064_19CS30008.y"
                { (yyval.unary_op) = '~'; }
#line 1967 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 30: /* unary_operator: AND  */
#line 230 "ass5_19CS10064_19CS30008.y"
               { (yyval.unary_op) = '&'; }
#line 1973 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 31: /* unary_operator: MULTIPLY  */
#line 231 "ass5_19CS10064_19CS30008.y"
                   { (yyval.unary_op) = '*'; }
#line 1979 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 32: /* cast_expression: unary_expression  */
#line 234 "ass5_19CS10064_19CS30008.y"
                                  {
                (yyval.arr) = (yyvsp[0].arr);
        }
#line 1987 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 33: /* cast_expression: LEFTPAR type_name RIGHTPAR cast_expression  */
#line 237 "ass5_19CS10064_19CS30008.y"
                                                      {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = convertToSymbol((yyvsp[0].arr)->arr,lastType);
        }
#line 1996 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 34: /* multiplicative_expression: cast_expression  */
#line 243 "ass5_19CS10064_19CS30008.y"
                                           {
                (yyval.expr) = new expression();
                if((yyvsp[0].arr)->arrtype == "arr"){
                        (yyval.expr)->loc = symboltable::gentemp((yyvsp[0].arr)->loc->type,"");
                        emit("=[]",(yyval.expr)->loc->name,(yyvsp[0].arr)->arr->name,(yyvsp[0].arr)->loc->name);
                }
                else if((yyvsp[0].arr)->arrtype == "ptr"){
                        (yyval.expr)->loc = (yyvsp[0].arr)->loc;
                }
                else{
                        (yyval.expr)->loc = (yyvsp[0].arr)->arr;
                }
        }
#line 2014 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 256 "ass5_19CS10064_19CS30008.y"
                                                             {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].arr)->arr)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("*",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].arr)->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2028 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 265 "ass5_19CS10064_19CS30008.y"
                                                        {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].arr)->arr)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("/",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].arr)->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2042 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 274 "ass5_19CS10064_19CS30008.y"
                                                         {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].arr)->arr)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("%",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].arr)->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2056 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 38: /* additive_expression: multiplicative_expression  */
#line 285 "ass5_19CS10064_19CS30008.y"
                                               {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2064 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 39: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 288 "ass5_19CS10064_19CS30008.y"
                                                             {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("+",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2078 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 40: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 297 "ass5_19CS10064_19CS30008.y"
                                                              {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("-",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2092 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 41: /* shift_expression: additive_expression  */
#line 308 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2100 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 42: /* shift_expression: shift_expression LEFTSHIFT additive_expression  */
#line 311 "ass5_19CS10064_19CS30008.y"
                                                         {
                if((yyvsp[0].expr)->loc->type->type == "int"){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit("<<",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2114 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 43: /* shift_expression: shift_expression RIGHTSHIFT additive_expression  */
#line 320 "ass5_19CS10064_19CS30008.y"
                                                          {
                if((yyvsp[0].expr)->loc->type->type == "int"){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit(">>",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2128 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 44: /* relational_expression: shift_expression  */
#line 331 "ass5_19CS10064_19CS30008.y"
                                        {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2136 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 45: /* relational_expression: relational_expression LESS shift_expression  */
#line 334 "ass5_19CS10064_19CS30008.y"
                                                      {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "bool";
                        (yyval.expr)->truelist = makelist(nextinstr());
                        (yyval.expr)->falselist = makelist(nextinstr()+1);
                        emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        emit("goto", "", "", "");
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2153 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 46: /* relational_expression: relational_expression GREATER shift_expression  */
#line 346 "ass5_19CS10064_19CS30008.y"
                                                         {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "bool";
                        (yyval.expr)->truelist = makelist(nextinstr());
                        (yyval.expr)->falselist = makelist(nextinstr()+1);
                        emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        emit("goto", "", "", "");
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2170 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESSEQUAL shift_expression  */
#line 358 "ass5_19CS10064_19CS30008.y"
                                                           {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "bool";
                        (yyval.expr)->truelist = makelist(nextinstr());
                        (yyval.expr)->falselist = makelist(nextinstr()+1);
                        emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        emit("goto", "", "", "");
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2187 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATEREQUAL shift_expression  */
#line 370 "ass5_19CS10064_19CS30008.y"
                                                              {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "bool";
                        (yyval.expr)->truelist = makelist(nextinstr());
                        (yyval.expr)->falselist = makelist(nextinstr()+1);
                        emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        emit("goto", "", "", "");
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2204 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 49: /* equality_expression: relational_expression  */
#line 384 "ass5_19CS10064_19CS30008.y"
                                           {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2212 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 50: /* equality_expression: equality_expression DOUBLEEQUAL relational_expression  */
#line 387 "ass5_19CS10064_19CS30008.y"
                                                                {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        convertBool2Int((yyvsp[-2].expr));
                        convertBool2Int((yyvsp[0].expr));
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "bool";
                        (yyval.expr)->truelist = makelist(nextinstr());
                        (yyval.expr)->falselist = makelist(nextinstr()+1);
                        emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        emit("goto", "", "", "");
                }else{
                        yyerror("Type Error");
                }
        }
#line 2231 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 51: /* equality_expression: equality_expression NOTEQUAL relational_expression  */
#line 401 "ass5_19CS10064_19CS30008.y"
                                                             {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        convertBool2Int((yyvsp[-2].expr));
                        convertBool2Int((yyvsp[0].expr));
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "bool";
                        (yyval.expr)->truelist = makelist(nextinstr());
                        (yyval.expr)->falselist = makelist(nextinstr()+1);
                        emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        emit("goto", "", "", "");
                }else{
                        yyerror("Type Error");
                }
        }
#line 2250 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 52: /* AND_expression: equality_expression  */
#line 416 "ass5_19CS10064_19CS30008.y"
                                    {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2258 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 53: /* AND_expression: AND_expression AND equality_expression  */
#line 419 "ass5_19CS10064_19CS30008.y"
                                                 {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        convertBool2Int((yyvsp[-2].expr));
                        convertBool2Int((yyvsp[0].expr));
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "non_bool";
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
#line 2275 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 54: /* exclusive_OR_expression: AND_expression  */
#line 433 "ass5_19CS10064_19CS30008.y"
                                        {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2283 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 55: /* exclusive_OR_expression: exclusive_OR_expression XOR AND_expression  */
#line 436 "ass5_19CS10064_19CS30008.y"
                                                     {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        convertBool2Int((yyvsp[-2].expr));
                        convertBool2Int((yyvsp[0].expr));
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "non_bool";
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
#line 2300 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 56: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 450 "ass5_19CS10064_19CS30008.y"
                                                  {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2308 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 57: /* inclusive_OR_expression: inclusive_OR_expression OR exclusive_OR_expression  */
#line 453 "ass5_19CS10064_19CS30008.y"
                                                             {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        convertBool2Int((yyvsp[-2].expr));
                        convertBool2Int((yyvsp[0].expr));
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "non_bool";
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
#line 2325 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 58: /* logical_AND_expression: inclusive_OR_expression  */
#line 467 "ass5_19CS10064_19CS30008.y"
                                                {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2333 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 59: /* logical_AND_expression: logical_AND_expression DOUBLEAND M inclusive_OR_expression  */
#line 470 "ass5_19CS10064_19CS30008.y"
                                                                     {
                convertInt2Bool((yyvsp[-3].expr));
                convertInt2Bool((yyvsp[0].expr));

                (yyval.expr) = new expression();
                backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instruction));

                (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;
                (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);
        }
#line 2348 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 60: /* logical_OR_expression: logical_AND_expression  */
#line 482 "ass5_19CS10064_19CS30008.y"
                                              {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2356 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 61: /* logical_OR_expression: logical_OR_expression DOUBLEOR M logical_AND_expression  */
#line 485 "ass5_19CS10064_19CS30008.y"
                                                                  {
                convertInt2Bool((yyvsp[-3].expr));
                convertInt2Bool((yyvsp[0].expr));

                (yyval.expr) = new expression();
                backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instruction));

                (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);
                (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;
        }
#line 2371 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 62: /* conditional_expression: logical_OR_expression  */
#line 497 "ass5_19CS10064_19CS30008.y"
                                              {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2379 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 63: /* conditional_expression: logical_OR_expression N QUESTIONMARK M expression N COLON M conditional_expression  */
#line 500 "ass5_19CS10064_19CS30008.y"
                                                                                               {
                (yyval.expr)->loc = symboltable::gentemp((yyvsp[-4].expr)->loc->type,"");
                (yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
                emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);

                list<int> temp1 = makelist(nextinstr());
                emit("goto", "", "", "");
                backpatch((yyvsp[-8].expr)->truelist, nextinstr());
                emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);

                list<int> temp2 = makelist(nextinstr());

                temp1 = merge(temp1,temp2);

                emit("goto", "", "", "");

                backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());
                convertInt2Bool((yyvsp[-8].expr));
                backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-5].instruction));
                backpatch((yyvsp[-8].expr)->falselist,(yyvsp[-1].instruction));
                backpatch(temp1,nextinstr());
        }
#line 2406 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 64: /* M: %empty  */
#line 524 "ass5_19CS10064_19CS30008.y"
             {
                (yyval.instruction) = nextinstr();
        }
#line 2414 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 65: /* N: %empty  */
#line 529 "ass5_19CS10064_19CS30008.y"
              {
                (yyval.stmt) = new statement();
                (yyval.stmt)->nextlist = makelist(nextinstr());
                emit("goto", "", "", "");
        }
#line 2424 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 535 "ass5_19CS10064_19CS30008.y"
                                              {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2432 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 538 "ass5_19CS10064_19CS30008.y"
                                                                     {
                if((yyvsp[-2].arr)->arrtype == "arr"){
                        (yyvsp[0].expr)->loc = convertToSymbol((yyvsp[0].expr)->loc,(yyvsp[-2].arr)->type->type);
                        emit("[]=",(yyvsp[-2].arr)->arr->name,(yyvsp[-2].arr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else if((yyvsp[-2].arr)->arrtype == "ptr"){
                        emit("*=",(yyvsp[-2].arr)->arr->name,(yyvsp[-2].arr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        (yyvsp[0].expr)->loc = convertToSymbol((yyvsp[0].expr)->loc,(yyvsp[-2].arr)->arr->type->type);
                        emit("=", (yyvsp[-2].arr)->loc->name, (yyvsp[0].expr)->loc->name);
                }
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2449 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 68: /* assignment_operator: EQUAL  */
#line 552 "ass5_19CS10064_19CS30008.y"
                            {}
#line 2455 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 69: /* assignment_operator: MULTIPLYEQUAL  */
#line 553 "ass5_19CS10064_19CS30008.y"
                        {}
#line 2461 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 70: /* assignment_operator: DIVEQUAL  */
#line 554 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2467 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 71: /* assignment_operator: MODEQUAL  */
#line 555 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2473 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 72: /* assignment_operator: PLUSEQUAL  */
#line 556 "ass5_19CS10064_19CS30008.y"
                      {}
#line 2479 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 73: /* assignment_operator: MINUSEQUAL  */
#line 557 "ass5_19CS10064_19CS30008.y"
                      {}
#line 2485 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 74: /* assignment_operator: LEFTSHIFTEQUAL  */
#line 558 "ass5_19CS10064_19CS30008.y"
                          {}
#line 2491 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 75: /* assignment_operator: RIGHTSHIFTEQUAL  */
#line 559 "ass5_19CS10064_19CS30008.y"
                          {}
#line 2497 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 76: /* assignment_operator: ANDEQUAL  */
#line 560 "ass5_19CS10064_19CS30008.y"
                    {}
#line 2503 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 77: /* assignment_operator: XOREQUAL  */
#line 561 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2509 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 78: /* assignment_operator: OREQUAL  */
#line 562 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2515 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 79: /* expression: assignment_expression  */
#line 565 "ass5_19CS10064_19CS30008.y"
                                  {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2523 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 80: /* expression: expression COMMA assignment_expression  */
#line 568 "ass5_19CS10064_19CS30008.y"
                                                 {

        }
#line 2531 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 81: /* constant_expression: conditional_expression  */
#line 572 "ass5_19CS10064_19CS30008.y"
                                             {}
#line 2537 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 82: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 577 "ass5_19CS10064_19CS30008.y"
                                                                    {}
#line 2543 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers SEMICOLON  */
#line 578 "ass5_19CS10064_19CS30008.y"
                                            {}
#line 2549 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 84: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 581 "ass5_19CS10064_19CS30008.y"
                                                                       { }
#line 2555 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 85: /* declaration_specifiers: storage_class_specifier  */
#line 582 "ass5_19CS10064_19CS30008.y"
                                 { }
#line 2561 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 86: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 583 "ass5_19CS10064_19CS30008.y"
                                                { }
#line 2567 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier  */
#line 584 "ass5_19CS10064_19CS30008.y"
                         { }
#line 2573 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 585 "ass5_19CS10064_19CS30008.y"
                                                { }
#line 2579 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 89: /* declaration_specifiers: type_qualifier  */
#line 586 "ass5_19CS10064_19CS30008.y"
                         { }
#line 2585 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 90: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 587 "ass5_19CS10064_19CS30008.y"
                                                    { }
#line 2591 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 91: /* declaration_specifiers: function_specifier  */
#line 588 "ass5_19CS10064_19CS30008.y"
                             { }
#line 2597 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 591 "ass5_19CS10064_19CS30008.y"
                                       {}
#line 2603 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 592 "ass5_19CS10064_19CS30008.y"
                                                      {}
#line 2609 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 94: /* init_declarator: declarator EQUAL initializer  */
#line 595 "ass5_19CS10064_19CS30008.y"
                                             {
                if((yyvsp[0].syent)->value != ""){
                        (yyvsp[-2].syent)->value = (yyvsp[0].syent)->value;
                }
                emit("=", (yyvsp[-2].syent)->name, (yyvsp[0].syent)->name);
        }
#line 2620 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 95: /* init_declarator: declarator  */
#line 601 "ass5_19CS10064_19CS30008.y"
                     {
                (yyval.syent) = (yyvsp[0].syent);
        }
#line 2628 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 96: /* storage_class_specifier: EXTERN  */
#line 606 "ass5_19CS10064_19CS30008.y"
                                {}
#line 2634 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 97: /* storage_class_specifier: STATIC  */
#line 607 "ass5_19CS10064_19CS30008.y"
                 {}
#line 2640 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 98: /* storage_class_specifier: AUTO  */
#line 608 "ass5_19CS10064_19CS30008.y"
               {}
#line 2646 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 99: /* storage_class_specifier: REGISTER  */
#line 609 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2652 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 100: /* type_specifier: VOID  */
#line 612 "ass5_19CS10064_19CS30008.y"
                     {
                lastType = "void";
        }
#line 2660 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 101: /* type_specifier: CHAR  */
#line 615 "ass5_19CS10064_19CS30008.y"
               {
                lastType = "char";
        }
#line 2668 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 102: /* type_specifier: SHORT  */
#line 618 "ass5_19CS10064_19CS30008.y"
                {}
#line 2674 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 103: /* type_specifier: INT  */
#line 619 "ass5_19CS10064_19CS30008.y"
               {
                lastType = "int";
        }
#line 2682 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 104: /* type_specifier: LONG  */
#line 622 "ass5_19CS10064_19CS30008.y"
               {
                
        }
#line 2690 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 105: /* type_specifier: FLOAT  */
#line 625 "ass5_19CS10064_19CS30008.y"
                 {
                lastType = "float";
        }
#line 2698 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 106: /* type_specifier: DOUBLE  */
#line 628 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2704 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 107: /* type_specifier: SIGNED  */
#line 629 "ass5_19CS10064_19CS30008.y"
                  {}
#line 2710 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 108: /* type_specifier: UNSIGNED  */
#line 630 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2716 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 109: /* type_specifier: BOOL  */
#line 631 "ass5_19CS10064_19CS30008.y"
                {}
#line 2722 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 110: /* type_specifier: COMPLEX  */
#line 632 "ass5_19CS10064_19CS30008.y"
                  {}
#line 2728 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 111: /* type_specifier: IMAGINARY  */
#line 633 "ass5_19CS10064_19CS30008.y"
                    {}
#line 2734 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 638 "ass5_19CS10064_19CS30008.y"
        {  }
#line 2740 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 640 "ass5_19CS10064_19CS30008.y"
        {  }
#line 2746 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 114: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 645 "ass5_19CS10064_19CS30008.y"
        {}
#line 2752 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 115: /* specifier_qualifier_list_opt: %empty  */
#line 647 "ass5_19CS10064_19CS30008.y"
        { }
#line 2758 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 116: /* type_qualifier: CONST  */
#line 650 "ass5_19CS10064_19CS30008.y"
                      {}
#line 2764 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 117: /* type_qualifier: RESTRICT  */
#line 651 "ass5_19CS10064_19CS30008.y"
                    {}
#line 2770 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 118: /* type_qualifier: VOLATILE  */
#line 652 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2776 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 119: /* function_specifier: INLINE  */
#line 655 "ass5_19CS10064_19CS30008.y"
                            {}
#line 2782 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 120: /* declarator: pointer direct_declarator  */
#line 658 "ass5_19CS10064_19CS30008.y"
                                      {
                symboltype* temp = (yyvsp[-1].syenttype);
                while(temp->arrtype != NULL){
                        temp = temp->arrtype;
                }
                temp->arrtype = (yyvsp[0].syent)->type;
                (yyval.syent) = (yyvsp[0].syent)->update((yyvsp[-1].syenttype));
        }
#line 2795 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 121: /* declarator: direct_declarator  */
#line 666 "ass5_19CS10064_19CS30008.y"
                             {}
#line 2801 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 122: /* direct_declarator: IDENTIFIER  */
#line 669 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.syent) = (yyvsp[0].syent)->update(new symboltype(lastType));
                currentSymbol = (yyval.syent);
        }
#line 2810 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 123: /* direct_declarator: LEFTPAR declarator RIGHTPAR  */
#line 673 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.syent) = (yyvsp[-1].syent);
        }
#line 2818 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 124: /* direct_declarator: direct_declarator LEFTBRACKET RIGHTBRACKET  */
#line 676 "ass5_19CS10064_19CS30008.y"
                                                     {
                symboltype* t = (yyvsp[-2].syent)->type;
                symboltype *prev = NULL;

                while(t->type == "arr"){
                        prev = t;
                        t = t->arrtype;
                }

                if(prev == NULL){
                        symboltype *tp = new symboltype("arr", (yyvsp[-2].syent)->type,0);
                        (yyval.syent) = (yyvsp[-2].syent)->update(tp);
                }else{
                        prev->arrtype = new symboltype("arr", t,0);
                        (yyval.syent) = (yyvsp[-2].syent)->update((yyvsp[-2].syent)->type);
                }

        }
#line 2841 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator LEFTBRACKET type_qualifier_list RIGHTBRACKET  */
#line 694 "ass5_19CS10064_19CS30008.y"
                                                                          {

        }
#line 2849 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator LEFTBRACKET assignment_expression RIGHTBRACKET  */
#line 697 "ass5_19CS10064_19CS30008.y"
                                                                            {
                symboltype* t = (yyvsp[-3].syent)->type;
                symboltype *prev = NULL;

                while(t->type == "arr"){
                        prev = t;
                        t = t->arrtype;
                }
                if(prev == NULL){
                        int temp = atoi((yyvsp[-1].expr)->loc->value.c_str());
                        symboltype *tp = new symboltype("arr", (yyvsp[-3].syent)->type,temp);
                        (yyval.syent) = (yyvsp[-3].syent)->update(tp);
                }else{
                        int temp = atoi((yyvsp[-1].expr)->loc->value.c_str());
                        symboltype *tp = new symboltype("arr", t,temp);
                        (yyval.syent) = (yyvsp[-3].syent)->update((yyvsp[-3].syent)->type);
                }
        }
#line 2872 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator LEFTBRACKET type_qualifier_list assignment_expression RIGHTBRACKET  */
#line 715 "ass5_19CS10064_19CS30008.y"
                                                                                               {

        }
#line 2880 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator LEFTBRACKET STATIC type_qualifier_list assignment_expression RIGHTBRACKET  */
#line 718 "ass5_19CS10064_19CS30008.y"
                                                                                                      {

        }
#line 2888 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator LEFTBRACKET STATIC assignment_expression RIGHTBRACKET  */
#line 721 "ass5_19CS10064_19CS30008.y"
                                                                                    {
                
        }
#line 2896 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator LEFTBRACKET type_qualifier_list STATIC assignment_expression RIGHTBRACKET  */
#line 724 "ass5_19CS10064_19CS30008.y"
                                                                                                      {

        }
#line 2904 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator LEFTBRACKET MULTIPLY RIGHTBRACKET  */
#line 727 "ass5_19CS10064_19CS30008.y"
                                                              {

        }
#line 2912 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator LEFTBRACKET type_qualifier_list MULTIPLY RIGHTBRACKET  */
#line 730 "ass5_19CS10064_19CS30008.y"
                                                                                   {

        }
#line 2920 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator LEFTPAR change_table parameter_type_list RIGHTPAR  */
#line 733 "ass5_19CS10064_19CS30008.y"
                                                                               {
                currentST->name = (yyvsp[-4].syent)->name;
                if((yyvsp[-4].syent)->type->type != "void"){
                        symbol *s = currentST->lookup("return");
                        s->update((yyvsp[-4].syent)->type);
                }
                (yyvsp[-4].syent)->nestedtable = currentST;
                currentST->parent  = globalST;
                changeTable(globalST);
                currentSymbol = (yyval.syent);

        }
#line 2937 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator LEFTPAR identifier_list RIGHTPAR  */
#line 745 "ass5_19CS10064_19CS30008.y"
                                                              {

        }
#line 2945 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LEFTPAR change_table RIGHTPAR  */
#line 748 "ass5_19CS10064_19CS30008.y"
                                                          {
                currentST->name = (yyvsp[-3].syent)->name;
                if((yyvsp[-3].syent)->type->type != "void"){
                        symbol *s = currentST->lookup("return");
                        s->update((yyvsp[-3].syent)->type);
                }
                (yyvsp[-3].syent)->nestedtable = currentST;
                currentST->parent  = globalST;
                changeTable(globalST);
                currentSymbol = (yyval.syent);
        }
#line 2961 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 136: /* type_qualifier_list_opt: type_qualifier_list  */
#line 763 "ass5_19CS10064_19CS30008.y"
        {  }
#line 2967 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 137: /* type_qualifier_list_opt: %empty  */
#line 765 "ass5_19CS10064_19CS30008.y"
        {  }
#line 2973 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 138: /* pointer: MULTIPLY type_qualifier_list_opt  */
#line 768 "ass5_19CS10064_19CS30008.y"
                                           {
                (yyval.syenttype) = new symboltype("ptr");
        }
#line 2981 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 139: /* pointer: MULTIPLY type_qualifier_list_opt pointer  */
#line 771 "ass5_19CS10064_19CS30008.y"
                                                   {
                (yyval.syenttype) = new symboltype("ptr", (yyvsp[0].syenttype));
        }
#line 2989 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 140: /* type_qualifier_list: type_qualifier  */
#line 776 "ass5_19CS10064_19CS30008.y"
                                    {}
#line 2995 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 141: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 777 "ass5_19CS10064_19CS30008.y"
                                              {}
#line 3001 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 142: /* parameter_type_list: parameter_list  */
#line 780 "ass5_19CS10064_19CS30008.y"
                                     {}
#line 3007 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 143: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 781 "ass5_19CS10064_19CS30008.y"
                                        {}
#line 3013 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 144: /* parameter_list: parameter_declaration  */
#line 784 "ass5_19CS10064_19CS30008.y"
                                      {}
#line 3019 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 145: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 785 "ass5_19CS10064_19CS30008.y"
                                                      {}
#line 3025 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 146: /* parameter_declaration: declaration_specifiers declarator  */
#line 788 "ass5_19CS10064_19CS30008.y"
                                                            {}
#line 3031 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 147: /* parameter_declaration: declaration_specifiers  */
#line 789 "ass5_19CS10064_19CS30008.y"
                                  {}
#line 3037 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 148: /* identifier_list: IDENTIFIER  */
#line 792 "ass5_19CS10064_19CS30008.y"
                             {}
#line 3043 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 149: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 793 "ass5_19CS10064_19CS30008.y"
                                           {}
#line 3049 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 150: /* type_name: specifier_qualifier_list  */
#line 796 "ass5_19CS10064_19CS30008.y"
                                    {}
#line 3055 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 151: /* initializer: assignment_expression  */
#line 799 "ass5_19CS10064_19CS30008.y"
                                   {
                (yyval.syent) = (yyvsp[0].expr)->loc;
        }
#line 3063 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 152: /* initializer: LEFTBRACE initializer_list RIGHTBRACE  */
#line 802 "ass5_19CS10064_19CS30008.y"
                                                {}
#line 3069 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 153: /* initializer: LEFTBRACE initializer_list COMMA RIGHTBRACE  */
#line 803 "ass5_19CS10064_19CS30008.y"
                                                      {}
#line 3075 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 155: /* initializer_list: designation initializer  */
#line 807 "ass5_19CS10064_19CS30008.y"
                                   {}
#line 3081 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 156: /* initializer_list: initializer_list COMMA initializer  */
#line 808 "ass5_19CS10064_19CS30008.y"
                                             {}
#line 3087 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 157: /* initializer_list: initializer_list COMMA designation initializer  */
#line 809 "ass5_19CS10064_19CS30008.y"
                                                         {}
#line 3093 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 158: /* designation: designator_list EQUAL  */
#line 812 "ass5_19CS10064_19CS30008.y"
                                    {}
#line 3099 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 159: /* designator_list: designator  */
#line 815 "ass5_19CS10064_19CS30008.y"
                            {}
#line 3105 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 160: /* designator_list: designator_list designator  */
#line 816 "ass5_19CS10064_19CS30008.y"
                                     {}
#line 3111 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 161: /* designator: LEFTBRACKET constant_expression RIGHTBRACKET  */
#line 819 "ass5_19CS10064_19CS30008.y"
                                                          {}
#line 3117 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 162: /* designator: DOT IDENTIFIER  */
#line 820 "ass5_19CS10064_19CS30008.y"
                         {}
#line 3123 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 163: /* statement: labeled_statement  */
#line 825 "ass5_19CS10064_19CS30008.y"
                             {}
#line 3129 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 164: /* statement: compound_statement  */
#line 826 "ass5_19CS10064_19CS30008.y"
                             { 
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3137 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 165: /* statement: expression_statement  */
#line 829 "ass5_19CS10064_19CS30008.y"
                               {
                (yyval.stmt) = new statement();
                (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 3146 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 166: /* statement: selection_statement  */
#line 833 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3154 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 167: /* statement: iteration_statement  */
#line 836 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3162 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 168: /* statement: jump_statement  */
#line 839 "ass5_19CS10064_19CS30008.y"
                         {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3170 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 169: /* loop_statement: labeled_statement  */
#line 844 "ass5_19CS10064_19CS30008.y"
                                 {}
#line 3176 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 170: /* loop_statement: expression_statement  */
#line 845 "ass5_19CS10064_19CS30008.y"
                               {
                (yyval.stmt) = new statement();
                (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 3185 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 171: /* loop_statement: selection_statement  */
#line 849 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3193 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 172: /* loop_statement: iteration_statement  */
#line 852 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3201 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 173: /* loop_statement: jump_statement  */
#line 855 "ass5_19CS10064_19CS30008.y"
                         {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3209 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 174: /* labeled_statement: IDENTIFIER COLON statement  */
#line 860 "ass5_19CS10064_19CS30008.y"
                                              {
                
        }
#line 3217 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 175: /* labeled_statement: CASE constant_expression COLON statement  */
#line 863 "ass5_19CS10064_19CS30008.y"
                                                   {}
#line 3223 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 176: /* labeled_statement: DEFAULT COLON statement  */
#line 864 "ass5_19CS10064_19CS30008.y"
                                  {}
#line 3229 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 177: /* compound_statement: LEFTBRACE X change_table block_item_list_opt RIGHTBRACE  */
#line 867 "ass5_19CS10064_19CS30008.y"
                                                                            {
                (yyval.stmt) = (yyvsp[-1].stmt);
                changeTable(currentST->parent);
        }
#line 3238 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 178: /* block_item_list_opt: block_item_list  */
#line 875 "ass5_19CS10064_19CS30008.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    
        }
#line 3246 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 179: /* block_item_list_opt: %empty  */
#line 879 "ass5_19CS10064_19CS30008.y"
        {
            (yyval.stmt) = new statement();   
        }
#line 3254 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 180: /* block_item_list: block_item  */
#line 884 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3262 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 181: /* block_item_list: block_item_list M block_item  */
#line 887 "ass5_19CS10064_19CS30008.y"
                                       {
                (yyval.stmt) = (yyvsp[0].stmt);
                backpatch((yyvsp[-2].stmt)->nextlist,(yyvsp[-1].instruction));
        }
#line 3271 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 182: /* block_item: declaration  */
#line 893 "ass5_19CS10064_19CS30008.y"
                        {
                (yyval.stmt) = new statement();
        }
#line 3279 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 183: /* block_item: statement  */
#line 896 "ass5_19CS10064_19CS30008.y"
                    {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3287 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 184: /* expression_statement: SEMICOLON  */
#line 901 "ass5_19CS10064_19CS30008.y"
                                {
                (yyval.expr) = new expression();
        }
#line 3295 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 185: /* expression_statement: expression SEMICOLON  */
#line 904 "ass5_19CS10064_19CS30008.y"
                               {
                (yyval.expr) = (yyvsp[-1].expr);
        }
#line 3303 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 186: /* selection_statement: IF LEFTPAR expression N RIGHTPAR M statement N  */
#line 909 "ass5_19CS10064_19CS30008.y"
                                                                                             {
                backpatch((yyvsp[-4].stmt)->nextlist,nextinstr());

                convertInt2Bool((yyvsp[-5].expr));
                (yyval.stmt) = new statement();

                backpatch((yyvsp[-5].expr)->truelist,(yyvsp[-2].instruction));

                list<int> temp = merge((yyvsp[-5].expr)->falselist,(yyvsp[-1].stmt)->nextlist);
                (yyval.stmt)->nextlist = merge(temp,(yyvsp[0].stmt)->nextlist);
        }
#line 3319 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 187: /* selection_statement: IF LEFTPAR expression N RIGHTPAR M statement N ELSE M statement  */
#line 920 "ass5_19CS10064_19CS30008.y"
                                                                                      {
                backpatch((yyvsp[-7].stmt)->nextlist,nextinstr());

                convertInt2Bool((yyvsp[-8].expr));
                (yyval.stmt) = new statement();

                backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-5].instruction));
                backpatch((yyvsp[-8].expr)->falselist,(yyvsp[-1].instruction));

                list<int> temp = merge((yyvsp[-4].stmt)->nextlist,(yyvsp[-3].stmt)->nextlist);
                (yyval.stmt)->nextlist = merge(temp,(yyvsp[0].stmt)->nextlist);
        }
#line 3336 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 188: /* selection_statement: SWITCH LEFTPAR expression RIGHTPAR statement  */
#line 932 "ass5_19CS10064_19CS30008.y"
                                                        {}
#line 3342 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 189: /* iteration_statement: WHILE W LEFTPAR X change_table M expression RIGHTPAR M loop_statement  */
#line 935 "ass5_19CS10064_19CS30008.y"
                                                                                           {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-3].expr));

                backpatch((yyvsp[0].stmt)->nextlist,(yyvsp[-4].instruction));

                backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-1].instruction));

                (yyval.stmt)->nextlist = (yyvsp[-3].expr)->falselist;

                emit("goto", "", "", int_to_string((yyvsp[-4].instruction)));

                blockName = "";
                changeTable(currentST->parent);
        }
#line 3362 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 190: /* iteration_statement: WHILE W LEFTPAR X change_table M expression RIGHTPAR LEFTBRACE M block_item_list_opt RIGHTBRACE  */
#line 950 "ass5_19CS10064_19CS30008.y"
                                                                                                          {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-5].expr));

                backpatch((yyvsp[-1].stmt)->nextlist,(yyvsp[-6].instruction));

                backpatch((yyvsp[-5].expr)->truelist,(yyvsp[-2].instruction));

                (yyval.stmt)->nextlist = (yyvsp[-5].expr)->falselist;

                emit("goto", "", "", int_to_string((yyvsp[-6].instruction)));

                blockName = "";
                changeTable(currentST->parent);
        }
#line 3382 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 191: /* iteration_statement: DO D M loop_statement M WHILE LEFTPAR expression RIGHTPAR SEMICOLON  */
#line 966 "ass5_19CS10064_19CS30008.y"
                                                                              {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-2].expr));

                backpatch((yyvsp[-2].expr)->truelist,(yyvsp[-7].instruction));

                backpatch((yyvsp[-6].stmt)->nextlist,(yyvsp[-5].instruction));

                (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist;

                blockName = "";

        }
#line 3400 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 192: /* iteration_statement: DO D LEFTBRACE M block_item_list_opt RIGHTBRACE M WHILE LEFTPAR expression RIGHTPAR SEMICOLON  */
#line 979 "ass5_19CS10064_19CS30008.y"
                                                                                                        {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-2].expr));

                backpatch((yyvsp[-2].expr)->truelist,(yyvsp[-8].instruction));

                backpatch((yyvsp[-7].stmt)->nextlist,(yyvsp[-5].instruction));

                (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist;

                blockName = "";
        }
#line 3417 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 193: /* iteration_statement: FOR F LEFTPAR X change_table declaration M expression_statement M expression N RIGHTPAR M loop_statement  */
#line 991 "ass5_19CS10064_19CS30008.y"
                                                                                                                   {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-6].expr));

                backpatch((yyvsp[-6].expr)->truelist,(yyvsp[-1].instruction));

                backpatch((yyvsp[-3].stmt)->nextlist,(yyvsp[-7].instruction));
                backpatch((yyvsp[0].stmt)->nextlist,(yyvsp[-5].instruction));

                emit("goto", int_to_string((yyvsp[-5].instruction)));

                (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;


                blockName = "";
                changeTable(currentST->parent);
        }
#line 3439 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 194: /* iteration_statement: FOR F LEFTPAR X change_table expression_statement M expression_statement M expression N RIGHTPAR M loop_statement  */
#line 1008 "ass5_19CS10064_19CS30008.y"
                                                                                                                            {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-6].expr));

                backpatch((yyvsp[-6].expr)->truelist,(yyvsp[-1].instruction));

                backpatch((yyvsp[-3].stmt)->nextlist,(yyvsp[-7].instruction));
                backpatch((yyvsp[0].stmt)->nextlist,(yyvsp[-5].instruction));

                emit("goto", int_to_string((yyvsp[-5].instruction)));

                (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;

                blockName = "";
                changeTable(currentST->parent);
        }
#line 3460 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 195: /* iteration_statement: FOR F LEFTPAR X change_table declaration M expression_statement M expression N RIGHTPAR M LEFTBRACE block_item_list_opt RIGHTBRACE  */
#line 1024 "ass5_19CS10064_19CS30008.y"
                                                                                                                                             {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-8].expr));

                backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-3].instruction));

                backpatch((yyvsp[-5].stmt)->nextlist,(yyvsp[-9].instruction));
                backpatch((yyvsp[-1].stmt)->nextlist,(yyvsp[-7].instruction));

                emit("goto", int_to_string((yyvsp[-7].instruction)));

                (yyval.stmt)->nextlist = (yyvsp[-8].expr)->falselist;

                blockName = "";
                changeTable(currentST->parent);
        }
#line 3481 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 196: /* iteration_statement: FOR F LEFTPAR X change_table expression_statement M expression_statement M expression N RIGHTPAR M LEFTBRACE block_item_list_opt RIGHTBRACE  */
#line 1040 "ass5_19CS10064_19CS30008.y"
                                                                                                                                                      {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-8].expr));

                backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-3].instruction));

                backpatch((yyvsp[-5].stmt)->nextlist,(yyvsp[-9].instruction));
                backpatch((yyvsp[-1].stmt)->nextlist,(yyvsp[-7].instruction));

                emit("goto", int_to_string((yyvsp[-7].instruction)));

                (yyval.stmt)->nextlist = (yyvsp[-8].expr)->falselist;

                blockName = "";
                changeTable(currentST->parent);
        }
#line 3502 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 197: /* F: %empty  */
#line 1058 "ass5_19CS10064_19CS30008.y"
           {
        blockName = "FOR";
}
#line 3510 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 198: /* W: %empty  */
#line 1062 "ass5_19CS10064_19CS30008.y"
           {
        blockName = "WHILE";
}
#line 3518 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 199: /* D: %empty  */
#line 1066 "ass5_19CS10064_19CS30008.y"
           {
        blockName = "DO_WHILE";
}
#line 3526 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 200: /* X: %empty  */
#line 1070 "ass5_19CS10064_19CS30008.y"
          {
        string newST = currentST->name + "." + blockName + "$" + int_to_string(STCount);
        STCount++;
        symbol *temp = currentST->lookup(newST);
        temp->nestedtable = new symboltable(newST);
        temp->name = newST;
        temp->nestedtable->parent = currentST;
        temp->type = new symboltype("block");
        currentSymbol = temp;
}
#line 3541 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 201: /* change_table: %empty  */
#line 1082 "ass5_19CS10064_19CS30008.y"
                      {
        if(currentSymbol->nestedtable != NULL){
                changeTable(currentSymbol->nestedtable);
                emit("label",currentST->name,"","");
        }else{
                changeTable(new symboltable());
        }
}
#line 3554 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 202: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1093 "ass5_19CS10064_19CS30008.y"
                                          {}
#line 3560 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 203: /* jump_statement: CONTINUE SEMICOLON  */
#line 1094 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = new statement();
        }
#line 3568 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 204: /* jump_statement: BREAK SEMICOLON  */
#line 1097 "ass5_19CS10064_19CS30008.y"
                          {
                (yyval.stmt) = new statement();
        }
#line 3576 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 205: /* jump_statement: RETURN SEMICOLON  */
#line 1100 "ass5_19CS10064_19CS30008.y"
                            {
                (yyval.stmt) = new statement();
                emit("return", "");
        }
#line 3585 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 206: /* jump_statement: RETURN expression SEMICOLON  */
#line 1104 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.stmt) = new statement();
                emit("return", (yyvsp[-1].expr)->loc->name);
        }
#line 3594 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 207: /* translation_unit: translation_unit external_declaration  */
#line 1113 "ass5_19CS10064_19CS30008.y"
                                                          {}
#line 3600 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 208: /* translation_unit: external_declaration  */
#line 1114 "ass5_19CS10064_19CS30008.y"
                               {}
#line 3606 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 209: /* external_declaration: function_definition  */
#line 1117 "ass5_19CS10064_19CS30008.y"
                                           {}
#line 3612 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 210: /* external_declaration: declaration  */
#line 1118 "ass5_19CS10064_19CS30008.y"
                      {}
#line 3618 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 211: /* function_definition: declaration_specifiers declarator declaration_list_opt change_table LEFTBRACE block_item_list_opt RIGHTBRACE  */
#line 1121 "ass5_19CS10064_19CS30008.y"
                                                                                                                                  {
                currentST->parent = globalST;
                STCount = 0;
                changeTable(globalST);
        }
#line 3628 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 212: /* declaration_list_opt: declaration_list  */
#line 1131 "ass5_19CS10064_19CS30008.y"
        {  }
#line 3634 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 213: /* declaration_list_opt: %empty  */
#line 1133 "ass5_19CS10064_19CS30008.y"
        {  }
#line 3640 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 214: /* declaration_list: declaration  */
#line 1135 "ass5_19CS10064_19CS30008.y"
                               {}
#line 3646 "ass5_19CS10064_19CS30008.tab.c"
    break;


#line 3650 "ass5_19CS10064_19CS30008.tab.c"

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

#line 1138 "ass5_19CS10064_19CS30008.y"



void yyerror(string s) {
    /*
        This function prints any error encountered while parsing
    */
    cout << "Error occurred: " << s << endl;
    cout << "Line no.: " << yylineno << endl;
    cout << "Unable to parse: " << yytext << endl; 
}
