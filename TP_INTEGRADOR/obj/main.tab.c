/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "../src/main.y"

	#include <math.h>
	#include <stdio.h>
	#include <ctype.h>
	#include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>

	extern FILE* yyin;
	extern int yylineno;

	int yylex(void);

	int yywrap(){
		return 1;
	}

	int yyerror(char* msg) {
		//printf("\nFallo el analisis en la linea %d: %s \n", yylineno, msg);
		return 0;
	}



#line 95 "main.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MAIN_TAB_H_INCLUDED
# define YY_YY_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CONSTANTE_REAL = 258,
    CONSTANTE_DECIMAL = 259,
    CONSTANTE_OCTAL = 260,
    CONSTANTE_HEXADECIMAL = 261,
    CONSTANTE_CARACTER = 262,
    IDENTIFICADOR = 263,
    LITERAL_CADENA = 264,
    COMENTARIO_UNA_LINEA = 265,
    COMENTARIO_MULTI_LINEA = 266,
    ESPACIO_EN_BLANCO_O_TABULACION = 267,
    AUTO = 268,
    BREAK = 269,
    CASE = 270,
    CHAR = 271,
    CONST = 272,
    CONTINUE = 273,
    DEFAULT = 274,
    DEFINE = 275,
    DO = 276,
    DOUBLE = 277,
    ELSE = 278,
    ENUM = 279,
    EXTERN = 280,
    FLOAT = 281,
    FOR = 282,
    GOTO = 283,
    IF = 284,
    INT = 285,
    INCLUDE = 286,
    LONG = 287,
    REGISTER = 288,
    RETURN = 289,
    SHORT = 290,
    SIGNED = 291,
    SIZEOF = 292,
    STATIC = 293,
    STRUCT = 294,
    SWITCH = 295,
    TYPEDEF = 296,
    UNION = 297,
    UNSIGNED = 298,
    VOID = 299,
    VOLATILE = 300,
    WHILE = 301,
    IGUAL_IGUAL = 302,
    DISTINTO = 303,
    MENOR_IGUAL = 304,
    MAYOR_IGUAL = 305,
    MAS_MAS = 306,
    MENOS_MENOS = 307,
    MAS_IGUAL = 308,
    MENOS_IGUAL = 309,
    POR_IGUAL = 310,
    DIVISION_IGUAL = 311,
    MODULO_IGUAL = 312,
    AND_IGUAL = 313,
    OR_IGUAL = 314,
    OR_EXCLUSIVO_IGUAL = 315,
    AND_LOGICO = 316,
    OR_LOGICO = 317,
    ELIPSIS = 318,
    CORRIMIENTO_A_IZQUIERDA = 319,
    CORRIMIENTO_A_DERECHA = 320,
    CORRIMIENTO_A_IZQUIERDA_IGUAL = 321,
    CORRIMIENTO_A_DERECHA_IGUAL = 322,
    BARRA_INVERTIDA = 323,
    PUNTERO_FLECHA = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "../src/main.y"

	char* cval;
	int ival;
	double dval;

#line 223 "main.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  94
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2378

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  228
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

#define YYUNDEFTOK  2
#define YYMAXUTOK   324


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    93,     2,     2,     2,    91,    88,     2,
      80,    81,    72,    70,    77,    71,    94,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    74,
      89,    78,    90,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    83,    87,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    84,     2,     2,     2,
       2,     2,     2,    75,    86,    76,    92,     2,     2,     2,
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
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    63,    64,    66,    67,    69,    70,    72,
      73,    74,    75,    77,    78,    80,    81,    83,    84,    85,
      86,    87,    88,    90,    91,    92,    93,    94,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     109,   110,   112,   113,   114,   116,   117,   119,   120,   122,
     123,   125,   126,   128,   130,   131,   132,   133,   135,   136,
     138,   139,   140,   142,   143,   144,   146,   147,   149,   150,
     152,   153,   155,   156,   157,   158,   159,   160,   161,   163,
     164,   165,   166,   168,   169,   171,   172,   174,   175,   177,
     178,   179,   181,   182,   184,   185,   186,   188,   189,   191,
     192,   194,   195,   196,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   208,   210,   211,   212,   213,   214,   215,
     217,   218,   219,   221,   222,   224,   225,   226,   227,   229,
     230,   232,   233,   234,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   247,   248,   249,   250,   251,   253,
     254,   256,   257,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   271,   272,   274,   276,   277,   279,
     280,   282,   283,   285,   286,   288,   289,   291,   292,   293,
     295,   296,   297,   298,   299,   301,   302,   303,   305,   306,
     307,   309,   310,   311,   312,   314,   315,   317,   318,   319,
     320,   321,   322,   324,   325,   326,   327,   328,   329,   331,
     332,   333,   334,   335,   336,   337,   338,   340,   341,   342,
     343,   345,   346,   348,   349,   350,   351,   352,   353
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANTE_REAL", "CONSTANTE_DECIMAL",
  "CONSTANTE_OCTAL", "CONSTANTE_HEXADECIMAL", "CONSTANTE_CARACTER",
  "IDENTIFICADOR", "LITERAL_CADENA", "COMENTARIO_UNA_LINEA",
  "COMENTARIO_MULTI_LINEA", "ESPACIO_EN_BLANCO_O_TABULACION", "AUTO",
  "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DEFINE", "DO",
  "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INT",
  "INCLUDE", "LONG", "REGISTER", "RETURN", "SHORT", "SIGNED", "SIZEOF",
  "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID",
  "VOLATILE", "WHILE", "IGUAL_IGUAL", "DISTINTO", "MENOR_IGUAL",
  "MAYOR_IGUAL", "MAS_MAS", "MENOS_MENOS", "MAS_IGUAL", "MENOS_IGUAL",
  "POR_IGUAL", "DIVISION_IGUAL", "MODULO_IGUAL", "AND_IGUAL", "OR_IGUAL",
  "OR_EXCLUSIVO_IGUAL", "AND_LOGICO", "OR_LOGICO", "ELIPSIS",
  "CORRIMIENTO_A_IZQUIERDA", "CORRIMIENTO_A_DERECHA",
  "CORRIMIENTO_A_IZQUIERDA_IGUAL", "CORRIMIENTO_A_DERECHA_IGUAL",
  "BARRA_INVERTIDA", "PUNTERO_FLECHA", "'+'", "'-'", "'*'", "'/'", "';'",
  "'{'", "'}'", "','", "'='", "':'", "'('", "')'", "'['", "']'", "'t'",
  "'?'", "'|'", "'^'", "'&'", "'<'", "'>'", "'%'", "'~'", "'!'", "'.'",
  "$accept", "unidad_de_programa", "unidad_de_traduccion",
  "declaracion_externa", "definicion_de_funcion", "declaracion",
  "lista_de_declaracion", "especificadores_de_declaracion",
  "especificador_categoria_almacenamiento", "especificador_de_tipo",
  "calificador_de_tipo", "especificador_estructura_o_union",
  "estructura_o_union", "lista_declaraciones_struct",
  "lista_declaradores_init", "declarador_init", "declaracion_struct",
  "lista_calificador_especificador", "lista_declaradores_struct",
  "declarador_struct", "especificador_enum", "lista_de_enumerador",
  "enumerador", "declarador", "declarador_directo", "apuntador",
  "lista_calificadores_de_tipo", "lista_tipos_de_parametro",
  "lista_de_parametros", "declaracion_de_parametro",
  "lista_de_identificadores", "inicializador", "lista_de_inicializadores",
  "nombre_de_tipo", "declarador_abstracto", "declarador_abstracto_directo",
  "nombre_typedef", "sentencia", "sentencia_etiquetada",
  "sentencia_expresion", "sentencia_compuesta", "lista_de_sentencias",
  "sentencia_de_seleccion", "sentencia_de_iteracion", "sentencia_de_salto",
  "expresion", "expresion_de_asignacion", "operador_de_asignacion",
  "expresion_condicional", "expresion_constante", "expresion_logica_or",
  "expresion_logica_and", "expresion_or_inclusivo",
  "expresion_or_exclusivo", "expresion_and", "expresion_de_igualdad",
  "expresion_relacional", "expresion_de_corrimiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_cast", "expresion_unaria",
  "operador_unario", "expresion_posfija", "expresion_primaria",
  "lista_expresiones_argumento", "constante", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      43,    45,    42,    47,    59,   123,   125,    44,    61,    58,
      40,    41,    91,    93,   116,    63,   124,    94,    38,    60,
      62,    37,   126,    33,    46
};
# endif

