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
#line 1 "src/le_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "module1.h"

#include <string.h>
int yylex(void);
void yyerror(const char *s);
int yyparse();
extern int lineno;
extern int errorinline;
int tree_flag=0;
int help_flag=0;


#line 88 "obj/le_parser.c"

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

#include "le_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TYPE = 3,                       /* TYPE  */
  YYSYMBOL_VOID = 4,                       /* VOID  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_OR = 9,                         /* OR  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_STRUCT = 11,                    /* STRUCT  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_ORDER = 13,                     /* ORDER  */
  YYSYMBOL_IDENT = 14,                     /* IDENT  */
  YYSYMBOL_NUM = 15,                       /* NUM  */
  YYSYMBOL_ADDSUB = 16,                    /* ADDSUB  */
  YYSYMBOL_DIVSTAR = 17,                   /* DIVSTAR  */
  YYSYMBOL_CHARACTER = 18,                 /* CHARACTER  */
  YYSYMBOL_THEN = 19,                      /* THEN  */
  YYSYMBOL_20_ = 20,                       /* '{'  */
  YYSYMBOL_21_ = 21,                       /* '}'  */
  YYSYMBOL_22_ = 22,                       /* ';'  */
  YYSYMBOL_23_ = 23,                       /* ','  */
  YYSYMBOL_24_ = 24,                       /* '('  */
  YYSYMBOL_25_ = 25,                       /* ')'  */
  YYSYMBOL_26_ = 26,                       /* '='  */
  YYSYMBOL_27_ = 27,                       /* '.'  */
  YYSYMBOL_28_ = 28,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 29,                  /* $accept  */
  YYSYMBOL_Prog = 30,                      /* Prog  */
  YYSYMBOL_Blockdecl = 31,                 /* Blockdecl  */
  YYSYMBOL_DeclStruct = 32,                /* DeclStruct  */
  YYSYMBOL_Champs = 33,                    /* Champs  */
  YYSYMBOL_Champ = 34,                     /* Champ  */
  YYSYMBOL_TypeUse = 35,                   /* TypeUse  */
  YYSYMBOL_DeclVar = 36,                   /* DeclVar  */
  YYSYMBOL_Declarateurs = 37,              /* Declarateurs  */
  YYSYMBOL_DeclFoncts = 38,                /* DeclFoncts  */
  YYSYMBOL_DeclFonct = 39,                 /* DeclFonct  */
  YYSYMBOL_EnTeteFonct = 40,               /* EnTeteFonct  */
  YYSYMBOL_Parametres = 41,                /* Parametres  */
  YYSYMBOL_ListTypVar = 42,                /* ListTypVar  */
  YYSYMBOL_Corps = 43,                     /* Corps  */
  YYSYMBOL_DeclVarLocal = 44,              /* DeclVarLocal  */
  YYSYMBOL_SuiteInstr = 45,                /* SuiteInstr  */
  YYSYMBOL_Instr = 46,                     /* Instr  */
  YYSYMBOL_Variable = 47,                  /* Variable  */
  YYSYMBOL_Exp = 48,                       /* Exp  */
  YYSYMBOL_TB = 49,                        /* TB  */
  YYSYMBOL_FB = 50,                        /* FB  */
  YYSYMBOL_M = 51,                         /* M  */
  YYSYMBOL_E = 52,                         /* E  */
  YYSYMBOL_T = 53,                         /* T  */
  YYSYMBOL_F = 54,                         /* F  */
  YYSYMBOL_Arguments = 55,                 /* Arguments  */
  YYSYMBOL_ListExp = 56                    /* ListExp  */
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
typedef yytype_int8 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  124

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


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
       2,     2,     2,    28,     2,     2,     2,     2,     2,     2,
      24,    25,     2,     2,    23,     2,    27,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    22,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    20,     2,    21,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    63,    66,    70,    79,    93,    98,   106,
     116,   122,   133,   142,   150,   158,   163,   171,   180,   192,
     208,   214,   221,   231,   241,   256,   259,   263,   271,   276,
     281,   288,   294,   304,   310,   316,   321,   325,   329,   336,
     348,   356,   364,   370,   378,   384,   392,   398,   406,   412,
     420,   426,   432,   438,   444,   449,   453,   458,   462,   467,
     473,   480,   489,   492
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TYPE", "VOID", "IF",
  "ELSE", "WHILE", "RETURN", "OR", "AND", "STRUCT", "EQ", "ORDER", "IDENT",
  "NUM", "ADDSUB", "DIVSTAR", "CHARACTER", "THEN", "'{'", "'}'", "';'",
  "','", "'('", "')'", "'='", "'.'", "'!'", "$accept", "Prog", "Blockdecl",
  "DeclStruct", "Champs", "Champ", "TypeUse", "DeclVar", "Declarateurs",
  "DeclFoncts", "DeclFonct", "EnTeteFonct", "Parametres", "ListTypVar",
  "Corps", "DeclVarLocal", "SuiteInstr", "Instr", "Variable", "Exp", "TB",
  "FB", "M", "E", "T", "F", "Arguments", "ListExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -100,    25,    45,  -100,  -100,    -7,    23,  -100,    43,  -100,
      73,  -100,    41,    44,    52,    50,    48,    64,    84,  -100,
    -100,  -100,    83,    39,    83,  -100,    86,  -100,    50,    85,
    -100,    87,    72,    76,     0,  -100,    88,    78,  -100,  -100,
      88,  -100,    33,  -100,  -100,    39,    82,  -100,  -100,    70,
    -100,    81,    89,    51,    90,  -100,  -100,  -100,  -100,    63,
      92,  -100,  -100,    67,    67,    91,  -100,    67,  -100,  -100,
      67,    67,    80,     5,    98,    97,    99,    94,   100,  -100,
      67,    38,    67,   102,  -100,     1,    11,    67,  -100,    26,
    -100,    67,  -100,    67,    67,    67,    67,    67,   109,    95,
      96,  -100,     7,  -100,    10,    10,   101,  -100,    98,    97,
      99,    94,   100,  -100,   103,    67,  -100,   105,  -100,  -100,
    -100,   109,    10,  -100
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,    10,     0,     0,     5,     0,     4,
       2,    16,     0,     0,    11,    14,     0,     0,     0,    15,
      25,    17,     0,     0,     0,    12,     0,    11,     0,    29,
      20,     0,     0,    21,     0,     8,     0,     0,    13,    27,
       0,    26,     0,    23,    19,     0,     0,     7,    14,     0,
      18,     0,     0,     0,    40,    29,    24,    38,    28,     0,
       0,     6,     9,     0,     0,    40,    56,     0,    57,    36,
       0,     0,    59,     0,    42,    44,    46,    48,    50,    52,
      61,     0,     0,     0,    22,     0,     0,    61,    53,     0,
      54,     0,    35,     0,     0,     0,     0,     0,    63,     0,
      60,    37,     0,    39,     0,     0,     0,    55,    41,    43,
      45,    47,    49,    51,     0,     0,    30,    31,    33,    58,
      34,    62,     0,    32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,  -100,    93,  -100,   104,    -1,   106,   107,  -100,
     111,  -100,   108,  -100,  -100,  -100,    68,   -99,   -42,   -51,
      36,    31,    34,    35,    37,   -63,    42,  -100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     7,    34,    35,    31,     9,    16,    10,
      11,    12,    32,    33,    21,    29,    42,    58,    72,    98,
      74,    75,    76,    77,    78,    79,    99,   100
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      59,     8,    73,     4,    88,   117,   118,    13,    90,    18,
      91,    17,    85,    86,    91,    51,    91,    52,    53,    89,
      91,    46,    36,   123,    54,     3,   104,    92,    40,   116,
      55,   102,    57,    36,   113,    91,   105,    14,    51,    59,
      52,    53,     4,    51,    60,    52,    53,    54,     4,     5,
      17,   107,    54,    55,    56,    57,     6,    15,    55,   101,
      57,    20,    59,    59,   121,    65,    66,    67,    22,    68,
      25,    26,    23,    69,    24,    70,     4,     5,    27,    71,
      59,    65,    66,    67,    17,    68,     4,    30,     4,    82,
      83,    70,    62,    26,    17,    71,     6,    44,    28,    45,
      38,    43,    48,    50,    61,    63,    84,    83,    93,    94,
      96,   122,    95,    64,    80,    87,   103,    97,    91,   115,
     114,    19,    39,    81,   109,   120,   119,   108,   110,   106,
     111,     0,    37,   112,     0,    41,     0,     0,    47,     0,
       0,     0,     0,    49
};

