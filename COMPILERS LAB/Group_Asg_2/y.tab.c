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

#line 250 "y.tab.c"

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
  YYSYMBOL_EXTERN = 14,                    /* EXTERN  */
  YYSYMBOL_STATIC = 15,                    /* STATIC  */
  YYSYMBOL_AUTO = 16,                      /* AUTO  */
  YYSYMBOL_REGISTER = 17,                  /* REGISTER  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_CHAR = 19,                      /* CHAR  */
  YYSYMBOL_SHORT = 20,                     /* SHORT  */
  YYSYMBOL_INT = 21,                       /* INT  */
  YYSYMBOL_LONG = 22,                      /* LONG  */
  YYSYMBOL_FLOAT = 23,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 24,                    /* DOUBLE  */
  YYSYMBOL_SIGNED = 25,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 26,                  /* UNSIGNED  */
  YYSYMBOL_BOOL = 27,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 28,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 29,                 /* IMAGINARY  */
  YYSYMBOL_CONST = 30,                     /* CONST  */
  YYSYMBOL_RESTRICT = 31,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 32,                  /* VOLATILE  */
  YYSYMBOL_INLINE = 33,                    /* INLINE  */
  YYSYMBOL_ELLIPSIS = 34,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 35,                      /* CASE  */
  YYSYMBOL_DEFAULT = 36,                   /* DEFAULT  */
  YYSYMBOL_IF = 37,                        /* IF  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_SWITCH = 39,                    /* SWITCH  */
  YYSYMBOL_WHILE = 40,                     /* WHILE  */
  YYSYMBOL_DO = 41,                        /* DO  */
  YYSYMBOL_FOR = 42,                       /* FOR  */
  YYSYMBOL_GOTO = 43,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 44,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 45,                     /* BREAK  */
  YYSYMBOL_RETURN = 46,                    /* RETURN  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* '.'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '>'  */
  YYSYMBOL_54_ = 54,                       /* '{'  */
  YYSYMBOL_55_ = 55,                       /* '}'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_57_ = 57,                       /* '*'  */
  YYSYMBOL_58_ = 58,                       /* '/'  */
  YYSYMBOL_59_ = 59,                       /* '%'  */
  YYSYMBOL_60_ = 60,                       /* '+'  */
  YYSYMBOL_61_ = 61,                       /* '<'  */
  YYSYMBOL_62_ = 62,                       /* '='  */
  YYSYMBOL_63_ = 63,                       /* '!'  */
  YYSYMBOL_64_ = 64,                       /* '&'  */
  YYSYMBOL_65_ = 65,                       /* '^'  */
  YYSYMBOL_66_ = 66,                       /* '|'  */
  YYSYMBOL_67_ = 67,                       /* '?'  */
  YYSYMBOL_68_ = 68,                       /* ':'  */
  YYSYMBOL_69_ = 69,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_primary_expression = 71,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 72,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 73,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 74,          /* unary_expression  */
  YYSYMBOL_unary_operator = 75,            /* unary_operator  */
  YYSYMBOL_cast_expression = 76,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 77, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 78,       /* additive_expression  */
  YYSYMBOL_shift_expression = 79,          /* shift_expression  */
  YYSYMBOL_relational_expression = 80,     /* relational_expression  */
  YYSYMBOL_equality_expression = 81,       /* equality_expression  */
  YYSYMBOL_AND_expression = 82,            /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 83,   /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 84,   /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 85,    /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 86,     /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 87,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 88,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 89,       /* assignment_operator  */
  YYSYMBOL_expression = 90,                /* expression  */
  YYSYMBOL_constant_expression = 91,       /* constant_expression  */
  YYSYMBOL_declaration = 92,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 93,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 94,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 95,           /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 96,   /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 97,            /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 98,  /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 99,            /* type_qualifier  */
  YYSYMBOL_function_specifier = 100,       /* function_specifier  */
  YYSYMBOL_declarator = 101,               /* declarator  */
  YYSYMBOL_direct_declarator = 102,        /* direct_declarator  */
  YYSYMBOL_pointer = 103,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 104,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 105,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 106,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 107,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 108,          /* identifier_list  */
  YYSYMBOL_type_name = 109,                /* type_name  */
  YYSYMBOL_initializer = 110,              /* initializer  */
  YYSYMBOL_initializer_list = 111,         /* initializer_list  */
  YYSYMBOL_designation = 112,              /* designation  */
  YYSYMBOL_designator_list = 113,          /* designator_list  */
  YYSYMBOL_designator = 114,               /* designator  */
  YYSYMBOL_statement = 115,                /* statement  */
  YYSYMBOL_labeled_statement = 116,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 117,       /* compound_statement  */
  YYSYMBOL_block_item_list = 118,          /* block_item_list  */
  YYSYMBOL_block_item = 119,               /* block_item  */
  YYSYMBOL_expression_statement = 120,     /* expression_statement  */
  YYSYMBOL_selection_statement = 121,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 122,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 123,           /* jump_statement  */
  YYSYMBOL_translation_unit = 124,         /* translation_unit  */
  YYSYMBOL_external_declaration = 125,     /* external_declaration  */
  YYSYMBOL_function_definition = 126,      /* function_definition  */
  YYSYMBOL_declaration_list = 127          /* declaration_list  */
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
#define YYLAST   1154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
       2,     2,     2,    63,     2,     2,     2,    59,    64,     2,
      47,    48,    57,    60,    56,    52,    51,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    69,
      61,    62,    53,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,    66,    55,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    57,    58,    59,    60,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    75,    76,    80,
      81,    82,    83,    84,    85,    88,    89,    90,    91,    92,
      93,    96,    97,   100,   101,   102,   103,   106,   107,   108,
     111,   112,   113,   116,   117,   118,   119,   120,   123,   124,
     125,   127,   128,   131,   132,   135,   136,   139,   140,   143,
     144,   147,   148,   151,   152,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   168,   169,   171,   176,
     177,   180,   181,   182,   183,   184,   185,   186,   187,   190,
     191,   194,   195,   198,   199,   200,   201,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   218,
     219,   220,   221,   224,   225,   226,   229,   232,   233,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   252,   253,   254,   255,   258,   259,   262,
     263,   266,   267,   270,   271,   274,   275,   278,   281,   282,
     283,   286,   287,   288,   289,   292,   295,   296,   299,   300,
     305,   306,   307,   308,   309,   310,   313,   314,   315,   318,
     319,   322,   323,   326,   327,   330,   331,   334,   335,   336,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   353,   354,   355,   356,   357,   363,   364,   367,
     368,   371,   372,   375,   376
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
  "MULTIPLY", "AND", "TILDA", "NOT", "SIZEOF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "VOID", "CHAR", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE",
  "SIGNED", "UNSIGNED", "BOOL", "COMPLEX", "IMAGINARY", "CONST",
  "RESTRICT", "VOLATILE", "INLINE", "ELLIPSIS", "CASE", "DEFAULT", "IF",
  "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "'('", "')'", "'['", "']'", "'.'", "'-'", "'>'", "'{'", "'}'",
  "','", "'*'", "'/'", "'%'", "'+'", "'<'", "'='", "'!'", "'&'", "'^'",
  "'|'", "'?'", "':'", "';'", "$accept", "primary_expression",
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
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-262)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1106,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,     4,  1106,  1106,  1106,  1106,  1065,  -262,  -262,
    -262,    19,     6,  -262,   -10,  -262,   763,   136,    11,  -262,
    -262,  -262,  -262,  -262,  -262,   -28,  -262,  -262,     6,    19,
    -262,   305,   711,  -262,     4,  -262,  1024,   812,   562,   136,
    -262,  -262,  -262,  -262,     9,    61,  -262,  -262,  -262,    91,
     143,  -262,  -262,  -262,  -262,   960,   975,    73,   120,   144,
     160,   470,   171,   168,   113,   150,   359,   915,  -262,  -262,
    -262,    62,   135,   975,  -262,    -4,   -33,    81,   104,   -39,
     163,   159,   162,   165,    35,  -262,  -262,    -7,  -262,  -262,
    -262,  -262,   372,  -262,  -262,  -262,  -262,  -262,  -262,   700,
    -262,  -262,  -262,  -262,  -262,  -262,    19,   184,   177,  -262,
     102,   945,  -262,   185,   186,   617,   470,   990,   990,   915,
    -262,  -262,  -262,   166,   470,   975,   975,   975,   197,   439,
     169,  -262,  -262,  -262,    16,   112,  1122,  -262,  1122,   191,
     233,   235,   799,   975,   238,   192,   187,   194,   189,   190,
     193,   196,   195,  -262,   198,   202,   203,   975,  -262,   975,
     975,   975,   975,   975,   200,   205,   537,   551,   206,   207,
     975,   975,   975,   208,   182,   975,   975,  -262,  -262,  -262,
     975,   264,  -262,     1,   711,    97,  -262,  -262,  -262,  1085,
    -262,   268,   226,   945,  -262,  -262,   975,  -262,   228,   231,
    -262,   915,  -262,  -262,   234,   470,  -262,   114,   118,   121,
     237,   484,    24,   975,  -262,  -262,  -262,  -262,  -262,   722,
    -262,  -262,  -262,   124,  -262,    89,  -262,   282,  -262,   225,
    -262,  -262,  -262,  -262,   227,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,    -4,    -4,   975,   975,   975,    81,   975,    81,
     975,   975,   -39,   163,   159,   975,   975,    47,  -262,   241,
    -262,  -262,   630,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
     242,   244,  -262,  -262,   240,   243,  -262,   470,   470,   470,
     975,   470,   845,   -22,   858,    30,   700,  -262,  -262,   975,
    -262,  -262,  -262,  -262,   -33,   -33,    81,    81,   104,   104,
     162,   165,   975,  -262,  -262,  -262,   711,  -262,  -262,   243,
     257,  -262,  -262,   128,  -262,   470,   130,   470,   975,   470,
     -17,   869,   100,  -262,  -262,  -262,   470,   229,  -262,   470,
    -262,   133,  -262,   470,   975,   470,   161,  -262,   647,  -262,
    -262,  -262,   470,  -262,   164,  -262,   470,  -262,  -262,   470,
    -262,  -262
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
     120,   138,   136,    90,    92,     2,     3,     4,     5,    25,
      26,    30,    29,    28,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,   175,
       7,    19,    31,     0,    33,    37,    40,    43,    48,    51,
      53,    55,    57,    59,    61,    63,    76,     0,   173,   174,
     160,   161,     0,   171,   162,   163,   164,   165,     2,     0,
     148,    91,   204,   202,   145,   132,   144,     0,   139,   141,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
      23,    31,    78,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,   195,     0,     0,   109,   147,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   170,   172,
       0,     0,   151,     0,     0,     0,   156,   143,   130,     0,
     131,     0,     0,     0,   128,   123,     0,   122,     0,     0,
     166,     0,    20,    21,     0,     0,   168,     0,     0,     0,
       0,     0,     0,     0,   192,   196,     6,   110,   112,     0,
      13,    14,     9,     0,    17,     0,    11,     0,    70,     0,
      66,    67,    68,    69,     0,    73,    74,    75,    64,    34,
      35,    36,    39,    38,     0,     0,     0,    45,     0,    44,
       0,     0,    52,    54,    56,     0,     0,     0,    77,     0,
     159,   149,     0,   152,   155,   157,   140,   142,   146,   126,
       0,     0,   129,   124,     0,    24,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    10,     0,
       8,    12,    72,    71,    42,    41,    47,    46,    49,    50,
      58,    60,     0,   158,   150,   153,     0,   125,   127,     0,
     177,   179,   180,     0,   191,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    62,   154,     0,     0,   182,     0,
     190,     0,   183,     0,     0,     0,     0,    15,     0,   178,
     181,   187,     0,   184,     0,   188,     0,    16,   186,     0,
     189,   185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,  -262,  -262,  -262,   -60,  -262,   -85,   -65,   -62,  -176,
     -57,   109,   110,   108,    27,    28,  -262,   -72,   -52,  -262,
     -58,   103,    -6,    17,  -262,   256,  -262,   -74,   -20,   -23,
    -262,   -19,   301,     0,   -56,  -262,  -262,   134,  -262,  -121,
     -51,    48,  -261,  -262,   148,   -76,  -262,    68,  -262,   245,
    -262,  -262,  -262,  -262,  -262,   328,  -262,  -262
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    90,    91,   243,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   177,
     107,   143,    21,    54,    34,    35,    23,    24,   157,    25,
      26,    64,    37,    38,    48,   127,   128,   129,   130,   159,
     202,   203,   204,   205,   206,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    27,    28,    29,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,   121,   135,    36,   142,   148,   134,    30,   178,    46,
     267,   269,    45,   156,    30,   140,   141,    22,   224,   182,
      60,   326,    30,   188,   189,    61,   337,   183,   154,   155,
      53,   353,    47,   141,   196,    46,    17,    18,    19,   196,
      39,    40,    41,    42,    22,   108,    49,   338,    62,   196,
     122,    31,   354,   179,   180,   181,   281,   282,    31,    50,
     220,    32,   197,    32,   158,   156,    31,   120,   226,   160,
     161,    52,   196,    33,   126,   213,    32,   222,   223,   212,
     196,   155,   156,   219,   156,   235,   196,   227,   228,   229,
     316,   232,   317,   304,   259,   260,   261,   326,   137,   341,
     294,   194,   195,   196,    55,   245,   108,   207,    46,   162,
     244,   163,    61,   164,   165,   322,   158,   262,   263,   141,
     141,   141,   141,   141,   123,   258,   141,   141,   142,   136,
     141,   141,   141,   158,   184,   158,   237,   277,   238,   310,
     141,   144,   185,   233,   278,   196,   200,   156,   201,   296,
     210,   138,   120,   283,   307,   357,   358,   186,   211,   284,
     236,   290,   297,   155,   291,   187,   298,   145,   196,   299,
     196,   150,   308,   303,   196,   305,   347,   196,   349,   141,
     309,   362,   151,    57,   196,    58,   196,   166,   167,   196,
      61,   146,   168,   169,   170,   171,   172,   173,   158,   174,
     175,   176,   314,   315,   141,   141,   141,   147,   141,   366,
     141,   141,   369,   318,   319,   141,   141,   196,   149,   152,
     196,   330,   331,   332,   191,   334,   126,   190,   192,   193,
     120,   325,   208,   209,   225,   214,   215,   230,   234,   239,
     240,   246,   333,   241,   336,   247,   340,   249,   276,   248,
     344,   250,   251,   264,   120,   252,   254,   343,   253,   348,
     255,   350,   141,   352,   256,   257,   265,   280,   270,   271,
     359,   288,   275,   361,   120,   345,   289,   363,   292,   365,
     351,   293,   295,   356,   300,   311,   368,   312,   329,   313,
     370,   323,   327,   371,   328,   346,   364,   306,   360,   272,
     274,   273,   320,   279,   321,    63,   120,   325,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    59,
      76,    77,    78,   287,    79,    80,    81,    82,    83,    84,
      85,    86,    87,   285,   342,    44,     0,   199,     0,    51,
      88,     0,   118,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,    89,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    87,    76,    77,    78,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,    51,   198,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,   118,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,    87,   118,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,   231,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    87,   301,     0,     0,     0,     0,     0,     0,    89,
     118,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,   302,   118,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   118,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     0,   131,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    17,    18,    19,     0,     0,     0,    87,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,   132,   268,     0,     0,     0,     0,     0,   133,
     118,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,   216,   118,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,     0,    17,    18,    19,
     118,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,    87,     0,     0,   217,     0,     0,
       0,     0,     0,     0,   218,     0,     0,    87,     0,   200,
       0,   201,     0,     0,   119,   324,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,   200,     0,   201,     0,
       0,   119,   367,   118,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   118,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,   118,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,   200,
       0,   201,     0,     0,   119,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,   306,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,   118,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,   124,     0,    51,     0,     0,
       0,     0,     0,     0,     0,    52,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    87,   242,   118,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
     125,   118,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   118,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,   355,   118,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   118,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,    87,   118,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,    17,    18,    19,   118,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,    87,   118,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,     0,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   221,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   286,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
      52,    52,    58,    22,    76,    81,    58,     3,    93,    32,
     186,   187,    31,    87,     3,    75,    76,     0,   139,    52,
      48,   282,     3,    62,    63,    48,    48,    60,    86,    87,
      36,    48,    32,    93,    56,    58,    30,    31,    32,    56,
      23,    24,    25,    26,    27,    51,    56,    69,    48,    56,
      56,    47,    69,    57,    58,    59,    55,    56,    47,    69,
     136,    57,    69,    57,    87,   139,    47,   119,   144,     7,
       8,    62,    56,    69,    57,   131,    57,   137,   138,   131,
      56,   139,   156,   135,   158,    69,    56,   145,   146,   147,
     266,   149,   268,    69,   179,   180,   181,   358,     7,    69,
     221,    66,    67,    56,    36,   163,   112,   126,   131,    47,
     162,    49,   135,    51,    52,    68,   139,   182,   183,   179,
     180,   181,   182,   183,    56,   177,   186,   187,   200,    68,
     190,   191,   192,   156,    53,   158,   156,   195,   158,    50,
     200,    68,    61,   149,   196,    56,    49,   221,    51,   225,
      48,     8,   204,   204,   239,    55,    56,    53,    56,    62,
      48,   213,    48,   221,   216,    61,    48,    47,    56,    48,
      56,     3,    48,   231,    56,   233,    48,    56,    48,   239,
      56,    48,    69,    47,    56,    49,    56,    52,    53,    56,
     213,    47,    57,    58,    59,    60,    61,    62,   221,    64,
      65,    66,   264,   265,   264,   265,   266,    47,   268,    48,
     270,   271,    48,   270,   271,   275,   276,    56,    47,    69,
      56,   297,   298,   299,    65,   301,   209,    64,    66,    64,
     282,   282,    48,    56,    68,    50,    50,    40,    69,    48,
       7,     3,   300,     8,   302,    53,   304,    53,    66,    62,
     322,    62,    62,    53,   306,    62,    61,   309,    62,   335,
      62,   337,   322,   339,    62,    62,    61,     3,    62,    62,
     346,     3,    64,   349,   326,   326,    50,   353,    50,   355,
     338,    50,    48,   341,    47,     3,   362,    62,    48,    62,
     366,    50,    50,   369,    50,    38,   354,    54,    69,   190,
     192,   191,   275,   200,   276,    49,   358,   358,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    38,
      35,    36,    37,   209,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   205,   306,    27,    -1,   112,    -1,    54,
      55,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    69,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    47,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    69,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    69,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    69,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    47,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    50,    62,    -1,    -1,    -1,    -1,    -1,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    30,    31,    32,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    47,    -1,    49,
      -1,    51,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    51,    -1,
      -1,    54,    55,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      -1,    51,    -1,    -1,    54,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,     3,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    47,    48,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      48,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    47,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    30,    31,    32,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    47,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    92,    93,    96,    97,    99,   100,   124,   125,   126,
       3,    47,    57,    69,    94,    95,   101,   102,   103,    93,
      93,    93,    93,     0,   125,   101,    99,   103,   104,    56,
      69,    54,    62,    92,    93,   117,   127,    47,    49,   102,
      48,    99,   103,    95,   101,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    35,    36,    37,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    55,    69,
      71,    72,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    90,    92,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     3,    54,
      88,   110,    92,   117,     3,    48,    93,   105,   106,   107,
     108,    15,    50,    57,    88,   104,    68,     7,     8,    47,
      74,    74,    87,    91,    68,    47,    47,    47,   115,    47,
       3,    69,    69,    69,    90,    90,    97,    98,    99,   109,
       7,     8,    47,    49,    51,    52,    52,    53,    57,    58,
      59,    60,    61,    62,    64,    65,    66,    89,    76,    57,
      58,    59,    52,    60,    53,    61,    53,    61,    62,    63,
      64,    65,    66,    64,    66,    67,    56,    69,    55,   119,
      49,    51,   110,   111,   112,   113,   114,   101,    48,    56,
      48,    56,    88,   104,    50,    50,    15,    50,    57,    88,
     115,    47,    74,    74,   109,    68,   115,    90,    90,    90,
      40,    69,    90,    92,    69,    69,    48,    98,    98,    48,
       7,     8,    48,    73,    88,    90,     3,    53,    62,    53,
      62,    62,    62,    62,    61,    62,    62,    62,    88,    76,
      76,    76,    77,    77,    53,    61,    62,    79,    62,    79,
      62,    62,    81,    82,    83,    64,    66,    90,    88,    91,
       3,    55,    56,   110,    62,   114,    34,   107,     3,    50,
      88,    88,    50,    50,   109,    48,   115,    48,    48,    48,
      47,    48,    69,    90,    69,    90,    54,    76,    48,    56,
      50,     3,    62,    62,    78,    78,    79,    79,    80,    80,
      84,    85,    68,    50,    55,   110,   112,    50,    50,    48,
     115,   115,   115,    90,   115,    48,    90,    48,    69,    48,
      90,    69,   111,    88,    87,   110,    38,    48,   115,    48,
     115,    90,   115,    48,    69,    48,    90,    55,    56,   115,
      69,   115,    48,   115,    90,   115,    48,    55,   115,    48,
     115,   115
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    71,    71,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    76,    77,    77,    77,    77,    78,    78,    78,
      79,    79,    79,    80,    80,    80,    80,    80,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    91,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    99,    99,    99,   100,   101,   101,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   110,   110,
     110,   111,   111,   111,   111,   112,   113,   113,   114,   114,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   117,
     117,   118,   118,   119,   119,   120,   120,   121,   121,   121,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127
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
#line 56 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1785 "y.tab.c"
    break;

  case 3: /* primary_expression: FLO_CONSTANT  */
