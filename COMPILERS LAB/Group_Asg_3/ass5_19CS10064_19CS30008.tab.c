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

       #include <bits/stdc++.h>
      #include "ass5_19CS10064_19CS30008_translator.h"
        using namespace std;
        extern int yylex();
        void yyerror(string s);

        extern char* yytext; 
        extern int yylineno;
        extern string lastType;

#line 83 "ass5_19CS10064_19CS30008.tab.c"

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
  YYSYMBOL_CHAR_CONSTANT = 5,              /* CHAR_CONSTANT  */
  YYSYMBOL_INT_CONSTANT = 6,               /* INT_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_EXTERN = 9,                     /* EXTERN  */
  YYSYMBOL_STATIC = 10,                    /* STATIC  */
  YYSYMBOL_AUTO = 11,                      /* AUTO  */
  YYSYMBOL_REGISTER = 12,                  /* REGISTER  */
  YYSYMBOL_VOID = 13,                      /* VOID  */
  YYSYMBOL_CHAR = 14,                      /* CHAR  */
  YYSYMBOL_SHORT = 15,                     /* SHORT  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_LONG = 17,                      /* LONG  */
  YYSYMBOL_FLOAT = 18,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 19,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 20,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 21,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 22,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 23,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 24,                 /* IMAGINARY  */
  YYSYMBOL_CONST = 25,                     /* CONST  */
  YYSYMBOL_RESTRICT = 26,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 27,                  /* VOLATILE  */
  YYSYMBOL_INLINE = 28,                    /* INLINE  */
  YYSYMBOL_ELLIPSIS = 29,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 30,                      /* CASE  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_SWITCH = 34,                    /* SWITCH  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_GOTO = 38,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 39,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 40,                     /* BREAK  */
  YYSYMBOL_RETURN = 41,                    /* RETURN  */
  YYSYMBOL_ARROW = 42,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 43,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 44,                 /* DECREMENT  */
  YYSYMBOL_LEFTSHIFT = 45,                 /* LEFTSHIFT  */
  YYSYMBOL_RIGHTSHIFT = 46,                /* RIGHTSHIFT  */
  YYSYMBOL_LESSEQUAL = 47,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 48,              /* GREATEREQUAL  */
  YYSYMBOL_DOUBLEEQUAL = 49,               /* DOUBLEEQUAL  */
  YYSYMBOL_NOTEQUAL = 50,                  /* NOTEQUAL  */
  YYSYMBOL_DOUBLEAND = 51,                 /* DOUBLEAND  */
  YYSYMBOL_DOUBLEOR = 52,                  /* DOUBLEOR  */
  YYSYMBOL_PLUSEQUAL = 53,                 /* PLUSEQUAL  */
  YYSYMBOL_MINUSEQUAL = 54,                /* MINUSEQUAL  */
  YYSYMBOL_MULTIPLYEQUAL = 55,             /* MULTIPLYEQUAL  */
  YYSYMBOL_DIVEQUAL = 56,                  /* DIVEQUAL  */
  YYSYMBOL_MODEQUAL = 57,                  /* MODEQUAL  */
  YYSYMBOL_LEFTSHIFTEQUAL = 58,            /* LEFTSHIFTEQUAL  */
  YYSYMBOL_RIGHTSHIFTEQUAL = 59,           /* RIGHTSHIFTEQUAL  */
  YYSYMBOL_ANDEQUAL = 60,                  /* ANDEQUAL  */
  YYSYMBOL_OREQUAL = 61,                   /* OREQUAL  */
  YYSYMBOL_XOREQUAL = 62,                  /* XOREQUAL  */
  YYSYMBOL_PLUS = 63,                      /* PLUS  */
  YYSYMBOL_MINUS = 64,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 65,                  /* MULTIPLY  */
  YYSYMBOL_DIV = 66,                       /* DIV  */
  YYSYMBOL_MOD = 67,                       /* MOD  */
  YYSYMBOL_TILDA = 68,                     /* TILDA  */
  YYSYMBOL_NOT = 69,                       /* NOT  */
  YYSYMBOL_AND = 70,                       /* AND  */
  YYSYMBOL_EQUAL = 71,                     /* EQUAL  */
  YYSYMBOL_SEMICOLON = 72,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 73,                     /* COMMA  */
  YYSYMBOL_DOT = 74,                       /* DOT  */
  YYSYMBOL_LESS = 75,                      /* LESS  */
  YYSYMBOL_GREATER = 76,                   /* GREATER  */
  YYSYMBOL_OR = 77,                        /* OR  */
  YYSYMBOL_XOR = 78,                       /* XOR  */
  YYSYMBOL_LOWER_THAN_ELSE = 79,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_LEFTPAR = 80,                   /* LEFTPAR  */
  YYSYMBOL_RIGHTPAR = 81,                  /* RIGHTPAR  */
  YYSYMBOL_LEFTBRACE = 82,                 /* LEFTBRACE  */
  YYSYMBOL_RIGHTBRACE = 83,                /* RIGHTBRACE  */
  YYSYMBOL_LEFTBRACKET = 84,               /* LEFTBRACKET  */
  YYSYMBOL_RIGHTBRACKET = 85,              /* RIGHTBRACKET  */
  YYSYMBOL_COLON = 86,                     /* COLON  */
  YYSYMBOL_QUESTIONMARK = 87,              /* QUESTIONMARK  */
  YYSYMBOL_YYACCEPT = 88,                  /* $accept  */
  YYSYMBOL_primary_expression = 89,        /* primary_expression  */
  YYSYMBOL_constant = 90,                  /* constant  */
  YYSYMBOL_postfix_expression = 91,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 92, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 93,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 94,          /* unary_expression  */
  YYSYMBOL_unary_operator = 95,            /* unary_operator  */
  YYSYMBOL_cast_expression = 96,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 97, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 98,       /* additive_expression  */
  YYSYMBOL_shift_expression = 99,          /* shift_expression  */
  YYSYMBOL_relational_expression = 100,    /* relational_expression  */
  YYSYMBOL_equality_expression = 101,      /* equality_expression  */
  YYSYMBOL_AND_expression = 102,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 103,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 104,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 105,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 106,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 107,   /* conditional_expression  */
  YYSYMBOL_M = 108,                        /* M  */
  YYSYMBOL_N = 109,                        /* N  */
  YYSYMBOL_assignment_expression = 110,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 111,      /* assignment_operator  */
  YYSYMBOL_expression = 112,               /* expression  */
  YYSYMBOL_constant_expression = 113,      /* constant_expression  */
  YYSYMBOL_declaration = 114,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 115,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 116,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 117,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 118,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 119,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 120, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 121, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 122,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 123,       /* function_specifier  */
  YYSYMBOL_declarator = 124,               /* declarator  */
  YYSYMBOL_direct_declarator = 125,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 126,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 127,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 128,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 129,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 130,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 131,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 132,          /* identifier_list  */
  YYSYMBOL_type_name = 133,                /* type_name  */
  YYSYMBOL_initializer = 134,              /* initializer  */
  YYSYMBOL_initializer_list = 135,         /* initializer_list  */
  YYSYMBOL_designation = 136,              /* designation  */
  YYSYMBOL_designator_list = 137,          /* designator_list  */
  YYSYMBOL_designator = 138,               /* designator  */
  YYSYMBOL_statement = 139,                /* statement  */
  YYSYMBOL_loop_statement = 140,           /* loop_statement  */
  YYSYMBOL_labeled_statement = 141,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 142,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 143,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 144,          /* block_item_list  */
  YYSYMBOL_block_item = 145,               /* block_item  */
  YYSYMBOL_expression_statement = 146,     /* expression_statement  */
  YYSYMBOL_selection_statement = 147,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 148,      /* iteration_statement  */
  YYSYMBOL_F = 149,                        /* F  */
  YYSYMBOL_W = 150,                        /* W  */
  YYSYMBOL_D = 151,                        /* D  */
  YYSYMBOL_X = 152,                        /* X  */
  YYSYMBOL_change_table = 153,             /* change_table  */
  YYSYMBOL_jump_statement = 154,           /* jump_statement  */
  YYSYMBOL_translation_unit = 155,         /* translation_unit  */
  YYSYMBOL_external_declaration = 156,     /* external_declaration  */
  YYSYMBOL_function_definition = 157,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 158,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 159          /* declaration_list  */
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
#define YYLAST   1229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   342


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
      85,    86,    87
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    85,    85,    90,    94,    99,   105,   110,   115,   121,
     127,   145,   150,   151,   152,   158,   164,   165,   168,   171,
     176,   180,   187,   190,   194,   198,   232,   233,   236,   237,
     238,   239,   240,   241,   244,   247,   253,   266,   275,   284,
     295,   298,   307,   318,   321,   330,   341,   344,   356,   368,
     380,   394,   397,   411,   426,   429,   443,   446,   460,   463,
     477,   480,   493,   496,   509,   512,   536,   541,   547,   550,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   577,   580,   584,   589,   590,   593,   594,   595,   596,
     597,   598,   599,   600,   603,   604,   607,   613,   618,   619,
     620,   621,   624,   627,   630,   631,   634,   637,   640,   641,
     642,   643,   644,   645,   649,   651,   656,   658,   662,   663,
     664,   667,   670,   678,   681,   685,   688,   706,   709,   727,
     730,   733,   736,   739,   742,   745,   757,   760,   774,   776,
     780,   783,   788,   789,   792,   793,   796,   797,   800,   801,
     804,   805,   808,   811,   814,   815,   818,   819,   820,   821,
     824,   827,   828,   831,   832,   837,   838,   841,   845,   848,
     851,   856,   859,   863,   866,   869,   874,   877,   878,   881,
     888,   892,   898,   901,   907,   910,   915,   918,   923,   934,
     946,   949,   964,   980,   993,  1005,  1022,  1038,  1054,  1072,
    1076,  1080,  1084,  1096,  1107,  1108,  1111,  1114,  1118,  1127,
    1128,  1131,  1132,  1135,  1144,  1146,  1149,  1150
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
  "FLO_CONSTANT", "CHAR_CONSTANT", "INT_CONSTANT", "STRING_LITERAL",
  "SIZEOF", "EXTERN", "STATIC", "AUTO", "REGISTER", "VOID", "CHAR",
  "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "SIGNED", "UNSIGNED", "BOOL",
  "COMPLEX", "IMAGINARY", "CONST", "RESTRICT", "VOLATILE", "INLINE",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ARROW", "INCREMENT",
  "DECREMENT", "LEFTSHIFT", "RIGHTSHIFT", "LESSEQUAL", "GREATEREQUAL",
  "DOUBLEEQUAL", "NOTEQUAL", "DOUBLEAND", "DOUBLEOR", "PLUSEQUAL",
  "MINUSEQUAL", "MULTIPLYEQUAL", "DIVEQUAL", "MODEQUAL", "LEFTSHIFTEQUAL",
  "RIGHTSHIFTEQUAL", "ANDEQUAL", "OREQUAL", "XOREQUAL", "PLUS", "MINUS",
  "MULTIPLY", "DIV", "MOD", "TILDA", "NOT", "AND", "EQUAL", "SEMICOLON",
  "COMMA", "DOT", "LESS", "GREATER", "OR", "XOR", "LOWER_THAN_ELSE",
  "LEFTPAR", "RIGHTPAR", "LEFTBRACE", "RIGHTBRACE", "LEFTBRACKET",
  "RIGHTBRACKET", "COLON", "QUESTIONMARK", "$accept", "primary_expression",
  "constant", "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
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

