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
    PLUS = 262,                    /* PLUS  */
    MINUS = 263,                   /* MINUS  */
    MULTIPLY = 264,                /* MULTIPLY  */
    AND = 265,                     /* AND  */
    TILDA = 266,                   /* TILDA  */
    NOT = 267,                     /* NOT  */
    SIZEOF = 268                   /* SIZEOF  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "expr.y"

    int ival;
    float fval;
    char *sval;
    tree_node* node;

#line 184 "y.tab.c"

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
  YYSYMBOL_PLUS = 7,                       /* PLUS  */
  YYSYMBOL_MINUS = 8,                      /* MINUS  */
  YYSYMBOL_MULTIPLY = 9,                   /* MULTIPLY  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_TILDA = 11,                     /* TILDA  */
  YYSYMBOL_NOT = 12,                       /* NOT  */
  YYSYMBOL_SIZEOF = 13,                    /* SIZEOF  */
  YYSYMBOL_14_ = 14,                       /* '('  */
  YYSYMBOL_15_ = 15,                       /* ')'  */
  YYSYMBOL_16_ = 16,                       /* '['  */
  YYSYMBOL_17_ = 17,                       /* ']'  */
  YYSYMBOL_18_ = 18,                       /* '.'  */
  YYSYMBOL_19_ = 19,                       /* '-'  */
  YYSYMBOL_20_ = 20,                       /* '>'  */
  YYSYMBOL_21_ = 21,                       /* ','  */
  YYSYMBOL_22_ = 22,                       /* '*'  */
  YYSYMBOL_23_ = 23,                       /* '/'  */
  YYSYMBOL_24_ = 24,                       /* '%'  */
  YYSYMBOL_25_ = 25,                       /* '<'  */
  YYSYMBOL_26_ = 26,                       /* '='  */
  YYSYMBOL_27_ = 27,                       /* '!'  */
  YYSYMBOL_28_ = 28,                       /* '&'  */
  YYSYMBOL_29_ = 29,                       /* '^'  */
  YYSYMBOL_30_ = 30,                       /* '|'  */
  YYSYMBOL_31_ = 31,                       /* '?'  */
  YYSYMBOL_32_ = 32,                       /* ':'  */
  YYSYMBOL_33_ = 33,                       /* '+'  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_START = 35,                     /* START  */
  YYSYMBOL_Expression = 36,                /* Expression  */
  YYSYMBOL_primary_expression = 37,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 38,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 39,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 40,          /* unary_expression  */
  YYSYMBOL_unary_operator = 41,            /* unary_operator  */
  YYSYMBOL_cast_expression = 42,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 43, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 44,       /* additive_expression  */
  YYSYMBOL_shift_expression = 45,          /* shift_expression  */
  YYSYMBOL_relational_expression = 46,     /* relational_expression  */
  YYSYMBOL_equality_expression = 47,       /* equality_expression  */
  YYSYMBOL_AND_expression = 48,            /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 49,   /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 50,   /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 51,    /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 52,     /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 53,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 54,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 55,       /* assignment_operator  */
  YYSYMBOL_expression = 56,                /* expression  */
  YYSYMBOL_constant_expression = 57        /* constant_expression  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   268


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
       2,     2,     2,    27,     2,     2,     2,    24,    28,     2,
      14,    15,    22,    33,    21,    19,    18,    23,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    32,     2,
      25,    26,    20,    31,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    16,     2,    17,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    77,    78,    79,    80,    81,    84,    85,    86,
      87,    88,    89,    90,    91,    96,    97,   101,   102,   103,
     104,   105,   109,   110,   111,   112,   113,   114,   117,   121,
     122,   123,   124,   127,   128,   129,   132,   133,   134,   137,
     138,   139,   140,   141,   144,   145,   146,   148,   149,   152,
     153,   156,   157,   160,   161,   164,   165,   168,   169,   172,
     173,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   189,   190,   192
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
  "FLO_CONSTANT", "INT_CONSTANT", "STRING_LITERAL", "PLUS", "MINUS",
  "MULTIPLY", "AND", "TILDA", "NOT", "SIZEOF", "'('", "')'", "'['", "']'",
  "'.'", "'-'", "'>'", "','", "'*'", "'/'", "'%'", "'<'", "'='", "'!'",
  "'&'", "'^'", "'|'", "'?'", "':'", "'+'", "$accept", "START",
  "Expression", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-10)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     191,   -10,   -10,   -10,   -10,    24,    58,   -10,   -10,   -10,
     -10,   191,   191,    18,   -10,    85,    70,    99,    23,   191,
     122,    13,    54,    14,    62,    33,    29,    26,    20,    30,
      -9,   109,   113,   129,   -10,   191,   191,   -10,   174,   -10,
     134,   -10,    52,    61,    98,   101,    68,    96,   123,   125,
     137,    -3,   -10,   -10,    17,   -10,   159,   175,   165,   191,
     181,   166,   191,   161,   169,   180,   182,   183,   160,   -10,
     184,   185,   186,   187,   191,   -10,   -10,   191,   191,   191,
     191,   191,   171,   189,   103,   135,   190,   192,   191,   191,
     191,   179,   193,   191,   191,   -10,   -10,   -10,   -10,   -10,
     -10,   104,   -10,    -2,   -10,   212,   -10,   -10,   194,   -10,
     -10,   -10,   195,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,    52,    52,   191,   191,   191,    98,   191,    98,   191,
     191,    68,    96,   123,   191,   191,    51,   -10,   -10,   -10,
     -10,   -10,   -10,    61,    61,    98,    98,   101,   101,   125,
     137,   191,   -10
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    23,    24,    25,    42,    43,    47,    46,    45,
      44,     0,     0,     0,     2,    27,    37,     5,    48,     0,
      49,    53,    56,    59,    64,    67,    69,    71,    73,    75,
      17,    18,    19,    20,    21,     0,     0,    27,    37,    41,
      48,    49,    53,    56,    59,    64,    67,    69,    71,    73,
      75,    77,    79,    92,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,    48,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    39,    26,    33,    34,
      29,     0,    35,     0,    31,     0,    36,    86,     0,    82,
      83,    84,     0,    89,    90,    91,    85,    80,    50,    51,
      52,    54,    55,     0,     0,     0,    61,     0,    60,     0,
       0,    68,    70,    72,     0,     0,     0,    93,    30,    28,
      32,    88,    87,    58,    57,    63,    62,    65,    66,    74,
      76,     0,    78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -10,   -10,   -10,   217,   219,   164,     5,   -10,    25,    10,
       4,     8,     2,     9,    11,     6,     3,     1,   224,     0,
       7,   -10,    12,   -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    13,    14,    37,    38,    17,    75,    19,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    74,    33,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    29,    24,    28,    22,    18,    27,    32,    23,    25,
      21,    26,   -77,    -8,   -10,   139,    39,    40,    55,    94,
     -15,    92,    93,    -6,    54,    20,   -14,    92,    93,   -13,
     -16,    35,    97,   -12,    82,    77,    78,    79,    94,    83,
      95,    96,    63,    64,    76,    65,    66,    67,    68,    69,
      90,    70,    71,    72,    -9,    89,    73,    88,    91,    86,
      87,    80,   -11,    40,    40,   102,    36,    40,    80,   106,
      -4,   103,    94,    81,    77,    78,    79,    56,    57,    40,
      81,   117,    84,   151,    58,    -3,    59,    85,    60,    61,
     121,   122,   126,   128,    86,    87,   133,   131,    40,    40,
     132,   137,   118,   119,   120,   136,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    82,   138,
      62,    84,    -7,    83,    88,    62,    85,   143,   144,   125,
     -79,   147,   148,   145,   -35,   146,   150,   149,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      94,   152,    89,    63,    64,    90,    65,    66,    67,    68,
      69,   127,    70,    71,    72,    91,    98,    73,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     100,    56,    57,    99,   104,   112,   105,   107,    58,   108,
      59,   123,    60,    61,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   109,   134,   110,   111,
     113,   114,   115,   116,   124,   140,   129,    15,   130,    16,
     141,   142,   101,   135,    30
};

static const yytype_uint8 yycheck[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,    17,    11,    12,     0,    21,
       0,    30,    31,     0,    12,     0,     0,    30,    31,     0,
       0,     7,    15,     0,    20,    22,    23,    24,    21,    25,
      35,    36,    19,    20,    19,    22,    23,    24,    25,    26,
      30,    28,    29,    30,     0,    29,    33,    28,    28,    26,
      27,     7,     0,    58,    59,    58,     8,    62,     7,    62,
       0,    59,    21,    19,    22,    23,    24,     7,     8,    74,
      19,    74,    20,    32,    14,     0,    16,    25,    18,    19,
      80,    81,    84,    85,    26,    27,    90,    88,    93,    94,
      89,    94,    77,    78,    79,    93,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    20,    15,
      21,    20,     0,    25,    28,    21,    25,   123,   124,    26,
      21,   129,   130,   125,    21,   127,   135,   134,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      21,   151,    29,    19,    20,    30,    22,    23,    24,    25,
      26,    26,    28,    29,    30,    28,     7,    33,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     7,     8,     8,     3,    25,    20,    26,    14,    20,
      16,    20,    18,    19,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    26,    28,    26,    26,
      26,    26,    26,    26,    25,     3,    26,     0,    26,     0,
      26,    26,    58,    30,     0
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    56,    57,     7,     8,    37,    38,    40,
      40,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    56,     0,     7,     8,    14,    16,
      18,    19,    21,    19,    20,    22,    23,    24,    25,    26,
      28,    29,    30,    33,    55,    40,    42,    22,    23,    24,
       7,    19,    20,    25,    20,    25,    26,    27,    28,    29,
      30,    28,    30,    31,    21,    40,    40,    15,     7,     8,
      15,    39,    54,    56,     3,    20,    54,    26,    20,    26,
      26,    26,    25,    26,    26,    26,    26,    54,    42,    42,
      42,    43,    43,    20,    25,    26,    45,    26,    45,    26,
      26,    47,    48,    49,    28,    30,    56,    54,    15,    17,
       3,    26,    26,    44,    44,    45,    45,    46,    46,    50,
      51,    32,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    37,    37,    37,    37,    37,    38,    38,    38,
      38,    38,    38,    38,    38,    39,    39,    40,    40,    40,
      40,    40,    41,    41,    41,    41,    41,    41,    42,    43,
      43,    43,    43,    44,    44,    44,    45,    45,    45,    46,
      46,    46,    46,    46,    47,    47,    47,    48,    48,    49,
      49,    50,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     4,     3,     3,     1,     3,     1,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     4,     4,     1,
       3,     3,     4,     4,     1,     4,     4,     1,     3,     1,
       3,     1,     3,     1,     4,     1,     4,     1,     5,     1,
       3,     1,     2,     2,     2,     2,     2,     3,     3,     2,
       2,     2,     1,     3,     1
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
  case 3: /* Expression: primary_expression  */