#line 57 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("primary_expression",-1,(yyvsp[0].fval),NULL)};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1791 "y.tab.c"
    break;

  case 4: /* primary_expression: INT_CONSTANT  */
#line 58 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("primary_expression",(yyvsp[0].ival),-1,NULL)};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1797 "y.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 59 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("STRING_LITERAL",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("primary_expression",arr,1);}
#line 1803 "y.tab.c"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 60 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("primary_expression",arr,3);}
#line 1809 "y.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 63 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("postfix_expression",arr,1);}
#line 1815 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 64 "expr.y"
                                                                            {tree_node* arr[]= {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("postfix_expression",arr,4);}
#line 1821 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' ')'  */
#line 65 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("(",1,-1,"("),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1827 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 66 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("postfix_expression",arr,4);}
#line 1833 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 67 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1839 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression '-' '>' IDENTIFIER  */
#line 68 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("->",1,-1,"->"),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1845 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression PLUS PLUS  */
#line 69 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("PLUS",-1,-1,"+"),create_leaf_node("PLUS",-1,-1,"+")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1851 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression MINUS MINUS  */
#line 70 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("MINUS",-1,-1,"-"),create_leaf_node("MINUS",-1,-1,"-")};(yyval.node)=create_int_node("postfix_expression",arr,3);}
#line 1857 "y.tab.c"
    break;

  case 15: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 71 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("postfix_expression",arr,6);}
