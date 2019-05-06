/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "OCL.y" /* yacc.c:337  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include "Absyn.h"
typedef struct yy_buffer_state *YY_BUFFER_STATE;
int yyparse(void);
int yylex(void);
YY_BUFFER_STATE yy_scan_string(const char *str);
void yy_delete_buffer(YY_BUFFER_STATE buf);
int yy_mylinenumber;
int initialize_lexer(FILE * inp);
int yywrap(void)
{
  return 1;
}
void yyerror(const char *str)
{
  extern char *yytext;
  fprintf(stderr,"error: line %d: %s at %s\n", 
    yy_mylinenumber, str, yytext);
}



static OCLfile* YY_RESULT_OCLfile_ = 0;
OCLfile* pOCLfile(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLfile_;
  }
}
OCLfile* pOCLfile(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLfile_;
  }
}

static ListOCLPackage* YY_RESULT_ListOCLPackage_ = 0;
ListOCLPackage* pListOCLPackage(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListOCLPackage_;
  }
}
ListOCLPackage* pListOCLPackage(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListOCLPackage_;
  }
}

static OCLPackage* YY_RESULT_OCLPackage_ = 0;
OCLPackage* pOCLPackage(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLPackage_;
  }
}
OCLPackage* pOCLPackage(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLPackage_;
  }
}

static PackageName* YY_RESULT_PackageName_ = 0;
PackageName* pPackageName(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PackageName_;
  }
}
PackageName* pPackageName(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PackageName_;
  }
}

static OCLExpressions* YY_RESULT_OCLExpressions_ = 0;
OCLExpressions* pOCLExpressions(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLExpressions_;
  }
}
OCLExpressions* pOCLExpressions(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLExpressions_;
  }
}

static ListConstrnt* YY_RESULT_ListConstrnt_ = 0;
ListConstrnt* pListConstrnt(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListConstrnt_;
  }
}
ListConstrnt* pListConstrnt(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListConstrnt_;
  }
}

static Constrnt* YY_RESULT_Constrnt_ = 0;
Constrnt* pConstrnt(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Constrnt_;
  }
}
Constrnt* pConstrnt(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Constrnt_;
  }
}

static ListConstrBody* YY_RESULT_ListConstrBody_ = 0;
ListConstrBody* pListConstrBody(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListConstrBody_;
  }
}
ListConstrBody* pListConstrBody(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListConstrBody_;
  }
}

static ConstrBody* YY_RESULT_ConstrBody_ = 0;
ConstrBody* pConstrBody(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ConstrBody_;
  }
}
ConstrBody* pConstrBody(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ConstrBody_;
  }
}

static ContextDeclaration* YY_RESULT_ContextDeclaration_ = 0;
ContextDeclaration* pContextDeclaration(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ContextDeclaration_;
  }
}
ContextDeclaration* pContextDeclaration(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ContextDeclaration_;
  }
}

static ClassifierContext* YY_RESULT_ClassifierContext_ = 0;
ClassifierContext* pClassifierContext(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ClassifierContext_;
  }
}
ClassifierContext* pClassifierContext(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ClassifierContext_;
  }
}

static OperationContext* YY_RESULT_OperationContext_ = 0;
OperationContext* pOperationContext(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OperationContext_;
  }
}
OperationContext* pOperationContext(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OperationContext_;
  }
}

static Stereotype* YY_RESULT_Stereotype_ = 0;
Stereotype* pStereotype(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stereotype_;
  }
}
Stereotype* pStereotype(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stereotype_;
  }
}

static OperationName* YY_RESULT_OperationName_ = 0;
OperationName* pOperationName(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OperationName_;
  }
}
OperationName* pOperationName(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OperationName_;
  }
}

static ListFormalParameter* YY_RESULT_ListFormalParameter_ = 0;
ListFormalParameter* pListFormalParameter(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListFormalParameter_;
  }
}
ListFormalParameter* pListFormalParameter(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListFormalParameter_;
  }
}

static FormalParameter* YY_RESULT_FormalParameter_ = 0;
FormalParameter* pFormalParameter(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_FormalParameter_;
  }
}
FormalParameter* pFormalParameter(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_FormalParameter_;
  }
}

static TypeSpecifier* YY_RESULT_TypeSpecifier_ = 0;
TypeSpecifier* pTypeSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_TypeSpecifier_;
  }
}
TypeSpecifier* pTypeSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_TypeSpecifier_;
  }
}

static CollectionType* YY_RESULT_CollectionType_ = 0;
CollectionType* pCollectionType(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_CollectionType_;
  }
}
CollectionType* pCollectionType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_CollectionType_;
  }
}

static ReturnType* YY_RESULT_ReturnType_ = 0;
ReturnType* pReturnType(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ReturnType_;
  }
}
ReturnType* pReturnType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ReturnType_;
  }
}

static OCLExpression* YY_RESULT_OCLExpression_ = 0;
OCLExpression* pOCLExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLExpression_;
  }
}
OCLExpression* pOCLExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLExpression_;
  }
}

static LetExpression* YY_RESULT_LetExpression_ = 0;
LetExpression* pLetExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LetExpression_;
  }
}
LetExpression* pLetExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LetExpression_;
  }
}

static ListLetExpression* YY_RESULT_ListLetExpression_ = 0;
ListLetExpression* pListLetExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListLetExpression_;
  }
}
ListLetExpression* pListLetExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListLetExpression_;
  }
}

static IfExpression* YY_RESULT_IfExpression_ = 0;
IfExpression* pIfExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_IfExpression_;
  }
}
IfExpression* pIfExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_IfExpression_;
  }
}

static Expression* YY_RESULT_Expression_ = 0;
Expression* pExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expression_;
  }
}
Expression* pExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Expression_;
  }
}

static MessageArg* YY_RESULT_MessageArg_ = 0;
MessageArg* pMessageArg(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_MessageArg_;
  }
}
MessageArg* pMessageArg(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_MessageArg_;
  }
}

static ListMessageArg* YY_RESULT_ListMessageArg_ = 0;
ListMessageArg* pListMessageArg(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListMessageArg_;
  }
}
ListMessageArg* pListMessageArg(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListMessageArg_;
  }
}

static PropertyCall* YY_RESULT_PropertyCall_ = 0;
PropertyCall* pPropertyCall(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PropertyCall_;
  }
}
PropertyCall* pPropertyCall(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PropertyCall_;
  }
}

static PathName* YY_RESULT_PathName_ = 0;
PathName* pPathName(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PathName_;
  }
}
PathName* pPathName(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PathName_;
  }
}

static PName* YY_RESULT_PName_ = 0;
PName* pPName(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PName_;
  }
}
PName* pPName(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PName_;
  }
}

static ListPName* YY_RESULT_ListPName_ = 0;
ListPName* pListPName(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPName_;
  }
}
ListPName* pListPName(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPName_;
  }
}

static PossQualifiers* YY_RESULT_PossQualifiers_ = 0;
PossQualifiers* pPossQualifiers(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PossQualifiers_;
  }
}
PossQualifiers* pPossQualifiers(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PossQualifiers_;
  }
}

static Qualifiers* YY_RESULT_Qualifiers_ = 0;
Qualifiers* pQualifiers(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Qualifiers_;
  }
}
Qualifiers* pQualifiers(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Qualifiers_;
  }
}

static PossTimeExpression* YY_RESULT_PossTimeExpression_ = 0;
PossTimeExpression* pPossTimeExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PossTimeExpression_;
  }
}
PossTimeExpression* pPossTimeExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PossTimeExpression_;
  }
}

static PossPropCallParam* YY_RESULT_PossPropCallParam_ = 0;
PossPropCallParam* pPossPropCallParam(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PossPropCallParam_;
  }
}
PossPropCallParam* pPossPropCallParam(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PossPropCallParam_;
  }
}

static Declarator* YY_RESULT_Declarator_ = 0;
Declarator* pDeclarator(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Declarator_;
  }
}
Declarator* pDeclarator(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Declarator_;
  }
}

static DeclaratorVarList* YY_RESULT_DeclaratorVarList_ = 0;
DeclaratorVarList* pDeclaratorVarList(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_DeclaratorVarList_;
  }
}
DeclaratorVarList* pDeclaratorVarList(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_DeclaratorVarList_;
  }
}

static ListIdent* YY_RESULT_ListIdent_ = 0;
ListIdent* pListIdent(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListIdent_;
  }
}
ListIdent* pListIdent(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListIdent_;
  }
}

static PropertyCallParameters* YY_RESULT_PropertyCallParameters_ = 0;
PropertyCallParameters* pPropertyCallParameters(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PropertyCallParameters_;
  }
}
PropertyCallParameters* pPropertyCallParameters(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PropertyCallParameters_;
  }
}

static ListExpression* YY_RESULT_ListExpression_ = 0;
ListExpression* pListExpression(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExpression_;
  }
}
ListExpression* pListExpression(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExpression_;
  }
}

static PCPHelper* YY_RESULT_PCPHelper_ = 0;
PCPHelper* pPCPHelper(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PCPHelper_;
  }
}
PCPHelper* pPCPHelper(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PCPHelper_;
  }
}

static ListPCPHelper* YY_RESULT_ListPCPHelper_ = 0;
ListPCPHelper* pListPCPHelper(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPCPHelper_;
  }
}
ListPCPHelper* pListPCPHelper(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListPCPHelper_;
  }
}

static OCLLiteral* YY_RESULT_OCLLiteral_ = 0;
OCLLiteral* pOCLLiteral(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLLiteral_;
  }
}
OCLLiteral* pOCLLiteral(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLLiteral_;
  }
}

static SimpleTypeSpecifier* YY_RESULT_SimpleTypeSpecifier_ = 0;
SimpleTypeSpecifier* pSimpleTypeSpecifier(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_SimpleTypeSpecifier_;
  }
}
SimpleTypeSpecifier* pSimpleTypeSpecifier(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_SimpleTypeSpecifier_;
  }
}

static LiteralCollection* YY_RESULT_LiteralCollection_ = 0;
LiteralCollection* pLiteralCollection(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LiteralCollection_;
  }
}
LiteralCollection* pLiteralCollection(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LiteralCollection_;
  }
}

static ListCollectionItem* YY_RESULT_ListCollectionItem_ = 0;
ListCollectionItem* pListCollectionItem(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListCollectionItem_;
  }
}
ListCollectionItem* pListCollectionItem(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListCollectionItem_;
  }
}

static CollectionItem* YY_RESULT_CollectionItem_ = 0;
CollectionItem* pCollectionItem(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_CollectionItem_;
  }
}
CollectionItem* pCollectionItem(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_CollectionItem_;
  }
}

static OCLNumber* YY_RESULT_OCLNumber_ = 0;
OCLNumber* pOCLNumber(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLNumber_;
  }
}
OCLNumber* pOCLNumber(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_OCLNumber_;
  }
}

static LogicalOperator* YY_RESULT_LogicalOperator_ = 0;
LogicalOperator* pLogicalOperator(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LogicalOperator_;
  }
}
LogicalOperator* pLogicalOperator(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_LogicalOperator_;
  }
}

static CollectionKind* YY_RESULT_CollectionKind_ = 0;
CollectionKind* pCollectionKind(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_CollectionKind_;
  }
}
CollectionKind* pCollectionKind(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_CollectionKind_;
  }
}

static EqualityOperator* YY_RESULT_EqualityOperator_ = 0;
EqualityOperator* pEqualityOperator(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_EqualityOperator_;
  }
}
EqualityOperator* pEqualityOperator(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_EqualityOperator_;
  }
}

static RelationalOperator* YY_RESULT_RelationalOperator_ = 0;
RelationalOperator* pRelationalOperator(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_RelationalOperator_;
  }
}
RelationalOperator* pRelationalOperator(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_RelationalOperator_;
  }
}

static AddOperator* YY_RESULT_AddOperator_ = 0;
AddOperator* pAddOperator(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_AddOperator_;
  }
}
AddOperator* pAddOperator(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_AddOperator_;
  }
}

static MultiplyOperator* YY_RESULT_MultiplyOperator_ = 0;
MultiplyOperator* pMultiplyOperator(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_MultiplyOperator_;
  }
}
MultiplyOperator* pMultiplyOperator(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_MultiplyOperator_;
  }
}

static UnaryOperator* YY_RESULT_UnaryOperator_ = 0;
UnaryOperator* pUnaryOperator(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_UnaryOperator_;
  }
}
UnaryOperator* pUnaryOperator(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_UnaryOperator_;
  }
}

static PostfixOperator* YY_RESULT_PostfixOperator_ = 0;
PostfixOperator* pPostfixOperator(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PostfixOperator_;
  }
}
PostfixOperator* pPostfixOperator(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_PostfixOperator_;
  }
}




#line 1915 "Parser.C" /* yacc.c:337  */
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
    _ERROR_ = 258,
    _SYMB_0 = 259,
    _SYMB_1 = 260,
    _SYMB_2 = 261,
    _SYMB_3 = 262,
    _SYMB_4 = 263,
    _SYMB_5 = 264,
    _SYMB_6 = 265,
    _SYMB_7 = 266,
    _SYMB_8 = 267,
    _SYMB_9 = 268,
    _SYMB_10 = 269,
    _SYMB_11 = 270,
    _SYMB_12 = 271,
    _SYMB_13 = 272,
    _SYMB_14 = 273,
    _SYMB_15 = 274,
    _SYMB_16 = 275,
    _SYMB_17 = 276,
    _SYMB_18 = 277,
    _SYMB_19 = 278,
    _SYMB_20 = 279,
    _SYMB_21 = 280,
    _SYMB_22 = 281,
    _SYMB_23 = 282,
    _SYMB_24 = 283,
    _SYMB_25 = 284,
    _SYMB_26 = 285,
    _SYMB_27 = 286,
    _SYMB_28 = 287,
    _SYMB_29 = 288,
    _SYMB_30 = 289,
    _SYMB_31 = 290,
    _SYMB_32 = 291,
    _SYMB_33 = 292,
    _SYMB_34 = 293,
    _SYMB_35 = 294,
    _SYMB_36 = 295,
    _SYMB_37 = 296,
    _SYMB_38 = 297,
    _SYMB_39 = 298,
    _SYMB_40 = 299,
    _SYMB_41 = 300,
    _SYMB_42 = 301,
    _SYMB_43 = 302,
    _SYMB_44 = 303,
    _SYMB_45 = 304,
    _SYMB_46 = 305,
    _SYMB_47 = 306,
    _SYMB_48 = 307,
    _SYMB_49 = 308,
    _SYMB_50 = 309,
    _SYMB_51 = 310,
    _STRING_ = 311,
    _INTEGER_ = 312,
    _DOUBLE_ = 313,
    _IDENT_ = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 1848 "OCL.y" /* yacc.c:352  */

  int int_;
  char char_;
  double double_;
  char* string_;
  OCLfile* oclfile_;
  ListOCLPackage* listoclpackage_;
  OCLPackage* oclpackage_;
  PackageName* packagename_;
  OCLExpressions* oclexpressions_;
  ListConstrnt* listconstrnt_;
  Constrnt* constrnt_;
  ListConstrBody* listconstrbody_;
  ConstrBody* constrbody_;
  ContextDeclaration* contextdeclaration_;
  ClassifierContext* classifiercontext_;
  OperationContext* operationcontext_;
  Stereotype* stereotype_;
  OperationName* operationname_;
  ListFormalParameter* listformalparameter_;
  FormalParameter* formalparameter_;
  TypeSpecifier* typespecifier_;
  CollectionType* collectiontype_;
  ReturnType* returntype_;
  OCLExpression* oclexpression_;
  LetExpression* letexpression_;
  ListLetExpression* listletexpression_;
  IfExpression* ifexpression_;
  Expression* expression_;
  MessageArg* messagearg_;
  ListMessageArg* listmessagearg_;
  PropertyCall* propertycall_;
  PathName* pathname_;
  PName* pname_;
  ListPName* listpname_;
  PossQualifiers* possqualifiers_;
  Qualifiers* qualifiers_;
  PossTimeExpression* posstimeexpression_;
  PossPropCallParam* posspropcallparam_;
  Declarator* declarator_;
  DeclaratorVarList* declaratorvarlist_;
  ListIdent* listident_;
  PropertyCallParameters* propertycallparameters_;
  ListExpression* listexpression_;
  PCPHelper* pcphelper_;
  ListPCPHelper* listpcphelper_;
  OCLLiteral* oclliteral_;
  SimpleTypeSpecifier* simpletypespecifier_;
  LiteralCollection* literalcollection_;
  ListCollectionItem* listcollectionitem_;
  CollectionItem* collectionitem_;
  OCLNumber* oclnumber_;
  LogicalOperator* logicaloperator_;
  CollectionKind* collectionkind_;
  EqualityOperator* equalityoperator_;
  RelationalOperator* relationaloperator_;
  AddOperator* addoperator_;
  MultiplyOperator* multiplyoperator_;
  UnaryOperator* unaryoperator_;
  PostfixOperator* postfixoperator_;

