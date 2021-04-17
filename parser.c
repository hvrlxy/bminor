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
#include "expr.h"
#include "ast.h"
#define YYSTYPE struct expr *
struct expr *parser_result = 0;
extern int  yylex() ; 

#line 81 "parser.c"

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
    TOKEN_EOF = 258,               /* TOKEN_EOF  */
    TOKEN_INT = 259,               /* TOKEN_INT  */
    TOKEN_PLUS = 260,              /* TOKEN_PLUS  */
    TOKEN_PLUSPLUS = 261,          /* TOKEN_PLUSPLUS  */
    TOKEN_MINUSMINUS = 262,        /* TOKEN_MINUSMINUS  */
    TOKEN_MINUS = 263,             /* TOKEN_MINUS  */
    TOKEN_GT = 264,                /* TOKEN_GT  */
    TOKEN_GTE = 265,               /* TOKEN_GTE  */
    TOKEN_LT = 266,                /* TOKEN_LT  */
    TOKEN_LTE = 267,               /* TOKEN_LTE  */
    TOKEN_EQUALITY = 268,          /* TOKEN_EQUALITY  */
    TOKEN_LOGICAL_OR = 269,        /* TOKEN_LOGICAL_OR  */
    TOKEN_LOGICAL_AND = 270,       /* TOKEN_LOGICAL_AND  */
    TOKEN_NOT = 271,               /* TOKEN_NOT  */
    TOKEN_MUL = 272,               /* TOKEN_MUL  */
    TOKEN_MOD = 273,               /* TOKEN_MOD  */
    TOKEN_DIV = 274,               /* TOKEN_DIV  */
    TOKEN_EXPO = 275,              /* TOKEN_EXPO  */
    TOKEN_LPAREN = 276,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 277,            /* TOKEN_RPAREN  */
    TOKEN_LSQUARE = 278,           /* TOKEN_LSQUARE  */
    TOKEN_RSQUARE = 279,           /* TOKEN_RSQUARE  */
    TOKEN_LCURLY = 280,            /* TOKEN_LCURLY  */
    TOKEN_RCURLY = 281,            /* TOKEN_RCURLY  */
    TOKEN_SEMI = 282,              /* TOKEN_SEMI  */
    TOKEN_COMMA = 283,             /* TOKEN_COMMA  */
    TOKEN_COMMENT = 284,           /* TOKEN_COMMENT  */
    TOKEN_COLON = 285,             /* TOKEN_COLON  */
    TOKEN_EQUAL = 286,             /* TOKEN_EQUAL  */
    TOKEN_BOOL = 287,              /* TOKEN_BOOL  */
    TOKEN_CHAR = 288,              /* TOKEN_CHAR  */
    TOKEN_STRING = 289,            /* TOKEN_STRING  */
    TOKEN_IF = 290,                /* TOKEN_IF  */
    TOKEN_ELSE = 291,              /* TOKEN_ELSE  */
    TOKEN_FOR = 292,               /* TOKEN_FOR  */
    TOKEN_WHILE = 293,             /* TOKEN_WHILE  */
    TOKEN_RETURN = 294,            /* TOKEN_RETURN  */
    TOKEN_VOID = 295,              /* TOKEN_VOID  */
    TOKEN_ARRAY = 296,             /* TOKEN_ARRAY  */
    TOKEN_FUNCTION = 297,          /* TOKEN_FUNCTION  */
    TOKEN_PRINT = 298,             /* TOKEN_PRINT  */
    TOKEN_IDENT = 299,             /* TOKEN_IDENT  */
    TOKEN_NUMBER = 300,            /* TOKEN_NUMBER  */
    TOKEN_TRUE = 301,              /* TOKEN_TRUE  */
    TOKEN_FALSE = 302,             /* TOKEN_FALSE  */
    TOKEN_ACTUALCHAR = 303,        /* TOKEN_ACTUALCHAR  */
    TOKEN_ACTUALSTRING = 304,      /* TOKEN_ACTUALSTRING  */
    TOKEN_ERROR = 305              /* TOKEN_ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_EOF = 3,                  /* TOKEN_EOF  */
  YYSYMBOL_TOKEN_INT = 4,                  /* TOKEN_INT  */
  YYSYMBOL_TOKEN_PLUS = 5,                 /* TOKEN_PLUS  */
  YYSYMBOL_TOKEN_PLUSPLUS = 6,             /* TOKEN_PLUSPLUS  */
  YYSYMBOL_TOKEN_MINUSMINUS = 7,           /* TOKEN_MINUSMINUS  */
  YYSYMBOL_TOKEN_MINUS = 8,                /* TOKEN_MINUS  */
  YYSYMBOL_TOKEN_GT = 9,                   /* TOKEN_GT  */
  YYSYMBOL_TOKEN_GTE = 10,                 /* TOKEN_GTE  */
  YYSYMBOL_TOKEN_LT = 11,                  /* TOKEN_LT  */
  YYSYMBOL_TOKEN_LTE = 12,                 /* TOKEN_LTE  */
  YYSYMBOL_TOKEN_EQUALITY = 13,            /* TOKEN_EQUALITY  */
  YYSYMBOL_TOKEN_LOGICAL_OR = 14,          /* TOKEN_LOGICAL_OR  */
  YYSYMBOL_TOKEN_LOGICAL_AND = 15,         /* TOKEN_LOGICAL_AND  */
  YYSYMBOL_TOKEN_NOT = 16,                 /* TOKEN_NOT  */
  YYSYMBOL_TOKEN_MUL = 17,                 /* TOKEN_MUL  */
  YYSYMBOL_TOKEN_MOD = 18,                 /* TOKEN_MOD  */
  YYSYMBOL_TOKEN_DIV = 19,                 /* TOKEN_DIV  */
  YYSYMBOL_TOKEN_EXPO = 20,                /* TOKEN_EXPO  */
  YYSYMBOL_TOKEN_LPAREN = 21,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 22,              /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_LSQUARE = 23,             /* TOKEN_LSQUARE  */
  YYSYMBOL_TOKEN_RSQUARE = 24,             /* TOKEN_RSQUARE  */
  YYSYMBOL_TOKEN_LCURLY = 25,              /* TOKEN_LCURLY  */
  YYSYMBOL_TOKEN_RCURLY = 26,              /* TOKEN_RCURLY  */
  YYSYMBOL_TOKEN_SEMI = 27,                /* TOKEN_SEMI  */
  YYSYMBOL_TOKEN_COMMA = 28,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_COMMENT = 29,             /* TOKEN_COMMENT  */
  YYSYMBOL_TOKEN_COLON = 30,               /* TOKEN_COLON  */
  YYSYMBOL_TOKEN_EQUAL = 31,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_BOOL = 32,                /* TOKEN_BOOL  */
  YYSYMBOL_TOKEN_CHAR = 33,                /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_STRING = 34,              /* TOKEN_STRING  */
  YYSYMBOL_TOKEN_IF = 35,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 36,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_FOR = 37,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_WHILE = 38,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_RETURN = 39,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_VOID = 40,                /* TOKEN_VOID  */
  YYSYMBOL_TOKEN_ARRAY = 41,               /* TOKEN_ARRAY  */
  YYSYMBOL_TOKEN_FUNCTION = 42,            /* TOKEN_FUNCTION  */
  YYSYMBOL_TOKEN_PRINT = 43,               /* TOKEN_PRINT  */
  YYSYMBOL_TOKEN_IDENT = 44,               /* TOKEN_IDENT  */
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
  YYSYMBOL_functionArgsP = 56,             /* functionArgsP  */
  YYSYMBOL_type = 57,                      /* type  */
  YYSYMBOL_bodyWithScope = 58,             /* bodyWithScope  */
  YYSYMBOL_variableDecls = 59,             /* variableDecls  */
  YYSYMBOL_int_list = 60,                  /* int_list  */
  YYSYMBOL_intListP = 61,                  /* intListP  */
  YYSYMBOL_bool_list = 62,                 /* bool_list  */
  YYSYMBOL_boolListP = 63,                 /* boolListP  */
  YYSYMBOL_char_list = 64,                 /* char_list  */
  YYSYMBOL_charListP = 65,                 /* charListP  */
  YYSYMBOL_string_list = 66,               /* string_list  */
  YYSYMBOL_stringListP = 67,               /* stringListP  */
  YYSYMBOL_statement = 68,                 /* statement  */
  YYSYMBOL_commaExprList = 69,             /* commaExprList  */
  YYSYMBOL_commaExprListP = 70,            /* commaExprListP  */
  YYSYMBOL_expr = 71,                      /* expr  */
  YYSYMBOL_logical = 72,                   /* logical  */
  YYSYMBOL_comparison = 73,                /* comparison  */
  YYSYMBOL_addsub = 74,                    /* addsub  */
  YYSYMBOL_multdiv = 75,                   /* multdiv  */
  YYSYMBOL_exponent = 76,                  /* exponent  */
  YYSYMBOL_negation = 77,                  /* negation  */
  YYSYMBOL_incdec = 78,                    /* incdec  */
  YYSYMBOL_factor = 79                     /* factor  */
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
#define YYLAST   277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

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
       0,    62,    62,    64,    65,    66,    69,    70,    71,    72,
      73,    74,    76,    78,    80,    82,    85,    86,    88,    89,
      91,    92,    93,    94,    97,    98,    99,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   117,   119,   121,   125,   126,   128,   129,   131,   133,
     135,   136,   139,   140,   142,   146,   147,   149,   150,   155,
     156,   157,   158,   159,   160,   161,   163,   166,   167,   169,
     170,   172,   173,   175,   176,   177,   180,   181,   182,   183,
     184,   186,   187,   188,   191,   192,   193,   194,   196,   197,
     199,   200,   201,   203,   204,   205,   208,   209,   210,   211,
     212,   213
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
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_EOF",
  "TOKEN_INT", "TOKEN_PLUS", "TOKEN_PLUSPLUS", "TOKEN_MINUSMINUS",
  "TOKEN_MINUS", "TOKEN_GT", "TOKEN_GTE", "TOKEN_LT", "TOKEN_LTE",
  "TOKEN_EQUALITY", "TOKEN_LOGICAL_OR", "TOKEN_LOGICAL_AND", "TOKEN_NOT",
  "TOKEN_MUL", "TOKEN_MOD", "TOKEN_DIV", "TOKEN_EXPO", "TOKEN_LPAREN",
  "TOKEN_RPAREN", "TOKEN_LSQUARE", "TOKEN_RSQUARE", "TOKEN_LCURLY",
  "TOKEN_RCURLY", "TOKEN_SEMI", "TOKEN_COMMA", "TOKEN_COMMENT",
  "TOKEN_COLON", "TOKEN_EQUAL", "TOKEN_BOOL", "TOKEN_CHAR", "TOKEN_STRING",
  "TOKEN_IF", "TOKEN_ELSE", "TOKEN_FOR", "TOKEN_WHILE", "TOKEN_RETURN",
  "TOKEN_VOID", "TOKEN_ARRAY", "TOKEN_FUNCTION", "TOKEN_PRINT",
  "TOKEN_IDENT", "TOKEN_NUMBER", "TOKEN_TRUE", "TOKEN_FALSE",
  "TOKEN_ACTUALCHAR", "TOKEN_ACTUALSTRING", "TOKEN_ERROR", "$accept",
  "prog", "decls", "fuctionDecls", "functionArgs", "functionArgsP", "type",
  "bodyWithScope", "variableDecls", "int_list", "intListP", "bool_list",
  "boolListP", "char_list", "charListP", "string_list", "stringListP",
  "statement", "commaExprList", "commaExprListP", "expr", "logical",
  "comparison", "addsub", "multdiv", "exponent", "negation", "incdec",
  "factor", YY_NULLPTR
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

