/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tokTYPE = 400,
     tokTENSOR = 401,
     tokID = 402,
     tokCONS = 403,
     tokBASEFUNCT = 404,
     tokLISTFUNCT = 405,
     tokINCLUDE = 406,
     tokSET = 407,
     tokIDCALL = 408,
     tokCONST = 500,
     tokCOND = 501,
     tokEXTERN = 502,
     tokOP = 503,
     tokPROC = 504,
     tokQUFUN = 505,
     tokFOR = 506,
     tokTO = 507,
     tokWHILE = 508,
     tokUNTIL = 509,
     tokBREAK = 510,
     tokRETURN = 511,
     tokIF = 512,
     tokELSE = 513,
     tokRANGE_LENGTH = 514,
     tokRANGE_END = 515,
     tokSTEP = 516,
     tokINPUT = 517,
     tokPRINT = 518,
     tokEXIT = 519,
     tokMEASURE = 520,
     tokRESET = 521,
     tokDUMP = 601,
     tokINSPECT = 602,
     tokLOAD = 603,
     tokSAVE = 604,
     tokPLOT = 605,
     tokSHELL = 606,
     tokEOF = 900,
     tokERROR = 901,
     tokSWAP = 903,
     tokINVTRANS = 904,
     tokTRANS = 905,
     tokXOR = 906,
     tokOR = 907,
     tokAND = 908,
     tokNOT = 909,
     tokNOTEQ = 910,
     tokGREQ = 911,
     tokLEEQ = 912,
     tokEQ = 913,
     tokMOD = 914,
     tokNEG = 915
   };
#endif
/* Tokens.  */
#define tokTYPE 400
#define tokTENSOR 401
#define tokID 402
#define tokCONS 403
#define tokBASEFUNCT 404
#define tokLISTFUNCT 405
#define tokINCLUDE 406
#define tokSET 407
#define tokIDCALL 408
#define tokCONST 500
#define tokCOND 501
#define tokEXTERN 502
#define tokOP 503
#define tokPROC 504
#define tokQUFUN 505
#define tokFOR 506
#define tokTO 507
#define tokWHILE 508
#define tokUNTIL 509
#define tokBREAK 510
#define tokRETURN 511
#define tokIF 512
#define tokELSE 513
#define tokRANGE_LENGTH 514
#define tokRANGE_END 515
#define tokSTEP 516
#define tokINPUT 517
#define tokPRINT 518
#define tokEXIT 519
#define tokMEASURE 520
#define tokRESET 521
#define tokDUMP 601
#define tokINSPECT 602
#define tokLOAD 603
#define tokSAVE 604
#define tokPLOT 605
#define tokSHELL 606
#define tokEOF 900
#define tokERROR 901
#define tokSWAP 903
#define tokINVTRANS 904
#define tokTRANS 905
#define tokXOR 906
#define tokOR 907
#define tokAND 908
#define tokNOT 909
#define tokNOTEQ 910
#define tokGREQ 911
#define tokLEEQ 912
#define tokEQ 913
#define tokMOD 914
#define tokNEG 915




/* Copy the first part of user declarations.  */
#line 1 "qcl.y"


/**********************************************************************

This file is part of the Quantum Computation Language QCL.

(c) Copyright by Bernhard Oemer <oemer@tph.tuwien.ac.at>, 1998

This program comes without any warranty; without even the implied 
warranty of merchantability or fitness for any particular purpose.

     This program is free software under the terms of the 
     GNU General Public Licence (GPL) version 2 or higher

************************************************************************/


#include <stdlib.h>
#include "syntax.h"
#include "parse.h"

extern int yyerror (char *s);  /* Called by yyparse on error */
extern objlist *yyObjList;

extern int yylex();

