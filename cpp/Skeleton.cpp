/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.h"
#include <fstream>
#include <iostream>

using json = nlohmann::json;
using namespace std;

const static bool DEBUG_PRINT = false;

void Skeleton::process(Visitable *v) { v->accept(this); }

void Skeleton::visitOCLfile(OCLfile *t) {}               // abstract class
void Skeleton::visitOCLPackage(OCLPackage *t) {}         // abstract class
void Skeleton::visitPackageName(PackageName *t) {}       // abstract class
void Skeleton::visitOCLExpressions(OCLExpressions *t) {} // abstract class
void Skeleton::visitConstrnt(Constrnt *t) {}             // abstract class
void Skeleton::visitConstrBody(ConstrBody *t) {}         // abstract class
void Skeleton::visitContextDeclaration(ContextDeclaration *t) {
} // abstract class
void Skeleton::visitClassifierContext(ClassifierContext *t) {} // abstract class
void Skeleton::visitOperationContext(OperationContext *t) {}   // abstract class
void Skeleton::visitStereotype(Stereotype *t) {}               // abstract class
void Skeleton::visitOperationName(OperationName *t) {}         // abstract class
void Skeleton::visitFormalParameter(FormalParameter *t) {}     // abstract class
void Skeleton::visitTypeSpecifier(TypeSpecifier *t) {}         // abstract class
void Skeleton::visitCollectionType(CollectionType *t) {}       // abstract class
void Skeleton::visitReturnType(ReturnType *t) {}               // abstract class
void Skeleton::visitOCLExpression(OCLExpression *t) {}         // abstract class
void Skeleton::visitLetExpression(LetExpression *t) {}         // abstract class
void Skeleton::visitIfExpression(IfExpression *t) {}           // abstract class
void Skeleton::visitExpression(Expression *t) {}               // abstract class
void Skeleton::visitMessageArg(MessageArg *t) {}               // abstract class
void Skeleton::visitPropertyCall(PropertyCall *t) {}           // abstract class
void Skeleton::visitPathName(PathName *t) {}                   // abstract class
void Skeleton::visitPName(PName *t) {}                         // abstract class
void Skeleton::visitPossQualifiers(PossQualifiers *t) {}       // abstract class
void Skeleton::visitQualifiers(Qualifiers *t) {}               // abstract class
void Skeleton::visitPossTimeExpression(PossTimeExpression *t) {
} // abstract class
void Skeleton::visitPossPropCallParam(PossPropCallParam *t) {} // abstract class
void Skeleton::visitDeclarator(Declarator *t) {}               // abstract class
void Skeleton::visitDeclaratorVarList(DeclaratorVarList *t) {} // abstract class
void Skeleton::visitPropertyCallParameters(PropertyCallParameters *t) {
} // abstract class
void Skeleton::visitPCPHelper(PCPHelper *t) {}   // abstract class
void Skeleton::visitOCLLiteral(OCLLiteral *t) {} // abstract class
void Skeleton::visitSimpleTypeSpecifier(SimpleTypeSpecifier *t) {
} // abstract class
void Skeleton::visitLiteralCollection(LiteralCollection *t) {} // abstract class
void Skeleton::visitCollectionItem(CollectionItem *t) {}       // abstract class
void Skeleton::visitOCLNumber(OCLNumber *t) {}                 // abstract class
void Skeleton::visitLogicalOperator(LogicalOperator *t) {}     // abstract class
void Skeleton::visitCollectionKind(CollectionKind *t) {}       // abstract class
void Skeleton::visitEqualityOperator(EqualityOperator *t) {}   // abstract class
void Skeleton::visitRelationalOperator(RelationalOperator *t) {
} // abstract class
void Skeleton::visitAddOperator(AddOperator *t) {}           // abstract class
void Skeleton::visitMultiplyOperator(MultiplyOperator *t) {} // abstract class
void Skeleton::visitUnaryOperator(UnaryOperator *t) {}       // abstract class
void Skeleton::visitPostfixOperator(PostfixOperator *t) {}   // abstract class

  struct Object {
	  std::string classname;
	  std::string operation = "";
	  std::string type;
	  std::string before;
	  std::string after;
	  bool atPre = false;
  };
  
  int number;
  Object object[99];
  
  std::string xxx = ""; // Expression
  std::string op = ""; // Operation
  std::string fparameter = "";
  bool hasParameter = false;
  bool hasExcludes = false;
  bool isOperation = false;
  json j[99];