#line 2077 "Parser.C" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   335

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

#define YYUNDEFTOK  2
#define YYMAXUTOK   314

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2035,  2035,  2037,  2038,  2040,  2042,  2044,  2046,  2047,
    2049,  2051,  2052,  2054,  2055,  2056,  2057,  2059,  2060,  2062,
    2063,  2065,  2066,  2068,  2069,  2070,  2072,  2073,  2074,  2075,
    2076,  2077,  2078,  2079,  2080,  2081,  2082,  2083,  2084,  2085,
    2086,  2087,  2089,  2090,  2091,  2093,  2095,  2096,  2098,  2100,
    2102,  2103,  2105,  2106,  2107,  2108,  2110,  2111,  2113,  2115,
    2116,  2118,  2119,  2121,  2122,  2124,  2125,  2127,  2128,  2130,
    2131,  2133,  2134,  2136,  2137,  2138,  2140,  2141,  2142,  2143,
    2144,  2145,  2147,  2148,  2149,  2151,  2152,  2153,  2155,  2157,
    2159,  2161,  2162,  2164,  2165,  2167,  2169,  2170,  2172,  2173,
    2184,  2185,  2187,  2188,  2189,  2191,  2192,  2193,  2194,  2196,
    2197,  2199,  2200,  2201,  2202,  2204,  2206,  2207,  2209,  2210,
    2212,  2213,  2215,  2216,  2218,  2219,  2220,  2222,  2223,  2224,
    2225,  2227,  2228,  2230,  2231,  2232,  2233,  2235,  2236,  2238,
    2239,  2241,  2242,  2244,  2245
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ERROR_", "_SYMB_0", "_SYMB_1",
  "_SYMB_2", "_SYMB_3", "_SYMB_4", "_SYMB_5", "_SYMB_6", "_SYMB_7",
  "_SYMB_8", "_SYMB_9", "_SYMB_10", "_SYMB_11", "_SYMB_12", "_SYMB_13",
  "_SYMB_14", "_SYMB_15", "_SYMB_16", "_SYMB_17", "_SYMB_18", "_SYMB_19",
  "_SYMB_20", "_SYMB_21", "_SYMB_22", "_SYMB_23", "_SYMB_24", "_SYMB_25",
  "_SYMB_26", "_SYMB_27", "_SYMB_28", "_SYMB_29", "_SYMB_30", "_SYMB_31",
  "_SYMB_32", "_SYMB_33", "_SYMB_34", "_SYMB_35", "_SYMB_36", "_SYMB_37",
  "_SYMB_38", "_SYMB_39", "_SYMB_40", "_SYMB_41", "_SYMB_42", "_SYMB_43",
  "_SYMB_44", "_SYMB_45", "_SYMB_46", "_SYMB_47", "_SYMB_48", "_SYMB_49",
  "_SYMB_50", "_SYMB_51", "_STRING_", "_INTEGER_", "_DOUBLE_", "_IDENT_",
  "$accept", "OCLfile", "ListOCLPackage", "OCLPackage", "PackageName",
  "OCLExpressions", "ListConstrnt", "Constrnt", "ListConstrBody",
  "ConstrBody", "ContextDeclaration", "ClassifierContext",
  "OperationContext", "Stereotype", "OperationName", "ListFormalParameter",
  "FormalParameter", "TypeSpecifier", "CollectionType", "ReturnType",
  "OCLExpression", "LetExpression", "ListLetExpression", "IfExpression",
  "Expression", "Expression1", "Expression2", "Expression3", "Expression4",
  "Expression5", "Expression6", "Expression7", "Expression8", "MessageArg",
  "ListMessageArg", "PropertyCall", "PathName", "PName", "ListPName",
  "PossQualifiers", "Qualifiers", "PossTimeExpression",
  "PossPropCallParam", "PropertyCallParameters", "ListExpression",
  "PCPHelper", "ListPCPHelper", "OCLLiteral", "SimpleTypeSpecifier",
  "LiteralCollection", "ListCollectionItem", "CollectionItem", "OCLNumber",
  "LogicalOperator", "CollectionKind", "EqualityOperator",
  "RelationalOperator", "AddOperator", "MultiplyOperator", "UnaryOperator",
  "PostfixOperator", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -168

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-168)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -42,   -16,    51,  -168,   -42,  -168,  -168,  -168,    35,  -168,
    -168,  -168,    45,    58,   -16,  -168,    41,  -168,    28,  -168,
      52,  -168,  -168,     1,  -168,  -168,  -168,  -168,    28,     2,
      44,     3,    60,    83,  -168,   102,   100,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,    99,    50,    60,  -168,    60,   247,
    -168,  -168,  -168,  -168,  -168,  -168,   247,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,    67,  -168,    71,     0,    64,    85,
      65,    86,  -168,    40,  -168,  -168,    93,  -168,  -168,  -168,
      91,   276,   102,    61,    87,  -168,  -168,    -4,   -19,   247,
     247,  -168,  -168,  -168,   247,  -168,  -168,   247,  -168,  -168,
    -168,  -168,   247,  -168,  -168,   247,  -168,  -168,   247,   -16,
    -168,  -168,   -16,    69,   103,   156,    40,  -168,   119,   118,
     108,    -5,    61,   247,  -168,   247,    71,     0,    64,    85,
      65,    86,  -168,   122,  -168,  -168,   247,   123,  -168,  -168,
      -7,   104,   114,    -5,   133,    61,   131,  -168,  -168,  -168,
     134,   135,    71,    -6,   189,     4,   124,   218,  -168,  -168,
     247,  -168,   247,  -168,    -5,  -168,   247,   -16,    78,   247,
     141,    71,   129,   144,   247,  -168,  -168,    71,    71,  -168,
    -168,  -168,    71,   148,    -5,   247,    49,    -5,   189,  -168,
    -168,    59,  -168,   155,    71,  -168,  -168,  -168,   -16,  -168,
     247,   247,   105,  -168,   247,  -168,    71,    71,   163,    71,
      -5,   160,   247,    71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,    90,     8,     6,    91,    89,
       1,     4,     0,     7,     0,     5,     0,     9,     0,    92,
      20,    18,    17,     0,    25,    24,    23,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,    19,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    41,    37,
      38,    39,    40,    26,     0,     0,    56,    14,     0,     0,
     141,   128,   130,   129,   127,   114,     0,   142,    80,   113,
     111,   122,   123,    16,     0,    79,    50,    60,    62,    64,
      66,    68,    70,    72,    75,    76,    96,    78,    77,   112,
       0,     0,     0,    42,     0,    57,    13,     0,     0,     0,
       0,   124,   125,   126,     0,   131,   132,     0,   135,   136,
     133,   134,     0,   137,   138,     0,   140,   139,     0,     0,
     143,   144,     0,     0,    93,     0,    71,    15,     0,     0,
      43,     0,    42,     0,    81,     0,    51,    59,    61,    63,
      65,    67,    69,     0,    73,    97,   102,    98,    94,   117,
     120,     0,   118,     0,    21,    42,     0,    47,   115,    46,
       0,     0,    52,     0,    85,   103,     0,     0,    88,    99,
       0,   116,     0,    45,     0,    44,     0,     0,     0,     0,
      83,    82,    86,     0,   102,    95,   100,   109,   121,   119,
      49,    22,    53,     0,     0,     0,     0,     0,    85,    74,
     104,     0,    48,     0,    54,    58,    84,    87,     0,   101,
       0,     0,     0,   110,     0,   106,   105,   108,     0,    55,
       0,     0,     0,   107
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,   165,  -168,  -168,  -168,  -168,  -168,   142,  -168,
    -168,  -168,  -168,  -168,  -168,  -102,  -168,  -149,  -168,  -168,
      79,  -168,   -25,  -168,   -57,    72,    70,    68,    66,    62,
      63,    88,  -168,  -168,   -18,    80,    -1,  -168,   168,  -168,
    -168,  -168,  -168,  -168,     7,  -168,  -168,  -168,  -167,  -168,
      12,  -168,  -168,  -168,  -130,  -168,  -168,  -168,  -168,  -168,
    -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     6,    12,    13,    17,    27,    28,
      18,    21,    22,    29,    54,   129,   130,   156,   157,   191,
      73,    56,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   182,   183,    85,    86,     8,     9,   147,
     148,   124,   168,   169,   166,   213,   201,    87,   159,    88,
     151,   152,    89,   104,    90,   107,   112,   115,   118,    91,
     122
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       7,   160,    97,   134,   173,    32,    35,    57,     1,    98,
     193,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   170,   184,   160,   100,   190,    61,    62,    63,    64,
     161,    95,   179,    96,   135,   101,   100,   100,    48,   100,
      14,   215,   136,     5,   160,   203,    49,   100,   206,   102,
      50,    10,    51,   175,     5,   103,    30,    31,    52,   119,
      33,    36,    53,   208,   160,    23,   209,   160,   150,   120,
     121,   221,   105,    24,   113,   114,   162,   210,   163,    25,
      26,   106,   194,   211,   212,    15,   195,    58,   205,   165,
     160,   131,   100,   132,    16,   133,   108,   109,   110,   111,
      20,   116,   117,    37,    92,    93,    55,   181,    59,    94,
     187,    99,    60,   188,   100,   150,   123,   125,   143,   192,
     128,   145,   196,   153,   146,   154,   155,   165,   164,   167,
     158,   171,   172,    61,    62,    63,    64,   174,   204,   176,
     177,   181,   178,    65,    66,   197,   185,   198,    55,    67,
      68,   199,   158,   216,   217,   202,    69,   219,    70,    71,
      72,     5,    59,   214,   218,   223,    60,   220,   222,    11,
      34,   127,   137,   158,   138,   139,   158,   141,   140,   126,
     207,   142,    19,   149,   189,     0,     0,    61,    62,    63,
      64,   200,     0,   158,     0,    59,   158,    65,    66,    60,
       0,     0,   144,    67,    68,     0,     0,   158,     0,   180,
      69,     0,    70,    71,    72,     5,     0,     0,     0,   158,
      61,    62,    63,    64,    59,   186,     0,     0,    60,     0,
      65,    66,     0,     0,     0,     0,    67,    68,     0,     0,
       0,     0,     0,    69,     0,    70,    71,    72,     5,    61,
      62,    63,    64,    59,     0,     0,     0,    60,     0,    65,
      66,     0,     0,     0,     0,    67,    68,     0,     0,     0,
       0,     0,    69,     0,    70,    71,    72,     5,    61,    62,
      63,    64,    59,     0,     0,     0,     0,     0,    65,    66,
       0,     0,     0,     0,    67,    68,     0,     0,     0,     0,
       0,    69,     0,    70,    71,    72,     5,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,     0,
      69,     0,    70,    71,    72,     5
};