#line 1863 "y.tab.c"
    break;

  case 16: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 72 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-5].node),create_leaf_node(")",-1,-1,")"),create_leaf_node("{",-1,-1,"{"),(yyvsp[-2].node),create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("postfix_expression",arr,6);}
#line 1869 "y.tab.c"
    break;

  case 17: /* argument_expression_list: assignment_expression  */
#line 75 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("argument_expression_list",arr,1);}
#line 1875 "y.tab.c"
    break;

  case 18: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 76 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("argument_expression_list",arr,3);}
#line 1881 "y.tab.c"
    break;

  case 19: /* unary_expression: postfix_expression  */
#line 80 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,1);}
#line 1887 "y.tab.c"
    break;

  case 20: /* unary_expression: PLUS PLUS unary_expression  */
#line 81 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("PLUS",-1,-1,"+"),create_leaf_node("PLUS",-1,-1,"+"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,3);}
#line 1893 "y.tab.c"
    break;

  case 21: /* unary_expression: MINUS MINUS unary_expression  */
#line 82 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("MINUS",-1,-1,"-"),create_leaf_node("MINUS",-1,-1,"-"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,3);}
#line 1899 "y.tab.c"
    break;

  case 22: /* unary_expression: unary_operator cast_expression  */
#line 83 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,2);}
#line 1905 "y.tab.c"
    break;

  case 23: /* unary_expression: SIZEOF unary_expression  */