#define YYPACT_NINF (-154)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -26,    -9,    26,  -154,   -26,   -26,    74,  -154,  -154,  -154,
       1,    12,    56,    64,    41,   135,  -154,    37,  -154,   136,
    -154,    24,  -154,    53,    45,    90,   101,   107,   123,   183,
     159,   191,   192,   193,   195,   182,   177,   177,   177,   177,
     177,  -154,  -154,  -154,  -154,  -154,    13,   196,   201,   202,
     203,   205,   207,    83,    78,   126,   180,    52,    93,   116,
     146,   147,   154,  -154,   208,   185,  -154,   197,  -154,   186,
    -154,  -154,  -154,  -154,  -154,   200,  -154,   209,  -154,   211,
    -154,   212,  -154,   213,  -154,   214,   187,   215,   216,   217,
     218,   219,   220,    52,  -154,    88,    88,    88,    88,    88,
     221,   222,   185,   204,   223,   197,  -154,   225,   186,  -154,
     226,   200,    44,    44,    44,    88,   233,   234,    32,    44,
       8,  -154,  -154,  -154,   230,    88,    88,    67,   194,   179,
      92,   184,   237,  -154,  -154,  -154,   232,   235,   236,   238,
     187,  -154,   239,  -154,   215,  -154,  -154,  -154,  -154,  -154,
    -154,   242,    35,  -154,  -154,    27,   241,   113,    44,  -154,
    -154,   243,   148,    44,   108,  -154,  -154,  -154,  -154,  -154,
    -154,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   246,   139,  -154,    44,  -154,   247,   194,
     179,   179,    92,    92,    92,    92,   184,   184,   237,   237,
     237,  -154,   113,    44,     6,  -154,    43,   153,  -154,  -154,
     244,    44,  -154,   165,   240,    88,   248,  -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     2,     5,     5,     0,     1,     3,     4,
       0,     0,     0,     0,     0,     0,    27,     0,    29,     0,
      32,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    17,    17,    17,
      17,    28,    30,    31,    33,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,    49,    37,    53,    38,    56,
      39,    20,    21,    22,    23,    19,     7,     0,     8,     0,
       9,     0,    10,     0,     6,     0,    45,    51,     0,     0,
       0,    58,     0,     0,    16,    26,    26,    26,    26,    26,
      47,     0,    49,     0,     0,    53,    52,     0,    56,    55,
       0,    19,     0,     0,     0,    26,     0,     0,     0,    68,
      99,    98,   101,   100,     0,    26,    26,     0,    72,    75,
      80,    83,    87,    89,    92,    95,     0,     0,     0,     0,
      45,    44,     0,    50,    51,    41,    54,    42,    57,    43,
      18,    99,     0,    91,    90,     0,     0,     0,     0,    60,
      61,     0,    70,    68,     0,    12,    24,    25,    94,    93,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    11,    46,    40,
      48,    96,    66,     0,     0,    62,     0,    67,     0,    71,
      74,    73,    78,    79,    76,    77,    81,    82,    84,    86,
      85,    88,     0,     0,    68,    97,     0,     0,    69,    63,
       0,     0,    64,     0,     0,    26,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,   206,  -154,   155,   129,   166,   -90,    11,   120,
    -154,   170,    97,   168,  -154,   167,  -154,  -113,  -153,  -154,
     -95,   105,    40,    23,    36,   -17,    94,   104,  -154
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    48,    94,    75,   124,   125,   101,
     141,    88,   103,    90,   106,    92,   109,   126,   161,   197,
     152,   128,   129,   130,   131,   132,   133,   134,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     127,   127,   127,   127,   127,   160,   136,   137,   138,   139,
     198,     5,   168,   169,   112,     5,     5,    53,     1,   155,
     127,     6,   113,   127,   162,   156,     7,   114,    16,   163,
     127,   127,    17,   168,   169,   166,   167,   171,   164,    18,
     112,   168,   169,    19,   193,    54,    55,    56,   113,   191,
     151,   121,   112,   114,   122,   123,    71,   115,   171,   159,
     113,   218,   127,   194,    24,   114,   171,   116,   162,   117,
     219,   118,    33,   168,   169,   119,   151,   121,    10,   220,
     122,   123,    30,    20,    72,    73,    74,    21,   151,   121,
      35,    22,   122,   123,   170,    23,   112,   178,   171,   216,
     179,   214,    34,    65,   113,    66,    11,    12,    13,   114,
      63,    36,    10,   115,    64,    14,    15,   127,   217,   162,
      76,   112,    37,   116,    77,   117,   223,   118,    38,   113,
     127,   119,   120,   121,   114,   226,   122,   123,   115,    25,
      11,    12,    13,    78,    39,   168,   169,    79,   116,    14,
     117,    67,   118,    68,   168,   169,   119,   151,   121,   168,
     169,   122,   123,   208,   209,   210,   213,    26,    27,    28,
     171,   168,   169,    80,    82,    29,   196,    81,    83,   171,
     221,    84,    31,    32,   171,    85,    41,   224,   174,   175,
     176,   177,    49,    50,    51,    52,   171,   202,   203,   204,
     205,   180,   181,   182,    40,    69,    46,    70,   172,   173,
       8,     9,   200,   201,   206,   207,   153,   154,    42,    43,
      44,    47,    45,    58,    59,    60,    57,    61,    93,    62,
      89,    87,   100,    86,    95,    91,    96,    97,    98,    99,
     150,   190,   104,   102,   107,   105,   110,   108,   142,   140,
     145,   144,   147,   149,   157,   158,   165,   183,   184,   111,
     188,   185,   186,   163,   187,   225,   189,   192,   212,   215,
     195,   222,   143,   146,   227,   148,   199,   211
};

