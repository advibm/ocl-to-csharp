#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.h"
#include "json.hpp"
#include <algorithm>
#include <string> 
#include <vector> 

class Skeleton : public Visitor {
private:
  bool hasPre = false;
  bool hasPost = false;
  bool isInv = false;
  bool withPrivate = false;
  std::string rootObj = "";
	
  std::string cs = "";

  // bool localVarNext = false;
  
public:
  void process(Visitable *v);

  void visitOCLfile(OCLfile *p);
  void visitOCLPackage(OCLPackage *p);
  void visitPackageName(PackageName *p);
  void visitOCLExpressions(OCLExpressions *p);
  void visitConstrnt(Constrnt *p);
  void visitConstrBody(ConstrBody *p);
  void visitContextDeclaration(ContextDeclaration *p);
  void visitClassifierContext(ClassifierContext *p);
  void visitOperationContext(OperationContext *p);
  void visitStereotype(Stereotype *p);
  void visitOperationName(OperationName *p);
  void visitFormalParameter(FormalParameter *p);
  void visitTypeSpecifier(TypeSpecifier *p);
  void visitCollectionType(CollectionType *p);
  void visitReturnType(ReturnType *p);
  void visitOCLExpression(OCLExpression *p);
  void visitLetExpression(LetExpression *p);
  void visitIfExpression(IfExpression *p);
  void visitExpression(Expression *p);
  void visitMessageArg(MessageArg *p);
  void visitPropertyCall(PropertyCall *p);
  void visitPathName(PathName *p);
  void visitPName(PName *p);
  void visitPossQualifiers(PossQualifiers *p);
  void visitQualifiers(Qualifiers *p);
  void visitPossTimeExpression(PossTimeExpression *p);
  void visitPossPropCallParam(PossPropCallParam *p);
  void visitDeclarator(Declarator *p);
  void visitDeclaratorVarList(DeclaratorVarList *p);
  void visitPropertyCallParameters(PropertyCallParameters *p);
  void visitPCPHelper(PCPHelper *p);
  void visitOCLLiteral(OCLLiteral *p);
  void visitSimpleTypeSpecifier(SimpleTypeSpecifier *p);
  void visitLiteralCollection(LiteralCollection *p);
  void visitCollectionItem(CollectionItem *p);
  void visitOCLNumber(OCLNumber *p);
  void visitLogicalOperator(LogicalOperator *p);
  void visitCollectionKind(CollectionKind *p);
  void visitEqualityOperator(EqualityOperator *p);
  void visitRelationalOperator(RelationalOperator *p);
  void visitAddOperator(AddOperator *p);
  void visitMultiplyOperator(MultiplyOperator *p);
  void visitUnaryOperator(UnaryOperator *p);
  void visitPostfixOperator(PostfixOperator *p);
  void visitOCLf(OCLf *p);
  void visitPack(Pack *p);
  void visitPackName(PackName *p);
  void visitConstraints(Constraints *p);
  void visitConstr(Constr *p);
  void visitCBDefNamed(CBDefNamed *p);
  void visitCBDef(CBDef *p);
  void visitCBNamed(CBNamed *p);
  void visitCB(CB *p);
  void visitCDOper(CDOper *p);
  void visitCDClassif(CDClassif *p);
  void visitCCType(CCType *p);
  void visitCC(CC *p);
  void visitOpC(OpC *p);
  void visitOpCRT(OpCRT *p);
  void visitPre(Pre *p);
  void visitPost(Post *p);
  void visitInv(Inv *p);
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
  void visitFP(FP *p);
  void visitTSsimple(TSsimple *p);
  void visitTScoll(TScoll *p);
  void visitCT(CT *p);
  void visitRT(RT *p);
  void visitOCLExp(OCLExp *p);
  void visitOCLExpLet(OCLExpLet *p);
  void visitLENoParam(LENoParam *p);
  void visitLENoParamType(LENoParamType *p);
  void visitLE(LE *p);
  void visitLEType(LEType *p);
  void visitIfExp(IfExp *p);
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
  void visitMAExpr(MAExpr *p);
  void visitMAUnspec(MAUnspec *p);
  void visitMAUnspecTyped(MAUnspecTyped *p);
  void visitPCall(PCall *p);
  void visitPathN(PathN *p);
  void visitPN(PN *p);
  void visitNoQual(NoQual *p);
  void visitQual(Qual *p);
  void visitQuals(Quals *p);
  void visitNoTE(NoTE *p);
  void visitAtPre(AtPre *p);
  void visitNoPCP(NoPCP *p);
  void visitPCPs(PCPs *p);
  void visitDecl(Decl *p);
  void visitDeclAcc(DeclAcc *p);
  void visitDVL(DVL *p);
  void visitDVLType(DVLType *p);
  void visitPCPDecl(PCPDecl *p);
  void visitPCP(PCP *p);
  void visitPCPNoDeclNoParam(PCPNoDeclNoParam *p);
  void visitPCPConcrete(PCPConcrete *p);
  void visitPCPComma(PCPComma *p);
  void visitPCPColon(PCPColon *p);
  void visitPCPIterate(PCPIterate *p);
  void visitPCPBar(PCPBar *p);
  void visitLitStr(LitStr *p);
  void visitLitNum(LitNum *p);
  void visitLitBoolTrue(LitBoolTrue *p);
  void visitLitBoolFalse(LitBoolFalse *p);
  void visitSTSpec(STSpec *p);
  void visitLCollection(LCollection *p);
  void visitLCollectionEmpty(LCollectionEmpty *p);
  void visitCI(CI *p);
  void visitCIRange(CIRange *p);
  void visitNumInt(NumInt *p);
  void visitNumDouble(NumDouble *p);
  void visitLAnd(LAnd *p);
  void visitLOr(LOr *p);
  void visitLXor(LXor *p);
  void visitSet(Set *p);
  void visitBag(Bag *p);
  void visitSequence(Sequence *p);
  void visitCollection(Collection *p);
  void visitEEq(EEq *p);
  void visitENEq(ENEq *p);
  void visitRGT(RGT *p);
  void visitRGTE(RGTE *p);
  void visitRLT(RLT *p);
  void visitRLTE(RLTE *p);
  void visitAAdd(AAdd *p);
  void visitASub(ASub *p);
  void visitMMult(MMult *p);
  void visitMDiv(MDiv *p);
  void visitUMin(UMin *p);
  void visitUNot(UNot *p);
  void visitPDot(PDot *p);
  void visitPArrow(PArrow *p);
  void visitListOCLPackage(ListOCLPackage *p);
  void visitListConstrnt(ListConstrnt *p);
  void visitListConstrBody(ListConstrBody *p);
  void visitListFormalParameter(ListFormalParameter *p);
  void visitListLetExpression(ListLetExpression *p);
  void visitListMessageArg(ListMessageArg *p);
  void visitListPName(ListPName *p);
  void visitListIdent(ListIdent *p);
  void visitListExpression(ListExpression *p);
  void visitListPCPHelper(ListPCPHelper *p);
  void visitListCollectionItem(ListCollectionItem *p);

  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);
  
  void print(String x);
};

#endif