#define YYPACT_NINF (-310)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-216)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1186,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,    42,  1186,  1186,  1186,  1186,  1166,  -310,  -310,
    -310,    12,  -310,    38,    90,  -310,  1073,   -60,    22,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,   -22,    12,   -55,  -310,
      38,   642,  -310,    42,  -310,  1186,    18,   162,   -60,  -310,
    -310,  -310,  -310,    11,  -310,  -310,  -310,  -310,  -310,   970,
     978,   978,  -310,  -310,  -310,  -310,  -310,  -310,   762,   359,
    -310,  -310,   254,   939,  1001,  -310,   133,    21,   130,   -29,
     132,    39,    51,    62,    65,   -39,  -310,  -310,  -310,    73,
    -310,  -310,   -12,  1093,   857,    35,  -310,    64,   305,   762,
    -310,   762,  -310,  -310,  -310,    32,  1202,  -310,  1202,    70,
     155,  1001,  -310,   -15,   642,    50,  -310,   170,  -310,  -310,
     176,  1001,  1001,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  1001,  -310,  -310,  1001,  1001,  1001,
    1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,
    1001,  1001,  1001,  -310,  -310,   109,   441,   200,  -310,  -310,
      38,   129,   151,  -310,   148,   857,  -310,  -310,  1001,   150,
    -310,   152,   157,   158,  1001,  -310,  -310,  -310,  -310,   650,
    -310,  -310,   156,   313,  -310,  -310,  -310,  -310,  -310,  -310,
     159,   171,  -310,   -51,  -310,  -310,  -310,  -310,   133,   133,
      21,    21,   130,   130,   130,   130,   -29,   -29,   132,    39,
      51,  1001,  1001,  -310,   163,  1001,   168,   165,   175,  -310,
    -310,  -310,   240,   185,   187,   887,  -310,  -310,   112,  -310,
    -310,  -310,  -310,   178,   183,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  1113,  -310,   182,   189,  -310,  -310,   188,
     188,  -310,   359,  -310,  -310,  -310,  -310,   642,  -310,  1001,
    -310,    62,    65,  1001,   494,   193,   494,  1001,  1001,   203,
     207,   205,   220,  -310,  -310,  -310,   118,  -310,  -310,  -310,
     441,  -310,  -310,  -310,  -310,   -10,  -310,  -310,   221,  -310,
     494,  -310,   221,    54,  -310,  -310,   809,  -310,  -310,  -310,
     441,  -310,   336,  -310,   209,  -310,   212,   494,  -310,   441,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,   218,  -310,  -310,
    -310,  -310,  -310,   219,   272,   730,  -310,  1001,   494,  1001,
    -310,   242,  -310,  -310,  -310,  -310,    57,   290,  1001,   900,
     900,   296,   251,   256,    69,  -310,  -310,  -310,  -310,   809,
    1001,   265,  1001,  1001,   494,   441,  -310,    75,  -310,   221,
     221,  -310,   262,   274,   266,   269,  -310,  -310,  -310,  -310,
     547,   600,   441,  -310,   441,  -310,   268,   270,  -310,  -310
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   118,   119,   120,
     121,   212,     0,    87,    89,    91,    93,     0,   210,   211,
     124,   139,    85,     0,     0,    94,    97,   123,     0,    86,
      88,    90,    92,     1,   209,   142,   140,   138,     0,    84,
       0,     0,   216,     0,   203,   214,   203,     0,   122,   141,
     143,   125,    95,    97,     2,     7,     8,     6,     4,     0,
       0,     0,    28,    29,    33,    31,    30,    32,     0,     0,
       9,     3,    22,    34,     0,    36,    40,    43,    46,    51,
      54,    56,    58,    60,    62,    64,    68,   153,    96,     0,
     217,   150,     0,     0,     0,    33,   126,     0,     0,     0,
      26,     0,    23,    24,    81,     0,   117,   152,   117,     0,
       0,     0,   156,     0,     0,     0,   161,     0,    14,    15,
       0,    19,     0,    74,    75,    71,    72,    73,    76,    77,
      78,    80,    79,    70,     0,    34,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    66,     0,   181,     0,   136,   137,
     149,     0,   144,   146,     0,     0,   133,   128,     0,    33,
     127,     0,     0,     0,     0,     5,   116,   114,   115,     0,
     164,    83,     0,     0,   154,   157,   160,   162,    13,    12,
       0,    18,    20,     0,    69,    37,    38,    39,    41,    42,
      44,    45,    49,    50,    47,    48,    52,    53,    55,    57,
      59,     0,     0,    66,     2,     0,     0,     0,     0,   200,
     201,   199,     0,     0,     0,     0,   186,   202,     0,   184,
     185,   165,   166,     0,    66,   182,   167,   168,   169,   170,
     151,   148,   135,     0,   131,     0,     0,   134,   129,    27,
       0,    82,     0,    35,   163,   155,   158,     0,    11,     0,
      10,    61,    63,     0,     0,     0,     0,     0,     0,     0,
      66,     0,     0,   205,   206,   207,     0,   203,   187,   213,
       0,   145,   147,   130,   132,     0,   159,    21,    67,   176,
       0,   178,    67,     0,   202,    66,     0,   202,   204,   208,
     181,   183,     0,    16,     0,   177,     0,     0,   203,   181,
      66,   171,   172,   173,   174,   175,   203,     0,    17,    66,
      66,   190,    66,     0,     0,     0,   179,     0,     0,     0,
      66,     0,    66,    66,    65,    67,     0,     0,     0,     0,
       0,   188,    66,     0,     0,    66,    66,    66,    66,     0,
       0,     0,     0,     0,     0,   181,   191,     0,   193,    67,
      67,   189,     0,     0,     0,     0,   192,   194,    66,    66,
       0,     0,   181,   195,   181,   196,     0,     0,   197,   198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -310,  -310,  -310,  -310,  -310,  -310,   -61,  -310,   -72,    43,
      67,    58,    63,   192,   194,   196,   138,   139,  -310,  -114,
     -52,   -46,     2,  -310,   -76,   135,     0,     5,  -310,   304,
    -310,   -67,   -64,   253,   100,  -310,   -18,   334,  -310,   338,
     -40,  -310,  -310,   136,  -310,   -44,   -50,   124,  -187,  -310,
     263,  -260,  -309,  -244,  -310,  -136,  -310,   101,   -99,  -240,
    -236,  -310,  -310,  -310,  -224,   -53,  -227,  -310,   365,  -310,
    -310,  -310
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    80,    81,    82,   200,   201,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
     221,   165,   114,   144,   238,   192,   239,    53,    34,    35,
      23,    24,   117,   187,    25,    26,    63,    37,    46,    38,
      47,   171,   172,   173,   102,   119,   122,   123,   124,   125,
     126,   240,   320,   241,   242,   243,   244,   245,   246,   247,
     248,   281,   279,   280,   287,    99,   249,    27,    28,    29,
      54,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    98,   115,   103,    36,    22,   267,   191,   110,   112,
     113,   116,   146,   164,   299,    48,   301,   108,   154,   155,
      56,   101,   184,   145,    57,    30,    61,    21,    39,    40,
      41,    42,    22,   115,   270,   115,    52,    17,    18,    19,
     315,    30,   116,    31,   116,    30,   156,   157,   -67,   116,
     366,   116,   186,    97,   186,   100,   203,   331,   193,   107,
     145,   167,   321,   312,   175,   182,   323,   183,   194,   168,
     324,   383,   385,   313,   195,   205,   206,   207,   345,   325,
     318,    97,    51,   326,   150,   151,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,    33,    31,   371,   184,   174,    31,   170,   160,
     181,   191,   222,   185,    32,   321,   163,   263,    33,   323,
     176,   196,    33,   324,   120,   267,    97,   184,   145,   161,
     184,    45,   325,   202,   121,   317,   321,   321,   352,   162,
     323,   323,   184,   266,   324,   324,   204,    60,   184,   177,
     361,   189,   251,   325,   325,   166,   373,    45,   190,   286,
     145,   145,    49,    50,   145,    64,    65,    66,    67,    68,
      69,   273,   104,   198,   327,   152,   153,   255,   118,   199,
     256,   158,   159,   333,   288,   184,   261,    17,    18,    19,
     309,   184,   290,   208,   209,    97,   223,   298,   147,   148,
     149,   302,   303,   250,    45,    70,    71,   322,    60,   118,
     252,   118,   212,   213,   214,   215,   118,   296,   118,   210,
     211,   216,   217,   344,   253,    72,    73,   105,   306,   372,
      75,    76,    77,   254,   310,   257,   343,   258,   259,   260,
     268,   264,    78,   282,   269,   277,   386,   106,   387,   274,
     355,   356,   314,   319,   276,   278,   316,   283,   170,   284,
     322,   289,   266,   346,    97,   332,  -180,   293,   334,    97,
     262,   297,   354,   335,   294,    60,   145,   337,   338,   300,
     339,   322,   322,   304,   367,   307,   369,   370,   347,   305,
     349,   350,   308,   330,   184,   329,   127,   128,   129,   351,
     359,   336,   340,   362,   363,   364,   365,   341,    64,    65,
      66,    67,    68,    69,    97,   178,    64,    65,    66,    67,
      68,    69,   348,   374,   375,   353,   380,   381,   130,   357,
      17,    18,    19,   358,   131,   342,   360,   368,   132,    64,
      65,    66,    67,    68,    69,   376,   377,   378,    70,    71,
     379,   388,   218,   389,    62,   219,    70,    71,   220,   271,
     275,   272,    64,    65,    66,    67,    68,    69,    72,    73,
     179,   188,    58,    75,    76,    77,    72,    73,    74,    70,
      71,    75,    76,    77,    59,    78,   295,   120,   197,   292,
     180,   311,    44,    78,     0,    79,   265,   121,     0,    72,
      73,    74,    70,    71,    75,    76,    77,     0,     0,     0,
     120,     0,     0,     0,     0,     0,    78,     0,    79,   328,
     121,     0,    72,    73,    74,     0,     0,    75,    76,    77,
       0,     0,     0,   120,     0,     0,     0,     0,     0,    78,
       0,    79,     0,   121,   224,    65,    66,    67,    68,    69,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,   225,   226,   227,     0,   228,   229,   230,   231,   232,
     233,   234,   235,     0,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,    65,    66,
      67,    68,    69,     0,    72,    73,    74,     0,     0,    75,
      76,    77,     0,   236,     0,     0,     0,     0,     0,     0,
       0,    78,     0,   237,   225,   226,   227,     0,   228,   229,
     230,   231,   232,   233,   234,   235,     0,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,    65,    66,    67,    68,    69,     0,    72,    73,    74,
       0,     0,    75,    76,    77,     0,   236,     0,     0,     0,
       0,     0,     0,     0,    78,     0,   237,   225,   226,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,     0,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,    65,    66,    67,    68,    69,     0,
      72,    73,    74,     0,     0,    75,    76,    77,     0,   236,
       0,     0,     0,     0,     0,     0,     0,    78,     0,   382,
     225,   226,   227,     0,   228,   229,   230,   231,   232,   233,
     234,   235,     0,    70,    71,    64,    65,    66,    67,    68,
      69,     0,     0,    64,    65,    66,    67,    68,    69,     0,
       0,     0,     0,    72,    73,    74,     0,     0,    75,    76,
      77,     0,   236,     0,     0,     0,     0,     0,     0,     0,
      78,     0,   384,     0,     0,    70,    71,     0,     0,     0,
       0,     0,     0,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,     0,     0,
      75,    76,    77,    72,    73,    74,     0,     0,    75,    76,
      77,     0,    78,     0,    79,     0,     0,     0,     0,     0,
      78,     0,   262,    64,    65,    66,    67,    68,    69,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,     0,     0,    70,    71,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,    72,    73,    74,     0,     0,    75,    76,
      77,     0,   236,     0,     0,    70,    71,     0,     0,     0,
      78,     0,   224,    65,    66,    67,    68,    69,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,     0,     0,
      75,    76,    77,     0,     0,     0,     0,     0,     0,   225,
     226,   227,    78,   228,   229,   230,   231,   232,   233,   234,
     235,     0,    70,    71,     0,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,    72,    73,    74,     0,     0,    75,    76,    77,
       0,   236,    17,    18,    19,     0,     0,     0,     0,    78,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
      70,    71,     0,    64,    65,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,     0,     0,    75,    76,    77,     0,     0,
      70,    71,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,    70,    71,     0,     0,     0,     0,     0,
      72,    73,    74,     0,     0,    75,    76,    77,     0,   285,
       0,     0,     0,    72,    73,    74,     0,    78,    75,    76,
      77,     0,   236,    64,    65,    66,    67,    68,    69,     0,
      78,    64,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     0,     0,    64,    65,    66,    67,    68,    69,
     143,     0,     0,    70,    71,     0,     0,     0,     0,     0,
       0,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,     0,     0,    75,    76,
      77,    72,    73,    74,    70,    71,    75,    76,    77,     0,
     109,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,     0,    72,    73,    74,     0,     0,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   291,     0,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -215,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,   169,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
       0,    51,    78,    56,    22,     0,   193,   121,    69,    70,
      71,    78,    84,    52,   274,    33,   276,    57,    47,    48,
      80,     3,    73,    84,    84,     3,    81,    27,    23,    24,
      25,    26,    27,   109,    85,   111,    36,    25,    26,    27,
     300,     3,   109,    65,   111,     3,    75,    76,    87,   116,
     359,   118,   116,    51,   118,    55,   132,   317,    73,    57,
     121,    73,   306,    73,   104,   109,   306,   111,    83,    81,
     306,   380,   381,    83,   124,   147,   148,   149,   338,   306,
     304,    79,    71,   307,    63,    64,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    80,    65,   364,    73,   104,    65,   103,    70,
     108,   225,   164,    81,    72,   359,    51,   189,    80,   359,
      85,    71,    80,   359,    74,   312,   124,    73,   189,    78,
      73,    31,   359,   131,    84,    81,   380,   381,    81,    77,
     380,   381,    73,   193,   380,   381,   144,    47,    73,    85,
      81,    81,   170,   380,   381,    82,    81,    57,     3,   235,
     221,   222,    72,    73,   225,     3,     4,     5,     6,     7,
       8,   223,    10,     3,   310,    45,    46,   175,    78,     3,
     178,    49,    50,   319,    72,    73,   184,    25,    26,    27,
      72,    73,   244,   150,   151,   193,    87,   273,    65,    66,
      67,   277,   278,     3,   104,    43,    44,   306,   108,   109,
      81,   111,   154,   155,   156,   157,   116,   267,   118,   152,
     153,   158,   159,   337,    73,    63,    64,    65,   280,   365,
      68,    69,    70,    85,   287,    85,   335,    85,    81,    81,
      81,    85,    80,     3,    73,    80,   382,    85,   384,    86,
     349,   350,   298,   305,    86,    80,   302,    72,   253,    72,
     359,    83,   312,   339,   262,   318,    83,    85,   320,   267,
      82,   269,   348,   326,    85,   175,   337,   329,   330,    86,
     332,   380,   381,    80,   360,    80,   362,   363,   340,    82,
     342,   343,    72,    81,    73,    86,    42,    43,    44,   345,
     352,    83,    83,   355,   356,   357,   358,    35,     3,     4,
       5,     6,     7,     8,   312,    10,     3,     4,     5,     6,
       7,     8,    80,   369,   370,    35,   378,   379,    74,    33,
      25,    26,    27,    82,    80,   335,    80,    72,    84,     3,
       4,     5,     6,     7,     8,    83,    72,    81,    43,    44,
      81,    83,   160,    83,    50,   161,    43,    44,   162,   221,
     225,   222,     3,     4,     5,     6,     7,     8,    63,    64,
      65,   118,    38,    68,    69,    70,    63,    64,    65,    43,
      44,    68,    69,    70,    46,    80,   262,    74,   125,   253,
      85,   290,    27,    80,    -1,    82,    83,    84,    -1,    63,
      64,    65,    43,    44,    68,    69,    70,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,
      84,    -1,    63,    64,    65,    -1,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    82,    -1,    84,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    82,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    63,    64,    65,
      -1,    -1,    68,    69,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,     3,     4,     5,     6,     7,
       8,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    70,    63,    64,    65,    -1,    -1,    68,    69,
      70,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    43,    44,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      70,    -1,    72,    -1,    -1,    43,    44,    -1,    -1,    -1,
      80,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    80,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,    70,
      -1,    72,    25,    26,    27,    -1,    -1,    -1,    -1,    80,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      43,    44,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    70,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    -1,    63,    64,    65,    -1,    80,    68,    69,
      70,    -1,    72,     3,     4,     5,     6,     7,     8,    -1,
      80,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     3,     4,     5,     6,     7,     8,
      71,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    -1,    -1,    68,    69,
      70,    63,    64,    65,    43,    44,    68,    69,    70,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   114,   115,   118,   119,   122,   123,   155,   156,   157,
       3,    65,    72,    80,   116,   117,   124,   125,   127,   115,
     115,   115,   115,     0,   156,   122,   126,   128,   124,    72,
      73,    71,   114,   115,   158,   159,    80,    84,   125,   127,
     122,    81,   117,   124,     3,     4,     5,     6,     7,     8,
      43,    44,    63,    64,    65,    68,    69,    70,    80,    82,
      89,    90,    91,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   110,   134,   153,
     114,     3,   132,   153,    10,    65,    85,   110,   128,    80,
      94,    80,    94,    94,   110,   112,   119,   120,   122,   133,
      74,    84,   134,   135,   136,   137,   138,    42,    43,    44,
      74,    80,    84,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    71,   111,    94,    96,    65,    66,    67,
      63,    64,    45,    46,    47,    48,    75,    76,    49,    50,
      70,    78,    77,    51,    52,   109,    82,    73,    81,    81,
     115,   129,   130,   131,   110,   128,    85,    85,    10,    65,
      85,   110,   133,   133,    73,    81,   120,   121,   121,    81,
       3,   107,   113,    73,    83,   134,    71,   138,     3,     3,
      92,    93,   110,   112,   110,    96,    96,    96,    97,    97,
      98,    98,    99,    99,    99,    99,   100,   100,   101,   102,
     103,   108,   108,    87,     3,    30,    31,    32,    34,    35,
      36,    37,    38,    39,    40,    41,    72,    82,   112,   114,
     139,   141,   142,   143,   144,   145,   146,   147,   148,   154,
       3,   124,    81,    73,    85,   110,   110,    85,    85,    81,
      81,   110,    82,    96,    85,    83,   134,   136,    81,    73,
      85,   104,   105,   108,    86,   113,    86,    80,    80,   150,
     151,   149,     3,    72,    72,    72,   112,   152,    72,    83,
     108,    29,   131,    85,    85,   135,   134,   110,   112,   139,
      86,   139,   112,   112,    80,    82,   108,    80,    72,    72,
     153,   145,    73,    83,   109,   139,   109,    81,   152,   108,
     140,   141,   146,   147,   148,   154,   152,   143,    83,    86,
      81,   139,   153,   143,   108,   153,    83,   108,   108,   108,
      83,    35,   114,   146,   107,   139,   112,   108,    80,   108,
     108,   109,    81,    35,   112,   146,   146,    33,    82,   108,
      80,    81,   108,   108,   108,   108,   140,   112,    72,   112,
     112,   139,   143,    81,   109,   109,    83,    72,    81,    81,
     108,   108,    82,   140,    82,   140,   143,   143,    83,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    99,    99,    99,   100,   100,   100,   100,
     100,   101,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   123,   124,   124,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   134,   134,   134,   135,   135,   135,   135,
     136,   137,   137,   138,   138,   139,   139,   139,   139,   139,
     139,   140,   140,   140,   140,   140,   141,   141,   141,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     147,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     150,   151,   152,   153,   154,   154,   154,   154,   154,   155,
     155,   156,   156,   157,   158,   158,   159,   159
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     0,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     4,     1,     4,     1,     9,     0,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     1,     1,
       1,     1,     2,     1,     1,     3,     3,     4,     4,     5,
       6,     5,     6,     4,     5,     5,     4,     4,     1,     0,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     1,     2,     3,     4,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     5,
       1,     0,     1,     3,     1,     1,     1,     2,     8,    11,
       5,    10,    12,    10,    12,    14,    14,    16,    16,     0,
       0,     0,     0,     0,     3,     2,     2,     2,     3,     2,
       1,     1,     1,     7,     1,     0,     1,     2
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
#line 85 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.expr) = new expression();
                (yyval.expr)->loc = (yyvsp[0].syent); // symbol table entry
                (yyval.expr)->type = "non_bool";
        }