#define YYERROR_VERBOSE 1



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 32 "qcl.y"
typedef union YYSTYPE {
  objlist* OBJLIST;
  BaseType TYPE;
  int TENSOR;
  ObjType OBJTYPE;
  tId* ID;
  sObject* OBJ;
  sConst* CONST;
  sExpr* EXPR;
  sExprList* EXPRLIST;
  sStmt* STMT;
  sStmtList* STMTLIST;
  sDef* DEF;
  sDefList* DEFLIST;
  string* STRING;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 240 "yacc.cc"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 252 "yacc.cc"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  112
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1560

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  20
/* YYNRULES -- Number of rules. */
#define YYNRULES  124
/* YYNRULES -- Number of states. */
#define YYNSTATES  325

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   915

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,    63,     2,     2,    57,     2,
      73,    65,    59,    55,    71,    56,     2,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    64,
      49,    68,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    62,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
       3,     4,     5,     6,     7,     8,     9,    10,    11,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,    35,    36,    37,    38,    39,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,     2,    42,    43,    44,    45,    46,    47,    48,
      51,    52,    53,    54,    58,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    15,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    37,    40,    47,
      55,    62,    69,    77,    85,    92,    99,   107,   115,   123,
     132,   139,   145,   149,   156,   164,   170,   177,   183,   189,
     193,   196,   199,   201,   204,   206,   208,   210,   213,   216,
     219,   223,   225,   229,   231,   234,   239,   243,   249,   254,
     262,   267,   272,   277,   285,   295,   299,   305,   309,   314,
     317,   321,   325,   331,   334,   338,   341,   345,   349,   355,
     358,   361,   365,   368,   372,   378,   381,   385,   388,   392,
     395,   399,   402,   405,   409,   411,   415,   417,   419,   424,
     431,   438,   442,   445,   448,   451,   455,   459,   463,   467,
     471,   475,   479,   483,   487,   491,   495,   499,   503,   507,
     511,   515,   519,   523,   527
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      75,     0,    -1,    77,    -1,    76,    -1,    75,    77,    -1,
      75,    76,    -1,    40,    -1,    64,    76,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,
      91,    -1,    84,    -1,     9,    64,    -1,    64,    77,    -1,
       3,    11,    89,    65,    85,    86,    -1,     3,     4,    11,
      89,    65,    85,    86,    -1,    15,    11,    89,    65,    85,
      86,    -1,    14,    15,    11,    89,    65,    64,    -1,    13,
      15,    11,    89,    65,    85,    86,    -1,    14,    13,    15,
      11,    89,    65,    64,    -1,    17,    11,    89,    65,    85,
      86,    -1,    14,    17,    11,    89,    65,    64,    -1,    13,
      17,    11,    89,    65,    85,    86,    -1,    14,    13,    17,
      11,    89,    65,    64,    -1,    17,    15,    11,    89,    65,
      85,    86,    -1,    13,    17,    15,    11,    89,    65,    85,
      86,    -1,    16,    11,    89,    65,    85,    86,    -1,    16,
      11,    65,    85,    86,    -1,     3,     5,    64,    -1,     3,
       5,    66,    93,    67,    64,    -1,     3,     4,     5,    66,
      93,    67,    64,    -1,     3,     5,    68,    93,    64,    -1,
       3,     4,     5,    68,    93,    64,    -1,     3,     5,    68,
      13,    64,    -1,    12,     5,    68,    93,    64,    -1,    69,
      90,    70,    -1,    69,    70,    -1,    69,    87,    -1,    69,
      -1,    90,    70,    -1,    70,    -1,    82,    -1,    83,    -1,
      87,    82,    -1,    87,    83,    -1,     3,     5,    -1,     3,
       4,     5,    -1,    88,    -1,    89,    71,    88,    -1,    91,
      -1,    90,    91,    -1,    11,    92,    65,    64,    -1,    11,
      65,    64,    -1,    72,    11,    92,    65,    64,    -1,     5,
      68,    93,    64,    -1,     5,    66,    92,    67,    68,    93,
      64,    -1,    93,    42,    93,    64,    -1,    93,    44,    93,
      64,    -1,    93,    43,    93,    64,    -1,    18,     5,    68,
      93,    19,    93,    84,    -1,    18,     5,    68,    93,    19,
      93,    28,    93,    84,    -1,    24,    93,    84,    -1,    24,
      93,    84,    25,    84,    -1,    20,    93,    84,    -1,    84,
      21,    93,    64,    -1,    22,    64,    -1,    23,    93,    64,
      -1,    29,     5,    64,    -1,    29,    93,    71,     5,    64,
      -1,    30,    64,    -1,    30,    92,    64,    -1,    31,    64,
      -1,    31,    93,    64,    -1,    32,    93,    64,    -1,    32,
      93,    71,     5,    64,    -1,    33,    64,    -1,    34,    64,
      -1,    34,    93,    64,    -1,    38,    64,    -1,    38,    93,
      64,    -1,    38,    93,    71,    93,    64,    -1,    35,    64,
      -1,    35,    92,    64,    -1,    36,    64,    -1,    36,    93,
      64,    -1,    37,    64,    -1,    37,    93,    64,    -1,    39,
      64,    -1,    10,    64,    -1,    10,    93,    64,    -1,    93,
      -1,    92,    71,    93,    -1,     6,    -1,     5,    -1,     5,
      66,    92,    67,    -1,     5,    66,    93,    26,    93,    67,
      -1,     5,    66,    93,    27,    93,    67,    -1,    11,    92,
      65,    -1,    56,    93,    -1,    48,    93,    -1,    63,    93,
      -1,    93,    46,    93,    -1,    93,    45,    93,    -1,    93,
      47,    93,    -1,    93,    54,    93,    -1,    93,    53,    93,
      -1,    93,    52,    93,    -1,    93,    51,    93,    -1,    93,
      49,    93,    -1,    93,    50,    93,    -1,    93,    55,    93,
      -1,    93,    56,    93,    -1,    93,    57,    93,    -1,    93,
      58,    93,    -1,    93,    59,    93,    -1,    93,    60,    93,
      -1,    93,    62,    93,    -1,    73,    93,    65,    -1,     7,
      93,    65,    -1,     8,    92,    65,    -1,     8,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   116,   116,   117,   118,   119,   122,   123,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   138,   140,
     144,   146,   148,   150,   154,   156,   158,   160,   162,   165,
     170,   172,   176,   177,   178,   179,   180,   181,   187,   189,
     190,   193,   194,   197,   198,   201,   202,   203,   204,   207,
     208,   211,   212,   215,   216,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   260,   261,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tokTYPE", "tokTENSOR", "tokID",
  "tokCONS", "tokBASEFUNCT", "tokLISTFUNCT", "tokINCLUDE", "tokSET",
  "tokIDCALL", "tokCONST", "tokCOND", "tokEXTERN", "tokOP", "tokPROC",
  "tokQUFUN", "tokFOR", "tokTO", "tokWHILE", "tokUNTIL", "tokBREAK",
  "tokRETURN", "tokIF", "tokELSE", "tokRANGE_LENGTH", "tokRANGE_END",
  "tokSTEP", "tokINPUT", "tokPRINT", "tokEXIT", "tokMEASURE", "tokRESET",
  "tokDUMP", "tokINSPECT", "tokLOAD", "tokSAVE", "tokPLOT", "tokSHELL",
  "tokEOF", "tokERROR", "tokSWAP", "tokINVTRANS", "tokTRANS", "tokXOR",
  "tokOR", "tokAND", "tokNOT", "'<'", "'>'", "tokNOTEQ", "tokGREQ",
  "tokLEEQ", "tokEQ", "'+'", "'-'", "'&'", "tokMOD", "'*'", "'/'",
  "tokNEG", "'^'", "'#'", "';'", "')'", "'['", "']'", "'='", "'{'", "'}'",
  "','", "'!'", "'('", "$accept", "objlist", "eof", "obj", "functdef",
  "quopdef", "qufundef", "procdef", "vardef", "constdef", "block",
  "bodydef", "bodystm", "deflist", "arg", "arglist", "stmtlist", "stmt",
  "exprlist", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   902,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   601,   602,   603,   604,   605,   606,
     900,   901,   903,   904,   905,   906,   907,   908,   909,    60,
      62,   910,   911,   912,   913,    43,    45,    38,   914,    42,
      47,   915,    94,    35,    59,    41,    91,    93,    61,   123,
     125,    44,    33,    40
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    74,    75,    75,    75,    75,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    82,    82,    82,    82,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     6,     7,
       6,     6,     7,     7,     6,     6,     7,     7,     7,     8,
       6,     5,     3,     6,     7,     5,     6,     5,     5,     3,
       2,     2,     1,     2,     1,     1,     1,     2,     2,     2,
       3,     1,     3,     1,     2,     4,     3,     5,     4,     7,
       4,     4,     4,     7,     9,     3,     5,     3,     4,     2,
       3,     3,     5,     2,     3,     2,     3,     3,     5,     2,
       2,     3,     2,     3,     5,     2,     3,     2,     3,     2,
       3,     2,     2,     3,     1,     3,     1,     1,     4,     6,
       6,     3,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,    97,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     2,     8,     9,    10,    11,    12,    13,    15,    14,
       0,     0,     0,     0,     0,     0,    97,     0,     0,   124,
       0,    94,    16,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,     0,    97,     0,    73,     0,    75,     0,     0,    79,
      80,     0,    85,     0,    87,     0,    89,     0,    82,     0,
      91,   103,   102,   104,     7,    17,    40,     0,     0,    53,
       0,     0,     1,     5,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    51,     0,     0,    94,     0,     0,     0,   122,   123,
       0,    93,    56,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    70,
      65,    71,     0,    74,    76,    77,     0,    81,    86,    88,
      90,    83,     0,    39,    54,     0,   121,     0,     0,     0,
       0,   106,   105,   107,   112,   113,   111,   110,   109,   108,
     114,   115,   116,   117,   118,   119,   120,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    98,     0,     0,
      58,     0,   101,    95,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    60,    62,    61,     0,
       0,     0,     0,    37,    35,    50,     0,    52,     0,     0,
       0,    98,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    46,    41,    44,    31,     0,     0,     0,
       0,     0,    66,    72,    78,    84,    57,     0,    36,     0,
      33,    18,     0,    99,   100,     0,     0,     0,     0,     0,
      21,    25,    20,     0,    47,    48,    43,    30,    24,     0,
       0,    34,    19,    59,    22,    26,     0,    23,    27,    28,
       0,    63,    29,     0,    64
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     107,   235,   276,   274,   141,   142,   277,   109,    60,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -225
static const short int yypact[] =
{
     323,    52,   141,  -225,   778,    36,   -63,   178,   625,    23,
     193,   155,    29,    37,    49,    54,   778,   -27,   778,   778,
     804,   636,   659,   778,     3,   671,   697,   731,   743,   757,
      11,  -225,   778,   778,   778,   323,   383,    72,   778,   252,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,    67,  -225,
    1090,    63,   109,   104,   778,   778,    44,   778,  1108,  -225,
       6,  1470,  -225,  -225,  1150,    82,    15,    70,   146,    61,
     196,   147,   165,   104,     1,   104,   179,   128,   986,  -225,
    1170,   986,   156,   963,  -225,   -10,  -225,  1190,   917,  -225,
    -225,  1210,  -225,    -6,  -225,  1230,  -225,  1250,  -225,   940,
    -225,   843,   159,  -225,  -225,  -225,  -225,    67,   452,  -225,
     778,  1129,  -225,  -225,  -225,   778,   778,   778,   778,   778,
     778,   778,   778,   778,   778,   778,   778,   778,   778,   778,
     778,   778,   778,   778,   778,   157,   104,  -225,   778,   769,
     195,  -225,    20,   -22,   899,  1270,   778,    22,  -225,  -225,
     778,  -225,  -225,   150,   778,   104,   104,   213,   216,   217,
     104,   104,    31,   160,    32,    33,   104,   778,  -225,  -225,
     205,  -225,   226,  -225,  -225,  -225,   228,  -225,  -225,  -225,
    -225,  -225,   778,  -225,  -225,    40,  -225,  1290,  1310,  1330,
    1350,  1484,  1484,   843,  1498,  1498,  1498,  1498,  1498,  1498,
     -47,   -47,   -47,   135,   159,   159,  -225,   778,   778,    41,
    1007,   171,  1370,   231,  -225,   160,   104,   169,   778,   778,
    -225,   107,  -225,  1470,  -225,  1390,    69,    74,   104,   104,
     104,    76,    78,   160,    26,   521,   160,   160,    85,   829,
     174,   180,   181,  1410,   182,  -225,  -225,  -225,  -225,  1026,
    1430,   160,   183,  -225,  -225,  -225,   521,  -225,   778,  1045,
    1064,  -225,  -225,   160,   160,    88,    95,    96,   184,   185,
     521,   199,  -225,  -225,    26,  -225,  -225,   590,   521,   521,
     160,   778,  -225,  -225,  -225,  -225,  -225,   186,  -225,   521,
    -225,  -225,  1450,  -225,  -225,   521,   521,   160,   189,   190,
    -225,  -225,  -225,   233,  -225,  -225,  -225,  -225,  -225,   521,
     862,  -225,  -225,  -225,  -225,  -225,   521,  -225,  -225,  -225,
     778,  -225,  -225,   986,  -225
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -225,  -225,   152,   153,  -225,  -225,  -225,  -225,  -224,  -212,
       0,   -82,   -77,  -225,    55,   -66,   237,    34,    25,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const short int yytable[] =
{
      48,    62,    58,    61,   140,    64,    61,   162,   164,   165,
     272,   131,   132,   133,    78,   134,    80,    81,    83,    61,
      87,    88,   273,    91,    61,    95,    97,    99,    67,   271,
     101,   102,   103,    66,    49,    48,   111,    79,     9,    48,
      73,    56,     3,     4,     5,   217,    85,    57,    74,   150,
     304,    93,   144,   145,   173,    61,    51,    52,   178,    77,
      75,   150,   305,    53,    76,   150,   163,    89,   135,    49,
     209,   149,   156,    49,   136,   100,   157,   150,   168,   143,
     153,   170,   147,   110,    32,   215,   150,   222,   115,   226,
     227,   216,    33,   150,   231,   232,   233,   236,   237,    34,
     238,    59,   216,   216,   216,   244,   251,   140,    61,    38,
     146,   150,   216,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   256,   263,   185,   210,   212,   154,   264,
     216,   268,   184,   269,   144,   216,   152,   216,   223,   216,
     280,   270,   225,   297,   278,   279,   216,   155,   160,   216,
     298,   299,   265,   266,   267,   239,   216,   216,    70,   289,
      71,   221,    72,   137,   261,   138,   161,   139,   150,   291,
     243,   295,   296,    56,     3,     4,     5,   104,   105,    57,
     166,   113,   114,   302,   132,   133,   167,   134,   309,   213,
     214,   307,   308,   303,    52,   249,   250,    54,    68,    55,
      69,   158,   312,   159,   224,   316,   259,   260,   314,   315,
     171,   134,   146,   207,   228,   208,    32,   229,   230,   234,
     240,   241,   319,   242,    33,   253,   255,   258,   135,   322,
     282,    34,    63,    36,   283,   284,   286,   290,   300,   301,
     311,    38,   112,   317,   318,     1,   292,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   257,    16,   108,    17,    18,    19,     0,     0,   310,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,    33,     0,
     321,   184,     0,     0,     0,    34,    35,     0,   323,     0,
       0,    36,     0,   324,    37,    38,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,    34,    35,     2,     3,
       4,     5,    36,     7,     8,    37,    38,     0,     0,     0,
       0,    15,     0,    16,     0,    17,    18,    19,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,    36,   106,     0,    37,    38,     2,     3,     4,
       5,     0,     7,     8,     0,     0,     0,     0,     0,     0,
      15,     0,    16,     0,    17,    18,    19,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
       0,    36,   183,     0,    37,    38,     2,     3,     4,     5,
       0,     7,     8,     0,     0,     0,     0,     0,     0,    15,
       0,    16,     0,    17,    18,    19,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
      36,   275,     0,    37,    38,     2,     3,     4,     5,     0,
       7,     8,     0,     0,     0,     0,     0,     0,    15,     0,
      16,     0,    17,    18,    19,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      56,     3,     4,     5,     0,     0,    57,     0,    32,     0,
       0,    56,     3,     4,     5,     0,    33,    57,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,    36,
     306,     0,    37,    38,    56,     3,     4,     5,     0,     0,
      57,     0,     0,    32,     0,     0,    56,     3,     4,     5,
       0,    33,    57,     0,    32,     0,     0,     0,    34,     0,
      65,     0,    33,     0,     0,     0,     0,     0,    38,    34,
      84,     0,    56,     3,     4,     5,     0,    32,    57,    38,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    32,
       0,     0,    34,    86,     0,     0,     0,    33,     0,     0,
       0,     0,    38,     0,    34,    90,    56,     3,     4,     5,
       0,     0,    57,     0,    38,    32,     0,     0,    56,     3,
       4,     5,     0,    33,    57,     0,     0,     0,     0,     0,
      34,    92,    56,     3,     4,     5,     0,     0,    57,     0,
      38,     0,     0,     0,    56,     3,     4,     5,     0,    32,
      57,     0,   211,    56,     3,     4,     5,    33,     0,    57,
       0,    32,     0,     0,    34,    94,     0,     0,     0,    33,
       0,     0,     0,     0,    38,    32,    34,    96,     0,    82,
       3,     4,     5,    33,     0,    57,    38,    32,     0,     0,
      34,    98,     0,     0,     0,    33,    32,     0,     0,     0,
      38,     0,    34,     0,    33,     0,     0,     0,     0,     0,
       0,    34,    38,     0,     0,     0,     0,     0,   281,     0,
       0,    38,    32,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,   119,   120,   121,    38,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     320,   134,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,     0,   134,     0,   119,   120,   121,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,     0,   134,   218,   219,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,   134,   119,   120,   121,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,     0,   134,
       0,   175,     0,     0,     0,   119,   120,   121,   176,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   181,     0,     0,     0,   119,   120,
     121,   182,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,     0,   134,     0,     0,     0,     0,
       0,   119,   120,   121,   172,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     0,   134,     0,
       0,     0,   119,   120,   121,    36,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,     0,   134,
       0,   119,   120,   121,   252,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     0,   134,     0,
     119,   120,   121,   287,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,     0,   134,     0,   119,
     120,   121,   293,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,     0,   134,     0,     0,     0,
       0,   294,   116,   117,   118,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,   119,   120,   121,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     0,
     134,     0,     0,   148,   119,   120,   121,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,   134,     0,     0,   186,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   151,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   169,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   174,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   177,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   179,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   180,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   220,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   245,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   246,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   247,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   248,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   254,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   262,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   285,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   288,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   313,   119,   120,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   121,   134,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,     0,   134,    -1,    -1,    -1,
      -1,    -1,    -1,   128,   129,   130,   131,   132,   133,     0,
     134
};

static const short int yycheck[] =
{
       0,    64,     4,     5,     3,     7,     8,    73,    74,    75,
     234,    58,    59,    60,    16,    62,    18,    19,    20,    21,
      22,    23,   234,    25,    26,    27,    28,    29,     5,     3,
      32,    33,    34,     8,     0,    35,    38,    64,    12,    39,
      11,     5,     6,     7,     8,    67,    21,    11,    11,    71,
     274,    26,    54,    55,    64,    57,     4,     5,    64,     5,
      11,    71,   274,    11,    15,    71,    65,    64,     5,    35,
     136,    65,    11,    39,    11,    64,    15,    71,    78,    54,
      65,    81,    57,    11,    48,    65,    71,    65,    21,   155,
     156,    71,    56,    71,   160,   161,    65,    65,    65,    63,
     166,    65,    71,    71,    71,    65,    65,     3,   110,    73,
      66,    71,    71,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   215,    65,   110,   138,   139,    68,    65,
      71,    65,   108,    65,   146,    71,    64,    71,   150,    71,
      65,   233,   154,    65,   236,   237,    71,    11,    11,    71,
      65,    65,   228,   229,   230,   167,    71,    71,    13,   251,
      15,   146,    17,    64,    67,    66,    11,    68,    71,   256,
     182,   263,   264,     5,     6,     7,     8,    35,    35,    11,
      11,    39,    39,   270,    59,    60,    68,    62,   280,     4,
       5,   278,   279,     4,     5,   207,   208,    66,    15,    68,
      17,    15,   289,    17,    64,   297,   218,   219,   295,   296,
      64,    62,    66,    66,    11,    68,    48,    11,    11,    69,
      25,     5,   309,     5,    56,    64,     5,    68,     5,   316,
     240,    63,    64,    69,    64,    64,    64,    64,    64,    64,
      64,    73,     0,    64,    64,     3,   258,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   216,    20,    36,    22,    23,    24,    -1,    -1,   281,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
     310,   277,    -1,    -1,    -1,    63,    64,    -1,   320,    -1,
      -1,    69,    -1,   323,    72,    73,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,     5,     6,
       7,     8,    69,    10,    11,    72,    73,    -1,    -1,    -1,
      -1,    18,    -1,    20,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    72,    73,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    72,    73,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    20,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    72,    73,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    48,    -1,
      -1,     5,     6,     7,     8,    -1,    56,    11,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    72,    73,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    48,    -1,    -1,     5,     6,     7,     8,
      -1,    56,    11,    -1,    48,    -1,    -1,    -1,    63,    -1,
      65,    -1,    56,    -1,    -1,    -1,    -1,    -1,    73,    63,
      64,    -1,     5,     6,     7,     8,    -1,    48,    11,    73,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    48,
      -1,    -1,    63,    64,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    73,    -1,    63,    64,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    73,    48,    -1,    -1,     5,     6,
       7,     8,    -1,    56,    11,    -1,    -1,    -1,    -1,    -1,
      63,    64,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      73,    -1,    -1,    -1,     5,     6,     7,     8,    -1,    48,
      11,    -1,    13,     5,     6,     7,     8,    56,    -1,    11,
      -1,    48,    -1,    -1,    63,    64,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    73,    48,    63,    64,    -1,     5,
       6,     7,     8,    56,    -1,    11,    73,    48,    -1,    -1,
      63,    64,    -1,    -1,    -1,    56,    48,    -1,    -1,    -1,
      73,    -1,    63,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    73,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    73,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    73,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      28,    62,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    -1,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    26,    27,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      -1,    64,    -1,    -1,    -1,    45,    46,    47,    71,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    -1,    -1,    -1,    45,    46,
      47,    71,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    71,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    -1,
      -1,    -1,    45,    46,    47,    69,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      -1,    45,    46,    47,    67,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    -1,
      45,    46,    47,    67,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    -1,    45,
      46,    47,    67,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    -1,    -1,    -1,
      -1,    67,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    -1,    -1,    65,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    -1,    -1,    65,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    64,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    47,    62,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    20,    22,    23,    24,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    48,    56,    63,    64,    69,    72,    73,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    91,
      93,     4,     5,    11,    66,    68,     5,    11,    93,    65,
      92,    93,    64,    64,    93,    65,    92,     5,    15,    17,
      13,    15,    17,    11,    11,    11,    15,     5,    93,    64,
      93,    93,     5,    93,    64,    92,    64,    93,    93,    64,
      64,    93,    64,    92,    64,    93,    64,    93,    64,    93,
      64,    93,    93,    93,    76,    77,    70,    84,    90,    91,
      11,    93,     0,    76,    77,    21,    42,    43,    44,    45,
      46,    47,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    62,     5,    11,    64,    66,    68,
       3,    88,    89,    92,    93,    93,    66,    92,    65,    65,
      71,    64,    64,    65,    68,    11,    11,    15,    15,    17,
      11,    11,    89,    65,    89,    89,    11,    68,    84,    64,
      84,    64,    71,    64,    64,    64,    71,    64,    64,    64,
      64,    64,    71,    70,    91,    92,    65,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    66,    68,    89,
      93,    13,    93,     4,     5,    65,    71,    67,    26,    27,
      64,    92,    65,    93,    64,    93,    89,    89,    11,    11,
      11,    89,    89,    65,    69,    85,    65,    65,    89,    93,
      25,     5,     5,    93,    65,    64,    64,    64,    64,    93,
      93,    65,    67,    64,    64,     5,    85,    88,    68,    93,
      93,    67,    64,    65,    65,    89,    89,    89,    65,    65,
      85,     3,    82,    83,    87,    70,    86,    90,    85,    85,
      65,    19,    84,    64,    64,    64,    64,    67,    64,    85,
      64,    86,    93,    67,    67,    85,    85,    65,    65,    65,
      64,    64,    86,     4,    82,    83,    70,    86,    86,    85,
      93,    64,    86,    64,    86,    86,    85,    64,    64,    86,
      28,    84,    86,    93,    84
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#ifndef	YYINITDEPTH
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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 116 "qcl.y"
    { (yyval.OBJLIST) = YYNEW(objlist); YYTRY((yyval.OBJLIST)->push_back((yyvsp[0].OBJ))); ;}
    break;

  case 3:
#line 117 "qcl.y"
    { yyObjList = (yyval.OBJLIST) = YYNEW(objlist); YYACCEPT; ;}
    break;

  case 4:
#line 118 "qcl.y"
    { YYTRY((yyvsp[-1].OBJLIST)->push_back((yyvsp[0].OBJ))); (yyval.OBJLIST)=(yyvsp[-1].OBJLIST); ;}
    break;

  case 5:
#line 119 "qcl.y"
    { yyObjList = (yyval.OBJLIST) = (yyvsp[-1].OBJLIST); YYACCEPT; ;}
    break;

  case 6:
#line 122 "qcl.y"
    { (yyval.OBJ) = 0; ;}
    break;

  case 7:
#line 123 "qcl.y"
    { (yyval.OBJ) = 0; ;}
    break;

  case 8:
#line 126 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].DEF); ;}
    break;

  case 9:
#line 127 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].DEF); ;}
    break;

  case 10:
#line 128 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].DEF); ;}
    break;

  case 11:
#line 129 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].DEF); ;}
    break;

  case 12:
#line 130 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].DEF); ;}
    break;

  case 13:
#line 131 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].DEF); ;}
    break;

  case 14:
#line 132 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].STMT); ;}
    break;

  case 15:
#line 133 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].STMTLIST); ;}
    break;

  case 16:
#line 134 "qcl.y"
    { (yyval.OBJ) = YYNEW(sInclude(*(yyvsp[-1].STRING))); ;}
    break;

  case 17:
#line 135 "qcl.y"
    { (yyval.OBJ) = (yyvsp[0].OBJ); ;}
    break;

  case 18:
#line 138 "qcl.y"
    { 
	  (yyval.DEF) = YYNEW(sFunctDef(tType((yyvsp[-5].TYPE)),(yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST))); ;}
    break;

  case 19:
#line 140 "qcl.y"
    { 
	  (yyval.DEF) = YYNEW(sFunctDef(tType((yyvsp[-6].TYPE),(yyvsp[-5].TENSOR)),(yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST))); ;}
    break;

  case 20:
#line 144 "qcl.y"
    { 
	  (yyval.DEF) = YYNEW(sQuOpDef((yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST))); ;}
    break;

  case 21:
#line 146 "qcl.y"
    {
	  (yyval.DEF) = YYNEW(sQuOpDef((yyvsp[-3].ID),(yyvsp[-2].DEFLIST),0,0,0,1)); ;}
    break;

  case 22:
#line 148 "qcl.y"
    { 
	  (yyval.DEF) = YYNEW(sQuOpDef((yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST),1)); ;}
    break;

  case 23:
#line 150 "qcl.y"
    {
	  (yyval.DEF) = YYNEW(sQuOpDef((yyvsp[-3].ID),(yyvsp[-2].DEFLIST),0,0,1,1)); ;}
    break;

  case 24:
#line 154 "qcl.y"
    { 
	  (yyval.DEF) = YYNEW(sQuFunDef((yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST))); ;}
    break;

  case 25:
#line 156 "qcl.y"
    {
	  (yyval.DEF) = YYNEW(sQuFunDef((yyvsp[-3].ID),(yyvsp[-2].DEFLIST),0,0,0,1)); ;}
    break;

  case 26:
#line 158 "qcl.y"
    { 
	  (yyval.DEF) = YYNEW(sQuFunDef((yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST),1)); ;}
    break;

  case 27:
#line 160 "qcl.y"
    {
	  (yyval.DEF) = YYNEW(sQuFunDef((yyvsp[-3].ID),(yyvsp[-2].DEFLIST),0,0,1,1)); ;}
    break;

  case 28:
#line 162 "qcl.y"
    { 
	  (yyval.DEF) = YYNEW(sQuFunDef((yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST))); 
          YYTRY((yyval.DEF)->setFlag(flagFUNOP)); ;}
    break;

  case 29:
#line 165 "qcl.y"
    {
	  (yyval.DEF) = YYNEW(sQuFunDef((yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST),1)); 
          YYTRY((yyval.DEF)->setFlag(flagFUNOP)); ;}
    break;

  case 30:
#line 170 "qcl.y"
    { 
	  (yyval.DEF) = YYNEW(sProcDef((yyvsp[-4].ID),(yyvsp[-3].DEFLIST),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST))); ;}
    break;

  case 31:
#line 172 "qcl.y"
    {
	  (yyval.DEF) = YYNEW(sProcDef((yyvsp[-3].ID),new sDefList(),(yyvsp[-1].DEFLIST),(yyvsp[0].STMTLIST))); ;}
    break;

  case 32:
#line 176 "qcl.y"
    { (yyval.DEF) = YYNEW(sVarDef(tType((yyvsp[-2].TYPE)),(yyvsp[-1].ID))); ;}
    break;

  case 33:
#line 177 "qcl.y"
    { (yyval.DEF) = YYNEW(sVarDef(tType((yyvsp[-5].TYPE)),(yyvsp[-4].ID),(yyvsp[-2].EXPR),0)); ;}
    break;

  case 34:
#line 178 "qcl.y"
    { (yyval.DEF) = YYNEW(sVarDef(tType((yyvsp[-6].TYPE),(yyvsp[-5].TENSOR)),(yyvsp[-4].ID),(yyvsp[-2].EXPR),0)); ;}
    break;

  case 35:
#line 179 "qcl.y"
    { (yyval.DEF) = YYNEW(sVarDef(tType((yyvsp[-4].TYPE)),(yyvsp[-3].ID),0,(yyvsp[-1].EXPR))); ;}
    break;

  case 36:
#line 180 "qcl.y"
    { (yyval.DEF) = YYNEW(sVarDef(tType((yyvsp[-5].TYPE),(yyvsp[-4].TENSOR)),(yyvsp[-3].ID),0,(yyvsp[-1].EXPR))); ;}
    break;

  case 37:
#line 181 "qcl.y"
    {
          	(yyval.DEF) = YYNEW(sVarDef(tType((yyvsp[-4].TYPE)),(yyvsp[-3].ID),0,new sVar(new tId(CONDID))));
          	YYTRY((yyval.DEF)->setFlag(flagCONDDEF)); 
          ;}
    break;

  case 38:
#line 187 "qcl.y"
    { (yyval.DEF) = YYNEW(sConstDef((yyvsp[-3].ID),(yyvsp[-1].EXPR))); ;}
    break;

  case 39:
#line 189 "qcl.y"
    { (yyval.STMTLIST) = (yyvsp[-1].STMTLIST); ;}
    break;

  case 40:
#line 190 "qcl.y"
    { (yyval.STMTLIST) = YYNEW(sStmtList()); ;}
    break;

  case 41:
#line 193 "qcl.y"
    { (yyval.DEFLIST) = (yyvsp[0].DEFLIST); ;}
    break;

  case 42:
#line 194 "qcl.y"
    { (yyval.DEFLIST) = YYNEW(sDefList()); ;}
    break;

  case 43:
#line 197 "qcl.y"
    { (yyval.STMTLIST) = (yyvsp[-1].STMTLIST); ;}
    break;

  case 44:
#line 198 "qcl.y"
    { (yyval.STMTLIST) = YYNEW(sStmtList()); ;}
    break;

  case 45:
#line 201 "qcl.y"
    { (yyval.DEFLIST) = YYNEW(sDefList()); YYTRY((yyval.DEFLIST)->append((yyvsp[0].DEF))); ;}
    break;

  case 46:
#line 202 "qcl.y"
    { (yyval.DEFLIST) = YYNEW(sDefList()); YYTRY((yyval.DEFLIST)->append((yyvsp[0].DEF))); ;}
    break;

  case 47:
#line 203 "qcl.y"
    { YYTRY((yyvsp[-1].DEFLIST)->append((yyvsp[0].DEF))); (yyval.DEFLIST)=(yyvsp[-1].DEFLIST); ;}
    break;

  case 48:
#line 204 "qcl.y"
    { YYTRY((yyvsp[-1].DEFLIST)->append((yyvsp[0].DEF))); (yyval.DEFLIST)=(yyvsp[-1].DEFLIST); ;}
    break;

  case 49:
#line 207 "qcl.y"
    { (yyval.DEF) = YYNEW(sArgDef(tType((yyvsp[-1].TYPE)),(yyvsp[0].ID))); ;}
    break;

  case 50:
#line 208 "qcl.y"
    { (yyval.DEF) = YYNEW(sArgDef(tType((yyvsp[-2].TYPE),(yyvsp[-1].TENSOR)),(yyvsp[0].ID))); ;}
    break;

  case 51:
#line 211 "qcl.y"
    { (yyval.DEFLIST) = YYNEW(sDefList()); YYTRY((yyval.DEFLIST)->append((yyvsp[0].DEF))); ;}
    break;

  case 52:
#line 212 "qcl.y"
    { YYTRY((yyvsp[-2].DEFLIST)->append((yyvsp[0].DEF))); (yyval.DEFLIST)=(yyvsp[-2].DEFLIST); ;}
    break;

  case 53:
#line 215 "qcl.y"
    { (yyval.STMTLIST) = YYNEW(sStmtList()); YYTRY((yyval.STMTLIST)->append((yyvsp[0].STMT))); ;}
    break;

  case 54:
#line 216 "qcl.y"
    { YYTRY((yyvsp[-1].STMTLIST)->append((yyvsp[0].STMT))); (yyval.STMTLIST)=(yyvsp[-1].STMTLIST); ;}
    break;

  case 55:
#line 219 "qcl.y"
    { (yyval.STMT) = YYNEW(sCall((yyvsp[-3].ID),(yyvsp[-2].EXPRLIST))); ;}
    break;

  case 56:
#line 220 "qcl.y"
    { (yyval.STMT) = YYNEW(sCall((yyvsp[-2].ID),new sExprList())); ;}
    break;

  case 57:
#line 221 "qcl.y"
    { (yyval.STMT) = YYNEW(sCall((yyvsp[-3].ID),(yyvsp[-2].EXPRLIST),1)); ;}
    break;

  case 58:
#line 222 "qcl.y"
    { (yyval.STMT) = YYNEW(sAssign(new sVar((yyvsp[-3].ID)),(yyvsp[-1].EXPR))); ;}
    break;

  case 59:
#line 223 "qcl.y"
    { (yyval.STMT) = YYNEW(sAssign(new sVar((yyvsp[-6].ID)),(yyvsp[-1].EXPR),(yyvsp[-4].EXPRLIST))); ;}
    break;

  case 60:
#line 224 "qcl.y"
    { (yyval.STMT) = YYNEW(sCall(new tId(SWAPID),new sExprList((yyvsp[-3].EXPR),(yyvsp[-1].EXPR)))); ;}
    break;

  case 61:
#line 225 "qcl.y"
    { (yyval.STMT) = YYNEW(sCall(new tId(FANOUTID),new sExprList((yyvsp[-3].EXPR),(yyvsp[-1].EXPR)))); ;}
    break;

  case 62:
#line 226 "qcl.y"
    { (yyval.STMT) = YYNEW(sCall(new tId(FANOUTID),new sExprList((yyvsp[-3].EXPR),(yyvsp[-1].EXPR)),1)); ;}
    break;

  case 63:
#line 227 "qcl.y"
    { (yyval.STMT) = YYNEW(sFor(new sVar((yyvsp[-5].ID)),(yyvsp[-3].EXPR),(yyvsp[-1].EXPR),(yyvsp[0].STMTLIST))); ;}
    break;

  case 64:
#line 228 "qcl.y"
    { (yyval.STMT) = YYNEW(sFor(new sVar((yyvsp[-7].ID)),(yyvsp[-5].EXPR),(yyvsp[-3].EXPR),(yyvsp[0].STMTLIST),(yyvsp[-1].EXPR))); ;}
    break;

  case 65:
#line 229 "qcl.y"
    { (yyval.STMT) = YYNEW(sIf((yyvsp[-1].EXPR),(yyvsp[0].STMTLIST))); ;}
    break;

  case 66:
#line 230 "qcl.y"
    { (yyval.STMT) = YYNEW(sIf((yyvsp[-3].EXPR),(yyvsp[-2].STMTLIST),(yyvsp[0].STMTLIST))); ;}
    break;

  case 67:
#line 231 "qcl.y"
    { (yyval.STMT) = YYNEW(sWhile((yyvsp[-1].EXPR),(yyvsp[0].STMTLIST))); ;}
    break;

  case 68:
#line 232 "qcl.y"
    { (yyval.STMT) = YYNEW(sUntil((yyvsp[-1].EXPR),(yyvsp[-3].STMTLIST))); ;}
    break;

  case 69:
#line 233 "qcl.y"
    { (yyval.STMT) = YYNEW(sBreak()); ;}
    break;

  case 70:
#line 234 "qcl.y"
    { (yyval.STMT) = YYNEW(sReturn((yyvsp[-1].EXPR))); ;}
    break;

  case 71:
#line 235 "qcl.y"
    { (yyval.STMT) = YYNEW(sInput(new sVar((yyvsp[-1].ID)),0)); ;}
    break;

  case 72:
#line 236 "qcl.y"
    { (yyval.STMT) = YYNEW(sInput(new sVar((yyvsp[-1].ID)),(yyvsp[-3].EXPR))); ;}
    break;

  case 73:
#line 237 "qcl.y"
    { (yyval.STMT) = YYNEW(sPrint(new sExprList())); ;}
    break;

  case 74:
#line 238 "qcl.y"
    { (yyval.STMT) = YYNEW(sPrint((yyvsp[-1].EXPRLIST))); ;}
    break;

  case 75:
#line 239 "qcl.y"
    { (yyval.STMT) = YYNEW(sExit(0)); ;}
    break;

  case 76:
#line 240 "qcl.y"
    { (yyval.STMT) = YYNEW(sExit((yyvsp[-1].EXPR))); ;}
    break;

  case 77:
#line 241 "qcl.y"
    { (yyval.STMT) = YYNEW(sMeasure((yyvsp[-1].EXPR),0)); ;}
    break;

  case 78:
#line 242 "qcl.y"
    { (yyval.STMT) = YYNEW(sMeasure((yyvsp[-3].EXPR),new sVar((yyvsp[-1].ID)))); ;}
    break;

  case 79:
#line 243 "qcl.y"
    { (yyval.STMT) = YYNEW(sReset()); ;}
    break;

  case 80:
#line 244 "qcl.y"
    { (yyval.STMT) = YYNEW(sDump(0)); ;}
    break;

  case 81:
#line 245 "qcl.y"
    { (yyval.STMT) = YYNEW(sDump((yyvsp[-1].EXPR))); ;}
    break;

  case 82:
#line 246 "qcl.y"
    { (yyval.STMT) = YYNEW(sPlot()); ;}
    break;

  case 83:
#line 247 "qcl.y"
    { (yyval.STMT) = YYNEW(sPlot((yyvsp[-1].EXPR))); ;}
    break;

  case 84:
#line 248 "qcl.y"
    { (yyval.STMT) = YYNEW(sPlot((yyvsp[-3].EXPR),(yyvsp[-1].EXPR))); ;}
    break;

  case 85:
#line 249 "qcl.y"
    { (yyval.STMT) = YYNEW(sInspect(0)); ;}
    break;

  case 86:
#line 250 "qcl.y"
    { (yyval.STMT) = YYNEW(sInspect((yyvsp[-1].EXPRLIST))); ;}
    break;

  case 87:
#line 251 "qcl.y"
    { (yyval.STMT) = YYNEW(sLoad(0)); ;}
    break;

  case 88:
#line 252 "qcl.y"
    { (yyval.STMT) = YYNEW(sLoad((yyvsp[-1].EXPR))); ;}
    break;

  case 89:
#line 253 "qcl.y"
    { (yyval.STMT) = YYNEW(sSave(0)); ;}
    break;

  case 90:
#line 254 "qcl.y"
    { (yyval.STMT) = YYNEW(sSave((yyvsp[-1].EXPR))); ;}
    break;

  case 91:
#line 255 "qcl.y"
    { (yyval.STMT) = YYNEW(sShell()); ;}
    break;

  case 92:
#line 256 "qcl.y"
    { (yyval.STMT) = YYNEW(sSet(*(yyvsp[-1].STRING),0)); ;}
    break;

  case 93:
#line 257 "qcl.y"
    { (yyval.STMT) = YYNEW(sSet(*(yyvsp[-2].STRING),(yyvsp[-1].EXPR))); ;}
    break;

  case 94:
#line 260 "qcl.y"
    { (yyval.EXPRLIST) = YYNEW(sExprList()); YYTRY((yyval.EXPRLIST)->append((yyvsp[0].EXPR))); ;}
    break;

  case 95:
#line 261 "qcl.y"
    { YYTRY((yyvsp[-2].EXPRLIST)->append((yyvsp[0].EXPR))); (yyval.EXPRLIST)=(yyvsp[-2].EXPRLIST); ;}
    break;

  case 96:
#line 264 "qcl.y"
    { (yyval.EXPR) = (yyvsp[0].CONST); ;}
    break;

  case 97:
#line 265 "qcl.y"
    { (yyval.EXPR) = YYNEW(sVar((yyvsp[0].ID))); ;}
    break;

  case 98:
#line 266 "qcl.y"
    { (yyval.EXPR) = YYNEW(sSubscript(new sVar((yyvsp[-3].ID)),(yyvsp[-1].EXPRLIST))); ;}
    break;

  case 99:
#line 267 "qcl.y"
    { (yyval.EXPR) = YYNEW(sSubRange(new sVar((yyvsp[-5].ID)),(yyvsp[-3].EXPR),(yyvsp[-1].EXPR),SUBRANGE_LENGTH)); ;}
    break;

  case 100:
#line 268 "qcl.y"
    { (yyval.EXPR) = YYNEW(sSubRange(new sVar((yyvsp[-5].ID)),(yyvsp[-3].EXPR),(yyvsp[-1].EXPR),SUBRANGE_END)); ;}
    break;

  case 101:
#line 269 "qcl.y"
    { (yyval.EXPR) = YYNEW(sFunctCall((yyvsp[-2].ID),(yyvsp[-1].EXPRLIST))); ;}
    break;

  case 102:
#line 270 "qcl.y"
    { (yyval.EXPR) = YYNEW(sNeg((yyvsp[0].EXPR))); ;}
    break;

  case 103:
#line 271 "qcl.y"
    { (yyval.EXPR) = YYNEW(sNot((yyvsp[0].EXPR))); ;}
    break;

  case 104:
#line 272 "qcl.y"
    { (yyval.EXPR) = YYNEW(sLength((yyvsp[0].EXPR))); ;}
    break;

  case 105:
#line 273 "qcl.y"
    { (yyval.EXPR) = YYNEW(sOr((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 106:
#line 274 "qcl.y"
    { (yyval.EXPR) = YYNEW(sXor((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 107:
#line 275 "qcl.y"
    { (yyval.EXPR) = YYNEW(sAnd((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 108:
#line 276 "qcl.y"
    { (yyval.EXPR) = YYNEW(sEqual((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 109:
#line 277 "qcl.y"
    { (yyval.EXPR) = YYNEW(sLeEq((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 110:
#line 278 "qcl.y"
    { (yyval.EXPR) = YYNEW(sLeEq((yyvsp[0].EXPR),(yyvsp[-2].EXPR))); ;}
    break;

  case 111:
#line 279 "qcl.y"
    { (yyval.EXPR) = YYNEW(sNotEq((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 112:
#line 280 "qcl.y"
    { (yyval.EXPR) = YYNEW(sLess((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 113:
#line 281 "qcl.y"
    { (yyval.EXPR) = YYNEW(sLess((yyvsp[0].EXPR),(yyvsp[-2].EXPR))); ;}
    break;

  case 114:
#line 282 "qcl.y"
    { (yyval.EXPR) = YYNEW(sAdd((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 115:
#line 283 "qcl.y"
    { (yyval.EXPR) = YYNEW(sSub((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 116:
#line 284 "qcl.y"
    { (yyval.EXPR) = YYNEW(sConcat((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 117:
#line 285 "qcl.y"
    { (yyval.EXPR) = YYNEW(sMod((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 118:
#line 286 "qcl.y"
    { (yyval.EXPR) = YYNEW(sMult((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 119:
#line 287 "qcl.y"
    { (yyval.EXPR) = YYNEW(sDiv((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 120:
#line 288 "qcl.y"
    { (yyval.EXPR) = YYNEW(sPow((yyvsp[-2].EXPR),(yyvsp[0].EXPR))); ;}
    break;

  case 121:
#line 289 "qcl.y"
    { (yyval.EXPR) = (yyvsp[-1].EXPR); ;}
    break;

  case 122:
#line 290 "qcl.y"
    { (yyval.EXPR) = YYNEW(sBaseFunct((yyvsp[-2].OBJTYPE),(yyvsp[-1].EXPR))); ;}
    break;

  case 123:
#line 291 "qcl.y"
    { (yyval.EXPR) = YYNEW(sListFunct((yyvsp[-2].OBJTYPE),(yyvsp[-1].EXPRLIST))); ;}
    break;

  case 124:
#line 292 "qcl.y"
    { (yyval.EXPR) = YYNEW(sListFunct((yyvsp[-1].OBJTYPE),new sExprList())); ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2455 "yacc.cc"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}