void Skeleton::visitOCLf(OCLf *oc_lf) {
  /* Code For OCLf Goes Here */
  number = 0;
  oc_lf->listoclpackage_->accept(this);

  // write prettified JSON to another file
  std::ofstream o("output.json");
  for (int i = 0; i < number; i++) {

    /*json obj;
    obj["ContextName"] = j[i]["class"];
    obj["FunctionName"] = j[i]["operation"];
    obj["BeforeCode"] = j[i]["before"];
    obj["AfterCode"] = j[i]["after"];*/

    std::cout << std::setw(4) << j[i] << std::endl;
    o << std::setw(4) << j[i] << std::endl;
  }
}

void Skeleton::visitPack(Pack *pack) {
  /* Code For Pack Goes Here */
  pack->packagename_->accept(this);
  pack->oclexpressions_->accept(this);
}

void Skeleton::visitPackName(PackName *pack_name) {
  /* Code For PackName Goes Here */
  pack_name->pathname_->accept(this);
}

void Skeleton::visitConstraints(Constraints *constraints) {
  /* Code For Constraints Goes Here */

  constraints->listconstrnt_->accept(this);
}

void Skeleton::visitConstr(Constr *constr) {
  /* Code For Constr Goes Here */
  if (DEBUG_PRINT) {
    std::cerr << "\n" << number << "." << std::endl;
    std::cerr << __func__ << std::endl;
  }
  
  xxx = "";
  constr->contextdeclaration_->accept(this);
  constr->listconstrbody_->accept(this);
  
  j[number]["operation"] = op;
  if (hasPre) {
    object[number].before = xxx;
    j[number]["before"] = xxx;
  } else if (hasPost) {
    object[number].after = xxx;
    j[number]["after"] = xxx;
  } else {
    object[number].before = xxx;
    object[number].after = xxx;

    j[number]["before"] = xxx;
    j[number]["after"] = xxx;
  }
  
  number++;
  hasParameter = false;
  hasExcludes = false;
  hasPre = false;
  hasPost = false;
  isInv = false;
}

void Skeleton::visitCBDefNamed(CBDefNamed *cb_def_named) {
  /* Code For CBDefNamed Goes Here */

  visitIdent(cb_def_named->ident_);
  if (DEBUG_PRINT)
	std::cerr << __func__ << ": " << cb_def_named->ident_ << std::endl;
  cb_def_named->listletexpression_->accept(this);
}

void Skeleton::visitCBDef(CBDef *cb_def) {
  /* Code For CBDef Goes Here */

  cb_def->listletexpression_->accept(this);
}

void Skeleton::visitCBNamed(CBNamed *cb_named) {
  /* Code For CBNamed Goes Here */

  cb_named->stereotype_->accept(this);
  visitIdent(cb_named->ident_);
  if (DEBUG_PRINT)
	std::cerr << __func__ << ": " << cb_named->ident_ << std::endl;
  j[number]["name"] = cb_named->ident_;
  cb_named->oclexpression_->accept(this);
}

void Skeleton::visitCB(CB *cb) {
  /* Code For CB Goes Here */

  cb->stereotype_->accept(this);
  cb->oclexpression_->accept(this);
}

void Skeleton::visitCDOper(CDOper *cd_oper) {
  /* Code For CDOper Goes Here */

  cd_oper->operationcontext_->accept(this);
}

void Skeleton::visitCDClassif(CDClassif *cd_classif) {
  /* Code For CDClassif Goes Here */

  cd_classif->classifiercontext_->accept(this);
}

void Skeleton::visitCCType(CCType *cc_type) {
  /* Code For CCType Goes Here */

  visitIdent(cc_type->ident_1);
  visitIdent(cc_type->ident_2);
}