#line 1698 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 90 "ass5_19CS10064_19CS30008.y"
                   {
                (yyval.expr) = new expression();
                (yyval.expr)->loc = (yyvsp[0].syent);
        }
#line 1707 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 94 "ass5_19CS10064_19CS30008.y"
                         {
                (yyval.expr) = new expression();
                (yyval.expr)->loc = symboltable::gentemp(new symboltype("ptr"),(yyvsp[0].charval));
                (yyval.expr)->loc->type->arrtype = new symboltype("char");
        }
#line 1717 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 5: /* primary_expression: LEFTPAR expression RIGHTPAR  */
#line 99 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.expr) = (yyvsp[-1].expr);
        }
#line 1725 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 6: /* constant: INT_CONSTANT  */
#line 106 "ass5_19CS10064_19CS30008.y"
        {
            (yyval.syent) = symboltable::gentemp(new symboltype("int"), int_to_string((yyvsp[0].ival)));   // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.syent)->name, (yyvsp[0].ival));
        }
#line 1734 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 7: /* constant: FLO_CONSTANT  */
#line 111 "ass5_19CS10064_19CS30008.y"
        {
            (yyval.syent) = symboltable::gentemp(new symboltype("float"), string((yyvsp[0].charval)));     // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.syent)->name, string((yyvsp[0].charval)));
        }