static const yytype_int8 yycheck[] =
{
      42,     2,    53,     3,    67,   104,   105,    14,    71,    10,
       9,    11,    63,    64,     9,     5,     9,     7,     8,    70,
       9,    21,    23,   122,    14,     0,    25,    22,    29,    22,
      20,    82,    22,    34,    97,     9,    25,    14,     5,    81,
       7,     8,     3,     5,    45,     7,     8,    14,     3,     4,
      11,    25,    14,    20,    21,    22,    11,    14,    20,    21,
      22,    20,   104,   105,   115,    14,    15,    16,    24,    18,
      22,    23,    20,    22,    24,    24,     3,     4,    14,    28,
     122,    14,    15,    16,    11,    18,     3,     4,     3,    26,
      27,    24,    22,    23,    11,    28,    11,    25,    14,    23,
      14,    14,    14,    25,    22,    24,    14,    27,    10,    12,
      16,     6,    13,    24,    24,    24,    14,    17,     9,    23,
      25,    10,    29,    55,    93,    22,    25,    91,    94,    87,
      95,    -1,    24,    96,    -1,    29,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    30,    31,     0,     3,     4,    11,    32,    35,    36,
      38,    39,    40,    14,    14,    14,    37,    11,    35,    39,
      20,    43,    24,    20,    24,    22,    23,    14,    14,    44,
       4,    35,    41,    42,    33,    34,    35,    41,    14,    32,
      35,    36,    45,    14,    25,    23,    21,    34,    14,    37,
      25,     5,     7,     8,    14,    20,    21,    22,    46,    47,
      35,    22,    22,    24,    24,    14,    15,    16,    18,    22,
      24,    28,    47,    48,    49,    50,    51,    52,    53,    54,
      24,    45,    26,    27,    14,    48,    48,    24,    54,    48,
      54,     9,    22,    10,    12,    13,    16,    17,    48,    55,
      56,    21,    48,    14,    25,    25,    55,    25,    49,    50,
      51,    52,    53,    54,    25,    23,    22,    46,    46,    25,
      22,    48,     6,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    31,    31,    31,    32,    33,    33,    34,
      35,    35,    36,    37,    37,    38,    38,    39,    40,    40,
      41,    41,    42,    42,    43,    44,    44,    44,    45,    45,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    50,    51,    51,    52,
      52,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    56,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     6,     2,     1,     3,
       1,     2,     3,     3,     1,     2,     1,     2,     5,     5,
       1,     1,     4,     2,     4,     0,     2,     2,     2,     0,
       4,     5,     7,     5,     5,     3,     2,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     2,     2,     3,     1,     1,     4,     1,
       1,     0,     3,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* Prog: Blockdecl DeclFoncts  */
#line 50 "src/le_parser.y"
                                        {
                                            (yyval.node) = makeNode(Prog);
                                            addChild((yyval.node), (yyvsp[-1].node));
                                            addChild((yyval.node), (yyvsp[0].node));
                                            
                                            if (tree_flag){
                                                printTree((yyval.node));
                                            }
                                            deleteTree((yyval.node));
                                        }
#line 1490 "obj/le_parser.c"
    break;

  case 3: /* Blockdecl: %empty  */
#line 63 "src/le_parser.y"
                                        {
                                            (yyval.node) = makeNode(Blockdecl);
                                        }
#line 1498 "obj/le_parser.c"
    break;

  case 4: /* Blockdecl: Blockdecl DeclVar  */
#line 66 "src/le_parser.y"
                                       {
                                                (yyval.node)=(yyvsp[-1].node);
                                                addChild((yyval.node),(yyvsp[0].node));
                                        }
#line 1507 "obj/le_parser.c"
    break;

  case 5: /* Blockdecl: Blockdecl DeclStruct  */
#line 70 "src/le_parser.y"
                                        {
                                            (yyval.node)=(yyvsp[-1].node);
                                            addChild((yyval.node),(yyvsp[0].node));
                                        }
#line 1516 "obj/le_parser.c"
    break;

  case 6: /* DeclStruct: STRUCT IDENT '{' Champs '}' ';'  */
#line 80 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(DeclStruct);
                                            
                                            Node *child2=makeNode(IDENT_tok);
                                            child2->name=strdup((yyvsp[-4].ident));
                                            
                                            addChild((yyval.node),child2);
                                            addSibling(child2,(yyvsp[-2].node));

                                        }