#line 84 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),(yyvsp[0].node)};(yyval.node)=create_int_node("unary_expression",arr,2);}
#line 1911 "y.tab.c"
    break;

  case 24: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 85 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("SIZEOF",-1,-1,"SIZEOF"),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("unary_expression",arr,4);}
#line 1917 "y.tab.c"
    break;

  case 25: /* unary_operator: PLUS  */
#line 88 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("+",-1,-1,"+")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1923 "y.tab.c"
    break;

  case 26: /* unary_operator: MINUS  */
#line 89 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("-",-1,-1,"-")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1929 "y.tab.c"
    break;

  case 27: /* unary_operator: NOT  */
#line 90 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("!",-1,-1,"!")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1935 "y.tab.c"
    break;

  case 28: /* unary_operator: TILDA  */
#line 91 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("~",-1,-1,"~")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1941 "y.tab.c"
    break;

  case 29: /* unary_operator: AND  */
#line 92 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("&",-1,-1,"&")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1947 "y.tab.c"
    break;

  case 30: /* unary_operator: MULTIPLY  */
#line 93 "expr.y"
                                                                            {tree_node* arr[]= {create_leaf_node("*",-1,-1,"*")};(yyval.node)=create_int_node("unary_operator",arr,1);}
#line 1953 "y.tab.c"
    break;

  case 31: /* cast_expression: unary_expression  */
#line 96 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("cast_expression",arr,1);}
#line 1959 "y.tab.c"
    break;

  case 32: /* cast_expression: '(' type_name ')' cast_expression  */
#line 97 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("cast_expression",arr,4);}
#line 1965 "y.tab.c"
    break;

  case 33: /* multiplicative_expression: cast_expression  */
#line 100 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,1);}
#line 1971 "y.tab.c"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 101 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1977 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 102 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("/",-1,-1,"/"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1983 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 103 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("%",-1,-1,"%"),(yyvsp[0].node)};(yyval.node)=create_int_node("multiplicative_expression",arr,3);}
#line 1989 "y.tab.c"
    break;

  case 37: /* additive_expression: multiplicative_expression  */
#line 106 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,1);}
#line 1995 "y.tab.c"
    break;

  case 38: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 107 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("+",-1,-1,"+"),(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,3);}
#line 2001 "y.tab.c"
    break;

  case 39: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 108 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("-",-1,-1,"-"),(yyvsp[0].node)};(yyval.node)=create_int_node("additive_expression",arr,3);}
#line 2007 "y.tab.c"
    break;

  case 40: /* shift_expression: additive_expression  */
#line 111 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,1);}
#line 2013 "y.tab.c"
    break;

  case 41: /* shift_expression: shift_expression '<' '<' additive_expression  */