static const yytype_int16 yycheck[] =
{
       1,   131,    59,     7,   153,     4,     4,    32,    50,    66,
     177,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    28,    18,   153,    43,   174,    31,    32,    33,    34,
     132,    56,    38,    58,    53,    35,    43,    43,    35,    43,
       5,   208,    99,    59,   174,   194,    43,    43,   197,    49,
      47,     0,    49,   155,    59,    55,     4,     5,    55,    19,
      59,    59,    59,     4,   194,    37,     7,   197,   125,    29,
      30,   220,     8,    45,     9,    10,   133,    18,   135,    51,
      52,    17,     4,    24,    25,    40,     8,     4,    39,   146,
     220,     4,    43,     6,    36,     8,    11,    12,    13,    14,
      59,    15,    16,    59,     4,     6,    46,   164,     6,    59,
     167,    44,    10,   170,    43,   172,    23,    26,   119,   176,
      59,    52,   179,     4,    21,     7,    18,   184,     6,     6,
     131,    27,    18,    31,    32,    33,    34,     4,   195,     8,
       6,   198,     7,    41,    42,     4,    22,    18,    46,    47,
      48,     7,   153,   210,   211,     7,    54,   214,    56,    57,
      58,    59,     6,     8,    59,   222,    10,     4,     8,     4,
      28,    92,   100,   174,   104,   107,   177,   115,   112,    91,
     198,   118,    14,    27,   172,    -1,    -1,    31,    32,    33,
      34,   184,    -1,   194,    -1,     6,   197,    41,    42,    10,
      -1,    -1,   122,    47,    48,    -1,    -1,   208,    -1,    20,
      54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,   220,
      31,    32,    33,    34,     6,     7,    -1,    -1,    10,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    31,
      32,    33,    34,     6,    -1,    -1,    -1,    10,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    31,    32,
      33,    34,     6,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    61,    62,    63,    59,    64,    96,    97,    98,
       0,    62,    65,    66,     5,    40,    36,    67,    70,    98,
      59,    71,    72,    37,    45,    51,    52,    68,    69,    73,
       4,     5,     4,    59,    68,     4,    59,    59,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    35,    43,
      47,    49,    55,    59,    74,    46,    81,    82,     4,     6,
      10,    31,    32,    33,    34,    41,    42,    47,    48,    54,
      56,    57,    58,    80,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    95,    96,   107,   109,   112,
     114,   119,     4,     6,    59,    82,    82,    84,    84,    44,
      43,    35,    49,    55,   113,     8,    17,   115,    11,    12,
      13,    14,   116,     9,    10,   117,    15,    16,   118,    19,
      29,    30,   120,    23,   101,    26,    91,    80,    59,    75,
      76,     4,     6,     8,     7,    53,    84,    85,    86,    87,
      88,    89,    90,    96,    95,    52,    21,    99,   100,    27,
      84,   110,   111,     4,     7,    18,    77,    78,    96,   108,
     114,    75,    84,    84,     6,    84,   104,     6,   102,   103,
      28,    27,    18,    77,     4,    75,     8,     6,     7,    38,
      20,    84,    93,    94,    18,    22,     7,    84,    84,   110,
      77,    79,    84,   108,     4,     8,    84,     4,    18,     7,
     104,   106,     7,    77,    84,    39,    77,    94,     4,     7,
      18,    24,    25,   105,     8,   108,    84,    84,    59,    84,
       4,    77,     8,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    64,    65,    66,    66,
      67,    68,    68,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    76,    77,    77,    78,    79,
      80,    80,    81,    81,    81,    81,    82,    82,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    94,    94,    94,    95,    96,
      97,    98,    98,    99,    99,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   106,
     106,   107,   107,   107,   107,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   113,   114,   114,   114,
     114,   115,   115,   116,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     4,     1,     1,     0,     2,
       2,     1,     2,     4,     3,     4,     3,     2,     2,     3,
       1,     6,     8,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     3,     3,     1,     1,     4,     1,
       1,     3,     4,     6,     7,     9,     1,     2,     7,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     2,     1,     3,     6,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     3,     0,     1,     3,     4,     1,
       1,     1,     3,     0,     1,     3,     0,     2,     0,     1,
       2,     4,     0,     1,     3,     2,     2,     6,     2,     0,
       2,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
  YYUSE (yytype);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

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
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
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

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 2035 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[0].listoclpackage_)->begin(),(yyvsp[0].listoclpackage_)->end()) ;(yyval.oclfile_) = new OCLf((yyvsp[0].listoclpackage_)); YY_RESULT_OCLfile_= (yyval.oclfile_); }
#line 3378 "Parser.C" /* yacc.c:1652  */
    break;

  case 3:
