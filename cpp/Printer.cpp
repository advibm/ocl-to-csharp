/*** BNFC-Generated Pretty Printer and Abstract Syntax Viewer ***/

#include <string>
#include "Printer.H"
#define INDENT_WIDTH 2


//You may wish to change render
void PrintAbsyn::render(Char c)
{
  if (c == '{')
  {
     bufAppend('\n');
     indent();
     bufAppend(c);
     _n_ = _n_ + INDENT_WIDTH;
     bufAppend('\n');
     indent();
  }
  else if (c == '(' || c == '[')
     bufAppend(c);
  else if (c == ')' || c == ']')
  {
     backup();
     bufAppend(c);
  }
  else if (c == '}')
  {
     int t;
     _n_ = _n_ - INDENT_WIDTH;
     for (t=0; t<INDENT_WIDTH; t++) {
       backup();
     }
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == ',')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == ';')
  {
     backup();
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == 0) return;
  else
  {
     bufAppend(' ');
     bufAppend(c);
     bufAppend(' ');
  }
}

void PrintAbsyn::render(String s_)
{
  const char *s = s_.c_str() ;
  if(strlen(s) > 0)
  {
    bufAppend(s);
    bufAppend(' ');
  }
}
void PrintAbsyn::render(const char *s)
{
  if(strlen(s) > 0)
  {
    bufAppend(s);
    bufAppend(' ');
  }
}

void PrintAbsyn::indent()
{
  int n = _n_;
  while (n > 0)
  {
    bufAppend(' ');
    n--;
  }
}

void PrintAbsyn::backup()
{
  if (buf_[cur_ - 1] == ' ')
  {
    buf_[cur_ - 1] = 0;
    cur_--;
  }
}

PrintAbsyn::PrintAbsyn(void)
{
  _i_ = 0; _n_ = 0;
  buf_ = 0;
  bufReset();
}

PrintAbsyn::~PrintAbsyn(void)
{
}

char *PrintAbsyn::print(Visitable *v)
{
  _i_ = 0; _n_ = 0;
  bufReset();
  v->accept(this);
  return buf_;
}

void PrintAbsyn::visitOCLfile(OCLfile *p) {} //abstract class

void PrintAbsyn::visitOCLf(OCLf *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listoclpackage_) {_i_ = 0; p->listoclpackage_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListOCLPackage(ListOCLPackage *listoclpackage)
{
  for (ListOCLPackage::const_iterator i = listoclpackage->begin() ; i != listoclpackage->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listoclpackage->end() - 1) render("");
  }
}void PrintAbsyn::visitOCLPackage(OCLPackage *p) {} //abstract class

