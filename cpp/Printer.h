#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

class PrintAbsyn : public Visitor
{
 protected:
  int _n_, _i_;
  /* The following are simple heuristics for rendering terminals */
  /* You may wish to change them */
  void render(Char c);
  void render(String s);
  void render(const char *s);
  void indent(void);
  void backup(void);
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char *print(Visitable *v);

  void visitOCLfile(OCLfile *p); /* abstract class */
  void visitOCLf(OCLf *p);
  void visitListOCLPackage(ListOCLPackage *p);
  void visitOCLPackage(OCLPackage *p); /* abstract class */
  void visitPack(Pack *p);
  void visitPackageName(PackageName *p); /* abstract class */
  void visitPackName(PackName *p);
  void visitOCLExpressions(OCLExpressions *p); /* abstract class */
  void visitConstraints(Constraints *p);
  void visitListConstrnt(ListConstrnt *p);
  void visitConstrnt(Constrnt *p); /* abstract class */
  void visitConstr(Constr *p);
  void visitListConstrBody(ListConstrBody *p);
  void visitConstrBody(ConstrBody *p); /* abstract class */
  void visitCBDefNamed(CBDefNamed *p);
  void visitCBDef(CBDef *p);
  void visitCBNamed(CBNamed *p);
  void visitCB(CB *p);
  void visitContextDeclaration(ContextDeclaration *p); /* abstract class */
  void visitCDOper(CDOper *p);
  void visitCDClassif(CDClassif *p);
  void visitClassifierContext(ClassifierContext *p); /* abstract class */
  void visitCCType(CCType *p);
  void visitCC(CC *p);
  void visitOperationContext(OperationContext *p); /* abstract class */
  void visitOpC(OpC *p);
  void visitOpCRT(OpCRT *p);
  void visitStereotype(Stereotype *p); /* abstract class */
  void visitPre(Pre *p);
  void visitPost(Post *p);
  void visitInv(Inv *p);
  void visitOperationName(OperationName *p); /* abstract class */
  void visitOpName(OpName *p);
  void visitEq(Eq *p);
  void visitAdd(Add *p);
  void visitSub(Sub *p);
  void visitLST(LST *p);
  void visitLSTE(LSTE *p);
  void visitGRT(GRT *p);
  void visitGRTE(GRTE *p);
  void visitDiv(Div *p);
  void visitMult(Mult *p);
  void visitNEq(NEq *p);
  void visitImpl(Impl *p);
  void visitNot(Not *p);
  void visitOr(Or *p);
  void visitXor(Xor *p);
  void visitAnd(And *p);
  void visitListFormalParameter(ListFormalParameter *p);
  void visitFormalParameter(FormalParameter *p); /* abstract class */
  void visitFP(FP *p);
  void visitTypeSpecifier(TypeSpecifier *p); /* abstract class */
  void visitTSsimple(TSsimple *p);
  void visitTScoll(TScoll *p);
  void visitCollectionType(CollectionType *p); /* abstract class */
  void visitCT(CT *p);
  void visitReturnType(ReturnType *p); /* abstract class */
  void visitRT(RT *p);
  void visitOCLExpression(OCLExpression *p); /* abstract class */
  void visitOCLExp(OCLExp *p);
  void visitOCLExpLet(OCLExpLet *p);
  void visitLetExpression(LetExpression *p); /* abstract class */
  void visitLENoParam(LENoParam *p);
  void visitLENoParamType(LENoParamType *p);
  void visitLE(LE *p);
  void visitLEType(LEType *p);
  void visitListLetExpression(ListLetExpression *p);
  void visitIfExpression(IfExpression *p); /* abstract class */
  void visitIfExp(IfExp *p);
  void visitExpression(Expression *p); /* abstract class */
  void visitEOpImpl(EOpImpl *p);
  void visitEOpLog(EOpLog *p);
  void visitEOpEq(EOpEq *p);
  void visitEOpRel(EOpRel *p);
  void visitEOpAdd(EOpAdd *p);
  void visitEOpMul(EOpMul *p);
  void visitEOpUn(EOpUn *p);
  void visitEExplPropCall(EExplPropCall *p);
  void visitEMessage(EMessage *p);
  void visitEImplPropCall(EImplPropCall *p);
  void visitELitColl(ELitColl *p);
  void visitELit(ELit *p);
  void visitEIfExp(EIfExp *p);
  void visitENull(ENull *p);
  void visitMessageArg(MessageArg *p); /* abstract class */
  void visitMAExpr(MAExpr *p);
  void visitMAUnspec(MAUnspec *p);
  void visitMAUnspecTyped(MAUnspecTyped *p);
  void visitListMessageArg(ListMessageArg *p);
  void visitPropertyCall(PropertyCall *p); /* abstract class */
  void visitPCall(PCall *p);
  void visitPathName(PathName *p); /* abstract class */
  void visitPathN(PathN *p);
  void visitPName(PName *p); /* abstract class */
  void visitPN(PN *p);
  void visitListPName(ListPName *p);
  void visitPossQualifiers(PossQualifiers *p); /* abstract class */
  void visitNoQual(NoQual *p);
  void visitQual(Qual *p);
  void visitQualifiers(Qualifiers *p); /* abstract class */
  void visitQuals(Quals *p);
  void visitPossTimeExpression(PossTimeExpression *p); /* abstract class */
  void visitNoTE(NoTE *p);
  void visitAtPre(AtPre *p);
  void visitPossPropCallParam(PossPropCallParam *p); /* abstract class */
  void visitNoPCP(NoPCP *p);
  void visitPCPs(PCPs *p);
  void visitDeclarator(Declarator *p); /* abstract class */
  void visitDecl(Decl *p);
  void visitDeclAcc(DeclAcc *p);
  void visitDeclaratorVarList(DeclaratorVarList *p); /* abstract class */
  void visitDVL(DVL *p);
  void visitDVLType(DVLType *p);
  void visitListIdent(ListIdent *p);
  void visitPropertyCallParameters(PropertyCallParameters *p); /* abstract class */
  void visitPCPDecl(PCPDecl *p);
  void visitPCP(PCP *p);
  void visitPCPNoDeclNoParam(PCPNoDeclNoParam *p);
  void visitPCPConcrete(PCPConcrete *p);
  void visitListExpression(ListExpression *p);
  void visitPCPHelper(PCPHelper *p); /* abstract class */
  void visitPCPComma(PCPComma *p);
  void visitPCPColon(PCPColon *p);
  void visitPCPIterate(PCPIterate *p);
  void visitPCPBar(PCPBar *p);
  void visitListPCPHelper(ListPCPHelper *p);
  void visitOCLLiteral(OCLLiteral *p); /* abstract class */
  void visitLitStr(LitStr *p);
  void visitLitNum(LitNum *p);
  void visitLitBoolTrue(LitBoolTrue *p);
  void visitLitBoolFalse(LitBoolFalse *p);
  void visitSimpleTypeSpecifier(SimpleTypeSpecifier *p); /* abstract class */
  void visitSTSpec(STSpec *p);
  void visitLiteralCollection(LiteralCollection *p); /* abstract class */
  void visitLCollection(LCollection *p);
  void visitLCollectionEmpty(LCollectionEmpty *p);
  void visitListCollectionItem(ListCollectionItem *p);
  void visitCollectionItem(CollectionItem *p); /* abstract class */
  void visitCI(CI *p);
  void visitCIRange(CIRange *p);
  void visitOCLNumber(OCLNumber *p); /* abstract class */
  void visitNumInt(NumInt *p);
  void visitNumDouble(NumDouble *p);
  void visitLogicalOperator(LogicalOperator *p); /* abstract class */
  void visitLAnd(LAnd *p);
  void visitLOr(LOr *p);
  void visitLXor(LXor *p);
  void visitCollectionKind(CollectionKind *p); /* abstract class */
  void visitSet(Set *p);
  void visitBag(Bag *p);
  void visitSequence(Sequence *p);
  void visitCollection(Collection *p);
  void visitEqualityOperator(EqualityOperator *p); /* abstract class */
  void visitEEq(EEq *p);
  void visitENEq(ENEq *p);
  void visitRelationalOperator(RelationalOperator *p); /* abstract class */
  void visitRGT(RGT *p);
  void visitRGTE(RGTE *p);
  void visitRLT(RLT *p);
  void visitRLTE(RLTE *p);
  void visitAddOperator(AddOperator *p); /* abstract class */
  void visitAAdd(AAdd *p);
  void visitASub(ASub *p);
  void visitMultiplyOperator(MultiplyOperator *p); /* abstract class */
  void visitMMult(MMult *p);
  void visitMDiv(MDiv *p);
  void visitUnaryOperator(UnaryOperator *p); /* abstract class */
  void visitUMin(UMin *p);
  void visitUNot(UNot *p);
  void visitPostfixOperator(PostfixOperator *p); /* abstract class */
  void visitPDot(PDot *p);
  void visitPArrow(PArrow *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int len = strlen(s);
    while (cur_ + len >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
    }
    resizeBuffer();
    for(int n = 0; n < len; n++)
    {
      buf_[cur_ + n] = s[n];
    }
    cur_ += len;
    buf_[cur_] = 0;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    cur_++;
    buf_[cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};



class ShowAbsyn : public Visitor
{
 public:
  ShowAbsyn(void);
  ~ShowAbsyn(void);
  char *show(Visitable *v);

  void visitOCLfile(OCLfile *p); /* abstract class */
  void visitOCLf(OCLf *p);
  void visitListOCLPackage(ListOCLPackage *p);
  void visitOCLPackage(OCLPackage *p); /* abstract class */
  void visitPack(Pack *p);
  void visitPackageName(PackageName *p); /* abstract class */
  void visitPackName(PackName *p);
  void visitOCLExpressions(OCLExpressions *p); /* abstract class */
  void visitConstraints(Constraints *p);
  void visitListConstrnt(ListConstrnt *p);
  void visitConstrnt(Constrnt *p); /* abstract class */
  void visitConstr(Constr *p);
  void visitListConstrBody(ListConstrBody *p);
  void visitConstrBody(ConstrBody *p); /* abstract class */
  void visitCBDefNamed(CBDefNamed *p);
  void visitCBDef(CBDef *p);
  void visitCBNamed(CBNamed *p);
  void visitCB(CB *p);
  void visitContextDeclaration(ContextDeclaration *p); /* abstract class */
  void visitCDOper(CDOper *p);
  void visitCDClassif(CDClassif *p);
  void visitClassifierContext(ClassifierContext *p); /* abstract class */
  void visitCCType(CCType *p);
  void visitCC(CC *p);
  void visitOperationContext(OperationContext *p); /* abstract class */
  void visitOpC(OpC *p);
  void visitOpCRT(OpCRT *p);
  void visitStereotype(Stereotype *p); /* abstract class */
  void visitPre(Pre *p);
  void visitPost(Post *p);
  void visitInv(Inv *p);
  void visitOperationName(OperationName *p); /* abstract class */
  void visitOpName(OpName *p);
  void visitEq(Eq *p);
  void visitAdd(Add *p);
  void visitSub(Sub *p);
  void visitLST(LST *p);
  void visitLSTE(LSTE *p);
  void visitGRT(GRT *p);
  void visitGRTE(GRTE *p);
  void visitDiv(Div *p);
  void visitMult(Mult *p);
  void visitNEq(NEq *p);
  void visitImpl(Impl *p);
  void visitNot(Not *p);
  void visitOr(Or *p);
  void visitXor(Xor *p);
  void visitAnd(And *p);
  void visitListFormalParameter(ListFormalParameter *p);
  void visitFormalParameter(FormalParameter *p); /* abstract class */
  void visitFP(FP *p);
  void visitTypeSpecifier(TypeSpecifier *p); /* abstract class */
  void visitTSsimple(TSsimple *p);
  void visitTScoll(TScoll *p);
  void visitCollectionType(CollectionType *p); /* abstract class */
  void visitCT(CT *p);
  void visitReturnType(ReturnType *p); /* abstract class */
  void visitRT(RT *p);
  void visitOCLExpression(OCLExpression *p); /* abstract class */
  void visitOCLExp(OCLExp *p);
  void visitOCLExpLet(OCLExpLet *p);
  void visitLetExpression(LetExpression *p); /* abstract class */
  void visitLENoParam(LENoParam *p);
  void visitLENoParamType(LENoParamType *p);
  void visitLE(LE *p);
  void visitLEType(LEType *p);
  void visitListLetExpression(ListLetExpression *p);
  void visitIfExpression(IfExpression *p); /* abstract class */
  void visitIfExp(IfExp *p);
  void visitExpression(Expression *p); /* abstract class */
  void visitEOpImpl(EOpImpl *p);
  void visitEOpLog(EOpLog *p);
  void visitEOpEq(EOpEq *p);
  void visitEOpRel(EOpRel *p);
  void visitEOpAdd(EOpAdd *p);
  void visitEOpMul(EOpMul *p);
  void visitEOpUn(EOpUn *p);
  void visitEExplPropCall(EExplPropCall *p);
  void visitEMessage(EMessage *p);
  void visitEImplPropCall(EImplPropCall *p);
  void visitELitColl(ELitColl *p);
  void visitELit(ELit *p);
  void visitEIfExp(EIfExp *p);
  void visitENull(ENull *p);
  void visitMessageArg(MessageArg *p); /* abstract class */
  void visitMAExpr(MAExpr *p);
  void visitMAUnspec(MAUnspec *p);
  void visitMAUnspecTyped(MAUnspecTyped *p);
  void visitListMessageArg(ListMessageArg *p);
  void visitPropertyCall(PropertyCall *p); /* abstract class */
  void visitPCall(PCall *p);
  void visitPathName(PathName *p); /* abstract class */
  void visitPathN(PathN *p);
  void visitPName(PName *p); /* abstract class */
  void visitPN(PN *p);
  void visitListPName(ListPName *p);
  void visitPossQualifiers(PossQualifiers *p); /* abstract class */
  void visitNoQual(NoQual *p);
  void visitQual(Qual *p);
  void visitQualifiers(Qualifiers *p); /* abstract class */
  void visitQuals(Quals *p);
  void visitPossTimeExpression(PossTimeExpression *p); /* abstract class */
  void visitNoTE(NoTE *p);
  void visitAtPre(AtPre *p);
  void visitPossPropCallParam(PossPropCallParam *p); /* abstract class */
  void visitNoPCP(NoPCP *p);
  void visitPCPs(PCPs *p);
  void visitDeclarator(Declarator *p); /* abstract class */
  void visitDecl(Decl *p);
  void visitDeclAcc(DeclAcc *p);
  void visitDeclaratorVarList(DeclaratorVarList *p); /* abstract class */
  void visitDVL(DVL *p);
  void visitDVLType(DVLType *p);
  void visitListIdent(ListIdent *p);
  void visitPropertyCallParameters(PropertyCallParameters *p); /* abstract class */
  void visitPCPDecl(PCPDecl *p);
  void visitPCP(PCP *p);
  void visitPCPNoDeclNoParam(PCPNoDeclNoParam *p);
  void visitPCPConcrete(PCPConcrete *p);
  void visitListExpression(ListExpression *p);
  void visitPCPHelper(PCPHelper *p); /* abstract class */
  void visitPCPComma(PCPComma *p);
  void visitPCPColon(PCPColon *p);
  void visitPCPIterate(PCPIterate *p);
  void visitPCPBar(PCPBar *p);
  void visitListPCPHelper(ListPCPHelper *p);
  void visitOCLLiteral(OCLLiteral *p); /* abstract class */
  void visitLitStr(LitStr *p);
  void visitLitNum(LitNum *p);
  void visitLitBoolTrue(LitBoolTrue *p);
  void visitLitBoolFalse(LitBoolFalse *p);
  void visitSimpleTypeSpecifier(SimpleTypeSpecifier *p); /* abstract class */
  void visitSTSpec(STSpec *p);
  void visitLiteralCollection(LiteralCollection *p); /* abstract class */
  void visitLCollection(LCollection *p);
  void visitLCollectionEmpty(LCollectionEmpty *p);
  void visitListCollectionItem(ListCollectionItem *p);
  void visitCollectionItem(CollectionItem *p); /* abstract class */
  void visitCI(CI *p);
  void visitCIRange(CIRange *p);
  void visitOCLNumber(OCLNumber *p); /* abstract class */
  void visitNumInt(NumInt *p);
  void visitNumDouble(NumDouble *p);
  void visitLogicalOperator(LogicalOperator *p); /* abstract class */
  void visitLAnd(LAnd *p);
  void visitLOr(LOr *p);
  void visitLXor(LXor *p);
  void visitCollectionKind(CollectionKind *p); /* abstract class */
  void visitSet(Set *p);
  void visitBag(Bag *p);
  void visitSequence(Sequence *p);
  void visitCollection(Collection *p);
  void visitEqualityOperator(EqualityOperator *p); /* abstract class */
  void visitEEq(EEq *p);
  void visitENEq(ENEq *p);
  void visitRelationalOperator(RelationalOperator *p); /* abstract class */
  void visitRGT(RGT *p);
  void visitRGTE(RGTE *p);
  void visitRLT(RLT *p);
  void visitRLTE(RLTE *p);
  void visitAddOperator(AddOperator *p); /* abstract class */
  void visitAAdd(AAdd *p);
  void visitASub(ASub *p);
  void visitMultiplyOperator(MultiplyOperator *p); /* abstract class */
  void visitMMult(MMult *p);
  void visitMDiv(MDiv *p);
  void visitUnaryOperator(UnaryOperator *p); /* abstract class */
  void visitUMin(UMin *p);
  void visitUNot(UNot *p);
  void visitPostfixOperator(PostfixOperator *p); /* abstract class */
  void visitPDot(PDot *p);
  void visitPArrow(PArrow *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int len = strlen(s);
    while (cur_ + len >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
    }
    resizeBuffer();
    for(int n = 0; n < len; n++)
    {
      buf_[cur_ + n] = s[n];
    }
    cur_ += len;
    buf_[cur_] = 0;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    cur_++;
    buf_[cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};




#endif