#define YYPACT_NINF (-259)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     413,   777,   504,  -259,  -259,  -259,  -259,  -259,  1943,  -259,
    -259,   -59,  1714,  -259,  -259,   -51,   -34,  1200,  -259,    23,
    -259,  -259,   -20,    56,   -11,  -259,  -259,  -259,   979,  -259,
    -259,  1740,  -259,  -259,    34,  -259,  -259,  -259,  -259,  -259,
      54,  1792,  1792,  -259,  -259,    36,  -259,   595,   868,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,  -259,     8,  2199,  2199,
    2199,  -259,    30,  -259,  2095,    -8,    13,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,  -259,   -37,  -259,  -259,   -35,    81,
      85,    64,    95,   213,    89,   -13,   192,    50,  -259,   414,
    1714,   143,  -259,  -259,  -259,  -259,  1200,  -259,  -259,  -259,
    -259,   927,  -259,   111,  -259,  -259,  1200,   136,   181,   146,
     221,  1252,   162,  1714,  -259,   -15,   927,  -259,  1714,  1714,
    1714,  -259,  -259,    -6,  -259,    -4,    -4,  -259,  -259,   686,
       8,  -259,  1018,   173,  2294,  2294,   -24,   159,   167,   -48,
    -259,  -259,    39,    66,  -259,  2057,    23,  -259,  -259,  -259,
     195,  2294,  2095,  -259,  1910,  1259,    -8,  -259,  1714,  1714,
    1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,
    1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,  -259,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,  1714,
    -259,  -259,  -259,   248,  1309,  1714,   269,  -259,  1200,  -259,
     206,   221,   211,   188,  -259,  1359,    72,  -259,   -16,  -259,
     209,   -10,    96,    -4,  -259,  -259,  -259,  1109,   214,  -259,
    -259,  -259,  -259,  2004,  1411,    47,  -259,   177,  -259,  1714,
    -259,  -259,    39,  1418,  2095,  -259,  2294,  2229,  -259,    65,
    -259,  -259,  -259,    46,   215,   217,  -259,   120,  -259,   212,
    -259,    81,   125,    85,    64,    95,   213,    89,    89,   -13,
     -13,   -13,   -13,   192,   192,    50,    50,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,   122,   -41,  -259,  -259,  1714,   190,
    1714,  -259,   221,  1468,   157,  1518,  1200,  -259,  1200,  1200,
    -259,  -259,   216,   218,  -259,   219,   177,  2130,  1570,  -259,
    -259,  1418,  -259,  -259,  -259,  2264,  -259,  -259,  1714,   161,
    -259,   232,  1857,  -259,     4,  -259,  -259,  2164,   290,  -259,
    -259,  1714,  1714,  -259,  -259,   132,  -259,  -259,  -259,  1200,
     137,  1596,  1620,   175,   277,  -259,  -259,  -259,  -259,  -259,
    -259,   236,  -259,   230,  -259,   204,  -259,  -259,  -259,    65,
    1714,  -259,  -259,  -259,  -259,  -259,   244,  -259,  1200,  1200,
     139,  1200,   147,  1690,  1200,  -259,  -259,  -259,   301,  -259,
    -259,  -259,  -259,  -259,  1200,  -259,  1200,  1200,   149,  -259,
    -259,  -259,  -259,  -259,  -259,  1200,  -259
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   227,   225,   223,   224,   226,   217,   219,
      23,     0,     0,    29,    40,     0,     0,     0,    31,   228,
      26,    30,     0,     0,     0,    28,    34,    24,     0,    32,
      35,     0,    25,    45,     0,    27,    46,    36,    33,    41,
       0,     0,     0,   205,   206,   204,   124,     0,     0,   113,
     203,   207,   208,     4,     5,     7,     8,     0,    18,    20,
      22,    37,     0,    38,     0,    71,     0,    39,     6,   114,
     115,   116,   117,   118,   119,     0,   149,   151,   164,   167,
     169,   171,   173,   175,   177,   180,   185,   188,   191,   195,
       0,   197,   209,   218,     1,     3,     0,   146,   217,   228,
     204,     0,   166,     0,   195,   145,     0,   217,     0,    65,
       0,     0,     0,     0,   148,     0,     0,   201,     0,     0,
       0,   199,   198,    82,    83,    81,    79,   128,    15,     0,
       0,   129,     0,   217,    55,    57,   100,     0,     0,     0,
      72,    14,     0,     0,    49,    51,     0,    17,    19,    21,
      44,     0,     0,    12,     0,     0,    70,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     153,   154,   157,   160,   161,   162,   158,   159,   163,     0,
     200,   216,   215,     0,     0,     0,     0,   120,     0,   122,
       0,     0,    68,     0,    66,     0,     0,   144,     0,   147,
       0,     0,     0,    80,    84,   127,    16,     0,    51,   126,
     130,    54,    56,     0,     0,   101,    99,   103,    73,     0,
     220,    13,     0,     0,     0,    11,     0,     0,    47,     0,
      10,    92,    78,    91,     0,    85,    87,     0,    75,     0,
     150,   168,     0,   170,   172,   174,   176,   178,   179,   183,
     184,   181,   182,   186,   187,   189,   190,   192,   193,   194,
     152,   214,   212,   221,     0,     0,   213,   121,     0,     0,
       0,    64,     0,     0,     0,     0,     0,   202,     0,     0,
     125,   112,     0,     0,   108,     0,   102,     0,     0,   196,
      50,     0,    52,    94,     9,     0,    43,    48,     0,     0,
      58,    60,     0,    89,   101,    90,    76,     0,     0,    77,
      74,     0,     0,   211,   210,     0,    63,    69,    67,     0,
       0,     0,     0,     0,   131,   133,   134,   110,   104,   106,
     111,     0,   107,     0,    97,     0,    42,    62,    53,     0,
       0,    86,    88,    93,   165,   222,     0,   143,     0,     0,
       0,     0,     0,     0,     0,   109,   105,    95,     0,    59,
      61,   135,   142,   141,     0,   139,     0,     0,     0,   132,
      96,    98,   140,   138,   137,     0,   136
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -259,  -259,   317,  -259,  -259,    24,   -54,    18,  -259,   -26,
     -31,  -259,  -259,    84,  -259,    90,  -209,     1,  -259,   -28,
    -259,   123,    41,     0,   -63,   -36,   201,  -150,  -259,    10,
    -259,  -258,  -259,   220,  -130,  -217,  -259,   -17,  -259,  -259,
     -46,   199,  -259,  -259,  -259,    73,  -126,  -259,    -5,  -100,
    -259,   170,   171,   169,   174,   176,   117,    77,   113,   114,
     -44,    -7,  -259,  -259,  -259,  -259,  -259
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    53,    54,    55,   128,   129,   130,    58,    59,
      60,    61,    62,   237,   143,   144,   238,   239,   309,   310,
      63,   203,   204,   137,    65,    66,   126,   292,   245,   246,
     247,   302,   345,   138,   293,   227,    67,    68,    69,    70,
      71,   132,    72,    73,    74,    75,    76,   189,    77,   103,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   274,    93
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,    64,    64,   156,   244,   104,   226,   102,   296,   125,
     152,    14,   140,    14,   124,    97,   140,   135,   153,    57,
      57,   140,   134,   105,   117,    56,    56,   159,   307,   158,
     131,   109,   250,   230,   121,   122,   158,   157,   150,    39,
     158,    39,   324,   344,   -82,   106,   190,   140,   123,   136,
     160,   171,   172,    14,   140,   249,   223,   145,   224,   209,
     111,   158,   158,   270,   112,   286,   123,   158,   273,   113,
     135,   288,   154,   140,   155,   134,   147,   148,   149,   197,
     123,    39,   141,   104,   312,   135,   224,   125,   142,   199,
     134,   234,   124,   142,   124,   214,   307,   296,   110,   235,
     225,   115,   136,   135,   135,   151,   240,   303,   134,   134,
     381,   123,   131,   315,   118,   220,   -82,   136,   123,   142,
     135,   139,   175,   176,   295,   134,   312,   223,   224,   224,
     218,   267,   268,   269,   119,   221,   222,   123,   167,   168,
     231,   177,   161,   232,   308,   142,   285,   341,   104,   158,
     102,   163,   104,   216,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   162,   243,   158,   139,   303,   216,   289,   169,   170,
     327,   277,   214,   164,   206,   299,   208,   225,   304,   139,
     198,   211,   212,   139,   191,   192,   355,   318,   343,   322,
     220,   319,   158,   323,   321,   135,   135,   314,   347,   158,
     134,   134,   193,   356,   158,    96,   158,   104,   358,   102,
     374,   201,   104,   194,   158,   195,   158,   200,   376,   202,
     385,   331,   218,   252,   158,   348,   207,   196,   349,   311,
     228,   243,   303,   313,   259,   260,   261,   262,   229,   363,
     370,   156,   158,   -72,   -72,   -72,   271,   297,   216,   298,
     165,   166,   173,   174,   281,   282,   326,   282,   275,   334,
     236,   335,   336,   104,   135,   102,   314,   276,   284,   134,
     367,   368,   257,   258,   263,   264,   278,   265,   266,   280,
     287,   104,   233,   102,   317,   320,   316,   337,   353,   338,
     364,   104,   339,   102,     3,     4,     5,     6,     7,    98,
       9,   350,   357,   366,   104,   243,   354,   365,   371,    95,
     305,   369,   300,   328,   279,    99,   213,   352,   217,   251,
     243,   254,   253,     0,     0,   243,   210,   255,    31,     0,
     256,   372,   373,   104,   375,   102,     0,   379,     0,   311,
       0,   325,    41,    42,     0,     0,   330,   382,   333,   383,
     384,     0,     0,     0,     0,     0,     0,     0,   386,     0,
       0,    43,    44,   100,     0,     0,   301,   380,     0,     0,
       0,   101,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   360,   362,     0,     0,     0,     0,
       0,     0,     0,    -2,     1,     0,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,     0,     0,     0,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,     0,    -2,    -2,   378,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,     0,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
       0,     0,     0,     0,    -2,    -2,     0,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,     0,
     186,   187,     0,    -2,    -2,    -2,     0,    -2,    -2,     0,
       0,     0,   188,    -2,     0,     0,     0,    -2,     0,     0,
       0,    -2,     0,     0,    94,    -2,    -2,     3,     4,     5,
       6,     7,     8,     9,     0,     0,     0,    10,    11,    12,
      13,    14,    15,    16,     0,    17,    18,     0,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    44,    45,     0,    46,    47,
       0,     0,     0,     0,    48,     0,     0,     0,    49,     0,
       0,     0,    50,     0,     0,     0,    51,    52,     3,     4,
       5,     6,     7,   107,     9,     0,     0,     0,    10,    11,
      12,    13,    14,    15,    16,     0,    17,    18,     0,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,   100,     0,    46,
      47,   127,     0,     0,     0,   101,     0,     0,     0,    49,
       0,     0,     0,    50,     0,     0,     0,    51,    52,     3,
       4,     5,     6,     7,   107,     9,     0,     0,     0,    10,
      11,    12,    13,    14,    15,    16,     0,    17,    18,     0,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,   100,     0,
      46,    47,   215,     0,     0,     0,   101,     0,     0,     0,
      49,     0,     0,     0,    50,     0,     0,     0,    51,    52,
       3,     4,     5,     6,     7,     8,     9,     0,     0,     0,
      10,    11,    12,    13,    14,    15,    16,     0,    17,    18,
       0,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,    48,     0,     0,
       0,    49,     0,     0,     0,    50,     0,     0,     0,    51,
      52,     3,     4,     5,     6,     7,   133,     9,     0,     0,
       0,     0,     0,     0,    13,    14,     0,     0,     0,     0,
      18,     0,    19,     0,    21,     0,     0,     0,    25,     0,
      26,     0,     0,    29,    30,    31,     0,    33,     0,     0,
      36,    37,    38,    39,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,    98,     9,     0,    43,    44,
      45,     0,     0,    13,    14,     0,     0,     0,    48,    18,
       0,    19,    49,    21,     0,     0,    50,    25,     0,    26,
      51,    52,    29,    30,    31,     0,    33,     0,     0,    36,
      37,    38,    39,     0,     0,     0,     0,     0,    41,    42,
       0,     0,     3,     4,     5,     6,     7,    98,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,   100,
       0,     0,     0,    99,     0,     0,     0,   101,     0,     0,
       0,    49,     0,     0,     0,    50,    31,     0,     0,    51,
      52,     3,     4,     5,     6,     7,   107,     9,     0,     0,
      41,    42,    11,    12,     0,     0,    15,    16,     0,    17,
       0,     0,    99,     0,     0,    22,    23,    24,     0,    43,
      44,   100,    28,   114,     0,    31,     0,     0,    34,   101,
       0,     0,     0,     0,    40,     0,     0,    50,     0,    41,
      42,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
     100,     0,    46,    47,   219,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,     3,     4,     5,     6,     7,   107,     9,     0,
       0,     0,     0,    11,    12,     0,     0,    15,    16,     0,
      17,     0,     0,    99,     0,     0,    22,    23,    24,     0,
       0,     0,     0,    28,     0,     0,    31,     0,     0,    34,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,   100,     0,    46,    47,   290,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,    52,     3,     4,     5,     6,     7,   107,     9,
       0,     0,     0,     0,    11,    12,     0,     0,    15,    16,
       0,    17,     0,     0,    99,     0,     0,    22,    23,    24,
       0,     0,     0,     0,    28,     0,     0,    31,     0,     0,
      34,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,    41,    42,     0,     0,     3,     4,     5,     6,     7,
      98,     9,     3,     4,     5,     6,     7,    98,     9,     0,
      43,    44,   100,     0,    46,    47,    99,     0,     0,     0,
     101,     0,     0,    99,     0,     0,     0,     0,    50,    31,
       0,     0,    51,    52,     0,     0,    31,     0,     0,     0,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
      41,    42,     3,     4,     5,     6,     7,    98,     9,     0,
       0,     0,    43,    44,   100,     0,   205,     0,     0,    43,
      44,   100,   101,    99,     0,     0,     0,     0,     0,   101,
      50,     0,   248,     0,    51,    52,    31,    50,     0,     0,
       0,    51,    52,     0,     0,     0,     0,     0,     0,     0,
      41,    42,     3,     4,     5,     6,     7,    98,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,   100,     0,    99,     0,     0,     0,     0,     0,   101,
     272,     0,     0,     0,     0,     0,    31,    50,     0,     0,
       0,    51,    52,     0,     0,     0,     0,     0,     0,     0,
      41,    42,     0,     0,     3,     4,     5,     6,     7,    98,
       9,     3,     4,     5,     6,     7,    98,     9,     0,    43,
      44,   100,     0,   283,     0,    99,     0,     0,     0,   101,
       0,     0,    99,     0,     0,     0,     0,    50,    31,     0,
       0,    51,    52,     0,     0,    31,     0,     0,     0,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,    41,
      42,     3,     4,     5,     6,     7,    98,     9,     0,     0,
       0,    43,    44,   100,     0,     0,     0,     0,    43,    44,
     100,   101,    99,   301,   294,     0,     0,     0,   101,    50,
       0,     0,     0,    51,    52,    31,    50,     0,     0,     0,
      51,    52,     0,     0,     0,     0,     0,     0,     0,    41,
      42,     3,     4,     5,     6,     7,    98,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
     100,     0,    99,     0,     0,     0,     0,     0,   101,   329,
       0,     0,     0,     0,     0,    31,    50,     0,     0,     0,
      51,    52,     0,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     3,     4,     5,     6,     7,    98,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
     100,     0,   332,     0,    99,     0,     0,     0,   101,     3,
       4,     5,     6,     7,    98,     9,    50,    31,     0,     0,
      51,    52,     0,     0,     0,     0,     0,     0,     0,     0,
      99,    41,    42,     3,     4,     5,     6,     7,    98,     9,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
      43,    44,   100,     0,    99,     0,     0,    41,    42,     0,
     101,     0,     0,   342,     0,     0,     0,    31,    50,     0,
       0,     0,    51,    52,     0,     0,    43,    44,   100,     0,
       0,    41,    42,     0,     0,     0,   101,   359,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
      43,    44,   100,     3,     4,     5,     6,     7,    98,     9,
     101,   361,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,    99,     0,     0,     3,     4,     5,
       6,     7,    98,     9,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,    41,    42,     3,     4,     5,     6,     7,    98,     9,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,   100,     0,    99,    41,    42,     0,     0,     0,
     101,   377,     0,     0,     0,     0,     0,    31,    50,     0,
       0,     0,    51,    52,    43,    44,   100,     0,     0,     0,
       0,    41,    42,     0,   101,     3,     4,     5,     6,     7,
      98,     9,    50,     0,     0,     0,    51,    52,     0,     0,
      43,    44,   100,     0,     0,     0,    99,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,     0,    50,    31,
       0,     0,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    44,   100,   140,     0,     0,     0,     0,
      10,     0,   120,    13,    14,     0,     0,     0,     0,    18,
      50,   146,    20,    21,    51,    52,     0,    25,     0,    26,
      27,     0,    29,    30,     0,    32,    33,     0,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,     0,    10,     0,     0,    13,    14,     0,   123,
       0,     0,    18,     0,   146,    20,    21,   312,   291,   224,
      25,    49,    26,    27,     0,    29,    30,     0,    32,    33,
       0,    35,    36,    37,    38,    39,   -72,     0,     0,   -72,
     -72,     0,     0,     0,     0,   -72,     0,   -72,   -72,   -72,
       0,     0,     0,   -72,     0,   -72,   -72,     0,   -72,   -72,
       0,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,     0,
       0,   242,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,   -72,     0,
      13,    14,    96,   -72,     0,   -72,    18,   -72,   146,    20,
      21,     0,     0,     0,    25,     0,    26,    27,     0,    29,
      30,     0,    32,    33,     0,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,    13,    14,     0,   123,     0,     0,    18,
       0,   146,    20,    21,   223,   291,   224,    25,    49,    26,
      27,     0,    29,    30,     0,    32,    33,     0,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,    10,     0,
       0,    13,    14,     0,     0,     0,     0,    18,     0,   146,
      20,    21,     0,     0,     0,    25,     0,    26,    27,     0,
      29,    30,    47,    32,    33,   233,    35,    36,    37,    38,
      39,    49,     0,    10,     0,     0,    13,    14,     0,     0,
       0,     0,    18,     0,   146,    20,    21,     0,     0,     0,
      25,     0,    26,    27,     0,    29,    30,     0,    32,    33,
      47,    35,    36,    37,    38,    39,     0,    10,     0,    49,
      13,    14,     0,     0,     0,     0,    18,     0,   146,    20,
      21,     0,     0,     0,    25,     0,    26,    27,     0,    29,
      30,     0,    32,    33,     0,    35,    36,    37,    38,    39,
       0,   340,    10,     0,    49,    13,    14,     0,     0,     0,
       0,    18,     0,   146,    20,    21,     0,   351,     0,    25,
       0,    26,    27,     0,    29,    30,     0,    32,    33,     0,
      35,    36,    37,    38,    39,    13,    14,     0,    49,     0,
       0,    18,     0,   146,     0,    21,     0,     0,     0,    25,
       0,    26,     0,     0,    29,    30,     0,     0,    33,     0,
       0,    36,    37,    38,    39,     0,     0,     0,     0,     0,
      13,    14,     0,    49,     0,     0,    18,     0,   146,     0,
      21,     0,     0,     0,    25,     0,    26,     0,     0,    29,
      30,     0,     0,    33,     0,   306,    36,    37,    38,    39,
      13,    14,     0,    49,     0,     0,    18,     0,   146,     0,
      21,     0,     0,     0,    25,     0,    26,     0,     0,    29,
      30,     0,     0,    33,     0,     0,    36,    37,    38,    39,
     346,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49
};