#line 56 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1338 "y.tab.c"
    break;

  case 4: /* Expression: postfix_expression  */
#line 57 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1344 "y.tab.c"
    break;

  case 5: /* Expression: argument_expression_list  */
#line 58 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1350 "y.tab.c"
    break;

  case 6: /* Expression: unary_expression  */
#line 59 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1356 "y.tab.c"
    break;

  case 7: /* Expression: cast_expression  */
#line 60 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1362 "y.tab.c"
    break;

  case 8: /* Expression: multiplicative_expression  */
#line 61 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1368 "y.tab.c"
    break;

  case 9: /* Expression: additive_expression  */
#line 62 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1374 "y.tab.c"
    break;

  case 10: /* Expression: shift_expression  */
#line 63 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1380 "y.tab.c"
    break;

  case 11: /* Expression: relational_expression  */
#line 64 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1386 "y.tab.c"
    break;

  case 12: /* Expression: equality_expression  */
#line 65 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1392 "y.tab.c"
    break;

  case 13: /* Expression: AND_expression  */
#line 66 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1398 "y.tab.c"
    break;

  case 14: /* Expression: exclusive_OR_expression  */
#line 67 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1404 "y.tab.c"
    break;

  case 15: /* Expression: inclusive_OR_expression  */
#line 68 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1410 "y.tab.c"
    break;

  case 16: /* Expression: logical_AND_expression  */