void PrintAbsyn::visitPack(Pack *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("package");
  _i_ = 0; p->packagename_->accept(this);
  _i_ = 0; p->oclexpressions_->accept(this);
  render("endpackage");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPackageName(PackageName *p) {} //abstract class

void PrintAbsyn::visitPackName(PackName *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->pathname_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOCLExpressions(OCLExpressions *p) {} //abstract class

void PrintAbsyn::visitConstraints(Constraints *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listconstrnt_) {_i_ = 0; p->listconstrnt_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListConstrnt(ListConstrnt *listconstrnt)
{
  for (ListConstrnt::const_iterator i = listconstrnt->begin() ; i != listconstrnt->end() ; ++i)
  {
    (*i)->accept(this);
    render("");
  }
}void PrintAbsyn::visitConstrnt(Constrnt *p) {} //abstract class

void PrintAbsyn::visitConstr(Constr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->contextdeclaration_->accept(this);
  if(p->listconstrbody_) {_i_ = 0; p->listconstrbody_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListConstrBody(ListConstrBody *listconstrbody)
{
  for (ListConstrBody::const_iterator i = listconstrbody->begin() ; i != listconstrbody->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listconstrbody->end() - 1) render("");
  }
}void PrintAbsyn::visitConstrBody(ConstrBody *p) {} //abstract class

void PrintAbsyn::visitCBDefNamed(CBDefNamed *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("def");
  visitIdent(p->ident_);
  render(':');
  if(p->listletexpression_) {_i_ = 0; p->listletexpression_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCBDef(CBDef *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("def");
  render(':');
  if(p->listletexpression_) {_i_ = 0; p->listletexpression_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCBNamed(CBNamed *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->stereotype_->accept(this);
  visitIdent(p->ident_);
  render(':');
  _i_ = 0; p->oclexpression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCB(CB *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->stereotype_->accept(this);
  render(':');
  _i_ = 0; p->oclexpression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitContextDeclaration(ContextDeclaration *p) {} //abstract class

void PrintAbsyn::visitCDOper(CDOper *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("context");
  _i_ = 0; p->operationcontext_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCDClassif(CDClassif *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("context");
  _i_ = 0; p->classifiercontext_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitClassifierContext(ClassifierContext *p) {} //abstract class

void PrintAbsyn::visitCCType(CCType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_1);
  render(':');
  visitIdent(p->ident_2);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCC(CC *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOperationContext(OperationContext *p) {} //abstract class

void PrintAbsyn::visitOpC(OpC *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);
  render("::");
  _i_ = 0; p->operationname_->accept(this);
  render('(');
  if(p->listformalparameter_) {_i_ = 0; p->listformalparameter_->accept(this);}
  render(')');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOpCRT(OpCRT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);
  render("::");
  _i_ = 0; p->operationname_->accept(this);
  render('(');
  if(p->listformalparameter_) {_i_ = 0; p->listformalparameter_->accept(this);}
  render(')');
  render(':');
  _i_ = 0; p->returntype_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStereotype(Stereotype *p) {} //abstract class

void PrintAbsyn::visitPre(Pre *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("pre");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPost(Post *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("post");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInv(Inv *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("inv");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOperationName(OperationName *p) {} //abstract class

void PrintAbsyn::visitOpName(OpName *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEq(Eq *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('=');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitAdd(Add *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('+');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSub(Sub *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('-');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLST(LST *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('<');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLSTE(LSTE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("<=");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGRT(GRT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('>');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitGRTE(GRTE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render(">=");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDiv(Div *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('/');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitMult(Mult *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('*');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitNEq(NEq *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("<>");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitImpl(Impl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("implies");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitNot(Not *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("not");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOr(Or *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("or");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitXor(Xor *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("xor");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitAnd(And *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("and");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListFormalParameter(ListFormalParameter *listformalparameter)
{
  for (ListFormalParameter::const_iterator i = listformalparameter->begin() ; i != listformalparameter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listformalparameter->end() - 1) render(',');
  }
}void PrintAbsyn::visitFormalParameter(FormalParameter *p) {} //abstract class

void PrintAbsyn::visitFP(FP *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);
  render(':');
  _i_ = 0; p->typespecifier_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeSpecifier(TypeSpecifier *p) {} //abstract class

void PrintAbsyn::visitTSsimple(TSsimple *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->simpletypespecifier_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTScoll(TScoll *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->collectiontype_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCollectionType(CollectionType *p) {} //abstract class

void PrintAbsyn::visitCT(CT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->collectionkind_->accept(this);
  render('(');
  _i_ = 0; p->simpletypespecifier_->accept(this);
  render(')');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitReturnType(ReturnType *p) {} //abstract class

void PrintAbsyn::visitRT(RT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->typespecifier_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOCLExpression(OCLExpression *p) {} //abstract class

void PrintAbsyn::visitOCLExp(OCLExp *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOCLExpLet(OCLExpLet *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listletexpression_) {_i_ = 0; p->listletexpression_->accept(this);}
  render("in");
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLetExpression(LetExpression *p) {} //abstract class

void PrintAbsyn::visitLENoParam(LENoParam *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("let");
  visitIdent(p->ident_);
  render('=');
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLENoParamType(LENoParamType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("let");
  visitIdent(p->ident_);
  render(':');
  _i_ = 0; p->typespecifier_->accept(this);
  render('=');
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLE(LE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("let");
  visitIdent(p->ident_);
  render('(');
  if(p->listformalparameter_) {_i_ = 0; p->listformalparameter_->accept(this);}
  render(')');
  render('=');
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLEType(LEType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("let");
  visitIdent(p->ident_);
  render('(');
  if(p->listformalparameter_) {_i_ = 0; p->listformalparameter_->accept(this);}
  render(')');
  render(':');
  _i_ = 0; p->typespecifier_->accept(this);
  render('=');
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListLetExpression(ListLetExpression *listletexpression)
{
  for (ListLetExpression::const_iterator i = listletexpression->begin() ; i != listletexpression->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listletexpression->end() - 1) render("");
  }
}void PrintAbsyn::visitIfExpression(IfExpression *p) {} //abstract class

void PrintAbsyn::visitIfExp(IfExp *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("if");
  _i_ = 0; p->expression_1->accept(this);
  render("then");
  _i_ = 0; p->expression_2->accept(this);
  render("else");
  _i_ = 0; p->expression_3->accept(this);
  render("endif");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExpression(Expression *p) {} //abstract class

void PrintAbsyn::visitEOpImpl(EOpImpl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->expression_1->accept(this);
  render("implies");
  _i_ = 1; p->expression_2->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEOpLog(EOpLog *p)
{
  int oldi = _i_;
  if (oldi > 1) render(_L_PAREN);

  _i_ = 1; p->expression_1->accept(this);
  _i_ = 0; p->logicaloperator_->accept(this);
  _i_ = 2; p->expression_2->accept(this);

  if (oldi > 1) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEOpEq(EOpEq *p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  _i_ = 2; p->expression_1->accept(this);
  _i_ = 0; p->equalityoperator_->accept(this);
  _i_ = 3; p->expression_2->accept(this);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEOpRel(EOpRel *p)
{
  int oldi = _i_;
  if (oldi > 3) render(_L_PAREN);

  _i_ = 3; p->expression_1->accept(this);
  _i_ = 0; p->relationaloperator_->accept(this);
  _i_ = 4; p->expression_2->accept(this);

  if (oldi > 3) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEOpAdd(EOpAdd *p)
{
  int oldi = _i_;
  if (oldi > 4) render(_L_PAREN);

  _i_ = 4; p->expression_1->accept(this);
  _i_ = 0; p->addoperator_->accept(this);
  _i_ = 5; p->expression_2->accept(this);

  if (oldi > 4) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEOpMul(EOpMul *p)
{
  int oldi = _i_;
  if (oldi > 5) render(_L_PAREN);

  _i_ = 5; p->expression_1->accept(this);
  _i_ = 0; p->multiplyoperator_->accept(this);
  _i_ = 6; p->expression_2->accept(this);

  if (oldi > 5) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEOpUn(EOpUn *p)
{
  int oldi = _i_;
  if (oldi > 6) render(_L_PAREN);

  _i_ = 0; p->unaryoperator_->accept(this);
  _i_ = 7; p->expression_->accept(this);

  if (oldi > 6) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEExplPropCall(EExplPropCall *p)
{
  int oldi = _i_;
  if (oldi > 7) render(_L_PAREN);

  _i_ = 7; p->expression_->accept(this);
  _i_ = 0; p->postfixoperator_->accept(this);
  _i_ = 0; p->propertycall_->accept(this);

  if (oldi > 7) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEMessage(EMessage *p)
{
  int oldi = _i_;
  if (oldi > 7) render(_L_PAREN);

  _i_ = 7; p->expression_->accept(this);
  render('^');
  _i_ = 0; p->pathname_->accept(this);
  render('(');
  if(p->listmessagearg_) {_i_ = 0; p->listmessagearg_->accept(this);}
  render(')');

  if (oldi > 7) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEImplPropCall(EImplPropCall *p)
{
  int oldi = _i_;
  if (oldi > 8) render(_L_PAREN);

  _i_ = 0; p->propertycall_->accept(this);

  if (oldi > 8) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELitColl(ELitColl *p)
{
  int oldi = _i_;
  if (oldi > 8) render(_L_PAREN);

  _i_ = 0; p->literalcollection_->accept(this);

  if (oldi > 8) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitELit(ELit *p)
{
  int oldi = _i_;
  if (oldi > 8) render(_L_PAREN);

  _i_ = 0; p->oclliteral_->accept(this);

  if (oldi > 8) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIfExp(EIfExp *p)
{
  int oldi = _i_;
  if (oldi > 8) render(_L_PAREN);

  _i_ = 0; p->ifexpression_->accept(this);

  if (oldi > 8) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitENull(ENull *p)
{
  int oldi = _i_;
  if (oldi > 8) render(_L_PAREN);

  render("null");

  if (oldi > 8) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitMessageArg(MessageArg *p) {} //abstract class

void PrintAbsyn::visitMAExpr(MAExpr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitMAUnspec(MAUnspec *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('?');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitMAUnspecTyped(MAUnspecTyped *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('?');
  render(':');
  _i_ = 0; p->typespecifier_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListMessageArg(ListMessageArg *listmessagearg)
{
  for (ListMessageArg::const_iterator i = listmessagearg->begin() ; i != listmessagearg->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmessagearg->end() - 1) render(',');
  }
}void PrintAbsyn::visitPropertyCall(PropertyCall *p) {} //abstract class

void PrintAbsyn::visitPCall(PCall *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->pathname_->accept(this);
  _i_ = 0; p->posstimeexpression_->accept(this);
  _i_ = 0; p->possqualifiers_->accept(this);
  _i_ = 0; p->posspropcallparam_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPathName(PathName *p) {} //abstract class

void PrintAbsyn::visitPathN(PathN *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listpname_) {_i_ = 0; p->listpname_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPName(PName *p) {} //abstract class

void PrintAbsyn::visitPN(PN *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListPName(ListPName *listpname)
{
  for (ListPName::const_iterator i = listpname->begin() ; i != listpname->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listpname->end() - 1) render("::");
  }
}void PrintAbsyn::visitPossQualifiers(PossQualifiers *p) {} //abstract class

void PrintAbsyn::visitNoQual(NoQual *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);


  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitQual(Qual *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->qualifiers_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitQualifiers(Qualifiers *p) {} //abstract class

void PrintAbsyn::visitQuals(Quals *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('[');
  if(p->listexpression_) {_i_ = 0; p->listexpression_->accept(this);}
  render(']');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPossTimeExpression(PossTimeExpression *p) {} //abstract class

void PrintAbsyn::visitNoTE(NoTE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);


  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitAtPre(AtPre *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('@');
  render("pre");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPossPropCallParam(PossPropCallParam *p) {} //abstract class

void PrintAbsyn::visitNoPCP(NoPCP *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);


  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPCPs(PCPs *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->propertycallparameters_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDeclarator(Declarator *p) {} //abstract class

void PrintAbsyn::visitDecl(Decl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->declaratorvarlist_->accept(this);
  render('|');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDeclAcc(DeclAcc *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->declaratorvarlist_->accept(this);
  render(';');
  visitIdent(p->ident_);
  render(':');
  _i_ = 0; p->typespecifier_->accept(this);
  render('=');
  _i_ = 0; p->expression_->accept(this);
  render('|');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDeclaratorVarList(DeclaratorVarList *p) {} //abstract class

void PrintAbsyn::visitDVL(DVL *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listident_) {_i_ = 0; p->listident_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDVLType(DVLType *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listident_) {_i_ = 0; p->listident_->accept(this);}
  render(':');
  _i_ = 0; p->simpletypespecifier_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListIdent(ListIdent *listident)
{
  for (ListIdent::const_iterator i = listident->begin() ; i != listident->end() ; ++i)
  {
    visitIdent(*i) ;
    if (i != listident->end() - 1) render(',');
  }
}void PrintAbsyn::visitPropertyCallParameters(PropertyCallParameters *p) {} //abstract class

void PrintAbsyn::visitPCPDecl(PCPDecl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  /* Internal Category */

  render('(');
  _i_ = 0; p->declarator_->accept(this);
  if(p->listexpression_) {_i_ = 0; p->listexpression_->accept(this);}
  render(')');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPCP(PCP *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  /* Internal Category */

  render('(');
  if(p->listexpression_) {_i_ = 0; p->listexpression_->accept(this);}
  render(')');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPCPNoDeclNoParam(PCPNoDeclNoParam *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('(');
  render(')');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPCPConcrete(PCPConcrete *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('(');
  _i_ = 0; p->expression_->accept(this);
  if(p->listpcphelper_) {_i_ = 0; p->listpcphelper_->accept(this);}
  render(')');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListExpression(ListExpression *listexpression)
{
  for (ListExpression::const_iterator i = listexpression->begin() ; i != listexpression->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexpression->end() - 1) render(',');
  }
}void PrintAbsyn::visitPCPHelper(PCPHelper *p) {} //abstract class

void PrintAbsyn::visitPCPComma(PCPComma *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render(',');
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPCPColon(PCPColon *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render(':');
  _i_ = 0; p->simpletypespecifier_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPCPIterate(PCPIterate *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render(';');
  visitIdent(p->ident_);
  render(':');
  _i_ = 0; p->typespecifier_->accept(this);
  render('=');
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPCPBar(PCPBar *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('|');
  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListPCPHelper(ListPCPHelper *listpcphelper)
{
  for (ListPCPHelper::const_iterator i = listpcphelper->begin() ; i != listpcphelper->end() ; ++i)
  {
    (*i)->accept(this);
    render("");
  }
}void PrintAbsyn::visitOCLLiteral(OCLLiteral *p) {} //abstract class

void PrintAbsyn::visitLitStr(LitStr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitString(p->string_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLitNum(LitNum *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->oclnumber_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLitBoolTrue(LitBoolTrue *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("true");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLitBoolFalse(LitBoolFalse *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("false");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSimpleTypeSpecifier(SimpleTypeSpecifier *p) {} //abstract class

void PrintAbsyn::visitSTSpec(STSpec *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->pathname_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLiteralCollection(LiteralCollection *p) {} //abstract class

void PrintAbsyn::visitLCollection(LCollection *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->collectionkind_->accept(this);
  render('{');
  if(p->listcollectionitem_) {_i_ = 0; p->listcollectionitem_->accept(this);}
  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLCollectionEmpty(LCollectionEmpty *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->collectionkind_->accept(this);
  render('{');
  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListCollectionItem(ListCollectionItem *listcollectionitem)
{
  for (ListCollectionItem::const_iterator i = listcollectionitem->begin() ; i != listcollectionitem->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listcollectionitem->end() - 1) render(',');
  }
}void PrintAbsyn::visitCollectionItem(CollectionItem *p) {} //abstract class

void PrintAbsyn::visitCI(CI *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->expression_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCIRange(CIRange *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->expression_1->accept(this);
  render("..");
  _i_ = 0; p->expression_2->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitOCLNumber(OCLNumber *p) {} //abstract class

void PrintAbsyn::visitNumInt(NumInt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitInteger(p->integer_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitNumDouble(NumDouble *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitDouble(p->double_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLogicalOperator(LogicalOperator *p) {} //abstract class

void PrintAbsyn::visitLAnd(LAnd *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("and");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLOr(LOr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("or");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitLXor(LXor *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("xor");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCollectionKind(CollectionKind *p) {} //abstract class

void PrintAbsyn::visitSet(Set *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("Set");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitBag(Bag *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("Bag");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSequence(Sequence *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("Sequence");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitCollection(Collection *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("Collection");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEqualityOperator(EqualityOperator *p) {} //abstract class

void PrintAbsyn::visitEEq(EEq *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('=');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitENEq(ENEq *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("<>");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRelationalOperator(RelationalOperator *p) {} //abstract class

void PrintAbsyn::visitRGT(RGT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('>');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRGTE(RGTE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render(">=");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRLT(RLT *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('<');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRLTE(RLTE *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("<=");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitAddOperator(AddOperator *p) {} //abstract class

void PrintAbsyn::visitAAdd(AAdd *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('+');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitASub(ASub *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('-');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitMultiplyOperator(MultiplyOperator *p) {} //abstract class

void PrintAbsyn::visitMMult(MMult *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('*');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitMDiv(MDiv *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('/');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitUnaryOperator(UnaryOperator *p) {} //abstract class

void PrintAbsyn::visitUMin(UMin *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('-');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitUNot(UNot *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("not");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPostfixOperator(PostfixOperator *p) {} //abstract class

void PrintAbsyn::visitPDot(PDot *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('.');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPArrow(PArrow *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("->");

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}

void PrintAbsyn::visitDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppend(tmp);
}

void PrintAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}

void PrintAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}

void PrintAbsyn::visitIdent(String s)
{
  render(s);
}

ShowAbsyn::ShowAbsyn(void)
{
  buf_ = 0;
  bufReset();
}

ShowAbsyn::~ShowAbsyn(void)
{
}

char *ShowAbsyn::show(Visitable *v)
{
  bufReset();
  v->accept(this);
  return buf_;
}

void ShowAbsyn::visitOCLfile(OCLfile *p) {} //abstract class

void ShowAbsyn::visitOCLf(OCLf *p)
{
  bufAppend('(');
  bufAppend("OCLf");
  bufAppend(' ');
  bufAppend('[');
  if (p->listoclpackage_)  p->listoclpackage_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListOCLPackage(ListOCLPackage *listoclpackage)
{
  for (ListOCLPackage::const_iterator i = listoclpackage->begin() ; i != listoclpackage->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listoclpackage->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitOCLPackage(OCLPackage *p) {} //abstract class

void ShowAbsyn::visitPack(Pack *p)
{
  bufAppend('(');
  bufAppend("Pack");
  bufAppend(' ');
  bufAppend('[');
  if (p->packagename_)  p->packagename_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->oclexpressions_)  p->oclexpressions_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPackageName(PackageName *p) {} //abstract class

void ShowAbsyn::visitPackName(PackName *p)
{
  bufAppend('(');
  bufAppend("PackName");
  bufAppend(' ');
  bufAppend('[');
  if (p->pathname_)  p->pathname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitOCLExpressions(OCLExpressions *p) {} //abstract class

void ShowAbsyn::visitConstraints(Constraints *p)
{
  bufAppend('(');
  bufAppend("Constraints");
  bufAppend(' ');
  bufAppend('[');
  if (p->listconstrnt_)  p->listconstrnt_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListConstrnt(ListConstrnt *listconstrnt)
{
  for (ListConstrnt::const_iterator i = listconstrnt->begin() ; i != listconstrnt->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listconstrnt->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitConstrnt(Constrnt *p) {} //abstract class

void ShowAbsyn::visitConstr(Constr *p)
{
  bufAppend('(');
  bufAppend("Constr");
  bufAppend(' ');
  bufAppend('[');
  if (p->contextdeclaration_)  p->contextdeclaration_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listconstrbody_)  p->listconstrbody_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListConstrBody(ListConstrBody *listconstrbody)
{
  for (ListConstrBody::const_iterator i = listconstrbody->begin() ; i != listconstrbody->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listconstrbody->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitConstrBody(ConstrBody *p) {} //abstract class

void ShowAbsyn::visitCBDefNamed(CBDefNamed *p)
{
  bufAppend('(');
  bufAppend("CBDefNamed");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->listletexpression_)  p->listletexpression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitCBDef(CBDef *p)
{
  bufAppend('(');
  bufAppend("CBDef");
  bufAppend(' ');
  bufAppend('[');
  if (p->listletexpression_)  p->listletexpression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitCBNamed(CBNamed *p)
{
  bufAppend('(');
  bufAppend("CBNamed");
  bufAppend(' ');
  bufAppend('[');
  if (p->stereotype_)  p->stereotype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->oclexpression_)  p->oclexpression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitCB(CB *p)
{
  bufAppend('(');
  bufAppend("CB");
  bufAppend(' ');
  bufAppend('[');
  if (p->stereotype_)  p->stereotype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->oclexpression_)  p->oclexpression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitContextDeclaration(ContextDeclaration *p) {} //abstract class

void ShowAbsyn::visitCDOper(CDOper *p)
{
  bufAppend('(');
  bufAppend("CDOper");
  bufAppend(' ');
  bufAppend('[');
  if (p->operationcontext_)  p->operationcontext_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitCDClassif(CDClassif *p)
{
  bufAppend('(');
  bufAppend("CDClassif");
  bufAppend(' ');
  bufAppend('[');
  if (p->classifiercontext_)  p->classifiercontext_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitClassifierContext(ClassifierContext *p) {} //abstract class

void ShowAbsyn::visitCCType(CCType *p)
{
  bufAppend('(');
  bufAppend("CCType");
  bufAppend(' ');
  visitIdent(p->ident_1);
  bufAppend(' ');
  visitIdent(p->ident_2);
  bufAppend(')');
}
void ShowAbsyn::visitCC(CC *p)
{
  bufAppend('(');
  bufAppend("CC");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitOperationContext(OperationContext *p) {} //abstract class

void ShowAbsyn::visitOpC(OpC *p)
{
  bufAppend('(');
  bufAppend("OpC");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->operationname_)  p->operationname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listformalparameter_)  p->listformalparameter_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitOpCRT(OpCRT *p)
{
  bufAppend('(');
  bufAppend("OpCRT");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->operationname_)  p->operationname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listformalparameter_)  p->listformalparameter_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->returntype_)  p->returntype_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStereotype(Stereotype *p) {} //abstract class

void ShowAbsyn::visitPre(Pre *p)
{
  bufAppend("Pre");
}
void ShowAbsyn::visitPost(Post *p)
{
  bufAppend("Post");
}
void ShowAbsyn::visitInv(Inv *p)
{
  bufAppend("Inv");
}
void ShowAbsyn::visitOperationName(OperationName *p) {} //abstract class

void ShowAbsyn::visitOpName(OpName *p)
{
  bufAppend('(');
  bufAppend("OpName");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitEq(Eq *p)
{
  bufAppend("Eq");
}
void ShowAbsyn::visitAdd(Add *p)
{
  bufAppend("Add");
}
void ShowAbsyn::visitSub(Sub *p)
{
  bufAppend("Sub");
}
void ShowAbsyn::visitLST(LST *p)
{
  bufAppend("LST");
}
void ShowAbsyn::visitLSTE(LSTE *p)
{
  bufAppend("LSTE");
}
void ShowAbsyn::visitGRT(GRT *p)
{
  bufAppend("GRT");
}
void ShowAbsyn::visitGRTE(GRTE *p)
{
  bufAppend("GRTE");
}
void ShowAbsyn::visitDiv(Div *p)
{
  bufAppend("Div");
}
void ShowAbsyn::visitMult(Mult *p)
{
  bufAppend("Mult");
}
void ShowAbsyn::visitNEq(NEq *p)
{
  bufAppend("NEq");
}
void ShowAbsyn::visitImpl(Impl *p)
{
  bufAppend("Impl");
}
void ShowAbsyn::visitNot(Not *p)
{
  bufAppend("Not");
}
void ShowAbsyn::visitOr(Or *p)
{
  bufAppend("Or");
}
void ShowAbsyn::visitXor(Xor *p)
{
  bufAppend("Xor");
}
void ShowAbsyn::visitAnd(And *p)
{
  bufAppend("And");
}
void ShowAbsyn::visitListFormalParameter(ListFormalParameter *listformalparameter)
{
  for (ListFormalParameter::const_iterator i = listformalparameter->begin() ; i != listformalparameter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listformalparameter->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitFormalParameter(FormalParameter *p) {} //abstract class

void ShowAbsyn::visitFP(FP *p)
{
  bufAppend('(');
  bufAppend("FP");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->typespecifier_)  p->typespecifier_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitTypeSpecifier(TypeSpecifier *p) {} //abstract class

void ShowAbsyn::visitTSsimple(TSsimple *p)
{
  bufAppend('(');
  bufAppend("TSsimple");
  bufAppend(' ');
  bufAppend('[');
  if (p->simpletypespecifier_)  p->simpletypespecifier_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitTScoll(TScoll *p)
{
  bufAppend('(');
  bufAppend("TScoll");
  bufAppend(' ');
  bufAppend('[');
  if (p->collectiontype_)  p->collectiontype_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitCollectionType(CollectionType *p) {} //abstract class

void ShowAbsyn::visitCT(CT *p)
{
  bufAppend('(');
  bufAppend("CT");
  bufAppend(' ');
  bufAppend('[');
  if (p->collectionkind_)  p->collectionkind_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->simpletypespecifier_)  p->simpletypespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitReturnType(ReturnType *p) {} //abstract class

void ShowAbsyn::visitRT(RT *p)
{
  bufAppend('(');
  bufAppend("RT");
  bufAppend(' ');
  bufAppend('[');
  if (p->typespecifier_)  p->typespecifier_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitOCLExpression(OCLExpression *p) {} //abstract class

void ShowAbsyn::visitOCLExp(OCLExp *p)
{
  bufAppend('(');
  bufAppend("OCLExp");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitOCLExpLet(OCLExpLet *p)
{
  bufAppend('(');
  bufAppend("OCLExpLet");
  bufAppend(' ');
  bufAppend('[');
  if (p->listletexpression_)  p->listletexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitLetExpression(LetExpression *p) {} //abstract class

void ShowAbsyn::visitLENoParam(LENoParam *p)
{
  bufAppend('(');
  bufAppend("LENoParam");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitLENoParamType(LENoParamType *p)
{
  bufAppend('(');
  bufAppend("LENoParamType");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->typespecifier_)  p->typespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitLE(LE *p)
{
  bufAppend('(');
  bufAppend("LE");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->listformalparameter_)  p->listformalparameter_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitLEType(LEType *p)
{
  bufAppend('(');
  bufAppend("LEType");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->listformalparameter_)  p->listformalparameter_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->typespecifier_)  p->typespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListLetExpression(ListLetExpression *listletexpression)
{
  for (ListLetExpression::const_iterator i = listletexpression->begin() ; i != listletexpression->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listletexpression->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitIfExpression(IfExpression *p) {} //abstract class

void ShowAbsyn::visitIfExp(IfExp *p)
{
  bufAppend('(');
  bufAppend("IfExp");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(' ');
  p->expression_3->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExpression(Expression *p) {} //abstract class

void ShowAbsyn::visitEOpImpl(EOpImpl *p)
{
  bufAppend('(');
  bufAppend("EOpImpl");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEOpLog(EOpLog *p)
{
  bufAppend('(');
  bufAppend("EOpLog");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->logicaloperator_)  p->logicaloperator_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEOpEq(EOpEq *p)
{
  bufAppend('(');
  bufAppend("EOpEq");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->equalityoperator_)  p->equalityoperator_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEOpRel(EOpRel *p)
{
  bufAppend('(');
  bufAppend("EOpRel");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->relationaloperator_)  p->relationaloperator_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEOpAdd(EOpAdd *p)
{
  bufAppend('(');
  bufAppend("EOpAdd");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->addoperator_)  p->addoperator_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEOpMul(EOpMul *p)
{
  bufAppend('(');
  bufAppend("EOpMul");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->multiplyoperator_)  p->multiplyoperator_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEOpUn(EOpUn *p)
{
  bufAppend('(');
  bufAppend("EOpUn");
  bufAppend(' ');
  bufAppend('[');
  if (p->unaryoperator_)  p->unaryoperator_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEExplPropCall(EExplPropCall *p)
{
  bufAppend('(');
  bufAppend("EExplPropCall");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->postfixoperator_)  p->postfixoperator_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->propertycall_)  p->propertycall_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEMessage(EMessage *p)
{
  bufAppend('(');
  bufAppend("EMessage");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->pathname_)  p->pathname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listmessagearg_)  p->listmessagearg_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEImplPropCall(EImplPropCall *p)
{
  bufAppend('(');
  bufAppend("EImplPropCall");
  bufAppend(' ');
  bufAppend('[');
  if (p->propertycall_)  p->propertycall_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitELitColl(ELitColl *p)
{
  bufAppend('(');
  bufAppend("ELitColl");
  bufAppend(' ');
  bufAppend('[');
  if (p->literalcollection_)  p->literalcollection_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitELit(ELit *p)
{
  bufAppend('(');
  bufAppend("ELit");
  bufAppend(' ');
  bufAppend('[');
  if (p->oclliteral_)  p->oclliteral_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEIfExp(EIfExp *p)
{
  bufAppend('(');
  bufAppend("EIfExp");
  bufAppend(' ');
  bufAppend('[');
  if (p->ifexpression_)  p->ifexpression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitENull(ENull *p)
{
  bufAppend("ENull");
}
void ShowAbsyn::visitMessageArg(MessageArg *p) {} //abstract class

void ShowAbsyn::visitMAExpr(MAExpr *p)
{
  bufAppend('(');
  bufAppend("MAExpr");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitMAUnspec(MAUnspec *p)
{
  bufAppend("MAUnspec");
}
void ShowAbsyn::visitMAUnspecTyped(MAUnspecTyped *p)
{
  bufAppend('(');
  bufAppend("MAUnspecTyped");
  bufAppend(' ');
  bufAppend('[');
  if (p->typespecifier_)  p->typespecifier_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListMessageArg(ListMessageArg *listmessagearg)
{
  for (ListMessageArg::const_iterator i = listmessagearg->begin() ; i != listmessagearg->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmessagearg->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitPropertyCall(PropertyCall *p) {} //abstract class

void ShowAbsyn::visitPCall(PCall *p)
{
  bufAppend('(');
  bufAppend("PCall");
  bufAppend(' ');
  bufAppend('[');
  if (p->pathname_)  p->pathname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->posstimeexpression_)  p->posstimeexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->possqualifiers_)  p->possqualifiers_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->posspropcallparam_)  p->posspropcallparam_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitPathName(PathName *p) {} //abstract class

void ShowAbsyn::visitPathN(PathN *p)
{
  bufAppend('(');
  bufAppend("PathN");
  bufAppend(' ');
  bufAppend('[');
  if (p->listpname_)  p->listpname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitPName(PName *p) {} //abstract class

void ShowAbsyn::visitPN(PN *p)
{
  bufAppend('(');
  bufAppend("PN");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitListPName(ListPName *listpname)
{
  for (ListPName::const_iterator i = listpname->begin() ; i != listpname->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listpname->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitPossQualifiers(PossQualifiers *p) {} //abstract class

void ShowAbsyn::visitNoQual(NoQual *p)
{
  bufAppend("NoQual");
}
void ShowAbsyn::visitQual(Qual *p)
{
  bufAppend('(');
  bufAppend("Qual");
  bufAppend(' ');
  bufAppend('[');
  if (p->qualifiers_)  p->qualifiers_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitQualifiers(Qualifiers *p) {} //abstract class

void ShowAbsyn::visitQuals(Quals *p)
{
  bufAppend('(');
  bufAppend("Quals");
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpression_)  p->listexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPossTimeExpression(PossTimeExpression *p) {} //abstract class

void ShowAbsyn::visitNoTE(NoTE *p)
{
  bufAppend("NoTE");
}
void ShowAbsyn::visitAtPre(AtPre *p)
{
  bufAppend("AtPre");
}
void ShowAbsyn::visitPossPropCallParam(PossPropCallParam *p) {} //abstract class

void ShowAbsyn::visitNoPCP(NoPCP *p)
{
  bufAppend("NoPCP");
}
void ShowAbsyn::visitPCPs(PCPs *p)
{
  bufAppend('(');
  bufAppend("PCPs");
  bufAppend(' ');
  bufAppend('[');
  if (p->propertycallparameters_)  p->propertycallparameters_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitDeclarator(Declarator *p) {} //abstract class

void ShowAbsyn::visitDecl(Decl *p)
{
  bufAppend('(');
  bufAppend("Decl");
  bufAppend(' ');
  bufAppend('[');
  if (p->declaratorvarlist_)  p->declaratorvarlist_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDeclAcc(DeclAcc *p)
{
  bufAppend('(');
  bufAppend("DeclAcc");
  bufAppend(' ');
  bufAppend('[');
  if (p->declaratorvarlist_)  p->declaratorvarlist_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->typespecifier_)  p->typespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitDeclaratorVarList(DeclaratorVarList *p) {} //abstract class

void ShowAbsyn::visitDVL(DVL *p)
{
  bufAppend('(');
  bufAppend("DVL");
  bufAppend(' ');
  bufAppend('[');
  if (p->listident_)  p->listident_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitDVLType(DVLType *p)
{
  bufAppend('(');
  bufAppend("DVLType");
  bufAppend(' ');
  bufAppend('[');
  if (p->listident_)  p->listident_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->simpletypespecifier_)  p->simpletypespecifier_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListIdent(ListIdent *listident)
{
  for (ListIdent::const_iterator i = listident->begin() ; i != listident->end() ; ++i)
  {
    visitIdent(*i) ;
    if (i != listident->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitPropertyCallParameters(PropertyCallParameters *p) {} //abstract class

void ShowAbsyn::visitPCPDecl(PCPDecl *p)
{
  bufAppend('(');
  bufAppend("PCPDecl");
  bufAppend(' ');
/* Internal Category */
  bufAppend(' ');
  bufAppend('[');
  if (p->declarator_)  p->declarator_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpression_)  p->listexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPCP(PCP *p)
{
  bufAppend('(');
  bufAppend("PCP");
  bufAppend(' ');
/* Internal Category */
  bufAppend(' ');
  bufAppend('[');
  if (p->listexpression_)  p->listexpression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPCPNoDeclNoParam(PCPNoDeclNoParam *p)
{
  bufAppend("PCPNoDeclNoParam");
}
void ShowAbsyn::visitPCPConcrete(PCPConcrete *p)
{
  bufAppend('(');
  bufAppend("PCPConcrete");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listpcphelper_)  p->listpcphelper_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitListExpression(ListExpression *listexpression)
{
  for (ListExpression::const_iterator i = listexpression->begin() ; i != listexpression->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexpression->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitPCPHelper(PCPHelper *p) {} //abstract class

void ShowAbsyn::visitPCPComma(PCPComma *p)
{
  bufAppend('(');
  bufAppend("PCPComma");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitPCPColon(PCPColon *p)
{
  bufAppend('(');
  bufAppend("PCPColon");
  bufAppend(' ');
  bufAppend('[');
  if (p->simpletypespecifier_)  p->simpletypespecifier_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitPCPIterate(PCPIterate *p)
{
  bufAppend('(');
  bufAppend("PCPIterate");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(' ');
  bufAppend('[');
  if (p->typespecifier_)  p->typespecifier_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitPCPBar(PCPBar *p)
{
  bufAppend('(');
  bufAppend("PCPBar");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListPCPHelper(ListPCPHelper *listpcphelper)
{
  for (ListPCPHelper::const_iterator i = listpcphelper->begin() ; i != listpcphelper->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listpcphelper->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitOCLLiteral(OCLLiteral *p) {} //abstract class

void ShowAbsyn::visitLitStr(LitStr *p)
{
  bufAppend('(');
  bufAppend("LitStr");
  bufAppend(' ');
  visitString(p->string_);
  bufAppend(')');
}
void ShowAbsyn::visitLitNum(LitNum *p)
{
  bufAppend('(');
  bufAppend("LitNum");
  bufAppend(' ');
  bufAppend('[');
  if (p->oclnumber_)  p->oclnumber_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitLitBoolTrue(LitBoolTrue *p)
{
  bufAppend("LitBoolTrue");
}
void ShowAbsyn::visitLitBoolFalse(LitBoolFalse *p)
{
  bufAppend("LitBoolFalse");
}
void ShowAbsyn::visitSimpleTypeSpecifier(SimpleTypeSpecifier *p) {} //abstract class

void ShowAbsyn::visitSTSpec(STSpec *p)
{
  bufAppend('(');
  bufAppend("STSpec");
  bufAppend(' ');
  bufAppend('[');
  if (p->pathname_)  p->pathname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitLiteralCollection(LiteralCollection *p) {} //abstract class

void ShowAbsyn::visitLCollection(LCollection *p)
{
  bufAppend('(');
  bufAppend("LCollection");
  bufAppend(' ');
  bufAppend('[');
  if (p->collectionkind_)  p->collectionkind_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listcollectionitem_)  p->listcollectionitem_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitLCollectionEmpty(LCollectionEmpty *p)
{
  bufAppend('(');
  bufAppend("LCollectionEmpty");
  bufAppend(' ');
  bufAppend('[');
  if (p->collectionkind_)  p->collectionkind_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitListCollectionItem(ListCollectionItem *listcollectionitem)
{
  for (ListCollectionItem::const_iterator i = listcollectionitem->begin() ; i != listcollectionitem->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listcollectionitem->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitCollectionItem(CollectionItem *p) {} //abstract class

void ShowAbsyn::visitCI(CI *p)
{
  bufAppend('(');
  bufAppend("CI");
  bufAppend(' ');
  bufAppend('[');
  if (p->expression_)  p->expression_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitCIRange(CIRange *p)
{
  bufAppend('(');
  bufAppend("CIRange");
  bufAppend(' ');
  p->expression_1->accept(this);
  bufAppend(' ');
  p->expression_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitOCLNumber(OCLNumber *p) {} //abstract class

void ShowAbsyn::visitNumInt(NumInt *p)
{
  bufAppend('(');
  bufAppend("NumInt");
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(')');
}
void ShowAbsyn::visitNumDouble(NumDouble *p)
{
  bufAppend('(');
  bufAppend("NumDouble");
  bufAppend(' ');
  visitDouble(p->double_);
  bufAppend(')');
}
void ShowAbsyn::visitLogicalOperator(LogicalOperator *p) {} //abstract class

void ShowAbsyn::visitLAnd(LAnd *p)
{
  bufAppend("LAnd");
}
void ShowAbsyn::visitLOr(LOr *p)
{
  bufAppend("LOr");
}
void ShowAbsyn::visitLXor(LXor *p)
{
  bufAppend("LXor");
}
void ShowAbsyn::visitCollectionKind(CollectionKind *p) {} //abstract class

void ShowAbsyn::visitSet(Set *p)
{
  bufAppend("Set");
}
void ShowAbsyn::visitBag(Bag *p)
{
  bufAppend("Bag");
}
void ShowAbsyn::visitSequence(Sequence *p)
{
  bufAppend("Sequence");
}
void ShowAbsyn::visitCollection(Collection *p)
{
  bufAppend("Collection");
}
void ShowAbsyn::visitEqualityOperator(EqualityOperator *p) {} //abstract class

void ShowAbsyn::visitEEq(EEq *p)
{
  bufAppend("EEq");
}
void ShowAbsyn::visitENEq(ENEq *p)
{
  bufAppend("ENEq");
}
void ShowAbsyn::visitRelationalOperator(RelationalOperator *p) {} //abstract class

void ShowAbsyn::visitRGT(RGT *p)
{
  bufAppend("RGT");
}
void ShowAbsyn::visitRGTE(RGTE *p)
{
  bufAppend("RGTE");
}
void ShowAbsyn::visitRLT(RLT *p)
{
  bufAppend("RLT");
}
void ShowAbsyn::visitRLTE(RLTE *p)
{
  bufAppend("RLTE");
}
void ShowAbsyn::visitAddOperator(AddOperator *p) {} //abstract class

void ShowAbsyn::visitAAdd(AAdd *p)
{
  bufAppend("AAdd");
}
void ShowAbsyn::visitASub(ASub *p)
{
  bufAppend("ASub");
}
void ShowAbsyn::visitMultiplyOperator(MultiplyOperator *p) {} //abstract class

void ShowAbsyn::visitMMult(MMult *p)
{
  bufAppend("MMult");
}
void ShowAbsyn::visitMDiv(MDiv *p)
{
  bufAppend("MDiv");
}
void ShowAbsyn::visitUnaryOperator(UnaryOperator *p) {} //abstract class

void ShowAbsyn::visitUMin(UMin *p)
{
  bufAppend("UMin");
}
void ShowAbsyn::visitUNot(UNot *p)
{
  bufAppend("UNot");
}
void ShowAbsyn::visitPostfixOperator(PostfixOperator *p) {} //abstract class

void ShowAbsyn::visitPDot(PDot *p)
{
  bufAppend("PDot");
}
void ShowAbsyn::visitPArrow(PArrow *p)
{
  bufAppend("PArrow");
}
void ShowAbsyn::visitInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}
void ShowAbsyn::visitDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppend(tmp);
}
void ShowAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}
void ShowAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}
void ShowAbsyn::visitIdent(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}