void Skeleton::visitCC(CC *cc) {
  /* Code For CC Goes Here */

  visitIdent(cc->ident_);
  
  object[number].classname = cc->ident_;
  j[number]["class"] = cc->ident_;

  if (DEBUG_PRINT)
    std::cerr << __func__ << ": " << cc->ident_ << std::endl;
}

void Skeleton::visitOpC(OpC *op_c) {
  /* Code For OpC Goes Here */

  visitIdent(op_c->ident_);
  
  object[number].classname = op_c->ident_;
  j[number]["class"] = op_c->ident_;
  
  if (DEBUG_PRINT)
	std::cerr << __func__ << ": " << op_c->ident_ << std::endl;

  op_c->operationname_->accept(this);
  
  op += "(";
  isOperation = true;
  op_c->listformalparameter_->accept(this);
  if (hasParameter) {
	op.pop_back(); op.pop_back();
  }
  isOperation = false;
  op += ")";
}

void Skeleton::visitOpCRT(OpCRT *op_crt) {
  /* Code For OpCRT Goes Here */

  visitIdent(op_crt->ident_);
  if (DEBUG_PRINT)
    std::cerr << __func__ << ": " << op_crt->ident_ << std::endl;
  op_crt->operationname_->accept(this);
  op_crt->listformalparameter_->accept(this);
  op_crt->returntype_->accept(this);
}

void Skeleton::visitPre(Pre *pre) { 
	hasPre = true;
	if (DEBUG_PRINT)
		std::cerr << __func__ << ": " << hasPre << std::endl;
	
	object[number].type = "pre";
	object[number].after = "true";
	
	j[number]["type"] = "pre";
	j[number]["after"] = true;
}

void Skeleton::visitPost(Post *post) {
	hasPost = true;
	if (DEBUG_PRINT)
		std::cerr << __func__ << ": " << hasPost << std::endl;
	
	object[number].type = "post";
	object[number].before = "true";
	
	j[number]["type"] = "post";
	j[number]["before"] = true;
}

void Skeleton::visitInv(Inv *inv) {
	isInv = true;
	if (DEBUG_PRINT)
		std::cerr << __func__ << ": " << isInv << std::endl;
	
	object[number].operation = "None";
	// j[number]["operation"] = "None";
	
	object[number].type = "inv";
	j[number]["type"] = "inv";
}

void Skeleton::visitOpName(OpName *op_name) {
  /* Code For OpName Goes Here */

  visitIdent(op_name->ident_);
  
  op = op_name->ident_;
  if (DEBUG_PRINT)
	std::cerr << __func__ << ": " << op_name->ident_ << std::endl;
}

void Skeleton::visitEq(Eq *eq) { /* Code For Eq Goes Here */
}

void Skeleton::visitAdd(Add *add) { /* Code For Add Goes Here */
}

void Skeleton::visitSub(Sub *sub) { /* Code For Sub Goes Here */
}

void Skeleton::visitLST(LST *lst) { /* Code For LST Goes Here */
}

void Skeleton::visitLSTE(LSTE *lste) { /* Code For LSTE Goes Here */
}

void Skeleton::visitGRT(GRT *grt) { /* Code For GRT Goes Here */
}

void Skeleton::visitGRTE(GRTE *grte) { /* Code For GRTE Goes Here */
}

void Skeleton::visitDiv(Div *div) { /* Code For Div Goes Here */
}

void Skeleton::visitMult(Mult *mult) { /* Code For Mult Goes Here */
}

void Skeleton::visitNEq(NEq *n_eq) { /* Code For NEq Goes Here */
}

void Skeleton::visitImpl(Impl *impl) { /* Code For Impl Goes Here */
}

void Skeleton::visitNot(Not *not_) { /* Code For Not Goes Here */
}

void Skeleton::visitOr(Or *or_) { /* Code For Or Goes Here */
}

void Skeleton::visitXor(Xor *xor_) { /* Code For Xor Goes Here */
}

void Skeleton::visitAnd(And *and_) { /* Code For And Goes Here */
}