#line 69 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1416 "y.tab.c"
    break;

  case 17: /* Expression: logical_OR_expression  */
#line 70 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1422 "y.tab.c"
    break;

  case 18: /* Expression: conditional_expression  */
#line 71 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1428 "y.tab.c"
    break;

  case 19: /* Expression: assignment_expression  */
#line 72 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1434 "y.tab.c"
    break;

  case 20: /* Expression: expression  */
#line 73 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1440 "y.tab.c"
    break;

  case 21: /* Expression: constant_expression  */
#line 74 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("Expression",arr,1);}
#line 1446 "y.tab.c"
    break;

  case 22: /* primary_expression: IDENTIFIER  */
#line 77 "expr.y"
                                                                            {(yyval.node)=create_leaf_node("primary_expression",-1,-1,(yyvsp[0].sval));}
#line 1452 "y.tab.c"
    break;

  case 23: /* primary_expression: FLO_CONSTANT  */
#line 78 "expr.y"
                                                                            {(yyval.node)=create_leaf_node("primary_expression",-1,(yyvsp[0].fval),NULL);}
#line 1458 "y.tab.c"
    break;

  case 24: /* primary_expression: INT_CONSTANT  */
#line 79 "expr.y"
                                                                            {(yyval.node)=create_leaf_node("primary_expression",(yyvsp[0].ival),-1,NULL);}