static const yytype_int16 yycheck[] =
{
      17,     1,     2,    66,   154,    12,   136,    12,   225,    45,
      64,    17,     8,    17,    45,    74,     8,    48,    64,     1,
       2,     8,    48,    74,    31,     1,     2,    62,   237,    77,
      47,     8,   158,    81,    41,    42,    77,    74,     8,    45,
      77,    45,    83,   301,     8,    79,    90,     8,    72,    48,
      85,    64,    65,    17,     8,   155,    80,    57,    82,    74,
      80,    77,    77,   189,     8,    81,    72,    77,   194,    80,
     101,    81,    80,     8,    82,   101,    58,    59,    60,    96,
      72,    45,    74,    90,    80,   116,    82,   123,    80,   106,
     116,   145,   123,    80,   125,   126,   305,   314,    75,   145,
     136,    28,   101,   134,   135,    75,   152,   233,   134,   135,
     368,    72,   129,   243,    80,   132,    80,   116,    72,    80,
     151,    48,    72,    73,   224,   151,    80,    80,    82,    82,
     130,   175,   176,   177,    80,   134,   135,    72,    49,    50,
      74,    91,    61,    77,    79,    80,    74,   297,   155,    77,
     155,    87,   159,   129,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,    86,   154,    77,   101,   301,   152,    81,    89,    90,
     280,   198,   213,    88,   111,   229,   113,   223,   234,   116,
      79,   118,   119,   120,    51,    52,   322,    77,   298,    77,
     217,    81,    77,    81,    79,   236,   237,   243,   308,    77,
     236,   237,    69,    81,    77,    79,    77,   224,    81,   224,
      81,    75,   229,    80,    77,    82,    77,    46,    81,     8,
      81,    74,   232,   160,    77,    74,    74,    94,    77,   239,
      81,   223,   368,   243,   167,   168,   169,   170,    81,    74,
     350,   314,    77,    80,    81,    82,     8,    80,   234,    82,
      47,    48,    70,    71,    76,    77,    76,    77,   195,   286,
      75,   288,   289,   280,   305,   280,   312,     8,   205,   305,
      76,    77,   165,   166,   171,   172,    80,   173,   174,    78,
      81,   298,    78,   298,    77,    83,    81,    81,     8,    81,
      23,   308,    83,   308,     3,     4,     5,     6,     7,     8,
       9,    79,   329,    83,   321,   297,   321,    81,    74,     2,
     236,   349,   232,   282,   201,    24,   125,   317,   129,   159,
     312,   162,   161,    -1,    -1,   317,   116,   163,    37,    -1,
     164,   358,   359,   350,   361,   350,    -1,   364,    -1,   349,
      -1,   278,    51,    52,    -1,    -1,   283,   374,   285,   376,
     377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      -1,    70,    71,    72,    -1,    -1,    75,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   331,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,   363,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    70,    71,    72,    -1,    74,    75,    -1,
      -1,    -1,    78,    80,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    -1,    -1,     0,    92,    93,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    74,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    92,    93,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    93,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    93,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    74,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,
      93,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      22,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,    -1,
      32,    -1,    -1,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    70,    71,
      72,    -1,    -1,    16,    17,    -1,    -1,    -1,    80,    22,
      -1,    24,    84,    26,    -1,    -1,    88,    30,    -1,    32,
      92,    93,    35,    36,    37,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    37,    -1,    -1,    92,
      93,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      51,    52,    14,    15,    -1,    -1,    18,    19,    -1,    21,
      -1,    -1,    24,    -1,    -1,    27,    28,    29,    -1,    70,
      71,    72,    34,    74,    -1,    37,    -1,    -1,    40,    80,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    88,    -1,    51,
      52,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      92,    93,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,    15,    -1,    -1,    18,    19,    -1,
      21,    -1,    -1,    24,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    92,    93,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    -1,    18,    19,
      -1,    21,    -1,    -1,    24,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,     3,     4,     5,     6,     7,     8,     9,    -1,
      70,    71,    72,    -1,    74,    75,    24,    -1,    -1,    -1,
      80,    -1,    -1,    24,    -1,    -1,    -1,    -1,    88,    37,
      -1,    -1,    92,    93,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      51,    52,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    70,    71,    72,    -1,    74,    -1,    -1,    70,
      71,    72,    80,    24,    -1,    -1,    -1,    -1,    -1,    80,
      88,    -1,    83,    -1,    92,    93,    37,    88,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    24,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    37,    88,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,     3,     4,     5,     6,     7,     8,     9,    -1,    70,
      71,    72,    -1,    74,    -1,    24,    -1,    -1,    -1,    80,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    88,    37,    -1,
      -1,    92,    93,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    70,    71,
      72,    80,    24,    75,    83,    -1,    -1,    -1,    80,    88,
      -1,    -1,    -1,    92,    93,    37,    88,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    24,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    37,    88,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    74,    -1,    24,    -1,    -1,    -1,    80,     3,
       4,     5,     6,     7,     8,     9,    88,    37,    -1,    -1,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    51,    52,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    24,    -1,    -1,    51,    52,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    37,    88,    -1,
      -1,    -1,    92,    93,    -1,    -1,    70,    71,    72,    -1,
      -1,    51,    52,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    93,
      70,    71,    72,     3,     4,     5,     6,     7,     8,     9,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,    93,    24,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    51,    52,     3,     4,     5,     6,     7,     8,     9,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    24,    51,    52,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    37,    88,    -1,
      -1,    -1,    92,    93,    70,    71,    72,    -1,    -1,    -1,
      -1,    51,    52,    -1,    80,     3,     4,     5,     6,     7,
       8,     9,    88,    -1,    -1,    -1,    92,    93,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    37,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,     8,    -1,    -1,    -1,    -1,
      13,    -1,    80,    16,    17,    -1,    -1,    -1,    -1,    22,
      88,    24,    25,    26,    92,    93,    -1,    30,    -1,    32,
      33,    -1,    35,    36,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    72,
      -1,    -1,    22,    -1,    24,    25,    26,    80,    81,    82,
      30,    84,    32,    33,    -1,    35,    36,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    22,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    33,    -1,    35,    36,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    75,    -1,
      16,    17,    79,    80,    -1,    82,    22,    84,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    72,    -1,    -1,    22,
      -1,    24,    25,    26,    80,    81,    82,    30,    84,    32,
      33,    -1,    35,    36,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,    -1,
      35,    36,    75,    38,    39,    78,    41,    42,    43,    44,
      45,    84,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    22,    -1,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    -1,    38,    39,
      75,    41,    42,    43,    44,    45,    -1,    13,    -1,    84,
      16,    17,    -1,    -1,    -1,    -1,    22,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
      -1,    81,    13,    -1,    84,    16,    17,    -1,    -1,    -1,
      -1,    22,    -1,    24,    25,    26,    -1,    63,    -1,    30,
      -1,    32,    33,    -1,    35,    36,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    16,    17,    -1,    84,    -1,
      -1,    22,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    84,    -1,    -1,    22,    -1,    24,    -1,
      26,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    76,    42,    43,    44,    45,
      16,    17,    -1,    84,    -1,    -1,    22,    -1,    24,    -1,
      26,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    96,     3,     4,     5,     6,     7,     8,     9,
      13,    14,    15,    16,    17,    18,    19,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    51,    52,    70,    71,    72,    74,    75,    80,    84,
      88,    92,    93,    97,    98,    99,   100,   102,   103,   104,
     105,   106,   107,   115,   118,   119,   120,   131,   132,   133,
     134,   135,   137,   138,   139,   140,   141,   143,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   161,     0,    97,    79,    74,     8,    24,
      72,    80,   143,   144,   156,    74,    79,     8,   132,     8,
      75,    80,     8,    80,    74,   140,    80,   156,    80,    80,
      80,   156,   156,    72,   105,   120,   121,    76,   100,   101,
     102,   132,   136,     8,   104,   105,   112,   118,   128,   140,
       8,    74,    80,   109,   110,   118,    24,   102,   102,   102,
       8,    75,   101,   135,    80,    82,   119,    74,    77,    62,
      85,    61,    86,    87,    88,    47,    48,    49,    50,    89,
      90,    64,    65,    70,    71,    72,    73,    91,    53,    54,
      55,    56,    57,    58,    59,    60,    66,    67,    78,   142,
     155,    51,    52,    69,    80,    82,    94,   132,    79,   132,
      46,    75,     8,   116,   117,    74,   140,    74,   140,    74,
     128,   140,   140,   121,   105,    76,   100,   136,   118,    76,
     132,   112,   112,    80,    82,   120,   129,   130,    81,    81,
      81,    74,    77,    78,   101,   135,    75,   108,   111,   112,
     135,     8,    81,   102,   122,   123,   124,   125,    83,   144,
     141,   146,   140,   147,   148,   149,   150,   151,   151,   152,
     152,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     141,     8,    81,   141,   160,   140,     8,   132,    80,   116,
      78,    76,    77,    74,   140,    74,    81,    81,    81,    81,
      76,    81,   122,   129,    83,   144,   130,    80,    82,   155,
     110,    75,   126,   141,   135,   108,    76,   111,    79,   113,
     114,   118,    80,   118,   120,   129,    81,    77,    77,    81,
      83,    79,    77,    81,    83,   140,    76,   144,   117,    81,
     140,    74,    74,   140,   132,   132,   132,    81,    81,    83,
      81,   122,    83,   144,   126,   127,    76,   144,    74,    77,
      79,    63,   124,     8,   143,   141,    81,   132,    81,    81,
     140,    81,   140,    74,    23,    81,    83,    76,    77,   114,
     144,    74,   132,   132,    81,   132,    81,    81,   140,   132,
      76,   126,   132,   132,   132,    81,   132
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    97,    97,    98,    98,    99,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   112,   112,   112,   112,   113,   113,
     114,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   124,
     124,   124,   125,   125,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   132,   132,   132,   132,   132,   132,
     133,   133,   133,   134,   134,   135,   135,   135,   135,   136,
     136,   137,   137,   137,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   139,   139,   139,   140,
     140,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   144,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   150,
     151,   151,   151,   151,   151,   152,   152,   152,   153,   153,
     153,   154,   154,   154,   154,   155,   155,   156,   156,   156,
     156,   156,   156,   157,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   159,   159,   159,
     159,   160,   160,   161,   161,   161,   161,   161,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     4,
       3,     3,     2,     3,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     2,     1,     1,     1,     2,     1,
       3,     1,     3,     3,     2,     1,     2,     1,     1,     3,
       1,     3,     2,     5,     4,     2,     1,     3,     1,     3,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     2,
       3,     2,     1,     1,     2,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     3,     4,     1,     3,     2,
       1,     1,     2,     1,     3,     4,     3,     3,     2,     4,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     1,     4,     3,     3,     2,     1,
       2,     5,     7,     5,     5,     7,     9,     8,     8,     7,
       8,     7,     7,     6,     3,     2,     2,     3,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     3,     3,     3,     2,     2,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 62 "../src/main.y"
                                        { printf("vacio \n"); }
#line 2107 "main.tab.c"
    break;

  case 3:
#line 63 "../src/main.y"
                                                                                   { printf("unidad_de_programa: unidad_de_traduccion \n"); }
#line 2113 "main.tab.c"
    break;

  case 4:
#line 64 "../src/main.y"
                                                                     { printf("ERROR... \n"); }
#line 2119 "main.tab.c"
    break;

  case 5:
#line 66 "../src/main.y"
                                                   { printf("unidad_de_traduccion: declaracion_externa \n"); }
#line 2125 "main.tab.c"
    break;

  case 7:
#line 69 "../src/main.y"
                                                    { printf("declaracion_externa: definicion_de_funcion \n"); }
#line 2131 "main.tab.c"
    break;

  case 8:
#line 70 "../src/main.y"
                                                       { printf("declaracion_externa: declaracion \n"); }
#line 2137 "main.tab.c"
    break;

  case 9:
#line 72 "../src/main.y"
                                                                                                                   { printf("definicion_de_funcion: especificadores_de_declaracion declarador lista_de_declaracion sentencia_compuesta \n"); }
#line 2143 "main.tab.c"
    break;

  case 10:
#line 73 "../src/main.y"
                                                                                               { printf("definicion_de_funcion: declarador lista_de_declaracion sentencia_compuesta \n"); }
#line 2149 "main.tab.c"
    break;

  case 11:
#line 74 "../src/main.y"
                                                                                                         { printf("definicion_de_funcion: especificadores_de_declaracion declarador sentencia_compuesta \n"); }
#line 2155 "main.tab.c"
    break;

  case 12:
#line 75 "../src/main.y"
                                                                          { printf("definicion_de_funcion: declarador sentencia_compuesta \n"); }
#line 2161 "main.tab.c"
    break;

  case 13:
#line 77 "../src/main.y"
                                                                                 { printf("declaracion: especificadores_de_declaracion lista_declaradores_init ; \n"); }
#line 2167 "main.tab.c"
    break;

  case 14:
#line 78 "../src/main.y"
                                                              { printf("declaracion: especificadores_de_declaracion ; \n"); }
#line 2173 "main.tab.c"
    break;

  case 15:
#line 80 "../src/main.y"
                                         { printf("lista_de_declaracion: declaracion \n"); }
#line 2179 "main.tab.c"
    break;

  case 16:
#line 81 "../src/main.y"
                                                                                    { printf("lista_de_declaracion: lista_de_declaracion declaracion \n"); }
#line 2185 "main.tab.c"
    break;

  case 17:
#line 83 "../src/main.y"
                                                                                                               { printf("especificadores_de_declaracion:  especificador_categoria_almacenamiento especificadores_de_declaracion \n"); }
#line 2191 "main.tab.c"
    break;

  case 18:
#line 84 "../src/main.y"
                                                                  { printf("especificadores_de_declaracion: especificador_categoria_almacenamiento \n"); }
#line 2197 "main.tab.c"
    break;

  case 19:
#line 85 "../src/main.y"
                                                                                { printf("especificadores_de_declaracion: especificador_de_tipo especificadores_de_declaracion \n"); }
#line 2203 "main.tab.c"
    break;

  case 20:
#line 86 "../src/main.y"
                                                { printf("especificadores_de_declaracion: especificador_de_tipo \n"); }
#line 2209 "main.tab.c"
    break;

  case 21:
#line 87 "../src/main.y"
                                                                              { printf("especificadores_de_declaracion: calificador_de_tipo especificadores_de_declaracion \n"); }
#line 2215 "main.tab.c"
    break;

  case 22:
#line 88 "../src/main.y"
                                              { printf("especificadores_de_declaracion: calificador_de_tipo \n"); }
#line 2221 "main.tab.c"
    break;

  case 23:
#line 90 "../src/main.y"
                                                     { printf("especificador_categoria_almacenamiento: AUTO \n"); }
#line 2227 "main.tab.c"
    break;

  case 24:
#line 91 "../src/main.y"
                                                                                           { printf("especificador_categoria_almacenamiento: REGISTER \n"); }
#line 2233 "main.tab.c"
    break;

  case 25:
#line 92 "../src/main.y"
                                                                                         { printf("especificador_categoria_almacenamiento: STATIC \n"); }
#line 2239 "main.tab.c"
    break;

  case 26:
#line 93 "../src/main.y"
                                                                                         { printf("especificador_categoria_almacenamiento: EXTERN \n"); }
#line 2245 "main.tab.c"
    break;

  case 27:
#line 94 "../src/main.y"
                                                                                          { printf("especificador_categoria_almacenamiento: TYPEDEF \n"); }
#line 2251 "main.tab.c"
    break;

  case 28:
#line 96 "../src/main.y"
                                   { printf("especificador_de_tipo: INT \n"); }
#line 2257 "main.tab.c"
    break;

  case 29:
#line 97 "../src/main.y"
                                                       { printf("especificador_de_tipo: CHAR \n"); }
#line 2263 "main.tab.c"
    break;

  case 30:
#line 98 "../src/main.y"
                                                       { printf("especificador_de_tipo: FLOAT \n"); }
#line 2269 "main.tab.c"
    break;

  case 31:
#line 99 "../src/main.y"
                                                        { printf("especificador_de_tipo: DOUBLE \n"); }
#line 2275 "main.tab.c"
    break;

  case 32:
#line 100 "../src/main.y"
                                                        { printf("especificador_de_tipo: SHORT \n"); }
#line 2281 "main.tab.c"
    break;

  case 33:
#line 101 "../src/main.y"
                                                       { printf("especificador_de_tipo: VOID \n"); }
#line 2287 "main.tab.c"
    break;

  case 34:
#line 102 "../src/main.y"
                                                       { printf("especificador_de_tipo: LONG \n"); }
#line 2293 "main.tab.c"
    break;

  case 35:
#line 103 "../src/main.y"
                                                         { printf("especificador_de_tipo: SIGNED \n"); }
#line 2299 "main.tab.c"
    break;

  case 36:
#line 104 "../src/main.y"
                                                           { printf("especificador_de_tipo: UNSIGNED \n"); }
#line 2305 "main.tab.c"
    break;

  case 37:
#line 105 "../src/main.y"
                                                                                   { printf("especificador_de_tipo: especificador_estructura_o_union \n"); }
#line 2311 "main.tab.c"
    break;

  case 38:
#line 106 "../src/main.y"
                                                                     { printf("especificador_de_tipo: especificador_enum \n"); }
#line 2317 "main.tab.c"
    break;

  case 39:
#line 107 "../src/main.y"
                                                                 { printf("especificador_de_tipo: nombre_typedef \n"); }
#line 2323 "main.tab.c"
    break;

  case 40:
#line 109 "../src/main.y"
                                    { printf("calificador_de_tipo: CONST \n"); }
#line 2329 "main.tab.c"
    break;

  case 41:
#line 110 "../src/main.y"
                                                    { printf("calificador_de_tipo: VOLATILE \n"); }
#line 2335 "main.tab.c"
    break;

  case 42:
#line 112 "../src/main.y"
                                                                                                               { printf("especificador_estructura_o_union: estructura_o_union IDENTIFICADOR '{' lista_declaraciones_struct '}' \n"); }
#line 2341 "main.tab.c"
    break;

  case 43:
#line 113 "../src/main.y"
                                                                                                                                 { printf("especificador_estructura_o_union: estructura_o_union '{' lista_declaraciones_struct '}' \n"); }
#line 2347 "main.tab.c"
    break;

  case 44:
#line 114 "../src/main.y"
                                                                                                            { printf("especificador_estructura_o_union: estructura_o_union IDENTIFICADOR \n"); }
#line 2353 "main.tab.c"
    break;

  case 45:
#line 116 "../src/main.y"
                                    { printf("estructura_o_union: STRUCT \n"); }
#line 2359 "main.tab.c"
    break;

  case 46:
#line 117 "../src/main.y"
                                                    { printf("estructura_o_union: UNION \n"); }
#line 2365 "main.tab.c"
    break;

  case 47:
#line 119 "../src/main.y"
                                                        { printf("lista_declaraciones_struct: declaracion_struct \n"); }
#line 2371 "main.tab.c"
    break;

  case 48:
#line 120 "../src/main.y"
                                                                                                         { printf("lista_declaraciones_struct: lista_declaraciones_struct declaracion_struct \n"); }
#line 2377 "main.tab.c"
    break;

  case 49:
#line 122 "../src/main.y"
                                                  { printf("lista_declaradores_init: declarador_init \n"); }
#line 2383 "main.tab.c"
    break;

  case 50:
#line 123 "../src/main.y"
                                                                                               { printf("lista_declaradores_init: lista_declaradores_init \n"); }
#line 2389 "main.tab.c"
    break;

  case 51:
#line 125 "../src/main.y"
                                    { printf("declarador_init: declarador \n"); }
#line 2395 "main.tab.c"
    break;

  case 52:
#line 126 "../src/main.y"
                                                                       { printf("declarador_init: declarador '=' inicializador \n"); }
#line 2401 "main.tab.c"
    break;

  case 53:
#line 128 "../src/main.y"
                                                                                          { printf("declaracion_struct: lista_calificador_especificador lista_declaradores_struct ';' \n"); }
#line 2407 "main.tab.c"
    break;

  case 54:
#line 130 "../src/main.y"
                                                                                                { printf("lista_calificador_especificador: especificador_de_tipo lista_calificador_especificador \n"); }
#line 2413 "main.tab.c"
    break;

  case 55:
#line 131 "../src/main.y"
                                                                                                 { printf("lista_calificador_especificador: especificador_de_tipo \n"); }
#line 2419 "main.tab.c"
    break;

  case 56:
#line 132 "../src/main.y"
                                                                                                                               { printf("lista_calificador_especificador: calificador_de_tipo lista_calificador_especificador \n"); }
#line 2425 "main.tab.c"
    break;

  case 57:
#line 133 "../src/main.y"
                                                                                               { printf("lista_calificador_especificador: calificador_de_tipo \n"); }
#line 2431 "main.tab.c"
    break;

  case 58:
#line 135 "../src/main.y"
                                                     { printf("lista_declaradores_struct: declarador_struct \n"); }
#line 2437 "main.tab.c"
    break;

  case 59:
#line 136 "../src/main.y"
                                                                                                          { printf("lista_declaradores_struct: lista_declaradores_struct ',' declarador_struct \n"); }
#line 2443 "main.tab.c"
    break;

  case 60:
#line 138 "../src/main.y"
                                       { printf("declarador_struct: declarador \n"); }
#line 2449 "main.tab.c"
    break;

  case 61:
#line 139 "../src/main.y"
                                                                             { printf("declarador_struct: declarador ':' expresion_constante \n"); }
#line 2455 "main.tab.c"
    break;

  case 62:
#line 140 "../src/main.y"
                                                                   { printf("declarador_struct: ':' expresion_constante \n"); }
#line 2461 "main.tab.c"
    break;

  case 63:
#line 142 "../src/main.y"
                                                                           { printf("especificador_enum: ENUM IDENTIFICADOR '{' lista_de_enumerador '}' \n"); }
#line 2467 "main.tab.c"
    break;

  case 64:
#line 143 "../src/main.y"
                                                                            { printf("especificador_enum: ENUM '{' lista_de_enumerador '}' \n"); }
#line 2473 "main.tab.c"
    break;

  case 65:
#line 144 "../src/main.y"
                                                              { printf("especificador_enum: ENUM IDENTIFICADOR \n"); }
#line 2479 "main.tab.c"
    break;

  case 66:
#line 146 "../src/main.y"
                                         { printf("lista_de_enumerador: enumerador \n"); }
#line 2485 "main.tab.c"
    break;

  case 67:
#line 147 "../src/main.y"
                                                                                     { printf("lista_de_enumerador ',' enumerador \n"); }
#line 2491 "main.tab.c"
    break;

  case 68:
#line 149 "../src/main.y"
                                   { printf("enumerador: IDENTIFICADOR \n"); }
#line 2497 "main.tab.c"
    break;

  case 69:
#line 150 "../src/main.y"
                                                                         { printf("enumerador: IDENTIFICADOR '=' expresion_constante \n"); }
#line 2503 "main.tab.c"
    break;

  case 70:
#line 152 "../src/main.y"
                                                  { printf("declarador: apuntador declarador_directo\n"); }
#line 2509 "main.tab.c"
    break;

  case 71:
#line 153 "../src/main.y"
                                                      { printf("declarador: declarador_directo \n"); }
#line 2515 "main.tab.c"
    break;

  case 72:
#line 155 "../src/main.y"
                                           { printf("declarador_directo: IDENTIFICADOR \n"); }
#line 2521 "main.tab.c"
    break;

  case 73:
#line 156 "../src/main.y"
                                                              { printf("declarador_directo: '(' declarador ')' \n"); }
#line 2527 "main.tab.c"
    break;

  case 74:
#line 157 "../src/main.y"
                                                                                           { printf("declarador_directo: declarador_directo '[' expresion_constante  ']' \n"); }
#line 2533 "main.tab.c"
    break;

  case 75:
#line 158 "../src/main.y"
                                                                       { printf("declarador_directo: declarador_directo '['  ']'  \n"); }
#line 2539 "main.tab.c"
    break;

  case 76:
#line 159 "../src/main.y"
                                                                                               { printf("declarador_directo: '(' lista_tipos_de_parametro ')' \n"); }
#line 2545 "main.tab.c"
    break;

  case 77:
#line 160 "../src/main.y"
                                                                                               { printf("declarador_directo: '(' lista_de_identificadores ')' \n"); }
#line 2551 "main.tab.c"
    break;

  case 78:
#line 161 "../src/main.y"
                                                                       { printf("declarador_directo: declarador_directo '('  ')' \n"); }
#line 2557 "main.tab.c"
    break;

  case 79:
#line 163 "../src/main.y"
                                                    { printf("apuntador: '*' lista_calificadores_de_tipo\n"); }
#line 2563 "main.tab.c"
    break;

  case 80:
#line 164 "../src/main.y"
                                                                     { printf("apuntador: '*' apuntador lista_calificadores_de_tipo\n"); }
#line 2569 "main.tab.c"
    break;

  case 81:
#line 165 "../src/main.y"
                                         { printf("apuntador: '*' apuntador\n"); }
#line 2575 "main.tab.c"
    break;

  case 82:
#line 166 "../src/main.y"
                              { printf("apuntador: '*'\n"); }
#line 2581 "main.tab.c"
    break;

  case 83:
#line 168 "../src/main.y"
                                                          { printf("lista_calificadores_de_tipo: calificador_de_tipo\n"); }
#line 2587 "main.tab.c"
    break;

  case 84:
#line 169 "../src/main.y"
                                                                                                           { printf("lista_calificadores_de_tipo: lista_calificadores_de_tipo calificador_de_tipo\n"); }
#line 2593 "main.tab.c"
    break;

  case 85:
#line 171 "../src/main.y"
                                                        { printf("lista_tipos_de_parametro:  lista_de_parametros\n"); }
#line 2599 "main.tab.c"
    break;

  case 86:
#line 172 "../src/main.y"
                                                                                           { printf("lista_de_parametros ',' ELIPSIS\n"); }
#line 2605 "main.tab.c"
    break;

  case 87:
#line 174 "../src/main.y"
                                                       { printf("lista_de_parametros: declaracion_de_parametro\n"); }
#line 2611 "main.tab.c"
    break;

  case 88:
#line 175 "../src/main.y"
                                                                                                    { printf("lista_de_parametros: lista_de_parametros ',' declaracion_de_parametro\n"); }
#line 2617 "main.tab.c"
    break;

  case 89:
#line 177 "../src/main.y"
                                                                              { printf("declaracion_de_parametro: especificadores_de_declaracion declarador\n"); }
#line 2623 "main.tab.c"
    break;

  case 90:
#line 178 "../src/main.y"
                                                                               { printf("declaracion_de_parametro: especificadores_de_declaracion declarador_abstracto\n"); }
#line 2629 "main.tab.c"
    break;

  case 91:
#line 179 "../src/main.y"
                                                          { printf("declaracion_de_parametro: especificadores_de_declaracion\n"); }
#line 2635 "main.tab.c"
    break;

  case 92:
#line 181 "../src/main.y"
                                                  { printf("lista_de_identificadores:  IDENTIFICADOR\n"); }
#line 2641 "main.tab.c"
    break;

  case 94:
#line 184 "../src/main.y"
                                                { printf("inicializador: expresion_de_asignacion\n"); }
#line 2647 "main.tab.c"
    break;

  case 95:
#line 185 "../src/main.y"
                                                                  { printf("inicializador: {' lista_de_inicializadores'}'\n"); }
#line 2653 "main.tab.c"
    break;

  case 96:
#line 186 "../src/main.y"
                                                                      { printf("inicializador: '{' lista_de_inicializadores',' '}'\n"); }
#line 2659 "main.tab.c"
    break;

  case 97:
#line 188 "../src/main.y"
                                                 { printf("lista_de_inicializadores: inicializador\n"); }
#line 2665 "main.tab.c"
    break;

  case 98:
#line 189 "../src/main.y"
                                                                                     { printf("lista_de_inicializadores: lista_de_inicializadores',' inicializador\n"); }
#line 2671 "main.tab.c"
    break;

  case 151:
#line 256 "../src/main.y"
                                                        { printf("expresion_de_asignacion: expresion_condicional \n"); }
#line 2677 "main.tab.c"
    break;

  case 152:
#line 257 "../src/main.y"
                                                                                                                   { printf("expresion_de_asignacion: expresion_unaria operador_de_asignacion expresion_de_asignacion \n"); }
#line 2683 "main.tab.c"
    break;

  case 164:
#line 271 "../src/main.y"
                                                   { printf("expresion_condicional: expresion_logica_or\n"); }
#line 2689 "main.tab.c"
    break;

  case 165:
#line 272 "../src/main.y"
                                                                                                               { printf("expresion_condicional: expresion_logica_or '?' expresion ':' expresion_condicional\n"); }
#line 2695 "main.tab.c"
    break;

  case 167:
#line 276 "../src/main.y"
                                                  { printf("expresion_logica_or: expresion_logica_and\n"); }
#line 2701 "main.tab.c"
    break;

  case 168:
#line 277 "../src/main.y"
                                                                                              { printf("expresion_logica_or: expresion_logica_or OR_LOGICO expresion_logica_and\n"); }
#line 2707 "main.tab.c"
    break;

  case 169:
#line 279 "../src/main.y"
                                                      { printf("expresion_logica_and: expresion_or_inclusivo\n"); }
#line 2713 "main.tab.c"
    break;

  case 170:
#line 280 "../src/main.y"
                                                                                                          { printf("expresion_logica_and: expresion_logica_and AND_LOGICO expresion_or_inclusivo\n"); }
#line 2719 "main.tab.c"
    break;

  case 171:
#line 282 "../src/main.y"
                                                        { printf("expresion_or_inclusivo: expresion_or_exclusivo\n"); }
#line 2725 "main.tab.c"
    break;

  case 172:
#line 283 "../src/main.y"
                                                                                                     { printf("expresion_or_inclusivo: expresion_or_inclusivo '|' expresion_or_exclusivo\n"); }
#line 2731 "main.tab.c"
    break;

  case 173:
#line 285 "../src/main.y"
                                               { printf("expresion_or_exclusivo: expresion_and\n"); }
#line 2737 "main.tab.c"
    break;

  case 175:
#line 288 "../src/main.y"
                                              { printf("expresion_and: expresion_de_igualdad\n"); }
#line 2743 "main.tab.c"
    break;

  case 177:
#line 291 "../src/main.y"
                                                     { printf("expresion_de_igualdad: expresion_relacional\n"); }
#line 2749 "main.tab.c"
    break;

  case 180:
#line 295 "../src/main.y"
                                                        { printf("expresion_relacional: expresion_de_corrimiento\n"); }
#line 2755 "main.tab.c"
    break;

  case 185:
#line 301 "../src/main.y"
                                                     { printf("expresion_de_corrimiento: expresion_aditiva\n"); }
#line 2761 "main.tab.c"
    break;

  case 188:
#line 305 "../src/main.y"
                                                     { printf("expresion_aditiva: expresion_multiplicativa\n"); }
#line 2767 "main.tab.c"
    break;

  case 191:
#line 309 "../src/main.y"
                                                 { printf("expresion_multiplicativa: expresion_cast\n"); }
#line 2773 "main.tab.c"
    break;

  case 195:
#line 314 "../src/main.y"
                                          { printf("expresion_cast: expresion_unaria\n"); }
#line 2779 "main.tab.c"
    break;

  case 197:
#line 317 "../src/main.y"
                                             { printf("expresion_unaria: expresion_posfija\n"); }
#line 2785 "main.tab.c"
    break;

  case 209:
#line 331 "../src/main.y"
                                               { printf("expresion_posfija: expresion_primaria\n"); }
#line 2791 "main.tab.c"
    break;

  case 217:
#line 340 "../src/main.y"
                                           { printf("expresion_primaria: IDENTIFICADOR \n"); }
#line 2797 "main.tab.c"
    break;

  case 218:
#line 341 "../src/main.y"
                                                      { printf("expresion_primaria: constante \n"); }
#line 2803 "main.tab.c"
    break;

  case 219:
#line 342 "../src/main.y"
                                                          { printf("expresion_primaria: LITERAL_CADENA \n"); }
#line 2809 "main.tab.c"
    break;

  case 220:
#line 343 "../src/main.y"
                                                           { printf("expresion_primaria: '(' expresion')' \n"); }
#line 2815 "main.tab.c"
    break;


#line 2819 "main.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 355 "../src/main.y"


int main() {
	FILE* file = fopen("input/archivo.c", "r");

    if (file == NULL) {
        printf("Error al abrir input/archivo.c\n");
        return 1;
    }
    yyin = file;

	yyparse();
	return 0;
}