#line 112 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("<<",-1,-1,"<<"),(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,3);}
#line 2019 "y.tab.c"
    break;

  case 42: /* shift_expression: shift_expression '>' '>' additive_expression  */
#line 113 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(">>",-1,-1,">>"),(yyvsp[0].node)};(yyval.node)=create_int_node("shift_expression",arr,3);}
#line 2025 "y.tab.c"
    break;

  case 43: /* relational_expression: shift_expression  */
#line 116 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,1);}
#line 2031 "y.tab.c"
    break;

  case 44: /* relational_expression: relational_expression '<' shift_expression  */
#line 117 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("<",-1,-1,"<"),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2037 "y.tab.c"
    break;

  case 45: /* relational_expression: relational_expression '>' shift_expression  */
#line 118 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(">",-1,-1,">"),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2043 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression '<' '=' shift_expression  */
#line 119 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("<=",-1,-1,"<="),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2049 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression '>' '=' shift_expression  */
#line 120 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(">=",-1,-1,">="),(yyvsp[0].node)};(yyval.node)=create_int_node("relational_expression",arr,3);}
#line 2055 "y.tab.c"
    break;

  case 48: /* equality_expression: relational_expression  */
#line 123 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,1);}
#line 2061 "y.tab.c"
    break;

  case 49: /* equality_expression: equality_expression '=' '=' relational_expression  */
#line 124 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("==",-1,-1,"=="),(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,3);}
#line 2067 "y.tab.c"
    break;

  case 50: /* equality_expression: equality_expression '!' '=' relational_expression  */
#line 125 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("!=",-1,-1,"!="),(yyvsp[0].node)};(yyval.node)=create_int_node("equality_expression",arr,3);}
#line 2073 "y.tab.c"
    break;

  case 51: /* AND_expression: equality_expression  */
#line 127 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("AND_expression",arr,1);}
#line 2079 "y.tab.c"
    break;

  case 52: /* AND_expression: AND_expression '&' equality_expression  */
#line 128 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("&",-1,-1,"&"),(yyvsp[0].node)};(yyval.node)=create_int_node("AND_expression",arr,3);}
#line 2085 "y.tab.c"
    break;

  case 53: /* exclusive_OR_expression: AND_expression  */
#line 131 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("exclusive_OR_expression",arr,1);}
#line 2091 "y.tab.c"
    break;

  case 54: /* exclusive_OR_expression: exclusive_OR_expression '^' AND_expression  */
#line 132 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("^",-1,-1,"^"),(yyvsp[0].node)};(yyval.node)=create_int_node("exclusive_OR_expression",arr,3);}
#line 2097 "y.tab.c"
    break;

  case 55: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 135 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("inclusive_OR_expression",arr,1);}
#line 2103 "y.tab.c"
    break;

  case 56: /* inclusive_OR_expression: inclusive_OR_expression '|' exclusive_OR_expression  */
#line 136 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("|",-1,-1,"|"),(yyvsp[0].node)};(yyval.node)=create_int_node("inclusive_OR_expression",arr,3);}
#line 2109 "y.tab.c"
    break;

  case 57: /* logical_AND_expression: inclusive_OR_expression  */
#line 139 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("logical_AND_expression",arr,1);}
#line 2115 "y.tab.c"
    break;

  case 58: /* logical_AND_expression: logical_AND_expression '&' '&' inclusive_OR_expression  */
#line 140 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("&&",-1,-1,"&&"),(yyvsp[0].node)};(yyval.node)=create_int_node("logical_AND_expression",arr,3);}
#line 2121 "y.tab.c"
    break;

  case 59: /* logical_OR_expression: logical_AND_expression  */
#line 143 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("logical_OR_expression",arr,1);}
#line 2127 "y.tab.c"
    break;

  case 60: /* logical_OR_expression: logical_OR_expression '|' '|' logical_AND_expression  */
#line 144 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("||",-1,-1,"||"),(yyvsp[0].node)};(yyval.node)=create_int_node("logical_OR_expression",arr,3);}
#line 2133 "y.tab.c"
    break;

  case 61: /* conditional_expression: logical_OR_expression  */
#line 147 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("conditional_expression",arr,1);}
#line 2139 "y.tab.c"
    break;

  case 62: /* conditional_expression: logical_OR_expression '?' expression ':' conditional_expression  */
#line 148 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("?",-1,-1,"?"),(yyvsp[-2].node),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("conditional_expression",arr,5);}
#line 2145 "y.tab.c"
    break;

  case 63: /* assignment_expression: conditional_expression  */
#line 151 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("assignment_expression",arr,1);}
#line 2151 "y.tab.c"
    break;

  case 64: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 152 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("assignment_expression",arr,3);}
#line 2157 "y.tab.c"
    break;

  case 65: /* assignment_operator: '='  */
#line 155 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("=",-1,-1,"=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2163 "y.tab.c"
    break;

  case 66: /* assignment_operator: '*' '='  */
#line 156 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("*=",-1,-1,"*=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2169 "y.tab.c"
    break;

  case 67: /* assignment_operator: '/' '='  */
#line 157 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("/=",-1,-1,"/=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2175 "y.tab.c"
    break;

  case 68: /* assignment_operator: '%' '='  */
#line 158 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("%=",-1,-1,"%=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2181 "y.tab.c"
    break;

  case 69: /* assignment_operator: '+' '='  */
#line 159 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("+=",-1,-1,"+=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2187 "y.tab.c"
    break;

  case 70: /* assignment_operator: '-' '='  */
#line 160 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("-=",-1,-1,"-=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2193 "y.tab.c"
    break;

  case 71: /* assignment_operator: '<' '<' '='  */
#line 161 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("<<=",-1,-1,"<<=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2199 "y.tab.c"
    break;

  case 72: /* assignment_operator: '>' '>' '='  */
#line 162 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node(">>=",-1,-1,">>=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2205 "y.tab.c"
    break;

  case 73: /* assignment_operator: '&' '='  */
#line 163 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("&=",-1,-1,"&=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2211 "y.tab.c"
    break;

  case 74: /* assignment_operator: '^' '='  */
#line 164 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("^=",-1,-1,"^=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2217 "y.tab.c"
    break;

  case 75: /* assignment_operator: '|' '='  */
#line 165 "expr.y"
                                                                            {tree_node* arr[]={create_leaf_node("|=",-1,-1,"|=")};(yyval.node)=create_int_node("assignment_operator",arr,1);}
#line 2223 "y.tab.c"
    break;

  case 76: /* expression: assignment_expression  */
#line 168 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("expression",arr,1);}
#line 2229 "y.tab.c"
    break;

  case 77: /* expression: expression ',' assignment_expression  */
#line 169 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("expression",arr,3);}
#line 2235 "y.tab.c"
    break;

  case 78: /* constant_expression: conditional_expression  */
#line 171 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("constant_expression",arr,1);}
#line 2241 "y.tab.c"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 176 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("declaration",arr,3);}
#line 2247 "y.tab.c"
    break;

  case 80: /* declaration: declaration_specifiers ';'  */