#line 1464 "y.tab.c"
    break;

  case 25: /* primary_expression: STRING_LITERAL  */
#line 80 "expr.y"
                                                                            {(yyval.node)=create_leaf_node("primary_expression",-1,-1,(yyvsp[0].sval));}
#line 1470 "y.tab.c"
    break;

  case 26: /* primary_expression: '(' expression ')'  */
#line 81 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("primary_expression",arr,3);}
#line 1476 "y.tab.c"
    break;

  case 27: /* postfix_expression: primary_expression  */
#line 84 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("postfix_expression",arr,1);}
#line 1482 "y.tab.c"
    break;

  case 28: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 85 "expr.y"
                                                                            {tree_node* arr[]= {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("postfix_expression",arr,4);}
#line 1488 "y.tab.c"
    break;

  case 29: /* postfix_expression: postfix_expression '(' ')'  */
#line 86 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("(",1,-1,"("),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1494 "y.tab.c"
    break;

  case 30: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 87 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("postfix_expression",arr,4);}
#line 1500 "y.tab.c"
    break;

  case 31: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 88 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1506 "y.tab.c"
    break;

  case 32: /* postfix_expression: postfix_expression '-' '>' IDENTIFIER  */
#line 89 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("->",1,-1,"->"),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1512 "y.tab.c"
    break;

  case 33: /* postfix_expression: postfix_expression PLUS PLUS  */
#line 90 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("PLUS",-1,-1,"+"),create_leaf_node("PLUS",-1,-1,"+")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1518 "y.tab.c"
    break;

  case 34: /* postfix_expression: postfix_expression MINUS MINUS  */
#line 91 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("MINUS",-1,-1,"-"),create_leaf_node("MINUS",-1,-1,"-")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1524 "y.tab.c"
    break;

  case 35: /* argument_expression_list: assignment_expression  */
#line 96 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("argument_expression_list",arr,1);}
#line 1530 "y.tab.c"
    break;

  case 36: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 97 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("argument_expression_list",arr,3);}
#line 1536 "y.tab.c"
    break;

  case 37: /* unary_expression: postfix_expression  */
#line 101 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,1);}
#line 1542 "y.tab.c"
    break;

  case 38: /* unary_expression: PLUS PLUS unary_expression  */
#line 102 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("PLUS",-1,-1,"+"),create_leaf_node("PLUS",-1,-1,"+"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,3);}
#line 1548 "y.tab.c"
    break;

  case 39: /* unary_expression: MINUS MINUS unary_expression  */
#line 103 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("MINUS",-1,-1,"-"),create_leaf_node("MINUS",-1,-1,"-"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,3);}
#line 1554 "y.tab.c"
    break;

  case 40: /* unary_expression: unary_operator cast_expression  */
#line 104 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,2);}
#line 1560 "y.tab.c"
    break;

  case 41: /* unary_expression: SIZEOF unary_expression  */
#line 105 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,2);}
#line 1566 "y.tab.c"
    break;

  case 42: /* unary_operator: PLUS  */
#line 109 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("+",-1,-1,"+")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1572 "y.tab.c"
    break;

  case 43: /* unary_operator: MINUS  */
#line 110 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("-",-1,-1,"-")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1578 "y.tab.c"
    break;

  case 44: /* unary_operator: NOT  */