#line 1743 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 8: /* constant: CHAR_CONSTANT  */
#line 116 "ass5_19CS10064_19CS30008.y"
        {
            (yyval.syent) = symboltable::gentemp(new symboltype("float"), string((yyvsp[0].charval)));     // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.syent)->name, string((yyvsp[0].charval)));
        }
#line 1752 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 121 "ass5_19CS10064_19CS30008.y"
                                       {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = (yyvsp[0].expr)->loc;
                (yyval.arr)->type = (yyvsp[0].expr)->loc->type;
                (yyval.arr)->loc = (yyval.arr)->arr;
        }
#line 1763 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFTBRACKET expression RIGHTBRACKET  */
#line 127 "ass5_19CS10064_19CS30008.y"
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
#line 1786 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression LEFTPAR argument_expression_list_opt RIGHTPAR  */
#line 145 "ass5_19CS10064_19CS30008.y"
                                                                           {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = symboltable::gentemp((yyvsp[-3].arr)->type,"");
                emit("call", (yyval.arr)->arr->name,(yyvsp[-3].arr)->arr->name,int_to_string((yyvsp[-1].numparams)));
        }
#line 1796 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 150 "ass5_19CS10064_19CS30008.y"
                                             {}
#line 1802 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 151 "ass5_19CS10064_19CS30008.y"
                                               {}
#line 1808 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 152 "ass5_19CS10064_19CS30008.y"
                                        {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = symboltable::gentemp((yyvsp[-1].arr)->arr->type,"");
                emit("=", (yyval.arr)->arr->name,(yyvsp[-1].arr)->arr->name);
                emit("+",(yyvsp[-1].arr)->arr->name,(yyvsp[-1].arr)->arr->name,"1");
        }
#line 1819 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 158 "ass5_19CS10064_19CS30008.y"
                                       {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = symboltable::gentemp((yyvsp[-1].arr)->arr->type,"");
                emit("=", (yyval.arr)->arr->name,(yyvsp[-1].arr)->arr->name);
                emit("-",(yyvsp[-1].arr)->arr->name,(yyvsp[-1].arr)->arr->name,"1");
        }
#line 1830 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 16: /* postfix_expression: LEFTPAR type_name RIGHTPAR LEFTBRACE initializer_list RIGHTBRACE  */
#line 164 "ass5_19CS10064_19CS30008.y"
                                                                           {}
#line 1836 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 17: /* postfix_expression: LEFTPAR type_name RIGHTPAR LEFTBRACE initializer_list COMMA RIGHTBRACE  */
#line 165 "ass5_19CS10064_19CS30008.y"
                                                                                     {}
#line 1842 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 18: /* argument_expression_list_opt: argument_expression_list  */
#line 168 "ass5_19CS10064_19CS30008.y"
                                                       {
                (yyval.numparams) = (yyvsp[0].numparams);
        }