void Skeleton::visitFP(FP *fp) {
  /* Code For FP Goes Here */

  visitIdent(fp->ident_);
  hasParameter = true;
  fparameter = fp->ident_;
  if (DEBUG_PRINT)
    std::cerr << __func__ << ": " << fp->ident_ << std::endl;
  fp->typespecifier_->accept(this);
}

void Skeleton::visitTSsimple(TSsimple *t_ssimple) {
  /* Code For TSsimple Goes Here */

  t_ssimple->simpletypespecifier_->accept(this);
}

void Skeleton::visitTScoll(TScoll *t_scoll) {
  /* Code For TScoll Goes Here */

  t_scoll->collectiontype_->accept(this);
}

void Skeleton::visitCT(CT *ct) {
  /* Code For CT Goes Here */

  ct->collectionkind_->accept(this);
  ct->simpletypespecifier_->accept(this);
}

void Skeleton::visitRT(RT *rt) {
  /* Code For RT Goes Here */

  rt->typespecifier_->accept(this);
}

void Skeleton::visitOCLExp(OCLExp *ocl_exp) {
  /* Code For OCLExp Goes Here */
  if (DEBUG_PRINT)
    std::cerr << __func__ << ": " << true << std::endl;
  ocl_exp->expression_->accept(this);
}

void Skeleton::visitOCLExpLet(OCLExpLet *ocl_exp_let) {
  /* Code For OCLExpLet Goes Here */

  ocl_exp_let->listletexpression_->accept(this);
  ocl_exp_let->expression_->accept(this);
}

void Skeleton::visitLENoParam(LENoParam *le_no_param) {
  /* Code For LENoParam Goes Here */

  visitIdent(le_no_param->ident_);
  le_no_param->expression_->accept(this);
}

void Skeleton::visitLENoParamType(LENoParamType *le_no_param_type) {
  /* Code For LENoParamType Goes Here */

  visitIdent(le_no_param_type->ident_);
  le_no_param_type->typespecifier_->accept(this);
  le_no_param_type->expression_->accept(this);
}

void Skeleton::visitLE(LE *le) {
  /* Code For LE Goes Here */

  visitIdent(le->ident_);
  le->listformalparameter_->accept(this);
  le->expression_->accept(this);
}

void Skeleton::visitLEType(LEType *le_type) {
  /* Code For LEType Goes Here */

  visitIdent(le_type->ident_);
  le_type->listformalparameter_->accept(this);
  le_type->typespecifier_->accept(this);
  le_type->expression_->accept(this);
}

void Skeleton::visitIfExp(IfExp *if_exp) {
  /* Code For IfExp Goes Here */
  
  if (DEBUG_PRINT)
    std::cerr << __func__ << ": " << true << std::endl;
  xxx += "if (";
  if_exp->expression_1->accept(this);
  xxx += ") {";
  if_exp->expression_2->accept(this);
  xxx += "} else {";
  if_exp->expression_3->accept(this);
  xxx += "}";
}

void Skeleton::visitEOpImpl(EOpImpl *e_op_impl) {
  /* Code For EOpImpl Goes Here */
  xxx += "if (";
  e_op_impl->expression_1->accept(this);
  xxx += ") {";
  e_op_impl->expression_2->accept(this);
  xxx += "}";
}

void Skeleton::visitEOpLog(EOpLog *e_op_log) {
  /* Code For EOpLog Goes Here */

  e_op_log->expression_1->accept(this);
  e_op_log->logicaloperator_->accept(this);
  e_op_log->expression_2->accept(this);
}

void Skeleton::visitEOpEq(EOpEq *e_op_eq) {
  /* Code For EOpEq Goes Here */

  e_op_eq->expression_1->accept(this);
  e_op_eq->equalityoperator_->accept(this);
  e_op_eq->expression_2->accept(this);
}

void Skeleton::visitEOpRel(EOpRel *e_op_rel) {
  /* Code For EOpRel Goes Here */

  e_op_rel->expression_1->accept(this);
  e_op_rel->relationaloperator_->accept(this);
  e_op_rel->expression_2->accept(this);
}