#line 1531 "obj/le_parser.c"
    break;

  case 7: /* Champs: Champs Champ  */
#line 94 "src/le_parser.y"
                                        {
                                            (yyval.node)=(yyvsp[-1].node);
                                            addChild((yyval.node),(yyvsp[0].node));
                                        }
#line 1540 "obj/le_parser.c"
    break;

  case 8: /* Champs: Champ  */
#line 99 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(Champs);
                                            addChild((yyval.node),(yyvsp[0].node));
                                        }
#line 1549 "obj/le_parser.c"
    break;

  case 9: /* Champ: TypeUse Declarateurs ';'  */
#line 107 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(Champ);
                                            addChild((yyval.node),(yyvsp[-2].node));
                                            addChild((yyval.node),(yyvsp[-1].node));
                                        }
#line 1559 "obj/le_parser.c"
    break;

  case 10: /* TypeUse: TYPE  */
#line 117 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(TypeUse);
                                            (yyval.node)->name=strdup((yyvsp[0].type));

                                        }
#line 1569 "obj/le_parser.c"
    break;

  case 11: /* TypeUse: STRUCT IDENT  */
#line 122 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(TypeUse);
                                            (yyval.node)->name=strdup("struct");

                                            Node *child =makeNode(IDENT_tok);
                                            child->name=strdup((yyvsp[0].ident));
                                            addChild((yyval.node),child);
                                        }