#line 2037 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listoclpackage_) = new ListOCLPackage() ; (yyval.listoclpackage_)->push_back((yyvsp[0].oclpackage_));  }
#line 3384 "Parser.C" /* yacc.c:1652  */
    break;

  case 4:
#line 2038 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[0].listoclpackage_)->push_back((yyvsp[-1].oclpackage_)) ; (yyval.listoclpackage_) = (yyvsp[0].listoclpackage_) ;  }
#line 3390 "Parser.C" /* yacc.c:1652  */
    break;

  case 5:
#line 2040 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclpackage_) = new Pack((yyvsp[-2].packagename_), (yyvsp[-1].oclexpressions_));  }
#line 3396 "Parser.C" /* yacc.c:1652  */
    break;

  case 6:
#line 2042 "OCL.y" /* yacc.c:1652  */
    {  (yyval.packagename_) = new PackName((yyvsp[0].pathname_));  }
#line 3402 "Parser.C" /* yacc.c:1652  */
    break;

  case 7:
#line 2044 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclexpressions_) = new Constraints((yyvsp[0].listconstrnt_));  }
#line 3408 "Parser.C" /* yacc.c:1652  */
    break;

  case 8:
#line 2046 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listconstrnt_) = new ListConstrnt();  }
#line 3414 "Parser.C" /* yacc.c:1652  */
    break;

  case 9:
#line 2047 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[-1].listconstrnt_)->push_back((yyvsp[0].constrnt_)) ; (yyval.listconstrnt_) = (yyvsp[-1].listconstrnt_) ;  }
#line 3420 "Parser.C" /* yacc.c:1652  */
    break;

  case 10:
#line 2049 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[0].listconstrbody_)->begin(),(yyvsp[0].listconstrbody_)->end()) ;(yyval.constrnt_) = new Constr((yyvsp[-1].contextdeclaration_), (yyvsp[0].listconstrbody_)); YY_RESULT_Constrnt_= (yyval.constrnt_); }
#line 3426 "Parser.C" /* yacc.c:1652  */
    break;

  case 11:
#line 2051 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listconstrbody_) = new ListConstrBody() ; (yyval.listconstrbody_)->push_back((yyvsp[0].constrbody_));  }
#line 3432 "Parser.C" /* yacc.c:1652  */
    break;

  case 12:
#line 2052 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[0].listconstrbody_)->push_back((yyvsp[-1].constrbody_)) ; (yyval.listconstrbody_) = (yyvsp[0].listconstrbody_) ;  }
#line 3438 "Parser.C" /* yacc.c:1652  */
    break;

  case 13:
#line 2054 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[0].listletexpression_)->begin(),(yyvsp[0].listletexpression_)->end()) ;(yyval.constrbody_) = new CBDefNamed((yyvsp[-2].string_), (yyvsp[0].listletexpression_));  }
#line 3444 "Parser.C" /* yacc.c:1652  */
    break;

  case 14:
#line 2055 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[0].listletexpression_)->begin(),(yyvsp[0].listletexpression_)->end()) ;(yyval.constrbody_) = new CBDef((yyvsp[0].listletexpression_));  }
#line 3450 "Parser.C" /* yacc.c:1652  */
    break;

  case 15:
#line 2056 "OCL.y" /* yacc.c:1652  */
    {  (yyval.constrbody_) = new CBNamed((yyvsp[-3].stereotype_), (yyvsp[-2].string_), (yyvsp[0].oclexpression_));  }
#line 3456 "Parser.C" /* yacc.c:1652  */
    break;

  case 16:
#line 2057 "OCL.y" /* yacc.c:1652  */
    {  (yyval.constrbody_) = new CB((yyvsp[-2].stereotype_), (yyvsp[0].oclexpression_));  }
#line 3462 "Parser.C" /* yacc.c:1652  */
    break;

  case 17:
#line 2059 "OCL.y" /* yacc.c:1652  */
    {  (yyval.contextdeclaration_) = new CDOper((yyvsp[0].operationcontext_));  }
#line 3468 "Parser.C" /* yacc.c:1652  */
    break;

  case 18:
#line 2060 "OCL.y" /* yacc.c:1652  */
    {  (yyval.contextdeclaration_) = new CDClassif((yyvsp[0].classifiercontext_));  }
#line 3474 "Parser.C" /* yacc.c:1652  */
    break;

  case 19:
#line 2062 "OCL.y" /* yacc.c:1652  */
    {  (yyval.classifiercontext_) = new CCType((yyvsp[-2].string_), (yyvsp[0].string_));  }
#line 3480 "Parser.C" /* yacc.c:1652  */
    break;

  case 20:
#line 2063 "OCL.y" /* yacc.c:1652  */
    {  (yyval.classifiercontext_) = new CC((yyvsp[0].string_));  }
#line 3486 "Parser.C" /* yacc.c:1652  */
    break;

  case 21:
#line 2065 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[-1].listformalparameter_)->begin(),(yyvsp[-1].listformalparameter_)->end()) ;(yyval.operationcontext_) = new OpC((yyvsp[-5].string_), (yyvsp[-3].operationname_), (yyvsp[-1].listformalparameter_));  }
#line 3492 "Parser.C" /* yacc.c:1652  */
    break;

  case 22:
#line 2066 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[-3].listformalparameter_)->begin(),(yyvsp[-3].listformalparameter_)->end()) ;(yyval.operationcontext_) = new OpCRT((yyvsp[-7].string_), (yyvsp[-5].operationname_), (yyvsp[-3].listformalparameter_), (yyvsp[0].returntype_));  }
#line 3498 "Parser.C" /* yacc.c:1652  */
    break;

  case 23:
#line 2068 "OCL.y" /* yacc.c:1652  */
    {  (yyval.stereotype_) = new Pre();  }
#line 3504 "Parser.C" /* yacc.c:1652  */
    break;

  case 24:
#line 2069 "OCL.y" /* yacc.c:1652  */
    {  (yyval.stereotype_) = new Post();  }
#line 3510 "Parser.C" /* yacc.c:1652  */
    break;

  case 25:
#line 2070 "OCL.y" /* yacc.c:1652  */
    {  (yyval.stereotype_) = new Inv();  }
#line 3516 "Parser.C" /* yacc.c:1652  */
    break;

  case 26:
#line 2072 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new OpName((yyvsp[0].string_));  }
#line 3522 "Parser.C" /* yacc.c:1652  */
    break;

  case 27:
#line 2073 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Eq();  }
#line 3528 "Parser.C" /* yacc.c:1652  */
    break;

  case 28:
#line 2074 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Add();  }
#line 3534 "Parser.C" /* yacc.c:1652  */
    break;

  case 29:
#line 2075 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Sub();  }
#line 3540 "Parser.C" /* yacc.c:1652  */
    break;

  case 30:
#line 2076 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new LST();  }
#line 3546 "Parser.C" /* yacc.c:1652  */
    break;

  case 31:
#line 2077 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new LSTE();  }
#line 3552 "Parser.C" /* yacc.c:1652  */
    break;

  case 32:
#line 2078 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new GRT();  }
#line 3558 "Parser.C" /* yacc.c:1652  */
    break;

  case 33:
#line 2079 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new GRTE();  }
#line 3564 "Parser.C" /* yacc.c:1652  */
    break;

  case 34:
#line 2080 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Div();  }
#line 3570 "Parser.C" /* yacc.c:1652  */
    break;

  case 35:
#line 2081 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Mult();  }
#line 3576 "Parser.C" /* yacc.c:1652  */
    break;

  case 36:
#line 2082 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new NEq();  }
#line 3582 "Parser.C" /* yacc.c:1652  */
    break;

  case 37:
#line 2083 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Impl();  }
#line 3588 "Parser.C" /* yacc.c:1652  */
    break;

  case 38:
#line 2084 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Not();  }
#line 3594 "Parser.C" /* yacc.c:1652  */
    break;

  case 39:
#line 2085 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Or();  }
#line 3600 "Parser.C" /* yacc.c:1652  */
    break;

  case 40:
#line 2086 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new Xor();  }
#line 3606 "Parser.C" /* yacc.c:1652  */
    break;

  case 41:
#line 2087 "OCL.y" /* yacc.c:1652  */
    {  (yyval.operationname_) = new And();  }
#line 3612 "Parser.C" /* yacc.c:1652  */
    break;

  case 42:
#line 2089 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listformalparameter_) = new ListFormalParameter();  }
#line 3618 "Parser.C" /* yacc.c:1652  */
    break;

  case 43:
#line 2090 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listformalparameter_) = new ListFormalParameter() ; (yyval.listformalparameter_)->push_back((yyvsp[0].formalparameter_));  }
#line 3624 "Parser.C" /* yacc.c:1652  */
    break;

  case 44:
#line 2091 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[0].listformalparameter_)->push_back((yyvsp[-2].formalparameter_)) ; (yyval.listformalparameter_) = (yyvsp[0].listformalparameter_) ;  }
#line 3630 "Parser.C" /* yacc.c:1652  */
    break;

  case 45:
#line 2093 "OCL.y" /* yacc.c:1652  */
    {  (yyval.formalparameter_) = new FP((yyvsp[-2].string_), (yyvsp[0].typespecifier_));  }
#line 3636 "Parser.C" /* yacc.c:1652  */
    break;

  case 46:
#line 2095 "OCL.y" /* yacc.c:1652  */
    {  (yyval.typespecifier_) = new TSsimple((yyvsp[0].simpletypespecifier_));  }
#line 3642 "Parser.C" /* yacc.c:1652  */
    break;

  case 47:
#line 2096 "OCL.y" /* yacc.c:1652  */
    {  (yyval.typespecifier_) = new TScoll((yyvsp[0].collectiontype_));  }
#line 3648 "Parser.C" /* yacc.c:1652  */
    break;

  case 48:
#line 2098 "OCL.y" /* yacc.c:1652  */
    {  (yyval.collectiontype_) = new CT((yyvsp[-3].collectionkind_), (yyvsp[-1].simpletypespecifier_));  }
#line 3654 "Parser.C" /* yacc.c:1652  */
    break;

  case 49:
#line 2100 "OCL.y" /* yacc.c:1652  */
    {  (yyval.returntype_) = new RT((yyvsp[0].typespecifier_));  }
#line 3660 "Parser.C" /* yacc.c:1652  */
    break;

  case 50:
#line 2102 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclexpression_) = new OCLExp((yyvsp[0].expression_));  }
#line 3666 "Parser.C" /* yacc.c:1652  */
    break;

  case 51:
#line 2103 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[-2].listletexpression_)->begin(),(yyvsp[-2].listletexpression_)->end()) ;(yyval.oclexpression_) = new OCLExpLet((yyvsp[-2].listletexpression_), (yyvsp[0].expression_));  }
#line 3672 "Parser.C" /* yacc.c:1652  */
    break;

  case 52:
#line 2105 "OCL.y" /* yacc.c:1652  */
    {  (yyval.letexpression_) = new LENoParam((yyvsp[-2].string_), (yyvsp[0].expression_));  }
#line 3678 "Parser.C" /* yacc.c:1652  */
    break;

  case 53:
#line 2106 "OCL.y" /* yacc.c:1652  */
    {  (yyval.letexpression_) = new LENoParamType((yyvsp[-4].string_), (yyvsp[-2].typespecifier_), (yyvsp[0].expression_));  }
#line 3684 "Parser.C" /* yacc.c:1652  */
    break;

  case 54:
#line 2107 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[-3].listformalparameter_)->begin(),(yyvsp[-3].listformalparameter_)->end()) ;(yyval.letexpression_) = new LE((yyvsp[-5].string_), (yyvsp[-3].listformalparameter_), (yyvsp[0].expression_));  }
#line 3690 "Parser.C" /* yacc.c:1652  */
    break;

  case 55:
#line 2108 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[-5].listformalparameter_)->begin(),(yyvsp[-5].listformalparameter_)->end()) ;(yyval.letexpression_) = new LEType((yyvsp[-7].string_), (yyvsp[-5].listformalparameter_), (yyvsp[-2].typespecifier_), (yyvsp[0].expression_));  }
#line 3696 "Parser.C" /* yacc.c:1652  */
    break;

  case 56:
#line 2110 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listletexpression_) = new ListLetExpression() ; (yyval.listletexpression_)->push_back((yyvsp[0].letexpression_));  }
#line 3702 "Parser.C" /* yacc.c:1652  */
    break;

  case 57:
#line 2111 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[0].listletexpression_)->push_back((yyvsp[-1].letexpression_)) ; (yyval.listletexpression_) = (yyvsp[0].listletexpression_) ;  }
#line 3708 "Parser.C" /* yacc.c:1652  */
    break;

  case 58:
#line 2113 "OCL.y" /* yacc.c:1652  */
    {  (yyval.ifexpression_) = new IfExp((yyvsp[-5].expression_), (yyvsp[-3].expression_), (yyvsp[-1].expression_));  }
#line 3714 "Parser.C" /* yacc.c:1652  */
    break;

  case 59:
#line 2115 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EOpImpl((yyvsp[-2].expression_), (yyvsp[0].expression_)); YY_RESULT_Expression_= (yyval.expression_); }
#line 3720 "Parser.C" /* yacc.c:1652  */
    break;

  case 60:
#line 2116 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[0].expression_); YY_RESULT_Expression_= (yyval.expression_); }
#line 3726 "Parser.C" /* yacc.c:1652  */
    break;

  case 61:
#line 2118 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EOpLog((yyvsp[-2].expression_), (yyvsp[-1].logicaloperator_), (yyvsp[0].expression_));  }
#line 3732 "Parser.C" /* yacc.c:1652  */
    break;

  case 62:
#line 2119 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[0].expression_);  }
#line 3738 "Parser.C" /* yacc.c:1652  */
    break;

  case 63:
#line 2121 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EOpEq((yyvsp[-2].expression_), (yyvsp[-1].equalityoperator_), (yyvsp[0].expression_));  }
#line 3744 "Parser.C" /* yacc.c:1652  */
    break;

  case 64:
#line 2122 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[0].expression_);  }
#line 3750 "Parser.C" /* yacc.c:1652  */
    break;

  case 65:
#line 2124 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EOpRel((yyvsp[-2].expression_), (yyvsp[-1].relationaloperator_), (yyvsp[0].expression_));  }
#line 3756 "Parser.C" /* yacc.c:1652  */
    break;

  case 66:
#line 2125 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[0].expression_);  }
#line 3762 "Parser.C" /* yacc.c:1652  */
    break;

  case 67:
#line 2127 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EOpAdd((yyvsp[-2].expression_), (yyvsp[-1].addoperator_), (yyvsp[0].expression_));  }
#line 3768 "Parser.C" /* yacc.c:1652  */
    break;

  case 68:
#line 2128 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[0].expression_);  }
#line 3774 "Parser.C" /* yacc.c:1652  */
    break;

  case 69:
#line 2130 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EOpMul((yyvsp[-2].expression_), (yyvsp[-1].multiplyoperator_), (yyvsp[0].expression_));  }
#line 3780 "Parser.C" /* yacc.c:1652  */
    break;

  case 70:
#line 2131 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[0].expression_);  }
#line 3786 "Parser.C" /* yacc.c:1652  */
    break;

  case 71:
#line 2133 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EOpUn((yyvsp[-1].unaryoperator_), (yyvsp[0].expression_));  }
#line 3792 "Parser.C" /* yacc.c:1652  */
    break;

  case 72:
#line 2134 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[0].expression_);  }
#line 3798 "Parser.C" /* yacc.c:1652  */
    break;

  case 73:
#line 2136 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EExplPropCall((yyvsp[-2].expression_), (yyvsp[-1].postfixoperator_), (yyvsp[0].propertycall_));  }
#line 3804 "Parser.C" /* yacc.c:1652  */
    break;

  case 74:
#line 2137 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[-1].listmessagearg_)->begin(),(yyvsp[-1].listmessagearg_)->end()) ;(yyval.expression_) = new EMessage((yyvsp[-5].expression_), (yyvsp[-3].pathname_), (yyvsp[-1].listmessagearg_));  }
#line 3810 "Parser.C" /* yacc.c:1652  */
    break;

  case 75:
#line 2138 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[0].expression_);  }
#line 3816 "Parser.C" /* yacc.c:1652  */
    break;

  case 76:
#line 2140 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EImplPropCall((yyvsp[0].propertycall_));  }
#line 3822 "Parser.C" /* yacc.c:1652  */
    break;

  case 77:
#line 2141 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new ELitColl((yyvsp[0].literalcollection_));  }
#line 3828 "Parser.C" /* yacc.c:1652  */
    break;

  case 78:
#line 2142 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new ELit((yyvsp[0].oclliteral_));  }
#line 3834 "Parser.C" /* yacc.c:1652  */
    break;

  case 79:
#line 2143 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new EIfExp((yyvsp[0].ifexpression_));  }
#line 3840 "Parser.C" /* yacc.c:1652  */
    break;

  case 80:
#line 2144 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = new ENull();  }
#line 3846 "Parser.C" /* yacc.c:1652  */
    break;

  case 81:
#line 2145 "OCL.y" /* yacc.c:1652  */
    {  (yyval.expression_) = (yyvsp[-1].expression_);  }
#line 3852 "Parser.C" /* yacc.c:1652  */
    break;

  case 82:
#line 2147 "OCL.y" /* yacc.c:1652  */
    {  (yyval.messagearg_) = new MAExpr((yyvsp[0].expression_));  }
#line 3858 "Parser.C" /* yacc.c:1652  */
    break;

  case 83:
#line 2148 "OCL.y" /* yacc.c:1652  */
    {  (yyval.messagearg_) = new MAUnspec();  }
#line 3864 "Parser.C" /* yacc.c:1652  */
    break;

  case 84:
#line 2149 "OCL.y" /* yacc.c:1652  */
    {  (yyval.messagearg_) = new MAUnspecTyped((yyvsp[0].typespecifier_));  }
#line 3870 "Parser.C" /* yacc.c:1652  */
    break;

  case 85:
#line 2151 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listmessagearg_) = new ListMessageArg();  }
#line 3876 "Parser.C" /* yacc.c:1652  */
    break;

  case 86:
#line 2152 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listmessagearg_) = new ListMessageArg() ; (yyval.listmessagearg_)->push_back((yyvsp[0].messagearg_));  }
#line 3882 "Parser.C" /* yacc.c:1652  */
    break;

  case 87:
#line 2153 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[0].listmessagearg_)->push_back((yyvsp[-2].messagearg_)) ; (yyval.listmessagearg_) = (yyvsp[0].listmessagearg_) ;  }
#line 3888 "Parser.C" /* yacc.c:1652  */
    break;

  case 88:
#line 2155 "OCL.y" /* yacc.c:1652  */
    {  (yyval.propertycall_) = new PCall((yyvsp[-3].pathname_), (yyvsp[-2].posstimeexpression_), (yyvsp[-1].possqualifiers_), (yyvsp[0].posspropcallparam_));  }
#line 3894 "Parser.C" /* yacc.c:1652  */
    break;

  case 89:
#line 2157 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[0].listpname_)->begin(),(yyvsp[0].listpname_)->end()) ;(yyval.pathname_) = new PathN((yyvsp[0].listpname_));  }
#line 3900 "Parser.C" /* yacc.c:1652  */
    break;

  case 90:
#line 2159 "OCL.y" /* yacc.c:1652  */
    {  (yyval.pname_) = new PN((yyvsp[0].string_));  }
#line 3906 "Parser.C" /* yacc.c:1652  */
    break;

  case 91:
#line 2161 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listpname_) = new ListPName() ; (yyval.listpname_)->push_back((yyvsp[0].pname_));  }
#line 3912 "Parser.C" /* yacc.c:1652  */
    break;

  case 92:
#line 2162 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[0].listpname_)->push_back((yyvsp[-2].pname_)) ; (yyval.listpname_) = (yyvsp[0].listpname_) ;  }
#line 3918 "Parser.C" /* yacc.c:1652  */
    break;

  case 93:
#line 2164 "OCL.y" /* yacc.c:1652  */
    {  (yyval.possqualifiers_) = new NoQual();  }
#line 3924 "Parser.C" /* yacc.c:1652  */
    break;

  case 94:
#line 2165 "OCL.y" /* yacc.c:1652  */
    {  (yyval.possqualifiers_) = new Qual((yyvsp[0].qualifiers_));  }
#line 3930 "Parser.C" /* yacc.c:1652  */
    break;

  case 95:
#line 2167 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.qualifiers_) = new Quals((yyvsp[-1].listexpression_));  }
#line 3936 "Parser.C" /* yacc.c:1652  */
    break;

  case 96:
#line 2169 "OCL.y" /* yacc.c:1652  */
    {  (yyval.posstimeexpression_) = new NoTE();  }
#line 3942 "Parser.C" /* yacc.c:1652  */
    break;

  case 97:
#line 2170 "OCL.y" /* yacc.c:1652  */
    {  (yyval.posstimeexpression_) = new AtPre();  }
#line 3948 "Parser.C" /* yacc.c:1652  */
    break;

  case 98:
#line 2172 "OCL.y" /* yacc.c:1652  */
    {  (yyval.posspropcallparam_) = new NoPCP();  }
#line 3954 "Parser.C" /* yacc.c:1652  */
    break;

  case 99:
#line 2173 "OCL.y" /* yacc.c:1652  */
    {  (yyval.posspropcallparam_) = new PCPs((yyvsp[0].propertycallparameters_));  }
#line 3960 "Parser.C" /* yacc.c:1652  */
    break;

  case 100:
#line 2184 "OCL.y" /* yacc.c:1652  */
    {  (yyval.propertycallparameters_) = new PCPNoDeclNoParam();  }
#line 3966 "Parser.C" /* yacc.c:1652  */
    break;

  case 101:
#line 2185 "OCL.y" /* yacc.c:1652  */
    {  (yyval.propertycallparameters_) = new PCPConcrete((yyvsp[-2].expression_), (yyvsp[-1].listpcphelper_));  }
#line 3972 "Parser.C" /* yacc.c:1652  */
    break;

  case 102:
#line 2187 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listexpression_) = new ListExpression();  }
#line 3978 "Parser.C" /* yacc.c:1652  */
    break;

  case 103:
#line 2188 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listexpression_) = new ListExpression() ; (yyval.listexpression_)->push_back((yyvsp[0].expression_));  }
#line 3984 "Parser.C" /* yacc.c:1652  */
    break;

  case 104:
#line 2189 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[0].listexpression_)->push_back((yyvsp[-2].expression_)) ; (yyval.listexpression_) = (yyvsp[0].listexpression_) ;  }
#line 3990 "Parser.C" /* yacc.c:1652  */
    break;

  case 105:
#line 2191 "OCL.y" /* yacc.c:1652  */
    {  (yyval.pcphelper_) = new PCPComma((yyvsp[0].expression_));  }
#line 3996 "Parser.C" /* yacc.c:1652  */
    break;

  case 106:
#line 2192 "OCL.y" /* yacc.c:1652  */
    {  (yyval.pcphelper_) = new PCPColon((yyvsp[0].simpletypespecifier_));  }
#line 4002 "Parser.C" /* yacc.c:1652  */
    break;

  case 107:
#line 2193 "OCL.y" /* yacc.c:1652  */
    {  (yyval.pcphelper_) = new PCPIterate((yyvsp[-4].string_), (yyvsp[-2].typespecifier_), (yyvsp[0].expression_));  }
#line 4008 "Parser.C" /* yacc.c:1652  */
    break;

  case 108:
#line 2194 "OCL.y" /* yacc.c:1652  */
    {  (yyval.pcphelper_) = new PCPBar((yyvsp[0].expression_));  }
#line 4014 "Parser.C" /* yacc.c:1652  */
    break;

  case 109:
#line 2196 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listpcphelper_) = new ListPCPHelper();  }
#line 4020 "Parser.C" /* yacc.c:1652  */
    break;

  case 110:
#line 2197 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[-1].listpcphelper_)->push_back((yyvsp[0].pcphelper_)) ; (yyval.listpcphelper_) = (yyvsp[-1].listpcphelper_) ;  }
#line 4026 "Parser.C" /* yacc.c:1652  */
    break;

  case 111:
#line 2199 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclliteral_) = new LitStr((yyvsp[0].string_));  }
#line 4032 "Parser.C" /* yacc.c:1652  */
    break;

  case 112:
#line 2200 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclliteral_) = new LitNum((yyvsp[0].oclnumber_));  }
#line 4038 "Parser.C" /* yacc.c:1652  */
    break;

  case 113:
#line 2201 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclliteral_) = new LitBoolTrue();  }
#line 4044 "Parser.C" /* yacc.c:1652  */
    break;

  case 114:
#line 2202 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclliteral_) = new LitBoolFalse();  }
#line 4050 "Parser.C" /* yacc.c:1652  */
    break;

  case 115:
#line 2204 "OCL.y" /* yacc.c:1652  */
    {  (yyval.simpletypespecifier_) = new STSpec((yyvsp[0].pathname_));  }
#line 4056 "Parser.C" /* yacc.c:1652  */
    break;

  case 116:
#line 2206 "OCL.y" /* yacc.c:1652  */
    {  std::reverse((yyvsp[-1].listcollectionitem_)->begin(),(yyvsp[-1].listcollectionitem_)->end()) ;(yyval.literalcollection_) = new LCollection((yyvsp[-3].collectionkind_), (yyvsp[-1].listcollectionitem_));  }
#line 4062 "Parser.C" /* yacc.c:1652  */
    break;

  case 117:
#line 2207 "OCL.y" /* yacc.c:1652  */
    {  (yyval.literalcollection_) = new LCollectionEmpty((yyvsp[-2].collectionkind_));  }
#line 4068 "Parser.C" /* yacc.c:1652  */
    break;

  case 118:
#line 2209 "OCL.y" /* yacc.c:1652  */
    {  (yyval.listcollectionitem_) = new ListCollectionItem() ; (yyval.listcollectionitem_)->push_back((yyvsp[0].collectionitem_));  }
#line 4074 "Parser.C" /* yacc.c:1652  */
    break;

  case 119:
#line 2210 "OCL.y" /* yacc.c:1652  */
    {  (yyvsp[0].listcollectionitem_)->push_back((yyvsp[-2].collectionitem_)) ; (yyval.listcollectionitem_) = (yyvsp[0].listcollectionitem_) ;  }
#line 4080 "Parser.C" /* yacc.c:1652  */
    break;

  case 120:
#line 2212 "OCL.y" /* yacc.c:1652  */
    {  (yyval.collectionitem_) = new CI((yyvsp[0].expression_));  }
#line 4086 "Parser.C" /* yacc.c:1652  */
    break;

  case 121:
#line 2213 "OCL.y" /* yacc.c:1652  */
    {  (yyval.collectionitem_) = new CIRange((yyvsp[-2].expression_), (yyvsp[0].expression_));  }
#line 4092 "Parser.C" /* yacc.c:1652  */
    break;

  case 122:
#line 2215 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclnumber_) = new NumInt((yyvsp[0].int_));  }
#line 4098 "Parser.C" /* yacc.c:1652  */
    break;

  case 123:
#line 2216 "OCL.y" /* yacc.c:1652  */
    {  (yyval.oclnumber_) = new NumDouble((yyvsp[0].double_));  }
#line 4104 "Parser.C" /* yacc.c:1652  */
    break;

  case 124:
#line 2218 "OCL.y" /* yacc.c:1652  */
    {  (yyval.logicaloperator_) = new LAnd();  }
#line 4110 "Parser.C" /* yacc.c:1652  */
    break;

  case 125:
#line 2219 "OCL.y" /* yacc.c:1652  */
    {  (yyval.logicaloperator_) = new LOr();  }
#line 4116 "Parser.C" /* yacc.c:1652  */
    break;

  case 126:
#line 2220 "OCL.y" /* yacc.c:1652  */
    {  (yyval.logicaloperator_) = new LXor();  }
#line 4122 "Parser.C" /* yacc.c:1652  */
    break;

  case 127:
#line 2222 "OCL.y" /* yacc.c:1652  */
    {  (yyval.collectionkind_) = new Set();  }
#line 4128 "Parser.C" /* yacc.c:1652  */
    break;

  case 128:
#line 2223 "OCL.y" /* yacc.c:1652  */
    {  (yyval.collectionkind_) = new Bag();  }
#line 4134 "Parser.C" /* yacc.c:1652  */
    break;

  case 129:
#line 2224 "OCL.y" /* yacc.c:1652  */
    {  (yyval.collectionkind_) = new Sequence();  }
#line 4140 "Parser.C" /* yacc.c:1652  */
    break;

  case 130:
#line 2225 "OCL.y" /* yacc.c:1652  */
    {  (yyval.collectionkind_) = new Collection();  }
#line 4146 "Parser.C" /* yacc.c:1652  */
    break;

  case 131:
#line 2227 "OCL.y" /* yacc.c:1652  */
    {  (yyval.equalityoperator_) = new EEq();  }
#line 4152 "Parser.C" /* yacc.c:1652  */
    break;

  case 132:
#line 2228 "OCL.y" /* yacc.c:1652  */
    {  (yyval.equalityoperator_) = new ENEq();  }
#line 4158 "Parser.C" /* yacc.c:1652  */
    break;

  case 133:
#line 2230 "OCL.y" /* yacc.c:1652  */
    {  (yyval.relationaloperator_) = new RGT();  }
#line 4164 "Parser.C" /* yacc.c:1652  */
    break;

  case 134:
#line 2231 "OCL.y" /* yacc.c:1652  */
    {  (yyval.relationaloperator_) = new RGTE();  }
#line 4170 "Parser.C" /* yacc.c:1652  */
    break;

  case 135:
#line 2232 "OCL.y" /* yacc.c:1652  */
    {  (yyval.relationaloperator_) = new RLT();  }
#line 4176 "Parser.C" /* yacc.c:1652  */
    break;

  case 136:
#line 2233 "OCL.y" /* yacc.c:1652  */
    {  (yyval.relationaloperator_) = new RLTE();  }
#line 4182 "Parser.C" /* yacc.c:1652  */
    break;

  case 137:
#line 2235 "OCL.y" /* yacc.c:1652  */
    {  (yyval.addoperator_) = new AAdd();  }
#line 4188 "Parser.C" /* yacc.c:1652  */
    break;

  case 138:
#line 2236 "OCL.y" /* yacc.c:1652  */
    {  (yyval.addoperator_) = new ASub();  }
#line 4194 "Parser.C" /* yacc.c:1652  */
    break;

  case 139:
#line 2238 "OCL.y" /* yacc.c:1652  */
    {  (yyval.multiplyoperator_) = new MMult();  }
#line 4200 "Parser.C" /* yacc.c:1652  */
    break;

  case 140:
#line 2239 "OCL.y" /* yacc.c:1652  */
    {  (yyval.multiplyoperator_) = new MDiv();  }
#line 4206 "Parser.C" /* yacc.c:1652  */
    break;

  case 141:
#line 2241 "OCL.y" /* yacc.c:1652  */
    {  (yyval.unaryoperator_) = new UMin();  }
#line 4212 "Parser.C" /* yacc.c:1652  */
    break;

  case 142:
#line 2242 "OCL.y" /* yacc.c:1652  */
    {  (yyval.unaryoperator_) = new UNot();  }
#line 4218 "Parser.C" /* yacc.c:1652  */
    break;

  case 143:
#line 2244 "OCL.y" /* yacc.c:1652  */
    {  (yyval.postfixoperator_) = new PDot();  }
#line 4224 "Parser.C" /* yacc.c:1652  */
    break;

  case 144:
#line 2245 "OCL.y" /* yacc.c:1652  */
    {  (yyval.postfixoperator_) = new PArrow();  }
#line 4230 "Parser.C" /* yacc.c:1652  */
    break;


#line 4234 "Parser.C" /* yacc.c:1652  */
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
                  yystos[*yyssp], yyvsp);
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