#line 111 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("!",-1,-1,"!")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1584 "y.tab.c"
    break;

  case 45: /* unary_operator: TILDA  */
#line 112 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("~",-1,-1,"~")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1590 "y.tab.c"
    break;

  case 46: /* unary_operator: AND  */
#line 113 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("&",-1,-1,"&")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1596 "y.tab.c"
    break;

  case 47: /* unary_operator: MULTIPLY  */
#line 114 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("*",-1,-1,"*")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1602 "y.tab.c"
    break;

  case 48: /* cast_expression: unary_expression  */
#line 117 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("cast_expression",arr,1);}
#line 1608 "y.tab.c"
    break;

  case 49: /* multiplicative_expression: cast_expression  */
#line 121 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,1);}
#line 1614 "y.tab.c"
    break;

  case 50: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 122 "expr.y"
                                                                       {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1620 "y.tab.c"
    break;

  case 51: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 123 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("/",-1,-1,"/"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1626 "y.tab.c"
    break;

  case 52: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 124 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("%",-1,-1,"%"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1632 "y.tab.c"
    break;

  case 53: /* additive_expression: multiplicative_expression  */
#line 127 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,1);}
#line 1638 "y.tab.c"
    break;

  case 54: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 128 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("+",-1,-1,"+"),(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,3);}
#line 1644 "y.tab.c"
    break;

  case 55: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 129 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("-",-1,-1,"-"),(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,3);}
#line 1650 "y.tab.c"
    break;

  case 56: /* shift_expression: additive_expression  */
#line 132 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,1);}
#line 1656 "y.tab.c"
    break;

  case 57: /* shift_expression: shift_expression '<' '<' additive_expression  */
#line 133 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("<<",-1,-1,"<<"),(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,3);}
#line 1662 "y.tab.c"
    break;

  case 58: /* shift_expression: shift_expression '>' '>' additive_expression  */
#line 134 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(">>",-1,-1,">>"),(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,3);}
#line 1668 "y.tab.c"
    break;

  case 59: /* relational_expression: shift_expression  */
#line 137 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,1);}
#line 1674 "y.tab.c"
    break;

  case 60: /* relational_expression: relational_expression '<' shift_expression  */
#line 138 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("<",-1,-1,"<"),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 1680 "y.tab.c"
    break;

  case 61: /* relational_expression: relational_expression '>' shift_expression  */
#line 139 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(">",-1,-1,">"),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 1686 "y.tab.c"
    break;

  case 62: /* relational_expression: relational_expression '<' '=' shift_expression  */
#line 140 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("<=",-1,-1,"<="),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 1692 "y.tab.c"
    break;

  case 63: /* relational_expression: relational_expression '>' '=' shift_expression  */
#line 141 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(">=",-1,-1,">="),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 1698 "y.tab.c"
    break;

  case 64: /* equality_expression: relational_expression  */
#line 144 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,1);}
#line 1704 "y.tab.c"
    break;

  case 65: /* equality_expression: equality_expression '=' '=' relational_expression  */
#line 145 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("==",-1,-1,"=="),(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,3);}
#line 1710 "y.tab.c"
    break;

  case 66: /* equality_expression: equality_expression '!' '=' relational_expression  */
#line 146 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("!=",-1,-1,"!="),(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,3);}
#line 1716 "y.tab.c"
    break;

  case 67: /* AND_expression: equality_expression  */
#line 148 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("AND_expression",arr,1);}
#line 1722 "y.tab.c"
    break;

  case 68: /* AND_expression: AND_expression '&' equality_expression  */
#line 149 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("&",-1,-1,"&"),(yyvsp[0].node)};(yyval.node)=create_int_node("AND_expression",arr,3);}
#line 1728 "y.tab.c"
    break;

  case 69: /* exclusive_OR_expression: AND_expression  */
#line 152 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("exclusive_OR_expression",arr,1);}
#line 1734 "y.tab.c"
    break;

  case 70: /* exclusive_OR_expression: exclusive_OR_expression '^' AND_expression  */
#line 153 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("^",-1,-1,"^"),(yyvsp[0].node)};(yyval.node)=create_int_node("exclusive_OR_expression",arr,3);}
#line 1740 "y.tab.c"
    break;

  case 71: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 156 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("inclusive_OR_expression",arr,1);}
