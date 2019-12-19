#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "literal.h"

extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class IdentNode : public Node {
public:
  IdentNode(const std::string id) : Node(), ident(id) { }
  virtual ~IdentNode() {}
  const std::string getIdent() const { return ident; }
  virtual const Literal* eval() const;
private:
  std::string ident;
};

class SuiteNode : public Node {
public:
  SuiteNode(const std::vector<Node*>& vec) : Node(), stmts(vec) {}
  virtual const Literal* eval() const;
private:
  std::vector<Node*> stmts;
};

class FuncNode : public Node {
public:
  FuncNode(const std::string& id, Node* p, Node* n) :
           Node(), ident(id), parameter(p), suite(n) {}
  FuncNode(const FuncNode&) = delete;
  FuncNode& operator=(const FuncNode&) = delete;
  const std::string getIdent() const { return ident; }
  virtual const Literal* eval() const;
private:
  std::string ident;
  Node* parameter;
  Node* suite;
};

class ParaNode : public Node {
public:
  ParaNode(const std::vector<Node*>* vec) :  Node(), params(*vec) {}
  virtual const Literal* eval() const;
  std::vector<Node*> getValue() const { return params; }
private:
  std::vector<Node*> params;
};

class CallNode : public Node {
public:
  CallNode(const std::string& id, Node* n) : Node(), ident(id), argNode(n) {}
  virtual const Literal* eval() const;
  CallNode(const CallNode&) = delete;
  CallNode& operator=(const CallNode&) = delete;
private:
  std::string ident;
  Node* argNode;
};

class PrintNode : public Node {
public:
  PrintNode(Node* n) : Node(), node(n) {}
  virtual const Literal* eval() const;
  PrintNode(const PrintNode&) = delete;
  PrintNode& operator=(const PrintNode&) = delete;
private:
  Node* node;
};

class InputNode : public Node {
public:
  InputNode(Node* n) : Node(), node(n) {}
  virtual const Literal* eval() const;
  InputNode(const InputNode&) = delete;
  InputNode& operator=(const InputNode&) = delete;
private:
  Node* node;
};


class ArgNode : public Node {
public:
  ArgNode(const std::vector<Node*>* vec): Node(), arglist(*vec) {}
  virtual const Literal* eval() const;
  std::vector<Node*> getValue() const { return arglist; }
private:
  std::vector<Node*> arglist;
};

class ElifNode : public Node {
public:
  ElifNode(Node* t, Node* s, Node* eifn) : Node(), test(t), suite(static_cast<SuiteNode*> (s)), elifNode(static_cast<ElifNode*> (eifn)) {}
  virtual const Literal* eval() const;
  ElifNode(const ElifNode&) = delete;
  ElifNode& operator=(const ElifNode&) = delete;
private:
  Node* test;
  SuiteNode* suite;
  ElifNode* elifNode;
};

class IfNode : public Node {
public:
  IfNode(Node* t, Node* s, Node* eif, Node* es) : Node(), test(t), suite(static_cast<SuiteNode*> (s)), elif(static_cast<ElifNode*> (eif)), elseSuite(static_cast<SuiteNode*> (es)) {}
  virtual const Literal* eval() const;
  IfNode(const IfNode&) = delete;
  IfNode& operator=(const IfNode&) = delete;
private:
  Node* test;
  SuiteNode* suite;
  ElifNode* elif;
  SuiteNode* elseSuite;
};

class WhileNode : public Node {
public:
  WhileNode(Node* t, Node* s) : Node(), test(t), suite(static_cast<SuiteNode*> (s)) {}
  virtual const Literal* eval() const;
  WhileNode(const WhileNode&) = delete;
  WhileNode& operator=(const WhileNode&) = delete;
private:
  Node* test;
  SuiteNode* suite;
};

class ReturnNode : public Node {
public:
  ReturnNode(Node* n) : Node(), result(n) {}
  virtual const Literal* eval() const;
  ReturnNode(const ReturnNode&) = delete;
  ReturnNode& operator=(const ReturnNode&) = delete;
private:
  Node* result;
};

class UnaryNode : public Node {
public:
  UnaryNode(Node* r) : Node(), right(r) {}
  virtual const Literal* eval() const = 0;
  Node* getRight() const { return right; }
  UnaryNode(const UnaryNode&) = delete;
  UnaryNode& operator=(const UnaryNode&) = delete;
protected:
  Node* right;
};

class MinusUnaryNode : public UnaryNode {
public:
  MinusUnaryNode(Node* right) : UnaryNode(right) {}
  virtual const Literal* eval() const;
};

class TildeUnaryNode : public UnaryNode {
public:
  TildeUnaryNode(Node* right) : UnaryNode(right) {}
  virtual const Literal* eval() const;
};

class NotUnaryNode : public UnaryNode {
public:
  NotUnaryNode(Node* right) : UnaryNode(right) {}
  virtual const Literal* eval() const;
};

class BinaryNode : public Node {
public:
  BinaryNode(Node* l, Node* r) : Node(), left(l), right(r) {}
  virtual const Literal* eval() const = 0;
  Node* getLeft()  const { return left; }
  Node* getRight() const { return right; }
  BinaryNode(const BinaryNode&) = delete;
  BinaryNode& operator=(const BinaryNode&) = delete;
protected:
  Node *left;
  Node *right;
};

class AsgBinaryNode : public BinaryNode {
public:
  AsgBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class AddBinaryNode : public BinaryNode {
public:
  AddBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class SubBinaryNode : public BinaryNode {
public:
  SubBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class MulBinaryNode : public BinaryNode {
public:
  MulBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class DivBinaryNode : public BinaryNode {
public:
  DivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class ModBinaryNode : public BinaryNode {
public:
  ModBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class FlrDivBinaryNode : public BinaryNode {
public:
  FlrDivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class PowBinaryNode : public BinaryNode {
public:
  PowBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class LShiftBinaryNode : public BinaryNode {
public:
  LShiftBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class RShiftBinaryNode : public BinaryNode {
public:
  RShiftBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class EqEqualBinaryNode : public BinaryNode {
public:
  EqEqualBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class EqEqEqualBinaryNode : public BinaryNode {
public:
  EqEqEqualBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class LessBinaryNode : public BinaryNode {
public:
  LessBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class GreaterBinaryNode : public BinaryNode {
public:
  GreaterBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class LessEqualBinaryNode : public BinaryNode {
public:
  LessEqualBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class GreaterEqualBinaryNode : public BinaryNode {
public:
  GreaterEqualBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class NotEqualBinaryNode : public BinaryNode {
public:
  NotEqualBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class AndBinaryNode : public BinaryNode {
public:
  AndBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class OrBinaryNode : public BinaryNode {
public:
  OrBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class AmpersandBinaryNode : public BinaryNode {
public:
  AmpersandBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class BarBinaryNode : public BinaryNode {
public:
  BarBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class XorBinaryNode : public BinaryNode {
public:
  XorBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};