#line 1582 "obj/le_parser.c"
    break;

  case 12: /* DeclVar: TypeUse Declarateurs ';'  */
#line 133 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(DeclVar);
                                            addChild((yyval.node),(yyvsp[-2].node));
                                            addChild((yyval.node),(yyvsp[-1].node));
                                            
                                        }
#line 1593 "obj/le_parser.c"
    break;

  case 13: /* Declarateurs: Declarateurs ',' IDENT  */
#line 143 "src/le_parser.y"
                                        {   
                                            
                                            Node *node = makeNode(IDENT_tok);
                                            node->name = strdup((yyvsp[0].ident));
                                            addSibling((yyvsp[-2].node),node);
                                             (yyval.node)=(yyvsp[-2].node);
                                        }
#line 1605 "obj/le_parser.c"
    break;

  case 14: /* Declarateurs: IDENT  */
#line 151 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(IDENT_tok);
                                            (yyval.node)->name = strdup((yyvsp[0].ident));
                                        }
#line 1614 "obj/le_parser.c"
    break;

  case 15: /* DeclFoncts: DeclFoncts DeclFonct  */
#line 159 "src/le_parser.y"
                                        {
                                            (yyval.node)=(yyvsp[-1].node);
                                            addChild((yyval.node),(yyvsp[0].node));
                                        }
#line 1623 "obj/le_parser.c"
    break;

  case 16: /* DeclFoncts: DeclFonct  */
#line 164 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(DeclFoncts);
                                            addChild((yyval.node),(yyvsp[0].node));
                                        }
#line 1632 "obj/le_parser.c"
    break;

  case 17: /* DeclFonct: EnTeteFonct Corps  */
#line 172 "src/le_parser.y"
                                        {
                                            (yyval.node)=makeNode(DeclFonct);
                                            addChild((yyval.node),(yyvsp[-1].node));
                                            addSibling((yyvsp[-1].node),(yyvsp[0].node));
                                        }
#line 1642 "obj/le_parser.c"
    break;

  case 18: /* EnTeteFonct: TypeUse IDENT '(' Parametres ')'  */