#line 177 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("declaration",arr,2);}
#line 2253 "y.tab.c"
    break;

  case 81: /* declaration_specifiers: storage_class_specifier  */
#line 180 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2259 "y.tab.c"
    break;

  case 82: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 181 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2265 "y.tab.c"
    break;

  case 83: /* declaration_specifiers: type_specifier  */
#line 182 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2271 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 183 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2277 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: type_qualifier  */
#line 184 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2283 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 185 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2289 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: function_specifier  */
#line 186 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,1);}
#line 2295 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 187 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_specifiers",arr,2);}
#line 2301 "y.tab.c"
    break;

  case 89: /* init_declarator_list: init_declarator  */
#line 190 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator_list",arr,1);}
#line 2307 "y.tab.c"
    break;

  case 90: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 191 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator_list",arr,3);}
#line 2313 "y.tab.c"
    break;

  case 91: /* init_declarator: declarator '=' initializer  */
#line 194 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("=",1,-1,"="),(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator",arr,3);}
#line 2319 "y.tab.c"
    break;

  case 92: /* init_declarator: declarator  */
#line 195 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("init_declarator",arr,1);}
#line 2325 "y.tab.c"
    break;

  case 93: /* storage_class_specifier: EXTERN  */
#line 198 "expr.y"
                                                                                        {tree_node* arr[] = {create_leaf_node("EXTERN",-1,-1,"EXTERN")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2331 "y.tab.c"
    break;

  case 94: /* storage_class_specifier: STATIC  */
#line 199 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("STATIC",-1,-1,"STATIC")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2337 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: AUTO  */
#line 200 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("AUTO",-1,-1,"AUTO")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2343 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: REGISTER  */
#line 201 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("REGISTER",-1,-1,"REGISTER")};(yyval.node)=create_int_node("storage_class_specifier",arr,1);}
#line 2349 "y.tab.c"
    break;

  case 97: /* type_specifier: VOID  */
#line 204 "expr.y"
                                                                                 {tree_node* arr[] = {create_leaf_node("VOID",-1,-1,"VOID")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2355 "y.tab.c"
    break;

  case 98: /* type_specifier: CHAR  */
#line 205 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("CHAR",-1,-1,"CHAR")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2361 "y.tab.c"
    break;

  case 99: /* type_specifier: SHORT  */
#line 206 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("SHORT",-1,-1,"SHORT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2367 "y.tab.c"
    break;

  case 100: /* type_specifier: INT  */
#line 207 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("INT",-1,-1,"INT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2373 "y.tab.c"
    break;

  case 101: /* type_specifier: LONG  */
#line 208 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("LONG",-1,-1,"LONG")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2379 "y.tab.c"
    break;

  case 102: /* type_specifier: FLOAT  */
#line 209 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("FLOAT",-1,-1,"FLOAT")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2385 "y.tab.c"
    break;

  case 103: /* type_specifier: DOUBLE  */
#line 210 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("DOUBLE",-1,-1,"DOUBLE")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2391 "y.tab.c"
    break;

  case 104: /* type_specifier: SIGNED  */
#line 211 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("SIGNED",-1,-1,"SIGNED")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2397 "y.tab.c"
    break;

  case 105: /* type_specifier: UNSIGNED  */
#line 212 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("UNSIGNED",-1,-1,"UNSIGNED")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2403 "y.tab.c"
    break;

  case 106: /* type_specifier: BOOL  */
#line 213 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("BOOL",-1,-1,"BOOL")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2409 "y.tab.c"
    break;

  case 107: /* type_specifier: COMPLEX  */
#line 214 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("COMPLEX",-1,-1,"COMPLEX")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2415 "y.tab.c"
    break;

  case 108: /* type_specifier: IMAGINARY  */
#line 215 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IMAGINARY",-1,-1,"IMAGINARY")};(yyval.node)=create_int_node("type_specifier",arr,1);}
#line 2421 "y.tab.c"
    break;

  case 109: /* specifier_qualifier_list: type_specifier  */
#line 218 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,1);}
#line 2427 "y.tab.c"
    break;

  case 110: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 219 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,2);}
#line 2433 "y.tab.c"
    break;

  case 111: /* specifier_qualifier_list: type_qualifier  */
#line 220 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,1);}
#line 2439 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 221 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("specifier_qualifier_list",arr,2);}
#line 2445 "y.tab.c"
    break;

  case 113: /* type_qualifier: CONST  */
#line 224 "expr.y"
                                                                              {tree_node* arr[] = {create_leaf_node("CONST",-1,-1,"CONST")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2451 "y.tab.c"
    break;

  case 114: /* type_qualifier: RESTRICT  */
#line 225 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("RESTRICT",-1,-1,"RESTRICT")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2457 "y.tab.c"
    break;

  case 115: /* type_qualifier: VOLATILE  */
#line 226 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("VOLATILE",-1,-1,"VOLATILE")};(yyval.node)=create_int_node("type_qualifier",arr,1);}
#line 2463 "y.tab.c"
    break;

  case 116: /* function_specifier: INLINE  */
#line 229 "expr.y"
                                                                               {tree_node* arr[] = {create_leaf_node("INLINE",-1,-1,"INLINE")};(yyval.node)=create_int_node("function_specifier",arr,1);}
#line 2469 "y.tab.c"
    break;

  case 117: /* declarator: pointer direct_declarator  */
#line 232 "expr.y"
                                                                             {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declarator",arr,2);}
#line 2475 "y.tab.c"
    break;

  case 118: /* declarator: direct_declarator  */
#line 233 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declarator",arr,1);}
#line 2481 "y.tab.c"
    break;

  case 119: /* direct_declarator: IDENTIFIER  */
#line 236 "expr.y"
                                                                             {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("direct_declarator",arr,1);}
#line 2487 "y.tab.c"
    break;

  case 120: /* direct_declarator: '(' declarator ')'  */
#line 237 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2493 "y.tab.c"
    break;

  case 121: /* direct_declarator: direct_declarator '[' ']'  */
#line 238 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2499 "y.tab.c"
    break;

  case 122: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 239 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2505 "y.tab.c"
    break;

  case 123: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 240 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2511 "y.tab.c"
    break;

  case 124: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 241 "expr.y"
                                                                              {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2517 "y.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 242 "expr.y"
                                                                                     {tree_node* arr[] = {(yyvsp[-5].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-2].node),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,6);}
#line 2523 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator '[' STATIC assignment_expression ']'  */
#line 243 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2529 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 244 "expr.y"
                                                                                     {tree_node* arr[] = {(yyvsp[-5].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-3].node),create_leaf_node("STATIC",-1,-1,"STATIC"),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,6);}
#line 2535 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 245 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("[",-1,-1,"["),create_leaf_node("*",-1,-1,"*"),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2541 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 246 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-4].node),create_leaf_node("[",-1,-1,"["),(yyvsp[-2].node),create_leaf_node("*",-1,-1,"*"),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("direct_declarator",arr,5);}
#line 2547 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 247 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2553 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 248 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node("(",1,-1,"("),(yyvsp[-1].node),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,4);}
#line 2559 "y.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator '(' ')'  */
#line 249 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node("(",1,-1,"("),create_leaf_node(")",-1,-1,")")};(yyval.node)=create_int_node("direct_declarator",arr,3);}
#line 2565 "y.tab.c"
    break;

  case 133: /* pointer: '*'  */
#line 252 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*")};(yyval.node)=create_int_node("pointer",arr,1);}
#line 2571 "y.tab.c"
    break;

  case 134: /* pointer: '*' type_qualifier_list  */
#line 253 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,2);}
#line 2577 "y.tab.c"
    break;

  case 135: /* pointer: '*' pointer  */
#line 254 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,2);}
#line 2583 "y.tab.c"
    break;

  case 136: /* pointer: '*' type_qualifier_list pointer  */
#line 255 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("*",-1,-1,"*"),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("pointer",arr,3);}
#line 2589 "y.tab.c"
    break;

  case 137: /* type_qualifier_list: type_qualifier  */
#line 258 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("type_qualifier_list",arr,1);}
#line 2595 "y.tab.c"
    break;

  case 138: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 259 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("type_qualifier_list",arr,2);}
#line 2601 "y.tab.c"
    break;

  case 139: /* parameter_type_list: parameter_list  */
#line 262 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_type_list",arr,1);}
#line 2607 "y.tab.c"
    break;

  case 140: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 263 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),create_leaf_node("ELLIPSIS",-1,-1,"ELLIPSIS")};(yyval.node)=create_int_node("parameter_type_list",arr,3);}