void Skeleton::visitEOpAdd(EOpAdd *e_op_add) {
  /* Code For EOpAdd Goes Here */

  e_op_add->expression_1->accept(this);
  e_op_add->addoperator_->accept(this);
  e_op_add->expression_2->accept(this);
}

void Skeleton::visitEOpMul(EOpMul *e_op_mul) {
  /* Code For EOpMul Goes Here */

  e_op_mul->expression_1->accept(this);
  e_op_mul->multiplyoperator_->accept(this);
  e_op_mul->expression_2->accept(this);
}

void Skeleton::visitEOpUn(EOpUn *e_op_un) {
  /* Code For EOpUn Goes Here */

  e_op_un->unaryoperator_->accept(this);
  e_op_un->expression_->accept(this);
}

void Skeleton::visitEExplPropCall(EExplPropCall *e_expl_prop_call) {
  /* Code For EExplPropCall Goes Here */

  e_expl_prop_call->expression_->accept(this);
  e_expl_prop_call->postfixoperator_->accept(this);
  e_expl_prop_call->propertycall_->accept(this);
}

void Skeleton::visitEMessage(EMessage *e_message) {
  /* Code For EMessage Goes Here */

  e_message->expression_->accept(this);
  e_message->pathname_->accept(this);
  e_message->listmessagearg_->accept(this);
}

void Skeleton::visitEImplPropCall(EImplPropCall *e_impl_prop_call) {
  /* Code For EImplPropCall Goes Here */

  e_impl_prop_call->propertycall_->accept(this);
}

void Skeleton::visitELitColl(ELitColl *e_lit_coll) {
  /* Code For ELitColl Goes Here */

  e_lit_coll->literalcollection_->accept(this);
}

void Skeleton::visitELit(ELit *e_lit) {
  /* Code For ELit Goes Here */

  e_lit->oclliteral_->accept(this);
}

void Skeleton::visitEIfExp(EIfExp *e_if_exp) {
  /* Code For EIfExp Goes Here */

  e_if_exp->ifexpression_->accept(this);
}

void Skeleton::visitENull(ENull *e_null) { /* Code For ENull Goes Here */
}

void Skeleton::visitMAExpr(MAExpr *ma_expr) {
  /* Code For MAExpr Goes Here */

  ma_expr->expression_->accept(this);
}

void Skeleton::visitMAUnspec(MAUnspec *ma_unspec) {
  /* Code For MAUnspec Goes Here */
}

void Skeleton::visitMAUnspecTyped(MAUnspecTyped *ma_unspec_typed) {
  /* Code For MAUnspecTyped Goes Here */

  ma_unspec_typed->typespecifier_->accept(this);
}

void Skeleton::visitPCall(PCall *p_call) {
  /* Code For PCall Goes Here */

  p_call->pathname_->accept(this);
  p_call->posstimeexpression_->accept(this);
  p_call->possqualifiers_->accept(this);
  p_call->posspropcallparam_->accept(this);
}

void Skeleton::visitPathN(PathN *path_n) {
  /* Code For PathN Goes Here */

  path_n->listpname_->accept(this);
}

void Skeleton::visitPN(PN *pn) {
  /* Code For PN Goes Here */

  visitIdent(pn->ident_);
  std::string temp = pn->ident_; 
  std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
  
  if (temp == "forall") {
	xxx += "All";
  }
  else if (temp == "notempty") {
	xxx += "Count > 0";
  }
  else if (temp == "size") {
	xxx += "Count";
  }
  else if (temp == "count") {
	xxx += "Count";
  }
  else if (temp == "self") {
	xxx += "this";
  }
  else if (temp == "exists") {
	xxx += "Exists";
  }
  else if (temp == "includes") {
	xxx += "Exists";
  }
  else if (temp == "excludes") {
    //cs = "!" + cs + "Exists";
	hasExcludes = true;
	xxx = "!" + xxx + "Exists";
  }
  else if (temp == "calendar") {
	xxx += "DateTime.Today";
  }
  else if (temp == "year") {
	xxx += "Year";
  }
  else if (temp == "month") {
	xxx += "Month";
  }
  else if (temp == "day") {
	xxx += "Day";
  }
  else if (temp == "integer") {
	xxx += "int";
  }
  else if (temp == "double") {
	xxx += "double";
  }
  else if (temp == "abs") {
	xxx += "Abs";
  }
  else if (temp == "div") {
	xxx += " / ";
  }
  else if (temp == "mod") {
	xxx += " % ";
  }
  else if (temp == "sum") {
	xxx += "Sum";
  }
  else if (temp == "concat") {
	xxx += "Concat";
  }
  else if (temp == "substring") {
	xxx += "Substring";
  }
  else if (temp == "toupper") {
	xxx += "toUpper";
  }
  else if (temp == "tolower") {
	xxx += "toLower";
  }
  else {
	xxx += pn->ident_;
  }
  if (DEBUG_PRINT)
    std::cerr << __func__ << ": " << pn->ident_ << std::endl;
}