#line 1850 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 19: /* argument_expression_list_opt: %empty  */
#line 171 "ass5_19CS10064_19CS30008.y"
                 {
                (yyval.numparams) = 0;
        }
#line 1858 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 176 "ass5_19CS10064_19CS30008.y"
                                                {
                (yyval.numparams) = 1;
                emit("param", (yyvsp[0].expr)->loc->name);
        }
#line 1867 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 180 "ass5_19CS10064_19CS30008.y"
                                                               {
                (yyval.numparams) = (yyvsp[-2].numparams) + 1;
                emit("param", (yyvsp[0].expr)->loc->name);
        }
#line 1876 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 187 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.arr) = (yyvsp[0].arr);
        }
#line 1884 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 190 "ass5_19CS10064_19CS30008.y"
                                     {
                emit("+", (yyvsp[0].arr)->arr->name,(yyvsp[0].arr)->arr->name,"1");
                (yyval.arr) = (yyvsp[0].arr);
        }
#line 1893 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 194 "ass5_19CS10064_19CS30008.y"
                                     {
                emit("-", (yyvsp[0].arr)->arr->name,(yyvsp[0].arr)->arr->name,"1");
                (yyval.arr) = (yyvsp[0].arr);
        }
#line 1902 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 198 "ass5_19CS10064_19CS30008.y"
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
#line 1941 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 232 "ass5_19CS10064_19CS30008.y"
                                  {}
#line 1947 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF LEFTPAR type_name RIGHTPAR  */
#line 233 "ass5_19CS10064_19CS30008.y"
                                             {}
#line 1953 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 28: /* unary_operator: PLUS  */
#line 236 "ass5_19CS10064_19CS30008.y"
                     { (yyval.unary_op) = '+'; }
#line 1959 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 29: /* unary_operator: MINUS  */
#line 237 "ass5_19CS10064_19CS30008.y"
                { (yyval.unary_op) = '-'; }
#line 1965 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 30: /* unary_operator: NOT  */
#line 238 "ass5_19CS10064_19CS30008.y"
               { (yyval.unary_op) = '!'; }
#line 1971 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 31: /* unary_operator: TILDA  */
#line 239 "ass5_19CS10064_19CS30008.y"
                { (yyval.unary_op) = '~'; }
#line 1977 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 32: /* unary_operator: AND  */
#line 240 "ass5_19CS10064_19CS30008.y"
               { (yyval.unary_op) = '&'; }
#line 1983 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 33: /* unary_operator: MULTIPLY  */
#line 241 "ass5_19CS10064_19CS30008.y"
                   { (yyval.unary_op) = '*'; }
#line 1989 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 244 "ass5_19CS10064_19CS30008.y"
                                  {
                (yyval.arr) = (yyvsp[0].arr);
        }
#line 1997 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 35: /* cast_expression: LEFTPAR type_name RIGHTPAR cast_expression  */
#line 247 "ass5_19CS10064_19CS30008.y"
                                                      {
                (yyval.arr) = new arraytype();
                (yyval.arr)->arr = convertToSymbol((yyvsp[0].arr)->arr,lastType);
        }