#line 181 "src/le_parser.y"
                                        {
                                        (yyval.node)=makeNode(EnTeteFonct);
                                        addChild((yyval.node),(yyvsp[-4].node));
                                     
                                        Node *child2= makeNode(IDENT_tok);
                                        child2->name =strdup((yyvsp[-3].ident));
                                        addSibling((yyvsp[-4].node),child2);
                                        addSibling(child2,(yyvsp[-1].node));

                                    }
#line 1657 "obj/le_parser.c"
    break;

  case 19: /* EnTeteFonct: VOID IDENT '(' Parametres ')'  */
#line 193 "src/le_parser.y"
                                    {
                                        (yyval.node)=makeNode(EnTeteFonct);
                                        Node *child1 =makeNode(VOID_tok);
                                        child1->name =strdup("void");
                                        addChild((yyval.node),child1);
                                        Node *child2= makeNode(IDENT_tok);
                                        child2->name =strdup((yyvsp[-3].ident));
                                        addSibling(child1,child2);
                                        addSibling(child2,(yyvsp[-1].node));

                                    }
#line 1673 "obj/le_parser.c"
    break;

  case 20: /* Parametres: VOID  */
#line 208 "src/le_parser.y"
                                    {
                                        (yyval.node)=makeNode(Parametres);
                                        Node *node=makeNode(VOID_tok);

                                        addChild((yyval.node),node);
                                    }
#line 1684 "obj/le_parser.c"
    break;

  case 21: /* Parametres: ListTypVar  */
#line 214 "src/le_parser.y"
                                    {
                                        (yyval.node)=makeNode(Parametres);
                                        addChild((yyval.node),(yyvsp[0].node));
                                    }
#line 1693 "obj/le_parser.c"
    break;

  case 22: /* ListTypVar: ListTypVar ',' TypeUse IDENT  */
#line 222 "src/le_parser.y"
                                    {
                                        
                                        Node *node2= makeNode(IDENT_tok);
                                        node2->name =strdup((yyvsp[0].ident));
                                        (yyval.node) = (yyvsp[-3].node);
                                        addChild((yyval.node), (yyvsp[-1].node));
                                        addChild((yyvsp[-1].node), node2); 

                                    }
#line 1707 "obj/le_parser.c"
    break;

  case 23: /* ListTypVar: TypeUse IDENT  */
#line 232 "src/le_parser.y"
                                    {
                                        (yyval.node)=(yyvsp[-1].node);
                                        Node *node= makeNode(IDENT_tok);
                                        node->name =strdup((yyvsp[0].ident));
                                        addChild((yyval.node),node); 
                                    }
#line 1718 "obj/le_parser.c"
    break;

  case 24: /* Corps: '{' DeclVarLocal SuiteInstr '}'  */
#line 242 "src/le_parser.y"
                                    {
                                        (yyval.node)=makeNode(Corps);
                                        (yyval.node) = makeNode(Corps);
                                        if ((yyvsp[-2].node)) addChild((yyval.node), (yyvsp[-2].node));
                                        if ((yyvsp[-1].node)) addChild((yyval.node), (yyvsp[-1].node));
                                        if (!((yyvsp[-2].node) || (yyvsp[-1].node))) {
                                            deleteTree((yyval.node));
                                            (yyval.node) = NULL;
                                        }

                                    }
#line 1734 "obj/le_parser.c"
    break;

  case 25: /* DeclVarLocal: %empty  */
#line 256 "src/le_parser.y"
                                {
                                    (yyval.node)=makeNode(DeclVarLocal);
                                }
#line 1742 "obj/le_parser.c"
    break;

  case 26: /* DeclVarLocal: DeclVarLocal DeclVar  */
#line 259 "src/le_parser.y"
                                {
                                    (yyval.node)=(yyvsp[-1].node);
                                    addChild((yyval.node),(yyvsp[0].node));
                                }
#line 1751 "obj/le_parser.c"
    break;

  case 27: /* DeclVarLocal: DeclVarLocal DeclStruct  */