void Skeleton::visitNoQual(NoQual *no_qual) { /* Code For NoQual Goes Here */
}

void Skeleton::visitQual(Qual *qual) {
  /* Code For Qual Goes Here */

  qual->qualifiers_->accept(this);
}

void Skeleton::visitQuals(Quals *quals) {
  /* Code For Quals Goes Here */

  quals->listexpression_->accept(this);
}

void Skeleton::visitNoTE(NoTE *no_te) { /* Code For NoTE Goes Here */
  object[number].atPre = false;
  j[number]["atPre"] = false;
}

void Skeleton::visitAtPre(AtPre *at_pre) {
  /* Code For AtPre Goes Here */
  object[number].atPre = true;
  j[number]["atPre"] = true;

  std::size_t found;
  std::size_t temp = xxx.find("this");
  while (temp != std::string::npos) {
    found = temp;
    temp = xxx.find("this", found + 1);
  }
  xxx.replace(found, 4, "pre");
}

void Skeleton::visitNoPCP(NoPCP *no_pcp) { /* Code For NoPCP Goes Here */
}

void Skeleton::visitPCPs(PCPs *pc_ps) {
  /* Code For PCPs Goes Here */

  pc_ps->propertycallparameters_->accept(this);
}

void Skeleton::visitDecl(Decl *decl) {
  /* Code For Decl Goes Here */

  decl->declaratorvarlist_->accept(this);

}

void Skeleton::visitDeclAcc(DeclAcc *decl_acc) {
  /* Code For DeclAcc Goes Here */

  decl_acc->declaratorvarlist_->accept(this);
  visitIdent(decl_acc->ident_);
  decl_acc->typespecifier_->accept(this);
  decl_acc->expression_->accept(this);
}

void Skeleton::visitDVL(DVL *dvl) {
  /* Code For DVL Goes Here */

  dvl->listident_->accept(this);
}

void Skeleton::visitDVLType(DVLType *dvl_type) {
  /* Code For DVLType Goes Here */

  dvl_type->listident_->accept(this);
  dvl_type->simpletypespecifier_->accept(this);
}

void Skeleton::visitPCPDecl(PCPDecl *pcp_decl) {
  /* Code For PCPDecl Goes Here */

  pcp_decl->declarator_->accept(this);
  pcp_decl->listexpression_->accept(this);
}

void Skeleton::visitPCP(PCP *pcp) {
  /* Code For PCP Goes Here */

  pcp->listexpression_->accept(this);
}

void Skeleton::visitPCPNoDeclNoParam(PCPNoDeclNoParam *pcp_no_decl_no_param) {
  /* Code For PCPNoDeclNoParam Goes Here */

  xxx += "()";
}

void Skeleton::visitPCPConcrete(PCPConcrete *pcp_concrete) {
  /* Code For PCPConcrete Goes Here */

  xxx += "(";
  
  if (hasExcludes) {
	xxx += "p => p != ";
  }

  pcp_concrete->expression_->accept(this);
  
  pcp_concrete->listpcphelper_->accept(this);
  
  xxx += ")";
}

void Skeleton::visitPCPComma(PCPComma *pcp_comma) {
  /* Code For PCPComma Goes Here */
  if (DEBUG_PRINT)
	std::cerr << __func__ << ": " << "','" << std::endl;
  xxx += ",";
  pcp_comma->expression_->accept(this);
}