#line 2613 "y.tab.c"
    break;

  case 141: /* parameter_list: parameter_declaration  */
#line 266 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_list",arr,1);}
#line 2619 "y.tab.c"
    break;

  case 142: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 267 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_list",arr,3);}
#line 2625 "y.tab.c"
    break;

  case 143: /* parameter_declaration: declaration_specifiers declarator  */
#line 270 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_declaration",arr,2);}
#line 2631 "y.tab.c"
    break;

  case 144: /* parameter_declaration: declaration_specifiers  */
#line 271 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("parameter_declaration",arr,1);}
#line 2637 "y.tab.c"
    break;

  case 145: /* identifier_list: IDENTIFIER  */
#line 274 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("identifier_list",arr,1);}
#line 2643 "y.tab.c"
    break;

  case 146: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 275 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("identifier_list",arr,3);}
#line 2649 "y.tab.c"
    break;

  case 147: /* type_name: specifier_qualifier_list  */
#line 278 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("type_name",arr,1);}
#line 2655 "y.tab.c"
    break;

  case 148: /* initializer: assignment_expression  */
#line 281 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("initializer",arr,1);}
#line 2661 "y.tab.c"
    break;

  case 149: /* initializer: '{' initializer_list '}'  */
#line 282 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("initializer",arr,3);}
#line 2667 "y.tab.c"
    break;

  case 150: /* initializer: '{' initializer_list ',' '}'  */
#line 283 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-2].node),create_leaf_node(",",-1,-1,","),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("initializer",arr,4);}
#line 2673 "y.tab.c"
    break;

  case 151: /* initializer_list: initializer  */
#line 286 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,1);}
#line 2679 "y.tab.c"
    break;

  case 152: /* initializer_list: designation initializer  */
#line 287 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,2);}
#line 2685 "y.tab.c"
    break;

  case 153: /* initializer_list: initializer_list ',' initializer  */
#line 288 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-2].node),create_leaf_node(",",1,-1,","),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,3);}
#line 2691 "y.tab.c"
    break;

  case 154: /* initializer_list: initializer_list ',' designation initializer  */
#line 289 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[-3].node),create_leaf_node(",",1,-1,","),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("initializer_list",arr,4);}
#line 2697 "y.tab.c"
    break;

  case 155: /* designation: designator_list '='  */
#line 292 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node("=",1,-1,"=")};(yyval.node)=create_int_node("designation",arr,2);}
#line 2703 "y.tab.c"
    break;

  case 156: /* designator_list: designator  */
#line 295 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("designator_list",arr,1);}
#line 2709 "y.tab.c"
    break;

  case 157: /* designator_list: designator_list designator  */
#line 296 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("designator_list",arr,2);}
#line 2715 "y.tab.c"
    break;

  case 158: /* designator: '[' constant_expression ']'  */
#line 299 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("[",-1,-1,"["),(yyvsp[-1].node),create_leaf_node("]",-1,-1,"]")};(yyval.node)=create_int_node("designator",arr,3);}
#line 2721 "y.tab.c"
    break;

  case 159: /* designator: '.' IDENTIFIER  */
#line 300 "expr.y"
                                                                            {tree_node* arr[] = {create_leaf_node(".",1,-1,"."),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[0].sval))};(yyval.node)=create_int_node("designator",arr,2);}
#line 2727 "y.tab.c"
    break;

  case 160: /* statement: labeled_statement  */
#line 305 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2733 "y.tab.c"
    break;

  case 161: /* statement: compound_statement  */
#line 306 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2739 "y.tab.c"
    break;

  case 162: /* statement: expression_statement  */
#line 307 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2745 "y.tab.c"
    break;

  case 163: /* statement: selection_statement  */
#line 308 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2751 "y.tab.c"
    break;

  case 164: /* statement: iteration_statement  */
#line 309 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2757 "y.tab.c"
    break;

  case 165: /* statement: jump_statement  */
#line 310 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("statement",arr,1);}
#line 2763 "y.tab.c"
    break;

  case 166: /* labeled_statement: IDENTIFIER ':' statement  */
#line 313 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[-2].sval)),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,3);}
#line 2769 "y.tab.c"
    break;

  case 167: /* labeled_statement: CASE constant_expression ':' statement  */
#line 314 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("CASE",-1,-1,"CASE"),(yyvsp[-2].node),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,4);}
#line 2775 "y.tab.c"
    break;

  case 168: /* labeled_statement: DEFAULT ':' statement  */
#line 315 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("DEFAULT",-1,-1,"DEFAULT"),create_leaf_node(":",-1,-1,":"),(yyvsp[0].node)};(yyval.node)=create_int_node("labeled_statement",arr,3);}
#line 2781 "y.tab.c"
    break;

  case 169: /* compound_statement: '{' '}'  */
#line 318 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("compound_statement",arr,2);}
#line 2787 "y.tab.c"
    break;

  case 170: /* compound_statement: '{' block_item_list '}'  */
#line 319 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("{",-1,-1,"{"),(yyvsp[-1].node),create_leaf_node("}",-1,-1,"}")};(yyval.node)=create_int_node("compound_statement",arr,3);}
#line 2793 "y.tab.c"
    break;

  case 171: /* block_item_list: block_item  */
