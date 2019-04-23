#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include<vector>
#include<string>


class OCLfile;
class ListOCLPackage;
class OCLPackage;
class PackageName;
class OCLExpressions;
class ListConstrnt;
class Constrnt;
class ListConstrBody;
class ConstrBody;
class ContextDeclaration;
class ClassifierContext;
class OperationContext;
class Stereotype;
class OperationName;
class ListFormalParameter;
class FormalParameter;
class TypeSpecifier;
class CollectionType;
class ReturnType;
class OCLExpression;
class LetExpression;
class ListLetExpression;
class IfExpression;
class Expression;
class MessageArg;
class ListMessageArg;
class PropertyCall;
class PathName;
class PName;
class ListPName;
class PossQualifiers;
class Qualifiers;
class PossTimeExpression;
class PossPropCallParam;
class Declarator;
class DeclaratorVarList;
class ListIdent;
class PropertyCallParameters;
class ListExpression;
class PCPHelper;
class ListPCPHelper;
class OCLLiteral;
class SimpleTypeSpecifier;
class LiteralCollection;
class ListCollectionItem;
class CollectionItem;
class OCLNumber;
class LogicalOperator;
class CollectionKind;
class EqualityOperator;
class RelationalOperator;
class AddOperator;
class MultiplyOperator;
class UnaryOperator;
class PostfixOperator;

typedef union
{
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
} YYSTYPE;

OCLfile* pOCLfile(FILE *inp);
OCLfile* pOCLfile(const char *str);
Constrnt* pConstrnt(FILE *inp);
Constrnt* pConstrnt(const char *str);
Expression* pExpression(FILE *inp);
Expression* pExpression(const char *str);



#define _ERROR_ 258
#define _SYMB_0 259
#define _SYMB_1 260
#define _SYMB_2 261
#define _SYMB_3 262
#define _SYMB_4 263
#define _SYMB_5 264
#define _SYMB_6 265
#define _SYMB_7 266
#define _SYMB_8 267
#define _SYMB_9 268
#define _SYMB_10 269
#define _SYMB_11 270
#define _SYMB_12 271
#define _SYMB_13 272
#define _SYMB_14 273
#define _SYMB_15 274
#define _SYMB_16 275
#define _SYMB_17 276
#define _SYMB_18 277
#define _SYMB_19 278
#define _SYMB_20 279
#define _SYMB_21 280
#define _SYMB_22 281
#define _SYMB_23 282
#define _SYMB_24 283
#define _SYMB_25 284
#define _SYMB_26 285
#define _SYMB_27 286
#define _SYMB_28 287
#define _SYMB_29 288
#define _SYMB_30 289
#define _SYMB_31 290
#define _SYMB_32 291
#define _SYMB_33 292
#define _SYMB_34 293
#define _SYMB_35 294
#define _SYMB_36 295
#define _SYMB_37 296
#define _SYMB_38 297
#define _SYMB_39 298
#define _SYMB_40 299
#define _SYMB_41 300
#define _SYMB_42 301
#define _SYMB_43 302
#define _SYMB_44 303
#define _SYMB_45 304
#define _SYMB_46 305
#define _SYMB_47 306
#define _SYMB_48 307
#define _SYMB_49 308
#define _SYMB_50 309
#define _SYMB_51 310
#define _STRING_ 311
#define _INTEGER_ 312
#define _DOUBLE_ 313
#define _IDENT_ 314

extern YYSTYPE yylval;

#endif