#line 263 "src/le_parser.y"
                                 {
                                    (yyval.node)=(yyvsp[-1].node);
                                    addChild((yyval.node),(yyvsp[0].node));    
                                }
#line 1760 "obj/le_parser.c"
    break;

  case 28: /* SuiteInstr: SuiteInstr Instr  */
#line 271 "src/le_parser.y"
                                {
                                    (yyval.node)=(yyvsp[-1].node);
                                    addChild((yyval.node),(yyvsp[0].node));
                                }
#line 1769 "obj/le_parser.c"
    break;

  case 29: /* SuiteInstr: %empty  */
#line 276 "src/le_parser.y"
                                {
                                    (yyval.node)=makeNode(SuiteInstr);
                                }
#line 1777 "obj/le_parser.c"
    break;

  case 30: /* Instr: Variable '=' Exp ';'  */
#line 282 "src/le_parser.y"
                                {
                                    (yyval.node) = makeNode(assign);
                                    (yyval.node)->name = strdup("=");
                                    addChild((yyval.node), (yyvsp[-3].node));
                                    addChild((yyval.node), (yyvsp[-1].node));  
                                }
#line 1788 "obj/le_parser.c"
    break;

  case 31: /* Instr: IF '(' Exp ')' Instr  */
#line 289 "src/le_parser.y"
                                {
                                    (yyval.node)=makeNode(IF_tok);
                                    addChild((yyval.node),(yyvsp[-2].node));
                                    addChild((yyval.node),(yyvsp[0].node));
                                }
#line 1798 "obj/le_parser.c"
    break;

  case 32: /* Instr: IF '(' Exp ')' Instr ELSE Instr  */
#line 295 "src/le_parser.y"
                                {
                                    (yyval.node)=makeNode(IF_tok);
                                    Node *node_else = makeNode(ELSE_tok);
                                    addChild((yyval.node), (yyvsp[-4].node));   // condition
                                    addChild((yyval.node), (yyvsp[-2].node));   // then
                                    addChild((yyval.node), node_else);
                                    addChild(node_else, (yyvsp[0].node));

                                }
#line 1812 "obj/le_parser.c"
    break;

  case 33: /* Instr: WHILE '(' Exp ')' Instr  */
#line 305 "src/le_parser.y"
                                {
                                    (yyval.node)=makeNode(WHILE_tok);
                                    addChild((yyval.node),(yyvsp[-2].node));
                                    addChild((yyval.node),(yyvsp[0].node));                                            
                                }
#line 1822 "obj/le_parser.c"
    break;

  case 34: /* Instr: IDENT '(' Arguments ')' ';'  */
#line 311 "src/le_parser.y"
                                {
                                    (yyval.node)=makeNode(IDENT_tok);
                                    (yyval.node)->name =strdup((yyvsp[-4].ident));
                                    addChild((yyval.node),(yyvsp[-2].node));
                                }
#line 1832 "obj/le_parser.c"
    break;

  case 35: /* Instr: RETURN Exp ';'  */
#line 317 "src/le_parser.y"
                                {
                                    (yyval.node)=makeNode(RETURN_tok);
                                    addChild((yyval.node),(yyvsp[-1].node));
                                }
#line 1841 "obj/le_parser.c"
    break;

  case 36: /* Instr: RETURN ';'  */
#line 322 "src/le_parser.y"
                                {
                                     (yyval.node)= makeNode(RETURN_tok) ;
                                }
#line 1849 "obj/le_parser.c"
    break;

  case 37: /* Instr: '{' SuiteInstr '}'  */
#line 326 "src/le_parser.y"
                                {
                                     (yyval.node) = (yyvsp[-1].node);
                                }
#line 1857 "obj/le_parser.c"
    break;

  case 38: /* Instr: ';'  */
#line 330 "src/le_parser.y"
                                {
                                    (yyval.node)=NULL;
                                }
#line 1865 "obj/le_parser.c"
    break;

  case 39: /* Variable: Variable '.' IDENT  */
#line 337 "src/le_parser.y"
                               {
                                if((yyvsp[-2].node)){
                                    (yyval.node)=(yyvsp[-2].node);
                                    Node *field = makeNode(IDENT_tok);
                                    field->name = strdup((yyvsp[0].ident));
                                    addChild((yyval.node), field);
                                    } 
                                else
                                    (yyval.node)=NULL;
                                }