static const yytype_uint8 yycheck[] =
{
      95,    96,    97,    98,    99,   118,    96,    97,    98,    99,
     163,     0,     6,     7,     8,     4,     5,     4,    44,   114,
     115,    30,    16,   118,   119,   115,     0,    21,    27,    21,
     125,   126,    31,     6,     7,   125,   126,    31,    30,    27,
       8,     6,     7,    31,   157,    32,    33,    34,    16,    22,
      44,    45,     8,    21,    48,    49,     4,    25,    31,    27,
      16,   214,   157,   158,    23,    21,    31,    35,   163,    37,
      27,    39,    48,     6,     7,    43,    44,    45,     4,    36,
      48,    49,    45,    27,    32,    33,    34,    31,    44,    45,
      45,    27,    48,    49,    27,    31,     8,     5,    31,   212,
       8,   196,    49,    25,    16,    27,    32,    33,    34,    21,
      27,    21,     4,    25,    31,    41,    42,   212,   213,   214,
      27,     8,    21,    35,    31,    37,   221,    39,    21,    16,
     225,    43,    44,    45,    21,   225,    48,    49,    25,     4,
      32,    33,    34,    27,    21,     6,     7,    31,    35,    41,
      37,    25,    39,    27,     6,     7,    43,    44,    45,     6,
       7,    48,    49,   180,   181,   182,    27,    32,    33,    34,
      31,     6,     7,    27,    27,    40,    28,    31,    31,    31,
      27,    27,    46,    47,    31,    31,    27,    22,     9,    10,
      11,    12,    37,    38,    39,    40,    31,   174,   175,   176,
     177,    17,    18,    19,    21,    25,    24,    27,    14,    15,
       4,     5,   172,   173,   178,   179,   112,   113,    27,    27,
      27,    44,    27,    22,    22,    22,    30,    22,    28,    22,
      33,    46,    45,    25,    25,    49,    25,    25,    25,    25,
     111,   144,    26,    28,    26,    28,    26,    28,    26,    28,
      27,    47,    27,    27,    21,    21,    26,    20,    26,    93,
     140,    26,    26,    21,    26,    25,    27,    26,    22,    22,
      27,    27,   102,   105,    26,   108,   171,   183
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    44,    52,    53,    54,    59,    30,     0,    53,    53,
       4,    32,    33,    34,    41,    42,    27,    31,    27,    31,
      27,    31,    27,    31,    23,     4,    32,    33,    34,    40,
      45,    46,    47,    48,    49,    45,    21,    21,    21,    21,
      21,    27,    27,    27,    27,    27,    24,    44,    55,    55,
      55,    55,    55,     4,    32,    33,    34,    30,    22,    22,
      22,    22,    22,    27,    31,    25,    27,    25,    27,    25,
      27,     4,    32,    33,    34,    57,    27,    31,    27,    31,
      27,    31,    27,    31,    27,    31,    25,    46,    62,    33,
      64,    49,    66,    28,    56,    25,    25,    25,    25,    25,
      45,    60,    28,    63,    26,    28,    65,    26,    28,    67,
      26,    57,     8,    16,    21,    25,    35,    37,    39,    43,
      44,    45,    48,    49,    58,    59,    68,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    58,    58,    58,    58,
      28,    61,    26,    62,    47,    27,    64,    27,    66,    27,
      56,    44,    71,    78,    78,    71,    58,    21,    21,    27,
      68,    69,    71,    21,    30,    26,    58,    58,     6,     7,
      27,    31,    14,    15,     9,    10,    11,    12,     5,     8,
      17,    18,    19,    20,    26,    26,    26,    26,    60,    27,
      63,    22,    26,    68,    71,    27,    28,    70,    69,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    76,    76,
      76,    77,    22,    27,    71,    22,    68,    71,    69,    27,
      36,    27,    27,    71,    22,    25,    58,    26
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    56,    56,
      57,    57,    57,    57,    58,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    66,    66,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    73,    73,    73,    73,
      73,    74,    74,    74,    75,    75,    75,    75,    76,    76,
      77,    77,    77,    78,    78,    78,    79,    79,    79,    79,
      79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     8,     8,     8,     8,
       8,    11,    11,    11,    11,    11,     4,     0,     3,     0,
       1,     1,     1,     1,     2,     2,     0,     4,     6,     4,
       6,     6,     4,     6,     4,     6,     8,     8,     8,     8,
      12,    11,    11,    11,     2,     0,     2,     0,     4,     0,
       2,     0,     2,     0,     2,     2,     0,     2,     0,     2,
       2,     2,     3,     6,     7,    11,     3,     2,     0,     3,
       0,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     1,
       2,     2,     1,     2,     2,     1,     3,     4,     1,     1,
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
#line 62 "bminor.bison"
             {parser_result = yyvsp[0];}
#line 1402 "parser.c"
    break;

  case 27: /* variableDecls: TOKEN_IDENT TOKEN_COLON TOKEN_INT TOKEN_SEMI  */
#line 102 "bminor.bison"
                                                             {yyval = decl_create(yyvsp[-3], type(yyvsp[-1]), 0,0,0) ;}
#line 1408 "parser.c"
    break;


#line 1412 "parser.c"

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

#line 216 "bminor.bison"


//int yywrap() { return 0; }


void  yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}
