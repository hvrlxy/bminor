/* A Bison parser, made by GNU Bison 3.7.5.  */

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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bminor.bison"

#define DEBUG 1
#include <stdio.h>
#include "ast.h"
struct decl *parser_result = 0;
extern int  yylex() ; 
int tab = 0;
int *current_tab = &tab;

#line 81 "bminor.c"

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

#include "token.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_IDENT = 3,                /* TOKEN_IDENT  */
  YYSYMBOL_TOKEN_EOF = 4,                  /* TOKEN_EOF  */
  YYSYMBOL_TOKEN_INT = 5,                  /* TOKEN_INT  */
  YYSYMBOL_TOKEN_PLUS = 6,                 /* TOKEN_PLUS  */
  YYSYMBOL_TOKEN_PLUSPLUS = 7,             /* TOKEN_PLUSPLUS  */
  YYSYMBOL_TOKEN_MINUSMINUS = 8,           /* TOKEN_MINUSMINUS  */
  YYSYMBOL_TOKEN_MINUS = 9,                /* TOKEN_MINUS  */
  YYSYMBOL_TOKEN_GT = 10,                  /* TOKEN_GT  */
  YYSYMBOL_TOKEN_GTE = 11,                 /* TOKEN_GTE  */
  YYSYMBOL_TOKEN_LT = 12,                  /* TOKEN_LT  */
  YYSYMBOL_TOKEN_LTE = 13,                 /* TOKEN_LTE  */
  YYSYMBOL_TOKEN_EQUALITY = 14,            /* TOKEN_EQUALITY  */
  YYSYMBOL_TOKEN_LOGICAL_OR = 15,          /* TOKEN_LOGICAL_OR  */
  YYSYMBOL_TOKEN_LOGICAL_AND = 16,         /* TOKEN_LOGICAL_AND  */
  YYSYMBOL_TOKEN_NOT = 17,                 /* TOKEN_NOT  */
  YYSYMBOL_TOKEN_MUL = 18,                 /* TOKEN_MUL  */
  YYSYMBOL_TOKEN_MOD = 19,                 /* TOKEN_MOD  */
  YYSYMBOL_TOKEN_DIV = 20,                 /* TOKEN_DIV  */
  YYSYMBOL_TOKEN_EXPO = 21,                /* TOKEN_EXPO  */
  YYSYMBOL_TOKEN_LPAREN = 22,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 23,              /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_LSQUARE = 24,             /* TOKEN_LSQUARE  */
  YYSYMBOL_TOKEN_RSQUARE = 25,             /* TOKEN_RSQUARE  */
  YYSYMBOL_TOKEN_LCURLY = 26,              /* TOKEN_LCURLY  */
  YYSYMBOL_TOKEN_RCURLY = 27,              /* TOKEN_RCURLY  */
  YYSYMBOL_TOKEN_SEMI = 28,                /* TOKEN_SEMI  */
  YYSYMBOL_TOKEN_COMMA = 29,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_COMMENT = 30,             /* TOKEN_COMMENT  */
  YYSYMBOL_TOKEN_COLON = 31,               /* TOKEN_COLON  */
  YYSYMBOL_TOKEN_EQUAL = 32,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_BOOL = 33,                /* TOKEN_BOOL  */
  YYSYMBOL_TOKEN_CHAR = 34,                /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_STRING = 35,              /* TOKEN_STRING  */
  YYSYMBOL_TOKEN_IF = 36,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 37,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_FOR = 38,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_WHILE = 39,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_RETURN = 40,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_VOID = 41,                /* TOKEN_VOID  */
  YYSYMBOL_TOKEN_ARRAY = 42,               /* TOKEN_ARRAY  */
  YYSYMBOL_TOKEN_FUNCTION = 43,            /* TOKEN_FUNCTION  */
  YYSYMBOL_TOKEN_PRINT = 44,               /* TOKEN_PRINT  */
  YYSYMBOL_TOKEN_NUMBER = 45,              /* TOKEN_NUMBER  */
  YYSYMBOL_TOKEN_TRUE = 46,                /* TOKEN_TRUE  */
  YYSYMBOL_TOKEN_FALSE = 47,               /* TOKEN_FALSE  */
  YYSYMBOL_TOKEN_ACTUALCHAR = 48,          /* TOKEN_ACTUALCHAR  */
  YYSYMBOL_TOKEN_ACTUALSTRING = 49,        /* TOKEN_ACTUALSTRING  */
  YYSYMBOL_TOKEN_ERROR = 50,               /* TOKEN_ERROR  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_prog = 52,                      /* prog  */
  YYSYMBOL_decls = 53,                     /* decls  */
  YYSYMBOL_fuctionDecls = 54,              /* fuctionDecls  */
  YYSYMBOL_functionArgs = 55,              /* functionArgs  */
  YYSYMBOL_type = 56,                      /* type  */
  YYSYMBOL_bodyWithScope = 57,             /* bodyWithScope  */
  YYSYMBOL_variableDecls = 58,             /* variableDecls  */
  YYSYMBOL_int_list = 59,                  /* int_list  */
  YYSYMBOL_bool_list = 60,                 /* bool_list  */
  YYSYMBOL_bool_type = 61,                 /* bool_type  */
  YYSYMBOL_char_list = 62,                 /* char_list  */
  YYSYMBOL_string_list = 63,               /* string_list  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_commaExprList = 65,             /* commaExprList  */
  YYSYMBOL_expr = 66,                      /* expr  */
  YYSYMBOL_logical = 67,                   /* logical  */
  YYSYMBOL_comparison = 68,                /* comparison  */
  YYSYMBOL_addsub = 69,                    /* addsub  */
  YYSYMBOL_multdiv = 70,                   /* multdiv  */
  YYSYMBOL_exponent = 71,                  /* exponent  */
  YYSYMBOL_negation = 72,                  /* negation  */
  YYSYMBOL_incdec = 73,                    /* incdec  */
  YYSYMBOL_factor = 74,                    /* factor  */
  YYSYMBOL_name = 75,                      /* name  */
  YYSYMBOL_int_literal = 76,               /* int_literal  */
  YYSYMBOL_char_literal = 77,              /* char_literal  */
  YYSYMBOL_string_literal = 78             /* string_literal  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   274

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  222

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   100,   100,   102,   103,   104,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   117,   120,   121,   122,   125,
     126,   127,   128,   131,   132,   133,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     151,   153,   155,   159,   160,   161,   163,   164,   165,   167,
     168,   171,   172,   173,   175,   176,   177,   180,   181,   182,
     183,   184,   185,   186,   188,   191,   192,   193,   195,   196,
     198,   199,   200,   203,   204,   205,   206,   207,   209,   210,
     211,   214,   215,   216,   217,   219,   220,   222,   223,   225,
     226,   227,   230,   231,   232,   233,   234,   235,   237,   238,
     239,   240
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
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_IDENT",
  "TOKEN_EOF", "TOKEN_INT", "TOKEN_PLUS", "TOKEN_PLUSPLUS",
  "TOKEN_MINUSMINUS", "TOKEN_MINUS", "TOKEN_GT", "TOKEN_GTE", "TOKEN_LT",
  "TOKEN_LTE", "TOKEN_EQUALITY", "TOKEN_LOGICAL_OR", "TOKEN_LOGICAL_AND",
  "TOKEN_NOT", "TOKEN_MUL", "TOKEN_MOD", "TOKEN_DIV", "TOKEN_EXPO",
  "TOKEN_LPAREN", "TOKEN_RPAREN", "TOKEN_LSQUARE", "TOKEN_RSQUARE",
  "TOKEN_LCURLY", "TOKEN_RCURLY", "TOKEN_SEMI", "TOKEN_COMMA",
  "TOKEN_COMMENT", "TOKEN_COLON", "TOKEN_EQUAL", "TOKEN_BOOL",
  "TOKEN_CHAR", "TOKEN_STRING", "TOKEN_IF", "TOKEN_ELSE", "TOKEN_FOR",
  "TOKEN_WHILE", "TOKEN_RETURN", "TOKEN_VOID", "TOKEN_ARRAY",
  "TOKEN_FUNCTION", "TOKEN_PRINT", "TOKEN_NUMBER", "TOKEN_TRUE",
  "TOKEN_FALSE", "TOKEN_ACTUALCHAR", "TOKEN_ACTUALSTRING", "TOKEN_ERROR",
  "$accept", "prog", "decls", "fuctionDecls", "functionArgs", "type",
  "bodyWithScope", "variableDecls", "int_list", "bool_list", "bool_type",
  "char_list", "string_list", "statement", "commaExprList", "expr",
  "logical", "comparison", "addsub", "multdiv", "exponent", "negation",
  "incdec", "factor", "name", "int_literal", "char_literal",
  "string_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
#endif

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,  -157,    21,  -157,    11,    11,     1,  -157,  -157,  -157,
      43,   -25,    28,    35,    98,    29,    24,  -157,    17,  -157,
      60,  -157,    16,  -157,    38,    17,   140,   188,   194,   195,
     196,  -157,   106,   111,   192,  -157,   193,  -157,   197,   198,
      11,    11,    11,    11,    11,  -157,  -157,  -157,  -157,  -157,
      76,   199,   200,   201,   203,   204,   205,   101,    86,   157,
     183,   109,    83,   117,   132,   154,   156,  -157,   206,   129,
    -157,    16,  -157,    38,  -157,  -157,   207,  -157,  -157,  -157,
    -157,   208,  -157,   209,  -157,   210,  -157,   212,  -157,   213,
      17,  -157,  -157,   202,   211,   214,   215,   216,   217,   125,
      11,   125,   125,   125,   125,   218,   219,   221,   129,   222,
      16,   223,    38,    44,    44,   125,   220,   225,   110,    44,
     226,   125,   125,   112,   174,   187,    63,    78,   231,  -157,
    -157,  -157,    -9,  -157,  -157,  -157,  -157,   227,   228,   229,
     230,   232,    17,  -157,  -157,  -157,  -157,  -157,  -157,    42,
    -157,   236,   145,   234,   125,    44,  -157,  -157,   235,   149,
    -157,  -157,  -157,  -157,  -157,  -157,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      49,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,   239,
     159,  -157,    44,   174,   187,   187,    63,    63,    63,    63,
      78,    78,   231,   231,   231,  -157,   241,   125,    44,  -157,
    -157,    -4,   164,  -157,   237,    44,  -157,   172,   233,   125,
     240,  -157
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,    98,     0,     2,     5,     5,     0,     1,     3,     4,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    28,
       0,    31,     0,    33,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,   100,     0,   101,     0,     0,
      18,    18,    18,    18,    18,    27,    29,    30,    32,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    48,
      36,    53,    37,    56,    38,     7,     0,    19,    20,    21,
      22,    17,     8,     0,     9,     0,    10,     0,     6,     0,
      45,    49,    50,     0,    47,     0,    52,     0,    55,    25,
      18,    25,    25,    25,    25,     0,    44,     0,    48,     0,
      53,     0,    56,     0,     0,    25,     0,     0,     0,    67,
       0,    25,    25,     0,    69,    72,    77,    80,    84,    86,
      88,    91,    95,    94,    97,    96,    16,     0,     0,     0,
       0,     0,    45,    40,    46,    41,    51,    42,    54,     0,
      87,    95,     0,     0,     0,     0,    58,    59,     0,    66,
      12,    23,    24,    90,    89,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,    13,    14,    15,    11,    39,    43,    92,    64,     0,
       0,    60,    67,    68,    71,    70,    75,    76,    73,    74,
      78,    79,    81,    83,    82,    85,     0,     0,     0,    65,
      93,     0,     0,    61,     0,     0,    62,     0,     0,    25,
       0,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,   189,  -157,   -32,  -157,   -76,    75,    88,   126,
    -157,   158,   160,  -102,  -156,   -84,   100,    45,    36,    41,
      26,    91,   161,  -157,     0,   -17,   -20,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    51,    81,   120,   121,   105,    93,
      94,    95,    97,   122,   158,   149,   124,   125,   126,   127,
     128,   129,   130,   131,   151,   133,   134,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,    32,    36,    17,     6,     6,    38,    18,    39,    53,
      54,    55,    56,   179,     1,   123,   157,   123,   123,   123,
     123,     7,   180,   206,   213,   137,   138,   139,   140,    26,
     152,   123,    10,   214,   123,   159,   209,   123,   123,   153,
      52,    52,    52,    52,    52,   161,   162,     1,    11,   163,
     164,    96,   189,    25,    11,    98,    19,    27,    28,    29,
      20,   113,    31,    21,    35,    30,   114,    22,   136,   173,
     123,   190,   174,   106,   166,     5,    12,    13,    14,     5,
       5,    57,    12,    13,    14,    15,    16,    37,    77,    31,
      96,    15,    35,    37,    98,   159,   175,   176,   177,   132,
      52,   132,   132,   132,   132,   211,    33,    34,   159,    58,
      59,    60,    69,     1,    70,   132,    78,    79,    80,   163,
     164,   132,   132,   123,   212,   106,    23,   113,     1,    67,
      24,   217,   114,    68,    45,   123,   115,    75,   156,    46,
     165,    76,   113,   220,   166,    82,   116,   114,   117,    83,
     118,   115,   163,   164,   119,    31,   163,   164,    35,    37,
      84,   116,    40,   117,    85,   118,   163,   164,   187,   119,
      31,   163,   164,    35,    37,    91,    92,   166,   192,   163,
     164,   166,    86,    71,    88,    72,    87,   208,    89,   167,
     168,   166,   215,     8,     9,   218,   166,   169,   170,   171,
     172,   202,   203,   204,   166,   196,   197,   198,   199,    73,
      41,    74,   194,   195,   200,   201,    42,    43,    44,   132,
      47,    48,    61,    50,    63,    49,    64,    65,    66,   107,
     186,    62,    90,    99,   144,   101,   102,   100,   103,   104,
     108,   109,   154,   111,   110,   141,   112,   155,   142,   143,
     145,   147,   178,   160,   181,   182,   183,   184,   179,   219,
     185,   188,   207,   191,   210,   216,   193,   221,   146,   205,
       0,     0,   148,     0,   150
};

static const yytype_int16 yycheck[] =
{
       0,    18,    22,    28,     4,     5,    24,    32,    25,    41,
      42,    43,    44,    22,     3,    99,   118,   101,   102,   103,
     104,     0,    31,   179,    28,   101,   102,   103,   104,     5,
     114,   115,    31,    37,   118,   119,   192,   121,   122,   115,
      40,    41,    42,    43,    44,   121,   122,     3,     5,     7,
       8,    71,   154,    24,     5,    73,    28,    33,    34,    35,
      32,    17,    45,    28,    48,    41,    22,    32,   100,     6,
     154,   155,     9,    90,    32,     0,    33,    34,    35,     4,
       5,     5,    33,    34,    35,    42,    43,    49,     5,    45,
     110,    42,    48,    49,   112,   179,    18,    19,    20,    99,
     100,   101,   102,   103,   104,   207,    46,    47,   192,    33,
      34,    35,    26,     3,    28,   115,    33,    34,    35,     7,
       8,   121,   122,   207,   208,   142,    28,    17,     3,    28,
      32,   215,    22,    32,    28,   219,    26,    28,    28,    28,
      28,    32,    17,   219,    32,    28,    36,    22,    38,    32,
      40,    26,     7,     8,    44,    45,     7,     8,    48,    49,
      28,    36,    22,    38,    32,    40,     7,     8,    23,    44,
      45,     7,     8,    48,    49,    46,    47,    32,    29,     7,
       8,    32,    28,    26,    28,    28,    32,    28,    32,    15,
      16,    32,    28,     4,     5,    23,    32,    10,    11,    12,
      13,   175,   176,   177,    32,   169,   170,   171,   172,    26,
      22,    28,   167,   168,   173,   174,    22,    22,    22,   219,
      28,    28,    23,    25,    23,    28,    23,    23,    23,    27,
     142,    31,    26,    26,   108,    26,    26,    29,    26,    26,
      29,    27,    22,    27,    29,    27,    29,    22,    29,    28,
      28,    28,    21,    27,    27,    27,    27,    27,    22,    26,
      28,    27,    23,    28,    23,    28,   166,    27,   110,   178,
      -1,    -1,   112,    -1,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    52,    53,    54,    58,    75,     0,    53,    53,
      31,     5,    33,    34,    35,    42,    43,    28,    32,    28,
      32,    28,    32,    28,    32,    24,     5,    33,    34,    35,
      41,    45,    76,    46,    47,    48,    77,    49,    78,    76,
      22,    22,    22,    22,    22,    28,    28,    28,    28,    28,
      25,    55,    75,    55,    55,    55,    55,     5,    33,    34,
      35,    23,    31,    23,    23,    23,    23,    28,    32,    26,
      28,    26,    28,    26,    28,    28,    32,     5,    33,    34,
      35,    56,    28,    32,    28,    32,    28,    32,    28,    32,
      26,    46,    47,    60,    61,    62,    77,    63,    78,    26,
      29,    26,    26,    26,    26,    59,    76,    27,    29,    27,
      29,    27,    29,    17,    22,    26,    36,    38,    40,    44,
      57,    58,    64,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    55,    57,    57,    57,
      57,    27,    29,    28,    60,    28,    62,    28,    63,    66,
      73,    75,    66,    57,    22,    22,    28,    64,    65,    66,
      27,    57,    57,     7,     8,    28,    32,    15,    16,    10,
      11,    12,    13,     6,     9,    18,    19,    20,    21,    22,
      31,    27,    27,    27,    27,    28,    59,    23,    27,    64,
      66,    28,    29,    67,    68,    68,    69,    69,    69,    69,
      70,    70,    71,    71,    71,    72,    65,    23,    28,    65,
      23,    64,    66,    28,    37,    28,    28,    66,    23,    26,
      57,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    55,    56,
      56,    56,    56,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    60,    60,    60,    61,
      61,    62,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    75,    76,
      77,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     8,     8,     8,     8,
       8,    11,    11,    11,    11,    11,     5,     3,     0,     1,
       1,     1,     1,     2,     2,     0,     4,     6,     4,     6,
       6,     4,     6,     4,     6,     8,     8,     8,     8,    12,
      11,    11,    11,     3,     1,     0,     3,     1,     0,     1,
       1,     3,     1,     0,     3,     1,     0,     2,     2,     2,
       3,     6,     7,    11,     3,     3,     1,     0,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     1,     2,     1,     2,
       2,     1,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* prog: decls  */