#line 1880 "obj/le_parser.c"
    break;

  case 40: /* Variable: IDENT  */
#line 348 "src/le_parser.y"
                                {
                                (yyval.node) = makeNode(Variable);
                                Node *node = makeNode(IDENT_tok);
                                node->name=strdup((yyvsp[0].ident));
                                addChild((yyval.node),node);
                                }
#line 1891 "obj/le_parser.c"
    break;

  case 41: /* Exp: Exp OR TB  */
#line 357 "src/le_parser.y"
               {
                      (yyval.node)=makeNode(OR_tok);
                      
                      addChild((yyval.node), (yyvsp[-2].node));
                      addChild((yyval.node), (yyvsp[0].node));

                }
#line 1903 "obj/le_parser.c"
    break;

  case 42: /* Exp: TB  */
#line 365 "src/le_parser.y"
                {
                    (yyval.node)=(yyvsp[0].node)   ;
                }
#line 1911 "obj/le_parser.c"
    break;

  case 43: /* TB: TB AND FB  */
#line 371 "src/le_parser.y"
                {
                      (yyval.node)=makeNode(AND_tok);
                    
                      addChild((yyval.node), (yyvsp[-2].node));
                      addChild((yyval.node), (yyvsp[0].node));

                }
#line 1923 "obj/le_parser.c"
    break;

  case 44: /* TB: FB  */
#line 379 "src/le_parser.y"
                {
                    (yyval.node)=(yyvsp[0].node)   ;
                }
#line 1931 "obj/le_parser.c"
    break;

  case 45: /* FB: FB EQ M  */
#line 385 "src/le_parser.y"
                {
                      (yyval.node)=makeNode(EQ_tok);
                      (yyval.node)->name=strdup((yyvsp[-1].comp));
                      addChild((yyval.node), (yyvsp[-2].node));
                      addChild((yyval.node), (yyvsp[0].node));

                }
#line 1943 "obj/le_parser.c"
    break;

  case 46: /* FB: M  */
#line 393 "src/le_parser.y"
                {
                    (yyval.node)=(yyvsp[0].node)   ;
                }
#line 1951 "obj/le_parser.c"
    break;

  case 47: /* M: M ORDER E  */
#line 399 "src/le_parser.y"
                {
                      (yyval.node)=makeNode(ORDER_tok);
                      (yyval.node)->name=strdup((yyvsp[-1].comp));
                      addChild((yyval.node), (yyvsp[-2].node));
                      addChild((yyval.node), (yyvsp[0].node));

                }
#line 1963 "obj/le_parser.c"
    break;

  case 48: /* M: E  */
#line 407 "src/le_parser.y"
                {
                    (yyval.node)=(yyvsp[0].node)   ;
                }
#line 1971 "obj/le_parser.c"
    break;

  case 49: /* E: E ADDSUB T  */
#line 413 "src/le_parser.y"
                {
                      (yyval.node)=makeNode(ADDSUB_tok);
                      (yyval.node)->name=strdup((yyvsp[-1].byte));
                      addChild((yyval.node), (yyvsp[-2].node));
                      addChild((yyval.node), (yyvsp[0].node));

                }
#line 1983 "obj/le_parser.c"
    break;

  case 50: /* E: T  */
#line 421 "src/le_parser.y"
                {
                    (yyval.node)=(yyvsp[0].node)  ; 
                }
#line 1991 "obj/le_parser.c"
    break;

  case 51: /* T: T DIVSTAR F  */
#line 426 "src/le_parser.y"
                   {
                    (yyval.node)= makeNode(DIVSTAR_tok);
                    (yyval.node)->name=strdup((yyvsp[-1].byte));
                    addChild((yyval.node),(yyvsp[-2].node));
                    addChild((yyval.node),(yyvsp[0].node));
                    }
#line 2002 "obj/le_parser.c"
    break;

  case 52: /* T: F  */
#line 432 "src/le_parser.y"
                    {
                    (yyval.node)=(yyvsp[0].node);
                    }