#line 1746 "y.tab.c"
    break;

  case 72: /* inclusive_OR_expression: inclusive_OR_expression '|' exclusive_OR_expression  */
#line 157 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("|",-1,-1,"|"),(yyvsp[0].node)};(yyval.node)=create_int_node("inclusive_OR_expression",arr,3);}
#line 1752 "y.tab.c"
    break;

  case 73: /* logical_AND_expression: inclusive_OR_expression  */
#line 160 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("logical_AND_expression",arr,1);}
#line 1758 "y.tab.c"
    break;

  case 74: /* logical_AND_expression: logical_AND_expression '&' '&' inclusive_OR_expression  */
#line 161 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("&&",-1,-1,"&&"),(yyvsp[0].node)};(yyval.node)=create_int_node("logical_AND_expression",arr,3);}
#line 1764 "y.tab.c"
    break;

  case 75: /* logical_OR_expression: logical_AND_expression  */
#line 164 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("logical_OR_expression",arr,1);}
#line 1770 "y.tab.c"
    break;

  case 76: /* logical_OR_expression: logical_OR_expression '|' '|' logical_AND_expression  */
#line 165 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("||",-1,-1,"||"),(yyvsp[0].node)};(yyval.node)=create_int_node("logical_OR_expression",arr,3);}
#line 1776 "y.tab.c"
    break;

  case 77: /* conditional_expression: logical_OR_expression  */
#line 168 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("conditional_expression",arr,1);}
#line 1782 "y.tab.c"
    break;

  case 78: /* conditional_expression: logical_OR_expression '?' expression ':' conditional_expression  */
#line 169 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("?",-1,-1,"?"),(yyvsp[-2].node),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("conditional_expression",arr,5);}
#line 1788 "y.tab.c"
    break;

  case 79: /* assignment_expression: conditional_expression  */
#line 172 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("assignment_expression",arr,1);}
#line 1794 "y.tab.c"
    break;

  case 80: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 173 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("assignment_expression",arr,3);}
#line 1800 "y.tab.c"
    break;

  case 81: /* assignment_operator: '='  */
#line 176 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("=",-1,-1,"=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1806 "y.tab.c"
    break;

  case 82: /* assignment_operator: '*' '='  */
#line 177 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("*=",-1,-1,"*=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1812 "y.tab.c"
    break;

  case 83: /* assignment_operator: '/' '='  */
#line 178 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("/=",-1,-1,"/=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1818 "y.tab.c"
    break;

  case 84: /* assignment_operator: '%' '='  */
#line 179 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("%=",-1,-1,"%=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1824 "y.tab.c"
    break;

  case 85: /* assignment_operator: '+' '='  */
#line 180 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("+=",-1,-1,"+=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1830 "y.tab.c"
    break;

  case 86: /* assignment_operator: '-' '='  */
#line 181 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("-=",-1,-1,"-=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1836 "y.tab.c"
    break;

  case 87: /* assignment_operator: '<' '<' '='  */
#line 182 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("<<=",-1,-1,"<<=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1842 "y.tab.c"
    break;

  case 88: /* assignment_operator: '>' '>' '='  */
#line 183 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node(">>=",-1,-1,">>=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1848 "y.tab.c"
    break;

  case 89: /* assignment_operator: '&' '='  */
#line 184 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("&=",-1,-1,"&=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1854 "y.tab.c"
    break;

  case 90: /* assignment_operator: '^' '='  */
#line 185 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("^=",-1,-1,"^=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1860 "y.tab.c"
    break;

  case 91: /* assignment_operator: '|' '='  */
#line 186 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("|=",-1,-1,"|=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 1866 "y.tab.c"
    break;

  case 92: /* expression: assignment_expression  */
#line 189 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("expression",arr,1);}
#line 1872 "y.tab.c"
    break;

  case 93: /* expression: expression ',' assignment_expression  */
#line 190 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("expression",arr,3);}
#line 1878 "y.tab.c"
    break;

  case 94: /* constant_expression: conditional_expression  */
#line 192 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("constant_expression",arr,1);}
#line 1884 "y.tab.c"
    break;


#line 1888 "y.tab.c"

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

#line 194 "expr.y"



// Error handling function
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
