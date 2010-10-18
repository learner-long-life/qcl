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
/* Line 1447 of yacc.c.  */
#line 163 "yacc.hh"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