void Skeleton::visitPCPColon(PCPColon *pcp_colon) {
  /* Code For PCPColon Goes Here */

  pcp_colon->simpletypespecifier_->accept(this);
}

void Skeleton::visitPCPIterate(PCPIterate *pcp_iterate) {
  /* Code For PCPIterate Goes Here */

  visitIdent(pcp_iterate->ident_);
  if (DEBUG_PRINT)
	std::cerr << __func__ << ": " << pcp_iterate->ident_ << std::endl;
  pcp_iterate->typespecifier_->accept(this);
  pcp_iterate->expression_->accept(this);
}

void Skeleton::visitPCPBar(PCPBar *pcp_bar) {
  /* Code For PCPBar Goes Here */
  if (DEBUG_PRINT)
	std::cerr << __func__ << ": " << "'|'" << std::endl;
  xxx += " => ";
  pcp_bar->expression_->accept(this);
}

void Skeleton::visitLitStr(LitStr *lit_str) {
  /* Code For LitStr Goes Here */

  visitString(lit_str->string_);
}

void Skeleton::visitLitNum(LitNum *lit_num) {
  /* Code For LitNum Goes Here */

  lit_num->oclnumber_->accept(this);
}

void Skeleton::visitLitBoolTrue(LitBoolTrue *lit_bool_true) {
  /* Code For LitBoolTrue Goes Here */
  xxx += "true";
}

void Skeleton::visitLitBoolFalse(LitBoolFalse *lit_bool_false) {
  /* Code For LitBoolFalse Goes Here */
  xxx += "false";
}

void Skeleton::visitSTSpec(STSpec *st_spec) {
  /* Code For STSpec Goes Here */

  if (isOperation) {
	st_spec->pathname_->accept(this);
	op += xxx + " " + fparameter + ", ";
	xxx = "";
  }
}

void Skeleton::visitLCollection(LCollection *l_collection) {
  /* Code For LCollection Goes Here */

  l_collection->collectionkind_->accept(this);
  l_collection->listcollectionitem_->accept(this);
}

void Skeleton::visitLCollectionEmpty(LCollectionEmpty *l_collection_empty) {
  /* Code For LCollectionEmpty Goes Here */

  l_collection_empty->collectionkind_->accept(this);
}

void Skeleton::visitCI(CI *ci) {
  /* Code For CI Goes Here */

  ci->expression_->accept(this);
}

void Skeleton::visitCIRange(CIRange *ci_range) {
  /* Code For CIRange Goes Here */

  ci_range->expression_1->accept(this);
  ci_range->expression_2->accept(this);
}

void Skeleton::visitNumInt(NumInt *num_int) {
  /* Code For NumInt Goes Here */

  visitInteger(num_int->integer_);
  xxx += std::to_string(num_int->integer_);
}

void Skeleton::visitNumDouble(NumDouble *num_double) {
  /* Code For NumDouble Goes Here */

  visitDouble(num_double->double_);
  xxx += std::to_string(num_double->double_);
}

void Skeleton::visitLAnd(LAnd *l_and) { /* Code For LAnd Goes Here */
  xxx += " && ";
}

void Skeleton::visitLOr(LOr *l_or) { /* Code For LOr Goes Here */
  xxx += " || ";
}

void Skeleton::visitLXor(LXor *l_xor) { /* Code For LXor Goes Here */
  xxx += " ^ ";
}

void Skeleton::visitSet(Set *set) { /* Code For Set Goes Here */
}

void Skeleton::visitBag(Bag *bag) { /* Code For Bag Goes Here */
}

void Skeleton::visitSequence(Sequence *sequence) {
  /* Code For Sequence Goes Here */
}

void Skeleton::visitCollection(Collection *collection) {
  /* Code For Collection Goes Here */
}

void Skeleton::visitEEq(EEq *e_eq) { /* Code For EEq Goes Here */
  xxx += " == ";
}

void Skeleton::visitENEq(ENEq *en_eq) { /* Code For ENEq Goes Here */
  xxx += " != ";
}