#line 2006 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 253 "ass5_19CS10064_19CS30008.y"
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
#line 2024 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 266 "ass5_19CS10064_19CS30008.y"
                                                             {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].arr)->arr)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("*",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].arr)->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2038 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 275 "ass5_19CS10064_19CS30008.y"
                                                        {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].arr)->arr)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("/",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].arr)->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2052 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 284 "ass5_19CS10064_19CS30008.y"
                                                         {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].arr)->arr)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("%",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].arr)->arr->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2066 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 295 "ass5_19CS10064_19CS30008.y"
                                               {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2074 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 41: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 298 "ass5_19CS10064_19CS30008.y"
                                                             {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("+",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2088 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 42: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 307 "ass5_19CS10064_19CS30008.y"
                                                              {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type),"");
                        emit("-",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2102 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 318 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2110 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LEFTSHIFT additive_expression  */
#line 321 "ass5_19CS10064_19CS30008.y"
                                                         {
                if((yyvsp[0].expr)->loc->type->type == "int"){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit("<<",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2124 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RIGHTSHIFT additive_expression  */
#line 330 "ass5_19CS10064_19CS30008.y"
                                                          {
                if((yyvsp[0].expr)->loc->type->type == "int"){
                        (yyval.expr) = new expression();
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit(">>",(yyval.expr)->loc->name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type mismatch");
                }
        }
#line 2138 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 341 "ass5_19CS10064_19CS30008.y"
                                        {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2146 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS shift_expression  */
#line 344 "ass5_19CS10064_19CS30008.y"
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
#line 2163 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER shift_expression  */
#line 356 "ass5_19CS10064_19CS30008.y"
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
#line 2180 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESSEQUAL shift_expression  */
#line 368 "ass5_19CS10064_19CS30008.y"
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
#line 2197 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATEREQUAL shift_expression  */
#line 380 "ass5_19CS10064_19CS30008.y"
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
#line 2214 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 394 "ass5_19CS10064_19CS30008.y"
                                           {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2222 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 52: /* equality_expression: equality_expression DOUBLEEQUAL relational_expression  */
#line 397 "ass5_19CS10064_19CS30008.y"
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
#line 2241 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOTEQUAL relational_expression  */
#line 411 "ass5_19CS10064_19CS30008.y"
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
#line 2260 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 54: /* AND_expression: equality_expression  */
#line 426 "ass5_19CS10064_19CS30008.y"
                                    {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2268 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 55: /* AND_expression: AND_expression AND equality_expression  */
#line 429 "ass5_19CS10064_19CS30008.y"
                                                 {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        convertBool2Int((yyvsp[-2].expr));
                        convertBool2Int((yyvsp[0].expr));
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "not_bool";
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
#line 2285 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 56: /* exclusive_OR_expression: AND_expression  */
#line 443 "ass5_19CS10064_19CS30008.y"
                                        {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2293 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 57: /* exclusive_OR_expression: exclusive_OR_expression XOR AND_expression  */
#line 446 "ass5_19CS10064_19CS30008.y"
                                                     {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        convertBool2Int((yyvsp[-2].expr));
                        convertBool2Int((yyvsp[0].expr));
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "not_bool";
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
#line 2310 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 58: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 460 "ass5_19CS10064_19CS30008.y"
                                                  {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2318 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 59: /* inclusive_OR_expression: inclusive_OR_expression OR exclusive_OR_expression  */
#line 463 "ass5_19CS10064_19CS30008.y"
                                                             {
                if(typecheck((yyvsp[-2].expr)->loc,(yyvsp[0].expr)->loc)){
                        convertBool2Int((yyvsp[-2].expr));
                        convertBool2Int((yyvsp[0].expr));
                        (yyval.expr) = new expression();
                        (yyval.expr)->type = "not_bool";
                        (yyval.expr)->loc = symboltable::gentemp(new symboltype("int"),"");
                        emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                }else{
                        yyerror("Type Error");
                }
        }
#line 2335 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 60: /* logical_AND_expression: inclusive_OR_expression  */
#line 477 "ass5_19CS10064_19CS30008.y"
                                                {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2343 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 61: /* logical_AND_expression: logical_AND_expression DOUBLEAND M inclusive_OR_expression  */
#line 480 "ass5_19CS10064_19CS30008.y"
                                                                     {
                convertInt2Bool((yyvsp[-3].expr));
                convertInt2Bool((yyvsp[0].expr));

                (yyval.expr) = new expression();
                (yyval.expr)->type = "bool";
                backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instruction));

                (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;
                (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);
        }
#line 2359 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_AND_expression  */
#line 493 "ass5_19CS10064_19CS30008.y"
                                              {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2367 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 63: /* logical_OR_expression: logical_OR_expression DOUBLEOR M logical_AND_expression  */
#line 496 "ass5_19CS10064_19CS30008.y"
                                                                  {
                convertInt2Bool((yyvsp[-3].expr));
                convertInt2Bool((yyvsp[0].expr));

                (yyval.expr) = new expression();
                 (yyval.expr)->type = "bool";
                backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instruction));

                (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);
                (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;
        }
#line 2383 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression  */
#line 509 "ass5_19CS10064_19CS30008.y"
                                              {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2391 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 65: /* conditional_expression: logical_OR_expression N QUESTIONMARK M expression N COLON M conditional_expression  */
#line 512 "ass5_19CS10064_19CS30008.y"
                                                                                               {
                (yyval.expr)->loc = symboltable::gentemp((yyvsp[-4].expr)->loc->type,"");
                (yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
                emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);

                list<int> temp1 = makelist(nextinstr());
                emit("goto", "", "", "");
                backpatch((yyvsp[-3].stmt)->nextlist, nextinstr());
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
#line 2418 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 66: /* M: %empty  */
#line 536 "ass5_19CS10064_19CS30008.y"
             {
                (yyval.instruction) = nextinstr();
        }
#line 2426 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 67: /* N: %empty  */
#line 541 "ass5_19CS10064_19CS30008.y"
              {
                (yyval.stmt) = new statement();
                (yyval.stmt)->nextlist = makelist(nextinstr());
                emit("goto", "", "", "");
        }
#line 2436 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 547 "ass5_19CS10064_19CS30008.y"
                                              {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2444 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 550 "ass5_19CS10064_19CS30008.y"
                                                                     {
                if((yyvsp[-2].arr)->arrtype == "arr"){
                        (yyvsp[0].expr)->loc = convertToSymbol((yyvsp[0].expr)->loc,(yyvsp[-2].arr)->type->type);
                        emit("[]=",(yyvsp[-2].arr)->arr->name,(yyvsp[-2].arr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else if((yyvsp[-2].arr)->arrtype == "ptr"){
                        emit("*=",(yyvsp[-2].arr)->arr->name,(yyvsp[-2].arr)->loc->name,(yyvsp[0].expr)->loc->name);
                }else{
                        (yyvsp[0].expr)->loc = convertToSymbol((yyvsp[0].expr)->loc,(yyvsp[-2].arr)->arr->type->type);
                        emit("=", (yyvsp[-2].arr)->arr->name, (yyvsp[0].expr)->loc->name);
                }
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2461 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 70: /* assignment_operator: EQUAL  */
#line 564 "ass5_19CS10064_19CS30008.y"
                            {}
#line 2467 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 71: /* assignment_operator: MULTIPLYEQUAL  */
#line 565 "ass5_19CS10064_19CS30008.y"
                        {}
#line 2473 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 72: /* assignment_operator: DIVEQUAL  */
#line 566 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2479 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 73: /* assignment_operator: MODEQUAL  */
#line 567 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2485 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 74: /* assignment_operator: PLUSEQUAL  */
#line 568 "ass5_19CS10064_19CS30008.y"
                      {}
#line 2491 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 75: /* assignment_operator: MINUSEQUAL  */
#line 569 "ass5_19CS10064_19CS30008.y"
                      {}
#line 2497 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 76: /* assignment_operator: LEFTSHIFTEQUAL  */
#line 570 "ass5_19CS10064_19CS30008.y"
                          {}
#line 2503 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 77: /* assignment_operator: RIGHTSHIFTEQUAL  */
#line 571 "ass5_19CS10064_19CS30008.y"
                          {}
#line 2509 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 78: /* assignment_operator: ANDEQUAL  */
#line 572 "ass5_19CS10064_19CS30008.y"
                    {}
#line 2515 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 79: /* assignment_operator: XOREQUAL  */
#line 573 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2521 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 80: /* assignment_operator: OREQUAL  */
#line 574 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2527 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 81: /* expression: assignment_expression  */
#line 577 "ass5_19CS10064_19CS30008.y"
                                  {
                (yyval.expr) = (yyvsp[0].expr);
        }
#line 2535 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 82: /* expression: expression COMMA assignment_expression  */
#line 580 "ass5_19CS10064_19CS30008.y"
                                                 {

        }
#line 2543 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 83: /* constant_expression: conditional_expression  */
#line 584 "ass5_19CS10064_19CS30008.y"
                                             {}
#line 2549 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 84: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 589 "ass5_19CS10064_19CS30008.y"
                                                                    {}
#line 2555 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 85: /* declaration: declaration_specifiers SEMICOLON  */
#line 590 "ass5_19CS10064_19CS30008.y"
                                            {}
#line 2561 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 593 "ass5_19CS10064_19CS30008.y"
                                                                       { }
#line 2567 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 87: /* declaration_specifiers: storage_class_specifier  */
#line 594 "ass5_19CS10064_19CS30008.y"
                                 { }
#line 2573 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 88: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 595 "ass5_19CS10064_19CS30008.y"
                                                { }
#line 2579 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 89: /* declaration_specifiers: type_specifier  */
#line 596 "ass5_19CS10064_19CS30008.y"
                         { }
#line 2585 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 90: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 597 "ass5_19CS10064_19CS30008.y"
                                                { }
#line 2591 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 91: /* declaration_specifiers: type_qualifier  */
#line 598 "ass5_19CS10064_19CS30008.y"
                         { }
#line 2597 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 92: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 599 "ass5_19CS10064_19CS30008.y"
                                                    { }
#line 2603 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 93: /* declaration_specifiers: function_specifier  */
#line 600 "ass5_19CS10064_19CS30008.y"
                             { }
#line 2609 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator  */
#line 603 "ass5_19CS10064_19CS30008.y"
                                       {}
#line 2615 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 604 "ass5_19CS10064_19CS30008.y"
                                                      {}
#line 2621 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 96: /* init_declarator: declarator EQUAL initializer  */
#line 607 "ass5_19CS10064_19CS30008.y"
                                             {
                if((yyvsp[0].syent)->value != ""){
                        (yyvsp[-2].syent)->value = (yyvsp[0].syent)->value;
                }
                emit("=", (yyvsp[-2].syent)->name, (yyvsp[0].syent)->name);
        }
#line 2632 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 97: /* init_declarator: declarator  */
#line 613 "ass5_19CS10064_19CS30008.y"
                     {
                (yyval.syent) = (yyvsp[0].syent);
        }
#line 2640 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 98: /* storage_class_specifier: EXTERN  */
#line 618 "ass5_19CS10064_19CS30008.y"
                                {}
#line 2646 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 99: /* storage_class_specifier: STATIC  */
#line 619 "ass5_19CS10064_19CS30008.y"
                 {}
#line 2652 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 100: /* storage_class_specifier: AUTO  */
#line 620 "ass5_19CS10064_19CS30008.y"
               {}
#line 2658 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 101: /* storage_class_specifier: REGISTER  */
#line 621 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2664 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 102: /* type_specifier: VOID  */
#line 624 "ass5_19CS10064_19CS30008.y"
                     {
                lastType = "void";
        }
#line 2672 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 103: /* type_specifier: CHAR  */
#line 627 "ass5_19CS10064_19CS30008.y"
               {
                lastType = "char";
        }
#line 2680 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 104: /* type_specifier: SHORT  */
#line 630 "ass5_19CS10064_19CS30008.y"
                {}
#line 2686 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 631 "ass5_19CS10064_19CS30008.y"
               {
                lastType = "int";
        }
#line 2694 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 106: /* type_specifier: LONG  */
#line 634 "ass5_19CS10064_19CS30008.y"
               {
                
        }
#line 2702 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 637 "ass5_19CS10064_19CS30008.y"
                 {
                lastType = "float";
        }
#line 2710 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 108: /* type_specifier: DOUBLE  */
#line 640 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2716 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 109: /* type_specifier: SIGNED  */
#line 641 "ass5_19CS10064_19CS30008.y"
                  {}
#line 2722 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 110: /* type_specifier: UNSIGNED  */
#line 642 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2728 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 111: /* type_specifier: BOOL  */
#line 643 "ass5_19CS10064_19CS30008.y"
                {}
#line 2734 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 112: /* type_specifier: COMPLEX  */
#line 644 "ass5_19CS10064_19CS30008.y"
                  {}
#line 2740 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 113: /* type_specifier: IMAGINARY  */
#line 645 "ass5_19CS10064_19CS30008.y"
                    {}
#line 2746 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 650 "ass5_19CS10064_19CS30008.y"
        {  }
#line 2752 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 652 "ass5_19CS10064_19CS30008.y"
        {  }
#line 2758 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 657 "ass5_19CS10064_19CS30008.y"
        {}
#line 2764 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: %empty  */
#line 659 "ass5_19CS10064_19CS30008.y"
        { }
#line 2770 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 118: /* type_qualifier: CONST  */
#line 662 "ass5_19CS10064_19CS30008.y"
                      {}
#line 2776 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 119: /* type_qualifier: RESTRICT  */
#line 663 "ass5_19CS10064_19CS30008.y"
                    {}
#line 2782 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 120: /* type_qualifier: VOLATILE  */
#line 664 "ass5_19CS10064_19CS30008.y"
                   {}
#line 2788 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 121: /* function_specifier: INLINE  */
#line 667 "ass5_19CS10064_19CS30008.y"
                            {}
#line 2794 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 122: /* declarator: pointer direct_declarator  */
#line 670 "ass5_19CS10064_19CS30008.y"
                                      {
                symboltype* temp = (yyvsp[-1].syenttype);
                while(temp->arrtype != NULL){
                        temp = temp->arrtype;
                }
                temp->arrtype = (yyvsp[0].syent)->type;
                (yyval.syent) = (yyvsp[0].syent)->update((yyvsp[-1].syenttype));
        }
#line 2807 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 123: /* declarator: direct_declarator  */
#line 678 "ass5_19CS10064_19CS30008.y"
                             {}
#line 2813 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 124: /* direct_declarator: IDENTIFIER  */
#line 681 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.syent) = (yyvsp[0].syent)->update(new symboltype(lastType));
                currentSymbol = (yyval.syent);
        }
#line 2822 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 125: /* direct_declarator: LEFTPAR declarator RIGHTPAR  */
#line 685 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.syent) = (yyvsp[-1].syent);
        }
#line 2830 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator LEFTBRACKET RIGHTBRACKET  */
#line 688 "ass5_19CS10064_19CS30008.y"
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
#line 2853 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator LEFTBRACKET type_qualifier_list RIGHTBRACKET  */
#line 706 "ass5_19CS10064_19CS30008.y"
                                                                          {

        }
#line 2861 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator LEFTBRACKET assignment_expression RIGHTBRACKET  */
#line 709 "ass5_19CS10064_19CS30008.y"
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
#line 2884 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator LEFTBRACKET type_qualifier_list assignment_expression RIGHTBRACKET  */
#line 727 "ass5_19CS10064_19CS30008.y"
                                                                                               {

        }
#line 2892 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator LEFTBRACKET STATIC type_qualifier_list assignment_expression RIGHTBRACKET  */
#line 730 "ass5_19CS10064_19CS30008.y"
                                                                                                      {

        }
#line 2900 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator LEFTBRACKET STATIC assignment_expression RIGHTBRACKET  */
#line 733 "ass5_19CS10064_19CS30008.y"
                                                                                    {
                
        }
#line 2908 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator LEFTBRACKET type_qualifier_list STATIC assignment_expression RIGHTBRACKET  */
#line 736 "ass5_19CS10064_19CS30008.y"
                                                                                                      {

        }
#line 2916 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator LEFTBRACKET MULTIPLY RIGHTBRACKET  */
#line 739 "ass5_19CS10064_19CS30008.y"
                                                              {

        }
#line 2924 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator LEFTBRACKET type_qualifier_list MULTIPLY RIGHTBRACKET  */
#line 742 "ass5_19CS10064_19CS30008.y"
                                                                                   {

        }
#line 2932 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LEFTPAR change_table parameter_type_list RIGHTPAR  */
#line 745 "ass5_19CS10064_19CS30008.y"
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
#line 2949 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator LEFTPAR identifier_list RIGHTPAR  */
#line 757 "ass5_19CS10064_19CS30008.y"
                                                              {

        }
#line 2957 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator LEFTPAR change_table RIGHTPAR  */
#line 760 "ass5_19CS10064_19CS30008.y"
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
#line 2973 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 138: /* type_qualifier_list_opt: type_qualifier_list  */
#line 775 "ass5_19CS10064_19CS30008.y"
        {  }
#line 2979 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 139: /* type_qualifier_list_opt: %empty  */
#line 777 "ass5_19CS10064_19CS30008.y"
        {  }
#line 2985 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 140: /* pointer: MULTIPLY type_qualifier_list_opt  */
#line 780 "ass5_19CS10064_19CS30008.y"
                                           {
                (yyval.syenttype) = new symboltype("ptr");
        }
#line 2993 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 141: /* pointer: MULTIPLY type_qualifier_list_opt pointer  */
#line 783 "ass5_19CS10064_19CS30008.y"
                                                   {
                (yyval.syenttype) = new symboltype("ptr", (yyvsp[0].syenttype));
        }
#line 3001 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 142: /* type_qualifier_list: type_qualifier  */
#line 788 "ass5_19CS10064_19CS30008.y"
                                    {}
#line 3007 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 143: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 789 "ass5_19CS10064_19CS30008.y"
                                              {}
#line 3013 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 144: /* parameter_type_list: parameter_list  */
#line 792 "ass5_19CS10064_19CS30008.y"
                                     {}
#line 3019 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 145: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 793 "ass5_19CS10064_19CS30008.y"
                                        {}
#line 3025 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 146: /* parameter_list: parameter_declaration  */
#line 796 "ass5_19CS10064_19CS30008.y"
                                      {}
#line 3031 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 147: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 797 "ass5_19CS10064_19CS30008.y"
                                                      {}
#line 3037 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 148: /* parameter_declaration: declaration_specifiers declarator  */
#line 800 "ass5_19CS10064_19CS30008.y"
                                                            {}
#line 3043 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 149: /* parameter_declaration: declaration_specifiers  */
#line 801 "ass5_19CS10064_19CS30008.y"
                                  {}
#line 3049 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 150: /* identifier_list: IDENTIFIER  */
#line 804 "ass5_19CS10064_19CS30008.y"
                             {}
#line 3055 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 151: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 805 "ass5_19CS10064_19CS30008.y"
                                           {}
#line 3061 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 152: /* type_name: specifier_qualifier_list  */
#line 808 "ass5_19CS10064_19CS30008.y"
                                    {}
#line 3067 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 153: /* initializer: assignment_expression  */
#line 811 "ass5_19CS10064_19CS30008.y"
                                   {
                (yyval.syent) = (yyvsp[0].expr)->loc;
        }
#line 3075 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 154: /* initializer: LEFTBRACE initializer_list RIGHTBRACE  */
#line 814 "ass5_19CS10064_19CS30008.y"
                                                {}
#line 3081 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 155: /* initializer: LEFTBRACE initializer_list COMMA RIGHTBRACE  */
#line 815 "ass5_19CS10064_19CS30008.y"
                                                      {}
#line 3087 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 157: /* initializer_list: designation initializer  */
#line 819 "ass5_19CS10064_19CS30008.y"
                                   {}
#line 3093 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 158: /* initializer_list: initializer_list COMMA initializer  */
#line 820 "ass5_19CS10064_19CS30008.y"
                                             {}
#line 3099 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 159: /* initializer_list: initializer_list COMMA designation initializer  */
#line 821 "ass5_19CS10064_19CS30008.y"
                                                         {}
#line 3105 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 160: /* designation: designator_list EQUAL  */
#line 824 "ass5_19CS10064_19CS30008.y"
                                    {}
#line 3111 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 161: /* designator_list: designator  */
#line 827 "ass5_19CS10064_19CS30008.y"
                            {}
#line 3117 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 162: /* designator_list: designator_list designator  */
#line 828 "ass5_19CS10064_19CS30008.y"
                                     {}
#line 3123 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 163: /* designator: LEFTBRACKET constant_expression RIGHTBRACKET  */
#line 831 "ass5_19CS10064_19CS30008.y"
                                                          {}
#line 3129 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 164: /* designator: DOT IDENTIFIER  */
#line 832 "ass5_19CS10064_19CS30008.y"
                         {}
#line 3135 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 165: /* statement: labeled_statement  */
#line 837 "ass5_19CS10064_19CS30008.y"
                             {}
#line 3141 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 166: /* statement: compound_statement  */
#line 838 "ass5_19CS10064_19CS30008.y"
                             { 
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3149 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 167: /* statement: expression_statement  */
#line 841 "ass5_19CS10064_19CS30008.y"
                               {
                (yyval.stmt) = new statement();
                (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 3158 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 168: /* statement: selection_statement  */
#line 845 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3166 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 169: /* statement: iteration_statement  */
#line 848 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3174 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 170: /* statement: jump_statement  */
#line 851 "ass5_19CS10064_19CS30008.y"
                         {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3182 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 171: /* loop_statement: labeled_statement  */
#line 856 "ass5_19CS10064_19CS30008.y"
                                 {

        }
#line 3190 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 172: /* loop_statement: expression_statement  */
#line 859 "ass5_19CS10064_19CS30008.y"
                               {
                (yyval.stmt) = new statement();
                (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 3199 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 173: /* loop_statement: selection_statement  */
#line 863 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3207 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 174: /* loop_statement: iteration_statement  */
#line 866 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3215 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 175: /* loop_statement: jump_statement  */
#line 869 "ass5_19CS10064_19CS30008.y"
                         {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3223 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 176: /* labeled_statement: IDENTIFIER COLON statement  */
#line 874 "ass5_19CS10064_19CS30008.y"
                                              {
                
        }
#line 3231 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 177: /* labeled_statement: CASE constant_expression COLON statement  */
#line 877 "ass5_19CS10064_19CS30008.y"
                                                   {}
#line 3237 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 178: /* labeled_statement: DEFAULT COLON statement  */
#line 878 "ass5_19CS10064_19CS30008.y"
                                  {}
#line 3243 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 179: /* compound_statement: LEFTBRACE X change_table block_item_list_opt RIGHTBRACE  */
#line 881 "ass5_19CS10064_19CS30008.y"
                                                                            {
                (yyval.stmt) = (yyvsp[-1].stmt);
                changeTable(currentST->parent);
        }
#line 3252 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 180: /* block_item_list_opt: block_item_list  */
#line 889 "ass5_19CS10064_19CS30008.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    
        }
#line 3260 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 181: /* block_item_list_opt: %empty  */
#line 893 "ass5_19CS10064_19CS30008.y"
        {
            (yyval.stmt) = new statement();   
        }
#line 3268 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 182: /* block_item_list: block_item  */
#line 898 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3276 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 183: /* block_item_list: block_item_list M block_item  */
#line 901 "ass5_19CS10064_19CS30008.y"
                                       {
                (yyval.stmt) = (yyvsp[0].stmt);
                backpatch((yyvsp[-2].stmt)->nextlist,(yyvsp[-1].instruction));
        }
#line 3285 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 184: /* block_item: declaration  */
#line 907 "ass5_19CS10064_19CS30008.y"
                        {
                (yyval.stmt) = new statement();
        }
#line 3293 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 185: /* block_item: statement  */
#line 910 "ass5_19CS10064_19CS30008.y"
                    {
                (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3301 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 186: /* expression_statement: SEMICOLON  */
#line 915 "ass5_19CS10064_19CS30008.y"
                                {
                (yyval.expr) = new expression();
        }
#line 3309 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 187: /* expression_statement: expression SEMICOLON  */
#line 918 "ass5_19CS10064_19CS30008.y"
                               {
                (yyval.expr) = (yyvsp[-1].expr);
        }
#line 3317 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 188: /* selection_statement: IF LEFTPAR expression N RIGHTPAR M statement N  */
#line 923 "ass5_19CS10064_19CS30008.y"
                                                                                             {
                backpatch((yyvsp[-4].stmt)->nextlist,nextinstr());

                convertInt2Bool((yyvsp[-5].expr));
                (yyval.stmt) = new statement();

                backpatch((yyvsp[-5].expr)->truelist,(yyvsp[-2].instruction));

                list<int> temp = merge((yyvsp[-5].expr)->falselist,(yyvsp[-1].stmt)->nextlist);
                (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist,temp);
        }
#line 3333 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 189: /* selection_statement: IF LEFTPAR expression N RIGHTPAR M statement N ELSE M statement  */
#line 934 "ass5_19CS10064_19CS30008.y"
                                                                                      {
                backpatch((yyvsp[-7].stmt)->nextlist,nextinstr());

                convertInt2Bool((yyvsp[-8].expr));
                (yyval.stmt) = new statement();

                backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-5].instruction));
                backpatch((yyvsp[-8].expr)->falselist,(yyvsp[-1].instruction));

                list<int> temp = merge((yyvsp[-4].stmt)->nextlist,(yyvsp[-3].stmt)->nextlist);
                (yyval.stmt)->nextlist = merge(temp,(yyvsp[0].stmt)->nextlist);
        }
#line 3350 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 190: /* selection_statement: SWITCH LEFTPAR expression RIGHTPAR statement  */
#line 946 "ass5_19CS10064_19CS30008.y"
                                                        {}
#line 3356 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 191: /* iteration_statement: WHILE W LEFTPAR X change_table M expression RIGHTPAR M loop_statement  */
#line 949 "ass5_19CS10064_19CS30008.y"
                                                                                           {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-3].expr));

                backpatch((yyvsp[0].stmt)->nextlist,(yyvsp[-4].instruction));

                backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-1].instruction));

                (yyval.stmt)->nextlist = (yyvsp[-3].expr)->falselist;

                emit("goto", int_to_string((yyvsp[-4].instruction)));

                blockName = "";
                changeTable(currentST->parent);
        }
#line 3376 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 192: /* iteration_statement: WHILE W LEFTPAR X change_table M expression RIGHTPAR LEFTBRACE M block_item_list_opt RIGHTBRACE  */
#line 964 "ass5_19CS10064_19CS30008.y"
                                                                                                          {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-5].expr));

                backpatch((yyvsp[-1].stmt)->nextlist,(yyvsp[-6].instruction));

                backpatch((yyvsp[-5].expr)->truelist,(yyvsp[-2].instruction));

                (yyval.stmt)->nextlist = (yyvsp[-5].expr)->falselist;

                emit("goto", int_to_string((yyvsp[-6].instruction)));

                blockName = "";
                changeTable(currentST->parent);
        }
#line 3396 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 193: /* iteration_statement: DO D M loop_statement M WHILE LEFTPAR expression RIGHTPAR SEMICOLON  */
#line 980 "ass5_19CS10064_19CS30008.y"
                                                                              {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-2].expr));

                backpatch((yyvsp[-2].expr)->truelist,(yyvsp[-7].instruction));

                backpatch((yyvsp[-6].stmt)->nextlist,(yyvsp[-5].instruction));

                (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist;

                blockName = "";

        }
#line 3414 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 194: /* iteration_statement: DO D LEFTBRACE M block_item_list_opt RIGHTBRACE M WHILE LEFTPAR expression RIGHTPAR SEMICOLON  */
#line 993 "ass5_19CS10064_19CS30008.y"
                                                                                                        {
                (yyval.stmt) = new statement();
                convertInt2Bool((yyvsp[-2].expr));

                backpatch((yyvsp[-2].expr)->truelist,(yyvsp[-8].instruction));

                backpatch((yyvsp[-7].stmt)->nextlist,(yyvsp[-5].instruction));

                (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist;

                blockName = "";
        }
#line 3431 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 195: /* iteration_statement: FOR F LEFTPAR X change_table declaration M expression_statement M expression N RIGHTPAR M loop_statement  */
#line 1005 "ass5_19CS10064_19CS30008.y"
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
#line 3453 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 196: /* iteration_statement: FOR F LEFTPAR X change_table expression_statement M expression_statement M expression N RIGHTPAR M loop_statement  */
#line 1022 "ass5_19CS10064_19CS30008.y"
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
#line 3474 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 197: /* iteration_statement: FOR F LEFTPAR X change_table declaration M expression_statement M expression N RIGHTPAR M LEFTBRACE block_item_list_opt RIGHTBRACE  */
#line 1038 "ass5_19CS10064_19CS30008.y"
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
#line 3495 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 198: /* iteration_statement: FOR F LEFTPAR X change_table expression_statement M expression_statement M expression N RIGHTPAR M LEFTBRACE block_item_list_opt RIGHTBRACE  */
#line 1054 "ass5_19CS10064_19CS30008.y"
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
#line 3516 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 199: /* F: %empty  */
#line 1072 "ass5_19CS10064_19CS30008.y"
           {
        blockName = "FOR";
}
#line 3524 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 200: /* W: %empty  */
#line 1076 "ass5_19CS10064_19CS30008.y"
           {
        blockName = "WHILE";
}
#line 3532 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 201: /* D: %empty  */
#line 1080 "ass5_19CS10064_19CS30008.y"
           {
        blockName = "DO_WHILE";
}
#line 3540 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 202: /* X: %empty  */
#line 1084 "ass5_19CS10064_19CS30008.y"
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
#line 3555 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 203: /* change_table: %empty  */
#line 1096 "ass5_19CS10064_19CS30008.y"
                      {
        if(currentSymbol->nestedtable != NULL){
                changeTable(currentSymbol->nestedtable);
                emit("label",currentST->name,"","");
        }else{
                changeTable(new symboltable(""));
        }
}
#line 3568 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 204: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1107 "ass5_19CS10064_19CS30008.y"
                                          {}
#line 3574 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 205: /* jump_statement: CONTINUE SEMICOLON  */
#line 1108 "ass5_19CS10064_19CS30008.y"
                              {
                (yyval.stmt) = new statement();
        }
#line 3582 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 206: /* jump_statement: BREAK SEMICOLON  */
#line 1111 "ass5_19CS10064_19CS30008.y"
                          {
                (yyval.stmt) = new statement();
        }
#line 3590 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 207: /* jump_statement: RETURN SEMICOLON  */
#line 1114 "ass5_19CS10064_19CS30008.y"
                            {
                (yyval.stmt) = new statement();
                emit("return", "");
        }
#line 3599 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 208: /* jump_statement: RETURN expression SEMICOLON  */
#line 1118 "ass5_19CS10064_19CS30008.y"
                                      {
                (yyval.stmt) = new statement();
                emit("return", (yyvsp[-1].expr)->loc->name);
        }
#line 3608 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 209: /* translation_unit: translation_unit external_declaration  */
#line 1127 "ass5_19CS10064_19CS30008.y"
                                                          {}
#line 3614 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 210: /* translation_unit: external_declaration  */
#line 1128 "ass5_19CS10064_19CS30008.y"
                               {}
#line 3620 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 211: /* external_declaration: function_definition  */
#line 1131 "ass5_19CS10064_19CS30008.y"
                                           {}
#line 3626 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 212: /* external_declaration: declaration  */
#line 1132 "ass5_19CS10064_19CS30008.y"
                      {}
#line 3632 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 213: /* function_definition: declaration_specifiers declarator declaration_list_opt change_table LEFTBRACE block_item_list_opt RIGHTBRACE  */
#line 1135 "ass5_19CS10064_19CS30008.y"
                                                                                                                                  {
                currentST->parent = globalST;
                STCount = 0;
                changeTable(globalST);
        }
#line 3642 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 214: /* declaration_list_opt: declaration_list  */
#line 1145 "ass5_19CS10064_19CS30008.y"
        {  }
#line 3648 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 215: /* declaration_list_opt: %empty  */
#line 1147 "ass5_19CS10064_19CS30008.y"
        {  }
#line 3654 "ass5_19CS10064_19CS30008.tab.c"
    break;

  case 216: /* declaration_list: declaration  */
#line 1149 "ass5_19CS10064_19CS30008.y"
                               {}
#line 3660 "ass5_19CS10064_19CS30008.tab.c"
    break;


#line 3664 "ass5_19CS10064_19CS30008.tab.c"

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

#line 1152 "ass5_19CS10064_19CS30008.y"



void yyerror(string s) {
    /*
        This function prints any error encountered while parsing
    */
    cout << "Error occurred: " << s << endl;
    cout << "Line no.: " << yylineno << endl;
    cout << "Unable to parse: " << yytext << endl; 
}