#line 322 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item_list",arr,1);}
#line 2799 "y.tab.c"
    break;

  case 172: /* block_item_list: block_item_list block_item  */
#line 323 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("block_item_list",arr,2);}
#line 2805 "y.tab.c"
    break;

  case 173: /* block_item: declaration  */
#line 326 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item",arr,1);}
#line 2811 "y.tab.c"
    break;

  case 174: /* block_item: statement  */
#line 327 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("block_item",arr,1);}
#line 2817 "y.tab.c"
    break;

  case 175: /* expression_statement: ';'  */
#line 330 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("expression_statement",arr,1);}
#line 2823 "y.tab.c"
    break;

  case 176: /* expression_statement: expression ';'  */
#line 331 "expr.y"
                                                                         {tree_node* arr[] = {(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("expression_statement",arr,2);}
#line 2829 "y.tab.c"
    break;

  case 177: /* selection_statement: IF '(' expression ')' statement  */
#line 334 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("IF",-1,-1,"IF"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,5);}
#line 2835 "y.tab.c"
    break;

  case 178: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 335 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("IF",-1,-1,"IF"),create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),create_leaf_node(")",-1,-1,")"),(yyvsp[-2].node),create_leaf_node("ELSE",-1,-1,"ELSE"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,7);}
#line 2841 "y.tab.c"
    break;

  case 179: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 336 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("SWITCH",-1,-1,"SWITCH"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("selection_statement",arr,5);}
#line 2847 "y.tab.c"
    break;

  case 180: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 339 "expr.y"
                                                                           {tree_node* arr[] = {create_leaf_node("WHILE",-1,-1,"WHILE"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,5);}
#line 2853 "y.tab.c"
    break;

  case 181: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 340 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("DO",-1,-1,"DO"),(yyvsp[-5].node),create_leaf_node("WHILE",-1,-1,"WHILE"),create_leaf_node("(",1,-1,"("),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2859 "y.tab.c"
    break;

  case 182: /* iteration_statement: FOR '(' ';' ';' ')' statement  */
#line 341 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),create_leaf_node(";",-1,-1,";"),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,6);}
#line 2865 "y.tab.c"
    break;

  case 183: /* iteration_statement: FOR '(' expression ';' ')' statement  */
#line 342 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-3].node),create_leaf_node(";",-1,-1,";"),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,6);}
#line 2871 "y.tab.c"
    break;

  case 184: /* iteration_statement: FOR '(' expression ';' expression ')' statement  */
#line 343 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2877 "y.tab.c"
    break;

  case 185: /* iteration_statement: FOR '(' expression ';' expression ';' expression ')' statement  */
#line 344 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-6].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,9);}
#line 2883 "y.tab.c"
    break;

  case 186: /* iteration_statement: FOR '(' ';' expression ';' expression ')' statement  */
#line 345 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,8);}
#line 2889 "y.tab.c"
    break;

  case 187: /* iteration_statement: FOR '(' ';' ';' expression ')' statement  */
#line 346 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2895 "y.tab.c"
    break;

  case 188: /* iteration_statement: FOR '(' declaration expression ';' ')' statement  */
#line 347 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-4].node),(yyvsp[-3].node),create_leaf_node(";",-1,-1,";"),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,7);}
#line 2901 "y.tab.c"
    break;

  case 189: /* iteration_statement: FOR '(' declaration expression ';' expression ')' statement  */
#line 348 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),(yyvsp[-5].node),(yyvsp[-4].node),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,8);}
#line 2907 "y.tab.c"
    break;

  case 190: /* iteration_statement: FOR '(' ';' expression ')' statement  */
#line 349 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),(yyvsp[-2].node),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,6);}
#line 2913 "y.tab.c"
    break;

  case 191: /* iteration_statement: FOR '(' ';' ')' statement  */
#line 350 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("FOR",-1,-1,"FOR"),create_leaf_node("(",1,-1,"("),create_leaf_node(";",-1,-1,";"),create_leaf_node(")",-1,-1,")"),(yyvsp[0].node)};(yyval.node)=create_int_node("iteration_statement",arr,5);}
#line 2919 "y.tab.c"
    break;

  case 192: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 353 "expr.y"
                                                                          {tree_node* arr[] = {create_leaf_node("GOTO",-1,-1,"GOTO"),create_leaf_node("IDENTIFIER",-1,-1,(yyvsp[-1].sval)),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,3);}
#line 2925 "y.tab.c"
    break;

  case 193: /* jump_statement: CONTINUE ';'  */
#line 354 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("CONTINUE",-1,-1,"CONTINUE"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2931 "y.tab.c"
    break;

  case 194: /* jump_statement: BREAK ';'  */
#line 355 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("BREAK",-1,-1,"BREAK"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2937 "y.tab.c"
    break;

  case 195: /* jump_statement: RETURN ';'  */
#line 356 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("RETURN",-1,-1,"RETURN"),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,2);}
#line 2943 "y.tab.c"
    break;

  case 196: /* jump_statement: RETURN expression ';'  */
#line 357 "expr.y"
                                                                         {tree_node* arr[] = {create_leaf_node("RETURN",-1,-1,"RETURN"),(yyvsp[-1].node),create_leaf_node(";",-1,-1,";")};(yyval.node)=create_int_node("jump_statement",arr,3);}
#line 2949 "y.tab.c"
    break;

  case 197: /* translation_unit: external_declaration  */
#line 363 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("translation_unit",arr,1);}
#line 2955 "y.tab.c"
    break;

  case 198: /* translation_unit: translation_unit external_declaration  */
#line 364 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("translation_unit",arr,2);}
#line 2961 "y.tab.c"
    break;

  case 199: /* external_declaration: function_definition  */
#line 367 "expr.y"
                                                                            {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("external_declaration",arr,1);}
#line 2967 "y.tab.c"
    break;

  case 200: /* external_declaration: declaration  */
#line 368 "expr.y"
                                                                        {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("external_declaration",arr,1);}
#line 2973 "y.tab.c"
    break;

  case 201: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 371 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("function_definition",arr,3);}
#line 2979 "y.tab.c"
    break;

  case 202: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 372 "expr.y"
                                                                                {tree_node* arr[] = {(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("function_definition",arr,4);}
#line 2985 "y.tab.c"
    break;

  case 203: /* declaration_list: declaration  */
#line 375 "expr.y"
                                                                           {tree_node* arr[] = {(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_list",arr,1);}
#line 2991 "y.tab.c"
    break;

  case 204: /* declaration_list: declaration_list declaration  */
#line 376 "expr.y"
                                                                          {tree_node* arr[] = {(yyvsp[-1].node),(yyvsp[0].node)};(yyval.node)=create_int_node("declaration_list",arr,2);}
#line 2997 "y.tab.c"
    break;


#line 3001 "y.tab.c"

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

#line 378 "expr.y"



// Error handling function
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