void Skeleton::visitRGT(RGT *rgt) { /* Code For RGT Goes Here */
  xxx += " > ";
}

void Skeleton::visitRGTE(RGTE *rgte) { /* Code For RGTE Goes Here */
  xxx += " >= ";
}

void Skeleton::visitRLT(RLT *rlt) { /* Code For RLT Goes Here */
  xxx += " < ";
}

void Skeleton::visitRLTE(RLTE *rlte) { /* Code For RLTE Goes Here */
  xxx += " <= ";
}

void Skeleton::visitAAdd(AAdd *a_add) { /* Code For AAdd Goes Here */
  xxx += " + ";
}

void Skeleton::visitASub(ASub *a_sub) { /* Code For ASub Goes Here */
  xxx += " - ";
}

void Skeleton::visitMMult(MMult *m_mult) { /* Code For MMult Goes Here */
  xxx += " * ";
}

void Skeleton::visitMDiv(MDiv *m_div) { /* Code For MDiv Goes Here */
  xxx += " / ";
}

void Skeleton::visitUMin(UMin *u_min) { /* Code For UMin Goes Here */
  xxx += "-";
}

void Skeleton::visitUNot(UNot *u_not) { /* Code For UNot Goes Here */
  xxx += "!";
}

void Skeleton::visitPDot(PDot *p_dot) { /* Code For PDot Goes Here */

  if (DEBUG_PRINT)
    std::cerr << "'.'" << std::endl;
  xxx += ".";
}

void Skeleton::visitPArrow(PArrow *p_arrow) { /* Code For PArrow Goes Here */
  if (DEBUG_PRINT)
    std::cerr << "'->'" << std::endl;
  xxx += ".";
}

void Skeleton::visitListOCLPackage(ListOCLPackage *list_ocl_package) {
  for (ListOCLPackage::iterator i = list_ocl_package->begin();
       i != list_ocl_package->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListConstrnt(ListConstrnt *list_constrnt) {
  for (ListConstrnt::iterator i = list_constrnt->begin();
       i != list_constrnt->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListConstrBody(ListConstrBody *list_constr_body) {
  for (ListConstrBody::iterator i = list_constr_body->begin();
       i != list_constr_body->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListFormalParameter(
    ListFormalParameter *list_formal_parameter) {
  for (ListFormalParameter::iterator i = list_formal_parameter->begin();
       i != list_formal_parameter->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListLetExpression(ListLetExpression *list_let_expression) {
  for (ListLetExpression::iterator i = list_let_expression->begin();
       i != list_let_expression->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListMessageArg(ListMessageArg *list_message_arg) {
  for (ListMessageArg::iterator i = list_message_arg->begin();
       i != list_message_arg->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListPName(ListPName *list_p_name) {
  for (ListPName::iterator i = list_p_name->begin(); i != list_p_name->end();
       ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListIdent(ListIdent *list_ident) {
  for (ListIdent::iterator i = list_ident->begin(); i != list_ident->end();
       ++i) {
    visitIdent(*i);
  }
}

void Skeleton::visitListExpression(ListExpression *list_expression) {
  for (ListExpression::iterator i = list_expression->begin();
       i != list_expression->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListPCPHelper(ListPCPHelper *list_pcp_helper) {
  for (ListPCPHelper::iterator i = list_pcp_helper->begin();
       i != list_pcp_helper->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitListCollectionItem(
    ListCollectionItem *list_collection_item) {
  for (ListCollectionItem::iterator i = list_collection_item->begin();
       i != list_collection_item->end(); ++i) {
    (*i)->accept(this);
  }
}

void Skeleton::visitInteger(Integer x) { /* Code for Integer Goes Here */
}

void Skeleton::visitChar(Char x) { /* Code for Char Goes Here */
  xxx += x;
}

void Skeleton::visitDouble(Double x) { /* Code for Double Goes Here */
}

void Skeleton::visitString(String x) { /* Code for String Goes Here */
  xxx += x;
}

void Skeleton::visitIdent(Ident x) { /* Code for numberent Goes Here */
}