#line 100 "bminor.bison"
             {parser_result = (yyvsp[0].decl); print_decl(parser_result, current_tab);}
#line 1319 "bminor.c"
    break;

  case 3: /* decls: fuctionDecls decls  */
#line 102 "bminor.bison"
                           {(yyval.decl) = decl_create(0,0,0,0, (yyvsp[0].decl));}
#line 1325 "bminor.c"
    break;

  case 4: /* decls: variableDecls decls  */
#line 103 "bminor.bison"
                            {(yyval.decl) = decl_create(0,0,0,0, (yyvsp[0].decl));}
#line 1331 "bminor.c"
    break;

  case 6: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_VOID TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI  */
#line 107 "bminor.bison"
                                                                                                             {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1337 "bminor.c"
    break;

  case 7: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_INT TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI  */
#line 108 "bminor.bison"
                                                                                                                {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1343 "bminor.c"
    break;

  case 8: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_BOOL TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI  */
#line 109 "bminor.bison"
                                                                                                             {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1349 "bminor.c"
    break;

  case 9: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_CHAR TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI  */
#line 110 "bminor.bison"
                                                                                                             {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1355 "bminor.c"
    break;

  case 10: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_STRING TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI  */
#line 111 "bminor.bison"
                                                                                                               {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1361 "bminor.c"
    break;

  case 11: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_VOID TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL TOKEN_LCURLY bodyWithScope TOKEN_RCURLY  */
#line 112 "bminor.bison"
                                                                                                                                                      {(yyval.decl) = decl_create((yyvsp[-10].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1367 "bminor.c"
    break;

  case 12: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_INT TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL TOKEN_LCURLY bodyWithScope TOKEN_RCURLY  */
#line 113 "bminor.bison"
                                                                                                                                                     {(yyval.decl) = decl_create((yyvsp[-10].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1373 "bminor.c"
    break;

  case 13: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_BOOL TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL TOKEN_LCURLY bodyWithScope TOKEN_RCURLY  */
#line 114 "bminor.bison"
                                                                                                                                                      {(yyval.decl) = decl_create((yyvsp[-10].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1379 "bminor.c"
    break;

  case 14: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_CHAR TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL TOKEN_LCURLY bodyWithScope TOKEN_RCURLY  */
#line 116 "bminor.bison"
                                                        {(yyval.decl) = decl_create((yyvsp[-10].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1385 "bminor.c"
    break;

  case 15: /* fuctionDecls: name TOKEN_COLON TOKEN_FUNCTION TOKEN_STRING TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL TOKEN_LCURLY bodyWithScope TOKEN_RCURLY  */
#line 118 "bminor.bison"
                                                        {(yyval.decl) = decl_create((yyvsp[-10].expr), create_type(TYPE_FUNCTION,0,0),0,0,0);}
#line 1391 "bminor.c"
    break;

  case 16: /* functionArgs: name TOKEN_COLON type TOKEN_COMMA functionArgs  */
#line 120 "bminor.bison"
                                                              {(yyval.param_list) = create_param_list((yyvsp[-4].expr), (yyvsp[-2].type), (yyvsp[0].param_list));}
#line 1397 "bminor.c"
    break;

  case 17: /* functionArgs: name TOKEN_COLON type  */
#line 121 "bminor.bison"
                                                        {(yyval.param_list) = create_param_list((yyvsp[-2].expr), (yyvsp[0].type), 0);}
#line 1403 "bminor.c"
    break;

  case 19: /* type: TOKEN_INT  */
#line 125 "bminor.bison"
                 {(yyval.type) = create_type(TYPE_INTEGER,0,0);}
#line 1409 "bminor.c"
    break;

  case 20: /* type: TOKEN_BOOL  */
#line 126 "bminor.bison"
                  {(yyval.type) = create_type(TYPE_BOOLEAN,0,0);}
#line 1415 "bminor.c"
    break;

  case 21: /* type: TOKEN_CHAR  */
#line 127 "bminor.bison"
                  {(yyval.type) = create_type(TYPE_CHARACTER,0,0);}
#line 1421 "bminor.c"
    break;

  case 22: /* type: TOKEN_STRING  */
#line 128 "bminor.bison"
                    {(yyval.type) = create_type(TYPE_STRING,0,0);}
#line 1427 "bminor.c"
    break;

  case 23: /* bodyWithScope: variableDecls bodyWithScope  */
#line 131 "bminor.bison"
                                            {(yyval.stmt) = stmt_create(STMT_BLOCK,(yyvsp[-1].decl),0,0,0,0,0,(yyvsp[0].stmt));}
#line 1433 "bminor.c"
    break;

  case 24: /* bodyWithScope: statement bodyWithScope  */
#line 132 "bminor.bison"
                                        {(yyval.stmt) = stmt_create(STMT_BLOCK,0,0,0,0,(yyvsp[-1].stmt),0,(yyvsp[0].stmt));}
#line 1439 "bminor.c"
    break;

  case 26: /* variableDecls: name TOKEN_COLON TOKEN_INT TOKEN_SEMI  */
#line 136 "bminor.bison"
                                                      {(yyval.decl) = decl_create((yyvsp[-3].expr), create_type(TYPE_INTEGER,0,0), 0,0,0) ;}
#line 1445 "bminor.c"
    break;

  case 27: /* variableDecls: name TOKEN_COLON TOKEN_INT TOKEN_EQUAL int_literal TOKEN_SEMI  */
#line 137 "bminor.bison"
                                                                              {(yyval.decl) = decl_create((yyvsp[-5].expr), create_type(TYPE_INTEGER,0,0), (yyvsp[-1].expr),0,0) ;}
#line 1451 "bminor.c"
    break;

  case 28: /* variableDecls: name TOKEN_COLON TOKEN_BOOL TOKEN_SEMI  */
#line 138 "bminor.bison"
                                                       {(yyval.decl) = decl_create((yyvsp[-3].expr), create_type(TYPE_BOOLEAN,0,0), 0,0,0) ;}
#line 1457 "bminor.c"
    break;

  case 29: /* variableDecls: name TOKEN_COLON TOKEN_BOOL TOKEN_EQUAL TOKEN_TRUE TOKEN_SEMI  */
#line 139 "bminor.bison"
                                                                              {(yyval.decl) = decl_create((yyvsp[-5].expr), create_type(TYPE_BOOLEAN,0,0), expr_create_boolean_literal(1),0,0) ;}
#line 1463 "bminor.c"
    break;

  case 30: /* variableDecls: name TOKEN_COLON TOKEN_BOOL TOKEN_EQUAL TOKEN_FALSE TOKEN_SEMI  */
#line 140 "bminor.bison"
                                                                               {(yyval.decl) = decl_create((yyvsp[-5].expr), create_type(TYPE_BOOLEAN,0,0), expr_create_boolean_literal(0),0,0) ;}
#line 1469 "bminor.c"
    break;

  case 31: /* variableDecls: name TOKEN_COLON TOKEN_CHAR TOKEN_SEMI  */
#line 141 "bminor.bison"
                                                       {(yyval.decl) = decl_create((yyvsp[-3].expr), create_type(TYPE_CHARACTER,0,0), 0,0,0) ;}
#line 1475 "bminor.c"
    break;

  case 32: /* variableDecls: name TOKEN_COLON TOKEN_CHAR TOKEN_EQUAL char_literal TOKEN_SEMI  */
#line 142 "bminor.bison"
                                                                                {(yyval.decl) = decl_create((yyvsp[-5].expr), create_type(TYPE_BOOLEAN,0,0), (yyvsp[-1].expr),0,0) ;}
#line 1481 "bminor.c"
    break;

  case 33: /* variableDecls: name TOKEN_COLON TOKEN_STRING TOKEN_SEMI  */
#line 143 "bminor.bison"
                                                         {(yyval.decl) = decl_create((yyvsp[-3].expr), create_type(TYPE_STRING,0,0), 0,0,0) ;}
#line 1487 "bminor.c"
    break;

  case 34: /* variableDecls: name TOKEN_COLON TOKEN_STRING TOKEN_EQUAL string_literal TOKEN_SEMI  */
#line 144 "bminor.bison"
                                                                                    {(yyval.decl) = decl_create((yyvsp[-5].expr), create_type(TYPE_BOOLEAN,0,0), (yyvsp[-1].expr),0,0) ;}
#line 1493 "bminor.c"
    break;

  case 35: /* variableDecls: name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_INT TOKEN_SEMI  */
#line 145 "bminor.bison"
                                                                                                          {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_ARRAY,create_type(TYPE_INTEGER,0,0),0), 0,0,0) ;}
#line 1499 "bminor.c"
    break;

  case 36: /* variableDecls: name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_BOOL TOKEN_SEMI  */
#line 146 "bminor.bison"
                                                                                                           {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_ARRAY,create_type(TYPE_BOOLEAN,0,0),0), 0,0,0) ;}
#line 1505 "bminor.c"
    break;

  case 37: /* variableDecls: name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_CHAR TOKEN_SEMI  */
#line 147 "bminor.bison"
                                                                                                           {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_ARRAY,create_type(TYPE_CHARACTER,0,0),0), 0,0,0) ;}
#line 1511 "bminor.c"
    break;

  case 38: /* variableDecls: name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_STRING TOKEN_SEMI  */
#line 148 "bminor.bison"
                                                                                                             {(yyval.decl) = decl_create((yyvsp[-7].expr), create_type(TYPE_ARRAY,create_type(TYPE_STRING,0,0),0), 0,0,0) ;}
#line 1517 "bminor.c"
    break;

  case 39: /* variableDecls: name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_INT TOKEN_EQUAL TOKEN_LCURLY int_list TOKEN_RCURLY TOKEN_SEMI  */
#line 150 "bminor.bison"
                                                                  {(yyval.decl) = decl_create((yyvsp[-11].expr), create_type(TYPE_ARRAY,create_type(TYPE_INTEGER,0,0),0), (yyvsp[-2].expr),0,0) ;}
#line 1523 "bminor.c"
    break;

  case 40: /* variableDecls: name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_BOOL TOKEN_LCURLY bool_list TOKEN_RCURLY TOKEN_SEMI  */
#line 152 "bminor.bison"
                                                                   {(yyval.decl) = decl_create((yyvsp[-10].expr), create_type(TYPE_ARRAY,create_type(TYPE_BOOLEAN,0,0),0), (yyvsp[-2].expr),0,0) ;}
#line 1529 "bminor.c"
    break;

  case 41: /* variableDecls: name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_CHAR TOKEN_LCURLY char_list TOKEN_RCURLY TOKEN_SEMI  */
#line 154 "bminor.bison"
                                                                   {(yyval.decl) = decl_create((yyvsp[-10].expr), create_type(TYPE_ARRAY,create_type(TYPE_CHARACTER,0,0),0), (yyvsp[-2].expr),0,0) ;}
#line 1535 "bminor.c"
    break;

  case 42: /* variableDecls: name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_STRING TOKEN_LCURLY string_list TOKEN_RCURLY TOKEN_SEMI  */
#line 156 "bminor.bison"
                                                                     {(yyval.decl) = decl_create((yyvsp[-10].expr), create_type(TYPE_ARRAY,create_type(TYPE_STRING,0,0),0), (yyvsp[-2].expr),0,0) ;}
#line 1541 "bminor.c"
    break;

  case 43: /* int_list: int_literal TOKEN_COMMA int_list  */
#line 159 "bminor.bison"
                                             {(yyval.expr) = expr_create(EXPR_INTEGER, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1547 "bminor.c"
    break;

  case 44: /* int_list: int_literal  */
#line 160 "bminor.bison"
                                      {(yyval.expr) = (yyvsp[0].expr);}
#line 1553 "bminor.c"
    break;

  case 46: /* bool_list: bool_type TOKEN_COMMA bool_list  */
#line 163 "bminor.bison"
                                            {(yyval.expr) = expr_create(EXPR_BOOLEAN, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1559 "bminor.c"
    break;

  case 47: /* bool_list: bool_type  */
#line 164 "bminor.bison"
                                    {(yyval.expr) = (yyvsp[0].expr);}
#line 1565 "bminor.c"
    break;

  case 49: /* bool_type: TOKEN_TRUE  */
#line 167 "bminor.bison"
                      {(yyval.expr) = expr_create_boolean_literal(1);}
#line 1571 "bminor.c"
    break;

  case 50: /* bool_type: TOKEN_FALSE  */
#line 168 "bminor.bison"
                                      {(yyval.expr) = expr_create_boolean_literal(0);}
#line 1577 "bminor.c"
    break;

  case 51: /* char_list: char_literal TOKEN_COMMA char_list  */
#line 171 "bminor.bison"
                                               {(yyval.expr) = expr_create(EXPR_CHARACTER_LITERAL, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1583 "bminor.c"
    break;

  case 52: /* char_list: char_literal  */
#line 172 "bminor.bison"
                                       {(yyval.expr) = (yyvsp[0].expr);}
#line 1589 "bminor.c"
    break;

  case 54: /* string_list: string_literal TOKEN_COMMA string_list  */
#line 175 "bminor.bison"
                                                     {(yyval.expr) = expr_create(EXPR_STRING_LITERAL, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1595 "bminor.c"
    break;

  case 55: /* string_list: string_literal  */
#line 176 "bminor.bison"
                                         {(yyval.expr) = (yyvsp[0].expr);}
#line 1601 "bminor.c"
    break;

  case 57: /* statement: expr TOKEN_SEMI  */
#line 180 "bminor.bison"
                              {(yyval.stmt) = stmt_create(STMT_DECL,0,(yyvsp[-1].expr),0,0,0,0,0); }
#line 1607 "bminor.c"
    break;

  case 58: /* statement: TOKEN_RETURN TOKEN_SEMI  */
#line 181 "bminor.bison"
                                    {(yyval.stmt) = stmt_create(STMT_RETURN,0,0,0,0,0,0,0); }
#line 1613 "bminor.c"
    break;

  case 59: /* statement: TOKEN_RETURN statement  */
#line 182 "bminor.bison"
                                    {(yyval.stmt) = stmt_create(STMT_RETURN,0,0,0,0,0,0,(yyvsp[0].stmt)); }
#line 1619 "bminor.c"
    break;

  case 60: /* statement: TOKEN_PRINT commaExprList TOKEN_SEMI  */
#line 183 "bminor.bison"
                                                 {(yyval.stmt) = stmt_create(STMT_PRINT,0,0,(yyvsp[-1].expr),0,0,0,0); }
#line 1625 "bminor.c"
    break;

  case 61: /* statement: TOKEN_IF TOKEN_LPAREN statement TOKEN_RPAREN statement TOKEN_SEMI  */
#line 184 "bminor.bison"
                                                                              {(yyval.stmt) = stmt_create(STMT_IF_ELSE,0,0,0,0,(yyvsp[-3].stmt),(yyvsp[-1].stmt),0); }
#line 1631 "bminor.c"
    break;

  case 62: /* statement: TOKEN_IF TOKEN_LPAREN statement TOKEN_RPAREN statement TOKEN_ELSE TOKEN_SEMI  */
#line 185 "bminor.bison"
                                                                                         {(yyval.stmt) = stmt_create(STMT_IF_ELSE,0,0,0,0,(yyvsp[-4].stmt),(yyvsp[-2].stmt),0); }
#line 1637 "bminor.c"
    break;

  case 63: /* statement: TOKEN_FOR TOKEN_LPAREN expr TOKEN_SEMI expr TOKEN_SEMI expr TOKEN_RPAREN TOKEN_LCURLY bodyWithScope TOKEN_RCURLY  */
#line 187 "bminor.bison"
                                                    {(yyval.stmt) = stmt_create(STMT_FOR,0,(yyvsp[-8].expr),(yyvsp[-6].expr),(yyvsp[-4].expr),0,0,(yyvsp[-1].stmt)); }
#line 1643 "bminor.c"
    break;

  case 64: /* statement: TOKEN_LCURLY bodyWithScope TOKEN_RCURLY  */
#line 188 "bminor.bison"
                                                    {(yyval.stmt) = stmt_create(STMT_BLOCK,0,0,0,0,0,0,(yyvsp[-1].stmt)); }
#line 1649 "bminor.c"
    break;

  case 65: /* commaExprList: expr TOKEN_COMMA commaExprList  */
#line 191 "bminor.bison"
                                              {(yyval.expr) = expr_create(EXPR_GENERAL,(yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1655 "bminor.c"
    break;

  case 66: /* commaExprList: expr  */
#line 192 "bminor.bison"
                                       {(yyval.expr) = expr_create(EXPR_GENERAL,(yyvsp[0].expr),0);}
#line 1661 "bminor.c"
    break;

  case 68: /* expr: expr TOKEN_EQUAL logical  */
#line 195 "bminor.bison"
                                {(yyval.expr) = expr_create(EXPR_EQUAL, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1667 "bminor.c"
    break;

  case 69: /* expr: logical  */
#line 196 "bminor.bison"
               {(yyval.expr) = expr_create(EXPR_LOGICAL, (yyvsp[0].expr), 0);}
#line 1673 "bminor.c"
    break;

  case 70: /* logical: logical TOKEN_LOGICAL_AND comparison  */
#line 198 "bminor.bison"
                                               {(yyval.expr) = expr_create(EXPR_LOGICAL, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1679 "bminor.c"
    break;

  case 71: /* logical: logical TOKEN_LOGICAL_OR comparison  */
#line 199 "bminor.bison"
                                              {(yyval.expr) = expr_create(EXPR_LOGICAL, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1685 "bminor.c"
    break;

  case 72: /* logical: comparison  */
#line 200 "bminor.bison"
                     {(yyval.expr) = expr_create(EXPR_COMP, (yyvsp[0].expr), 0);}
#line 1691 "bminor.c"
    break;

  case 73: /* comparison: comparison TOKEN_LT addsub  */
#line 203 "bminor.bison"
                                        {(yyval.expr) = expr_create(EXPR_LT, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1697 "bminor.c"
    break;

  case 74: /* comparison: comparison TOKEN_LTE addsub  */
#line 204 "bminor.bison"
                                   {(yyval.expr) = expr_create(EXPR_LTE, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1703 "bminor.c"
    break;

  case 75: /* comparison: comparison TOKEN_GT addsub  */
#line 205 "bminor.bison"
                                  {(yyval.expr) = expr_create(EXPR_GT, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1709 "bminor.c"
    break;

  case 76: /* comparison: comparison TOKEN_GTE addsub  */
#line 206 "bminor.bison"
                                   {(yyval.expr) = expr_create(EXPR_GTE, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1715 "bminor.c"
    break;

  case 77: /* comparison: addsub  */
#line 207 "bminor.bison"
              {(yyval.expr) = expr_create(EXPR_ADDSUB, (yyvsp[0].expr), 0);}
#line 1721 "bminor.c"
    break;

  case 78: /* addsub: addsub TOKEN_PLUS multdiv  */
#line 209 "bminor.bison"
                                   {(yyval.expr) = expr_create(EXPR_ADD, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1727 "bminor.c"
    break;

  case 79: /* addsub: addsub TOKEN_MINUS multdiv  */
#line 210 "bminor.bison"
                                  {(yyval.expr) = expr_create(EXPR_SUB, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1733 "bminor.c"
    break;

  case 80: /* addsub: multdiv  */
#line 211 "bminor.bison"
               {(yyval.expr) = expr_create(EXPR_MULTDIV, (yyvsp[0].expr), 0);}
#line 1739 "bminor.c"
    break;

  case 81: /* multdiv: multdiv TOKEN_MUL exponent  */
#line 214 "bminor.bison"
                                     {(yyval.expr) = expr_create(EXPR_MUL, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1745 "bminor.c"
    break;

  case 82: /* multdiv: multdiv TOKEN_DIV exponent  */
#line 215 "bminor.bison"
                                  {(yyval.expr) = expr_create(EXPR_DIV, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1751 "bminor.c"
    break;

  case 83: /* multdiv: multdiv TOKEN_MOD exponent  */
#line 216 "bminor.bison"
                                  {(yyval.expr) = expr_create(EXPR_MOD, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1757 "bminor.c"
    break;

  case 84: /* multdiv: exponent  */
#line 217 "bminor.bison"
                {(yyval.expr) = expr_create(EXPR_POW, (yyvsp[0].expr), 0);}
#line 1763 "bminor.c"
    break;

  case 85: /* exponent: exponent TOKEN_EXPO negation  */
#line 219 "bminor.bison"
                                        {(yyval.expr) = expr_create(EXPR_POW, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1769 "bminor.c"
    break;

  case 86: /* exponent: negation  */
#line 220 "bminor.bison"
                    {(yyval.expr) = expr_create(EXPR_LT, (yyvsp[0].expr), 0);}
#line 1775 "bminor.c"
    break;

  case 87: /* negation: TOKEN_NOT incdec  */
#line 222 "bminor.bison"
                            {(yyval.expr) = expr_create(EXPR_NOT, 0, (yyvsp[0].expr));}
#line 1781 "bminor.c"
    break;

  case 88: /* negation: incdec  */
#line 223 "bminor.bison"
                  {(yyval.expr) = expr_create(EXPR_INCDEC, 0, 0);}
#line 1787 "bminor.c"
    break;

  case 89: /* incdec: expr TOKEN_MINUSMINUS  */
#line 225 "bminor.bison"
                               {(yyval.expr) = expr_create(EXPR_MINUSMINUS, (yyvsp[-1].expr), 0);}
#line 1793 "bminor.c"
    break;

  case 90: /* incdec: expr TOKEN_PLUSPLUS  */
#line 226 "bminor.bison"
                              {(yyval.expr) = expr_create(EXPR_PLUSPLUS, (yyvsp[-1].expr), 0);}
#line 1799 "bminor.c"
    break;

  case 91: /* incdec: factor  */
#line 227 "bminor.bison"
                   {(yyval.expr) = expr_create(EXPR_FACTOR, (yyvsp[0].expr), 0);}
#line 1805 "bminor.c"
    break;

  case 92: /* factor: TOKEN_LPAREN expr TOKEN_RPAREN  */
#line 230 "bminor.bison"
                                       {(yyval.expr) = expr_create(EXPR_GENERAL, (yyvsp[-1].expr), 0);}
#line 1811 "bminor.c"
    break;

  case 93: /* factor: name TOKEN_LPAREN commaExprList TOKEN_RPAREN  */
#line 231 "bminor.bison"
                                                       {(yyval.expr) = expr_create(EXPR_GENERAL, (yyvsp[-1].expr), (yyvsp[-3].expr));}
#line 1817 "bminor.c"
    break;

  case 94: /* factor: int_literal  */
#line 232 "bminor.bison"
                      {(yyval.expr) = (yyvsp[0].expr);}
#line 1823 "bminor.c"
    break;

  case 95: /* factor: name  */
#line 233 "bminor.bison"
               {(yyval.expr) = (yyvsp[0].expr);}
#line 1829 "bminor.c"
    break;

  case 96: /* factor: string_literal  */
#line 234 "bminor.bison"
                         {(yyval.expr) = (yyvsp[0].expr);}
#line 1835 "bminor.c"
    break;

  case 97: /* factor: char_literal  */
#line 235 "bminor.bison"
                       {(yyval.expr) = (yyvsp[0].expr);}
#line 1841 "bminor.c"
    break;

  case 98: /* name: TOKEN_IDENT  */
#line 237 "bminor.bison"
                  {(yyval.expr) = expr_create_name((yyvsp[0].expr));}
#line 1847 "bminor.c"
    break;

  case 99: /* int_literal: TOKEN_NUMBER  */
#line 238 "bminor.bison"
                          {(yyval.expr) = expr_create_integer_literal((yyvsp[0].integer));}
#line 1853 "bminor.c"
    break;

  case 100: /* char_literal: TOKEN_ACTUALCHAR  */
#line 239 "bminor.bison"
                               {(yyval.expr) = expr_create_char_literal((yyvsp[0].character));}
#line 1859 "bminor.c"
    break;

  case 101: /* string_literal: TOKEN_ACTUALSTRING  */
#line 240 "bminor.bison"
                                   {(yyval.expr) = expr_create_string_literal((yyvsp[0].string));}
#line 1865 "bminor.c"
    break;


#line 1869 "bminor.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 241 "bminor.bison"


int yywrap() { return 0; }