#line 2010 "obj/le_parser.c"
    break;

  case 53: /* F: ADDSUB F  */
#line 438 "src/le_parser.y"
                {
                    Node *op = makeNode(ADDSUB_tok);
                    op->name = strdup((yyvsp[-1].byte));  // + ou -
                    addChild(op, (yyvsp[0].node));
                    (yyval.node) = op;;
                }
#line 2021 "obj/le_parser.c"
    break;

  case 54: /* F: '!' F  */
#line 444 "src/le_parser.y"
                {
                (yyval.node)=makeNode(not);
                addChild((yyval.node),(yyvsp[0].node)) ;
                }
#line 2030 "obj/le_parser.c"
    break;

  case 55: /* F: '(' Exp ')'  */
#line 449 "src/le_parser.y"
                   {
                    (yyval.node)=(yyvsp[-1].node);
                    }
#line 2038 "obj/le_parser.c"
    break;

  case 56: /* F: NUM  */
#line 453 "src/le_parser.y"
                        {
                        (yyval.node)=makeNode(NUM_tok);
                        (yyval.node)->isnum = 1;
                        (yyval.node)->val=(yyvsp[0].num);
                        }
#line 2048 "obj/le_parser.c"
    break;

  case 57: /* F: CHARACTER  */
#line 458 "src/le_parser.y"
                        {
                        (yyval.node)=makeNode(CHARACTER_tok);
                        (yyval.node)->name=strdup((yyvsp[0].byte));
                        }
#line 2057 "obj/le_parser.c"
    break;

  case 58: /* F: IDENT '(' Arguments ')'  */
#line 462 "src/le_parser.y"
                               {
                                (yyval.node)=makeNode(IDENT_tok);
                                (yyval.node)->name=strdup((yyvsp[-3].ident));
                                addChild((yyval.node),(yyvsp[-1].node));
                                }
#line 2067 "obj/le_parser.c"
    break;

  case 59: /* F: Variable  */
#line 467 "src/le_parser.y"
                       {    
                        (yyval.node)=(yyvsp[0].node);
                        }
#line 2075 "obj/le_parser.c"
    break;

  case 60: /* Arguments: ListExp  */
#line 473 "src/le_parser.y"
                    {
                     (yyval.node)=makeNode(Arguments);
                     
                     addChild((yyval.node),(yyvsp[0].node));
                    
                    }
#line 2086 "obj/le_parser.c"
    break;

  case 61: /* Arguments: %empty  */
#line 480 "src/le_parser.y"
                    {
                    (yyval.node)=makeNode(Arguments);
                    Node *child =makeNode(VOID_tok) ;
                    child->name=strdup("void");
                    addChild((yyval.node),child);
                    }
#line 2097 "obj/le_parser.c"
    break;

  case 62: /* ListExp: ListExp ',' Exp  */
#line 489 "src/le_parser.y"
                            {
                                addSibling((yyvsp[-2].node),(yyvsp[0].node));
                            }
#line 2105 "obj/le_parser.c"
    break;

  case 63: /* ListExp: Exp  */
#line 492 "src/le_parser.y"
                            {
                                (yyval.node)=(yyvsp[0].node);
                            }
#line 2113 "obj/le_parser.c"
    break;


#line 2117 "obj/le_parser.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 497 "src/le_parser.y"


void yyerror(const char *s){
    fprintf(stderr, "Erreur syntaxique à la ligne %d , colonne %d : %s\n", lineno,errorinline, s);
}


int main(int argc, char *argv[]) {
    if (read_option(argc, argv) == 1){
        fprintf(stderr, "option do not exists\n");
        return 3;
    }
    if (help_flag){
        print_synopsis();
        return 3;
    }
    if (argc > 1 && !last_is_option(argc, argv)){
        freopen(argv[argc - 1], "r", stdin);
    }
    
    // Si pas de fichier spécifié, utiliser stdin (comportement par défaut)
    // yyin est déjà initialisé à stdin par défaut
    
    int result = yyparse();
    
    // Retourner directement le résultat sans message
    // 0 = succès, 1 = erreur syntaxique
    return result;
}
