
%{
  #include "includes/ast.h"
  #include <cmath>
  #include <iostream>
  #include <vector>

  extern int yylex (void);
  extern char *yytext;
  void yyerror (const char *);

  PoolOfNodes& pool = PoolOfNodes::getInstance();
%}

%union {
  Node* node;
  int intNumber;
  long double fltNumber;
  char *name;
  //std::string str;
  std::vector<Node*>* vec;
}


%token AMPEREQUAL AMPERSAND AND AS ASSERT AT BACKQUOTE BAR BREAK CIRCUMFLEX
%token CIRCUMFLEXEQUAL CLASS COLON COMMA CONTINUE DEDENT DEF COMPONENT DEL DOT
%token DOUBLESLASHEQUAL DOUBLESTAREQUAL ELIF ELSE ENDMARKER EQEQUAL
%token EXCEPT EXEC FINALLY FOR FROM GLOBAL GREATER GREATEREQUAL GRLT
%token IF IMPORT IN INDENT IS LAMBDA LBRACE LEFTSHIFTEQUAL LESS
%token LESSEQUAL LPAR LSQB MINEQUAL NEWLINE NOT NOTEQUAL NUMBER
%token OR PASS PERCENTEQUAL PLUSEQUAL PRINT RAISE RBRACE RETURN
%token RIGHTSHIFTEQUAL RPAR RSQB SEMI SLASHEQUAL STAREQUAL
%token STRING TILDE TRY VBAREQUAL WHILE WITH YIELD

%token<intNumber> INT
%token<fltNumber> FLOAT
%token<name> NAME
%type<node> atom power term factor
%type<node> expr xor_expr and_expr shift_expr arith_expr
%type<intNumber> pick_unop pick_multop pick_PLUS_MINUS pick_LEFTSHIFT_RIGHTSHIFT augassign comp_op
%type<node> comparison not_test and_test or_test opt_IF_ELSE test
%type<node> small_stmt expr_stmt pick_yield_expr_testlist star_EQUAL
%type<node> print_stmt opt_test
%type<node> opt_yield_test pick_yield_expr_testlist_comp yield_expr testlist_comp comp_for star_COMMA_test opt_COMMA testlist
%type<node> compound_stmt simple_stmt if_stmt while_stmt star_ELIF funcdef stmt suite
%type<node> star_trailer trailer
%type<node> flow_stmt return_stmt
%type<node> fpdef parameters opt_EQUAL_test
%type<node> argument pick_argument
%type<vec> plus_stmt star_fpdef_COMMA varargslist
%type<vec> arglist star_argument_COMMA opt_arglist
%right EQUAL
%left LEFTSHIFT RIGHTSHIFT
%left PLUS MINUS
%left STAR SLASH PERCENT DOUBLESLASH
%right DOUBLESTAR

%start start

%locations

%%

start
  : file_input
  ;
file_input // Used in: start
  : star_NEWLINE_stmt ENDMARKER
  ;
pick_NEWLINE_stmt // Used in: star_NEWLINE_stmt
  : NEWLINE
  | stmt
    { $1->eval(); }
    /*{ $1->eval(); TableManager::getInstance().display();}*/
  ;
star_NEWLINE_stmt // Used in: file_input, star_NEWLINE_stmt
  : star_NEWLINE_stmt pick_NEWLINE_stmt
  | %empty
  ;
decorator // Used in: decorators
  : AT dotted_name LPAR opt_arglist RPAR NEWLINE
  | AT dotted_name NEWLINE
  ;
opt_arglist // Used in: decorator, trailer
  : arglist
    { $$ = $1; }
  | %empty
    { $$ = NULL; }
  ;
decorators // Used in: decorators, decorated
  : decorators decorator
  | decorator
  ;
decorated // Used in: compound_stmt
  : decorators classdef
  | decorators funcdef
  ;
funcdef // Used in: decorated, compound_stmt
  : DEF NAME parameters COLON suite
    {
      $$ = new FuncNode($2, $3, $5);
      pool.add($$);
      delete [] $2;
    }
  | COMPONENT NAME parameters COLON suite
    {
      $$ = new FuncNode($2, $3, $5);
      pool.add($$);
      delete [] $2;
    }
  ;
parameters // Used in: funcdef
  : LPAR varargslist RPAR
    {
      if ($2) {
        $$ = new ParaNode($2);
        delete $2;
        pool.add($$);
      }
    }
  | LPAR RPAR
    { $$ = NULL; }
  ;
varargslist // Used in: parameters, old_lambdef, lambdef
  : star_fpdef_COMMA pick_STAR_DOUBLESTAR
    { $$ = NULL; }
  | star_fpdef_COMMA fpdef opt_EQUAL_test opt_COMMA
    {
      if ($1 == NULL) {
        $$ = new std::vector<Node*>();
      }
      else {
        $$ = $1;
      }
      $$->push_back($2);
    }
  ;
opt_EQUAL_test // Used in: varargslist, star_fpdef_COMMA
  : EQUAL test
    { $$ = NULL; }
  | %empty
    { $$ = NULL; }
  ;
star_fpdef_COMMA // Used in: varargslist, star_fpdef_COMMA
  : star_fpdef_COMMA fpdef opt_EQUAL_test COMMA
    {
      if ($1 == NULL) {
        $$ = new std::vector<Node*>();
      }
      else {
        $$ = $1;
      }
      $$->push_back($2);
    }
  | %empty
    { $$ = NULL; }
  ;
opt_DOUBLESTAR_NAME // Used in: pick_STAR_DOUBLESTAR
  : COMMA DOUBLESTAR NAME
  | %empty
  ;
pick_STAR_DOUBLESTAR // Used in: varargslist
  : STAR NAME opt_DOUBLESTAR_NAME
  | DOUBLESTAR NAME
  ;
opt_COMMA // Used in: varargslist, opt_test, opt_test_2, testlist_safe, listmaker, testlist_comp, pick_for_test_test, pick_for_test, pick_argument
  : COMMA
    { $$ = NULL; }
  | %empty
    { $$ = NULL; }
  ;
fpdef // Used in: varargslist, star_fpdef_COMMA, fplist, star_fpdef_notest
  : NAME
    {
      $$ = new IdentNode($1);
      delete [] $1;
      pool.add($$);
    }
  | LPAR fplist RPAR
    { $$ = NULL; }
  ;
fplist // Used in: fpdef
  : fpdef star_fpdef_notest COMMA
  | fpdef star_fpdef_notest
  ;
star_fpdef_notest // Used in: fplist, star_fpdef_notest
  : star_fpdef_notest COMMA fpdef
  | %empty
  ;
stmt // Used in: pick_NEWLINE_stmt, plus_stmt
  : simple_stmt
    { $$ = $1; }
  | compound_stmt
    { $$ = $1; }
  ;
simple_stmt // Used in: stmt, suite
  : small_stmt star_SEMI_small_stmt SEMI NEWLINE
  | small_stmt star_SEMI_small_stmt NEWLINE
  ;
star_SEMI_small_stmt // Used in: simple_stmt, star_SEMI_small_stmt
  : star_SEMI_small_stmt SEMI small_stmt
  | %empty
  ;
small_stmt // Used in: simple_stmt, star_SEMI_small_stmt
  : expr_stmt
    { $$ = $1; }
  | print_stmt
    { $$ = $1; }
  | del_stmt
    { $$ = NULL; }
  | pass_stmt
    { $$ = NULL; }
  | flow_stmt
    { $$ = $1; }
  | import_stmt
    { $$ = NULL; }
  | global_stmt
    { $$ = NULL; }
  | exec_stmt
    { $$ = NULL; }
  | assert_stmt
    { $$ = NULL; }
  ;
expr_stmt // Used in: small_stmt
  : testlist augassign pick_yield_expr_testlist
    {
      Node* temp = NULL;
      switch($2) {
        case PLUSEQUAL:
          temp = new AddBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case MINEQUAL:
          temp = new SubBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case STAREQUAL:
          temp = new MulBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case SLASHEQUAL:
          temp = new DivBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case PERCENTEQUAL:
          temp = new ModBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case LEFTSHIFTEQUAL:
          temp = new LShiftBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case RIGHTSHIFTEQUAL:
          temp = new RShiftBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case DOUBLESTAREQUAL:
          temp = new PowBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case DOUBLESLASHEQUAL:
          temp = new FlrDivBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        default:
          break;
      }
    }
  | testlist EQUAL star_EQUAL
    {
      $$ = new AsgBinaryNode($1, $3);
      pool.add($$);
    }
  | testlist
    { $$ = $1; }
  ;
pick_yield_expr_testlist // Used in: expr_stmt, star_EQUAL
  : yield_expr
    { $$ = $1; }
  | testlist
    { $$ = $1; }
  ;
star_EQUAL // Used in: expr_stmt, star_EQUAL
  : pick_yield_expr_testlist EQUAL star_EQUAL
    {
      $$ = new AsgBinaryNode($1, $3);
      pool.add($$);
    }
  | pick_yield_expr_testlist
    { $$ = $1; }
  ;
augassign // Used in: expr_stmt
  : PLUSEQUAL
    { $$ = PLUSEQUAL; }
  | MINEQUAL
    { $$ = MINEQUAL; }
  | STAREQUAL
    { $$ = STAREQUAL; }
  | SLASHEQUAL
    { $$ = SLASHEQUAL; }
  | PERCENTEQUAL
    { $$ = PERCENTEQUAL; }
  | AMPEREQUAL
    { $$ = AMPEREQUAL; }
  | VBAREQUAL
    { $$ = VBAREQUAL; }
  | CIRCUMFLEXEQUAL
    { $$ = CIRCUMFLEXEQUAL; }
  | LEFTSHIFTEQUAL
    { $$ = LEFTSHIFTEQUAL; }
  | RIGHTSHIFTEQUAL
    { $$ = RIGHTSHIFTEQUAL; }
  | DOUBLESTAREQUAL
    { $$ = DOUBLESTAREQUAL; }
  | DOUBLESLASHEQUAL
    { $$ = DOUBLESLASHEQUAL; }
  ;
print_stmt // Used in: small_stmt
  : PRINT opt_test
    {
      $$ = new PrintNode($2);
      pool.add($$);
    }
  | PRINT RIGHTSHIFT test opt_test_2
    { $$ = NULL; }
  ;
star_COMMA_test // Used in: star_COMMA_test, opt_test, listmaker, testlist_comp, testlist, pick_for_test
  : star_COMMA_test COMMA test
    { $$ = NULL; }
  | %empty
    { $$ = NULL; }
  ;
opt_test // Used in: print_stmt
  : test star_COMMA_test opt_COMMA
    { $$ = $1; }
  | %empty
    { $$ = NULL; }
  ;
plus_COMMA_test // Used in: plus_COMMA_test, opt_test_2
  : plus_COMMA_test COMMA test
  | COMMA test
  ;
opt_test_2 // Used in: print_stmt
  : plus_COMMA_test opt_COMMA
  | %empty
  ;
del_stmt // Used in: small_stmt
  : DEL exprlist
  ;
pass_stmt // Used in: small_stmt
  : PASS
  ;
flow_stmt // Used in: small_stmt
  : break_stmt
    { $$ = NULL; }
  | continue_stmt
    { $$ = NULL; }
  | return_stmt
    { $$ = $1; }
  | raise_stmt
    { $$ = NULL; }
  | yield_stmt
    { $$ = NULL; }
  ;
break_stmt // Used in: flow_stmt
  : BREAK
  ;
continue_stmt // Used in: flow_stmt
  : CONTINUE
  ;
return_stmt // Used in: flow_stmt
  : RETURN testlist
    {
      $$ = new ReturnNode($2);
      pool.add($$);
    }
  | RETURN
    {
      $$ = new ReturnNode(NULL);
      pool.add($$);
    }
  ;
yield_stmt // Used in: flow_stmt
  : yield_expr
  ;
raise_stmt // Used in: flow_stmt
  : RAISE test opt_test_3
  | RAISE
  ;
opt_COMMA_test // Used in: opt_test_3, exec_stmt
  : COMMA test
  | %empty
  ;
opt_test_3 // Used in: raise_stmt
  : COMMA test opt_COMMA_test
  | %empty
  ;
import_stmt // Used in: small_stmt
  : import_name
  | import_from
  ;
import_name // Used in: import_stmt
  : IMPORT dotted_as_names
  ;
import_from // Used in: import_stmt
  : FROM pick_dotted_name IMPORT pick_STAR_import
  ;
pick_dotted_name // Used in: import_from
  : star_DOT dotted_name
  | star_DOT DOT
  ;
pick_STAR_import // Used in: import_from
  : STAR
  | LPAR import_as_names RPAR
  | import_as_names
  ;
import_as_name // Used in: import_as_names, star_COMMA_import_as_name
  : NAME AS NAME
  | NAME
  ;
dotted_as_name // Used in: dotted_as_names
  : dotted_name AS NAME
  | dotted_name
  ;
import_as_names // Used in: pick_STAR_import
  : import_as_name star_COMMA_import_as_name COMMA
  | import_as_name star_COMMA_import_as_name
  ;
star_COMMA_import_as_name // Used in: import_as_names, star_COMMA_import_as_name
  : star_COMMA_import_as_name COMMA import_as_name
  | %empty
  ;
dotted_as_names // Used in: import_name, dotted_as_names
  : dotted_as_name
  | dotted_as_names COMMA dotted_as_name
  ;
dotted_name // Used in: decorator, pick_dotted_name, dotted_as_name, dotted_name
  : NAME
  | dotted_name DOT NAME
  ;
global_stmt // Used in: small_stmt
  : GLOBAL NAME star_COMMA_NAME
  ;
star_COMMA_NAME // Used in: global_stmt, star_COMMA_NAME
  : star_COMMA_NAME COMMA NAME
  | %empty
  ;
exec_stmt // Used in: small_stmt
  : EXEC expr IN test opt_COMMA_test
  | EXEC expr
  ;
assert_stmt // Used in: small_stmt
  : ASSERT test COMMA test
  | ASSERT test
  ;
compound_stmt // Used in: stmt
  : if_stmt
    { $$ = $1; }
  | while_stmt
    { $$ = $1; }
  | for_stmt
    { $$ = NULL; }
  | try_stmt
    { $$ = NULL; }
  | with_stmt
    { $$ = NULL; }
  | funcdef
    { $$ = $1; }
  | classdef
    { $$ = NULL; }
  | decorated
    { $$ = NULL; }
  ;
if_stmt // Used in: compound_stmt
  : IF test COLON suite star_ELIF ELSE COLON suite
    {
      if ($2) {
        $$ = new IfNode($2, $4, $5, $8);
        pool.add($$);
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
  | IF test COLON suite star_ELIF
    {
      if ($2) {
        $$ = new IfNode($2, $4, $5, NULL);
        pool.add($$);
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
  ;
star_ELIF // Used in: if_stmt, star_ELIF
  : star_ELIF ELIF test COLON suite
    {
      $$ = new ElifNode($3,$5,$1);
      pool.add($$);
    }
  | %empty
    { $$=NULL;}
  ;
while_stmt // Used in: compound_stmt
  : WHILE test COLON suite ELSE COLON suite
  {
    if ($2) {
      $$ = new WhileNode($2, $4);
      pool.add($$);
    }
    else {
      std::cout << "SyntaxError: invalid syntax" << std::endl;
    }
  }
  | WHILE test COLON suite
  {
    if ($2) {
      $$ = new WhileNode($2, $4);
      pool.add($$);
      //$$->eval();
    }
    else {
      std::cout << "SyntaxError: invalid syntax" << std::endl;
    }
  }
  ;
for_stmt // Used in: compound_stmt
  : FOR exprlist IN testlist COLON suite ELSE COLON suite
  | FOR exprlist IN testlist COLON suite
  ;
try_stmt // Used in: compound_stmt
  : TRY COLON suite plus_except opt_ELSE opt_FINALLY
  | TRY COLON suite FINALLY COLON suite
  ;
plus_except // Used in: try_stmt, plus_except
  : plus_except except_clause COLON suite
  | except_clause COLON suite
  ;
opt_ELSE // Used in: try_stmt
  : ELSE COLON suite
  | %empty
  ;
opt_FINALLY // Used in: try_stmt
  : FINALLY COLON suite
  | %empty
  ;
with_stmt // Used in: compound_stmt
  : WITH with_item star_COMMA_with_item COLON suite
  ;
star_COMMA_with_item // Used in: with_stmt, star_COMMA_with_item
  : star_COMMA_with_item COMMA with_item
  | %empty
  ;
with_item // Used in: with_stmt, star_COMMA_with_item
  : test AS expr
  | test
  ;
except_clause // Used in: plus_except
  : EXCEPT test opt_AS_COMMA
  | EXCEPT
  ;
pick_AS_COMMA // Used in: opt_AS_COMMA
  : AS
  | COMMA
  ;
opt_AS_COMMA // Used in: except_clause
  : pick_AS_COMMA test
  | %empty
  ;
suite // Used in: funcdef, if_stmt, star_ELIF, while_stmt, for_stmt, try_stmt, plus_except, opt_ELSE, opt_FINALLY, with_stmt, classdef
  : simple_stmt
    { $$ = $1; }
  | NEWLINE INDENT plus_stmt DEDENT
    {
      $$ = new SuiteNode(*$3);
      delete $3;
      pool.add($$);
    }
  ;
plus_stmt // Used in: suite, plus_stmt
  : plus_stmt stmt
    {
      $$ = $1;
      $$->push_back($2);
    }
  | stmt
    {
      $$ = new std::vector<Node*>();
      $$->push_back($1);
    }
  ;
testlist_safe // Used in: list_for
  : old_test plus_COMMA_old_test opt_COMMA
  | old_test
  ;
plus_COMMA_old_test // Used in: testlist_safe, plus_COMMA_old_test
  : plus_COMMA_old_test COMMA old_test
  | COMMA old_test
  ;
old_test // Used in: testlist_safe, plus_COMMA_old_test, old_lambdef, list_if, comp_if
  : or_test
  | old_lambdef
  ;
old_lambdef // Used in: old_test
  : LAMBDA varargslist COLON old_test
  | LAMBDA COLON old_test
  ;
test // Used in: opt_EQUAL_test, print_stmt, star_COMMA_test, opt_test, plus_COMMA_test, raise_stmt, opt_COMMA_test, opt_test_3, exec_stmt, assert_stmt, if_stmt, star_ELIF, while_stmt, with_item, except_clause, opt_AS_COMMA, opt_IF_ELSE, listmaker, testlist_comp, lambdef, subscript, opt_test_only, sliceop, testlist, dictorsetmaker, star_test_COLON_test, opt_DOUBLESTAR_test, pick_argument, argument, testlist1
  : or_test opt_IF_ELSE
    { $$ = $1; }
  | lambdef
    { $$ = NULL; }
  ;
opt_IF_ELSE // Used in: test
  : IF or_test ELSE test
    { $$ = NULL; }
  | %empty
    { $$ = NULL; }
  ;
or_test // Used in: old_test, test, opt_IF_ELSE, or_test, comp_for
  : and_test
    { $$ = $1; }
  | or_test OR and_test
    { $$ = new OrBinaryNode($1, $3);
      pool.add($$);
    }
  ;
and_test // Used in: or_test, and_test
  : not_test
    { $$ = $1; }
  | and_test AND not_test
    { $$ = new AndBinaryNode($1, $3);
      pool.add($$);
    }
  ;
not_test // Used in: and_test, not_test
  : NOT not_test
    {
    $$ = new NotUnaryNode($2);
    pool.add($$); }
  | comparison
    { $$ = $1; }
  ;
comparison // Used in: not_test, comparison
  : expr
    { $$ = $1; }
  | comparison comp_op expr
    {
      switch($2) {
        case EQEQUAL:
          $$ = new EqEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case LESS:
          $$ = new LessBinaryNode($1, $3);
          pool.add($$);
          break;
        case GREATER:
          $$ = new GreaterBinaryNode($1, $3);
          pool.add($$);
          break;
        case LESSEQUAL:
          $$ = new LessEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case GREATEREQUAL:
          $$ = new GreaterEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case NOTEQUAL:
          $$ = new NotEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case GRLT:
          $$ = new NotEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        default:
          break;
      }
    }
  ;
comp_op // Used in: comparison
  : LESS
    { $$ = LESS; }
  | GREATER
    { $$ = GREATER; }
  | EQEQUAL
    { $$ = EQEQUAL; }
  | GREATEREQUAL
    { $$ = GREATEREQUAL; }
  | LESSEQUAL
    { $$ = LESSEQUAL; }
  | GRLT
    { $$ = GRLT; }
  | NOTEQUAL
    { $$ = NOTEQUAL; }
  | IN
    { $$ = IN; }
  | NOT IN
    { $$ = 0; }
  | IS
    { $$ = IS; }
  | IS NOT
    { $$ = 0; }
  ;
expr // Used in: exec_stmt, with_item, comparison, expr, exprlist, star_COMMA_expr
  : xor_expr
    { $$ = $1; }
  | expr BAR xor_expr
    {
      $$ = new BarBinaryNode($1, $3);
      pool.add($$);
    }
  ;
xor_expr // Used in: expr, xor_expr
  : and_expr
    { $$ = $1; }
  | xor_expr CIRCUMFLEX and_expr
    {
      $$ = new XorBinaryNode($1, $3);
      pool.add($$);
    }
  ;
and_expr // Used in: xor_expr, and_expr
  : shift_expr
    { $$ = $1; }
  | and_expr AMPERSAND shift_expr
    {
      $$ = new AmpersandBinaryNode($1, $3);
      pool.add($$);
    }
  ;
shift_expr // Used in: and_expr, shift_expr
  : arith_expr
    { $$ = $1; }
  | shift_expr pick_LEFTSHIFT_RIGHTSHIFT arith_expr
    {
      if ($2 == LEFTSHIFT) {
        $$ = new LShiftBinaryNode($1, $3);
        pool.add($$);
      }
      if ($2 == RIGHTSHIFT) {
        $$ = new RShiftBinaryNode($1, $3);
        pool.add($$);
      }
    }
  ;
pick_LEFTSHIFT_RIGHTSHIFT // Used in: shift_expr
  : LEFTSHIFT
    { $$ = LEFTSHIFT; }
  | RIGHTSHIFT
    { $$ = RIGHTSHIFT; }
  ;
arith_expr // Used in: shift_expr, arith_expr
  : term
    { $$ = $1; }
  | arith_expr pick_PLUS_MINUS term
    {
      if ($2 == PLUS) {
        $$ = new AddBinaryNode($1, $3);
        pool.add($$);
      }
      if ($2 == MINUS) {
        $$ = new SubBinaryNode($1, $3);
        pool.add($$);
      }
    }
  ;
pick_PLUS_MINUS // Used in: arith_expr
  : PLUS
    {
      $$ = PLUS;
    }
  | MINUS
    {
      $$ = MINUS;
    }
  ;
term // Used in: arith_expr, term
  : factor
    {
      $$ = $1;
    }
  | term pick_multop factor
    {
      switch($2) {
        case STAR:
          $$ = new MulBinaryNode($1, $3);
          pool.add($$);
          break;
        case SLASH:
          $$ = new DivBinaryNode($1, $3);
          pool.add($$);
          break;
        case PERCENT:
          $$ = new ModBinaryNode($1, $3);
          pool.add($$);
          break;
        case DOUBLESLASH:
          $$ = new FlrDivBinaryNode($1, $3);
          pool.add($$);
          break;
        default:
          break;
      }
    }
  ;
pick_multop // Used in: term
  : STAR
    { $$ = STAR; }
  | SLASH
    { $$ = SLASH; }
  | PERCENT
    { $$ = PERCENT; }
  | DOUBLESLASH
    { $$ = DOUBLESLASH; }
  ;
factor // Used in: term, factor, power
  : pick_unop factor
    {
      if ($1 == PLUS) {
        $$ = $2;
      }
      if ($1 == MINUS) {
        $$ = new MinusUnaryNode($2);
        pool.add($$);
      }
      if ($1 == TILDE) {
        $$ = new TildeUnaryNode($2);
        pool.add($$);
      }
    }
  | power
    {
      $$ = $1;
    }
  ;
pick_unop // Used in: factor
  : PLUS
    { $$ = PLUS; }
  | MINUS
    { $$ = MINUS; }
  | TILDE
    { $$ = TILDE; }
  ;
power // Used in: factor
  : atom star_trailer DOUBLESTAR factor
    {
      $$ = new PowBinaryNode($1, $4);
      pool.add($$);
    }
  | atom star_trailer
    {
      if ($2 == NULL) {
        $$ = $1;
      }
      else {
        $$ = new CallNode(reinterpret_cast<IdentNode*>($1)->getIdent(), $2);
        pool.add($$);
      }
    }
  ;
star_trailer // Used in: power, star_trailer
  : star_trailer trailer
    { $$ = $2; }
  | %empty
    { $$ = NULL; }
  ;
atom // Used in: power
  : LPAR opt_yield_test RPAR
    { $$ = $2; }
  | LSQB opt_listmaker RSQB
    { $$ = NULL; }
  | LBRACE opt_dictorsetmaker RBRACE
    { $$ = NULL; }
  | BACKQUOTE testlist1 BACKQUOTE
    { $$ = NULL; }
  | NAME
    {
      $$ = new IdentNode($1);
      delete [] $1;
      pool.add($$);
    }
  | NUMBER
    { $$ = NULL; }
  | plus_STRING
    { $$ = NULL; }
  | INT
    {
      $$ = new IntLiteral($1);
      pool.add($$);
    }
  | FLOAT
    {
      $$ = new FloatLiteral($1);
      pool.add($$);
    }
  ;
pick_yield_expr_testlist_comp // Used in: opt_yield_test
  : yield_expr
    { $$ = $1; }
  | testlist_comp
    { $$ = $1; }
  ;
opt_yield_test // Used in: atom
  : pick_yield_expr_testlist_comp
    { $$ = $1; }
  | %empty
    { $$ = NULL; }
  ;
opt_listmaker // Used in: atom
  : listmaker
  | %empty
  ;
opt_dictorsetmaker // Used in: atom
  : dictorsetmaker
  | %empty
  ;
plus_STRING // Used in: atom, plus_STRING
  : plus_STRING STRING
  | STRING
  {
    //$$ = new StringLiteral($1);
    //pool.add($$);
  }
  ;
listmaker // Used in: opt_listmaker
  : test list_for
  | test star_COMMA_test opt_COMMA
  ;
testlist_comp // Used in: pick_yield_expr_testlist_comp
  : test comp_for
    { $$ = $1; }
  | test star_COMMA_test opt_COMMA
    { $$ = $1; }
  ;
lambdef // Used in: test
  : LAMBDA varargslist COLON test
  | LAMBDA COLON test
  ;
trailer // Used in: star_trailer
  : LPAR opt_arglist RPAR
    {
      if ($2) {
        $$ = new ArgNode($2);
        delete $2;
        pool.add($$); 
      }
    }
  | LSQB subscriptlist RSQB
    { $$ = NULL; }
  | DOT NAME
    { $$ = NULL; }
  ;
subscriptlist // Used in: trailer
  : subscript star_COMMA_subscript COMMA
  | subscript star_COMMA_subscript
  ;
star_COMMA_subscript // Used in: subscriptlist, star_COMMA_subscript
  : star_COMMA_subscript COMMA subscript
  | %empty
  ;
subscript // Used in: subscriptlist, star_COMMA_subscript
  : DOT DOT DOT
  | test
  | opt_test_only COLON opt_test_only opt_sliceop
  ;
opt_test_only // Used in: subscript
  : test
  | %empty
  ;
opt_sliceop // Used in: subscript
  : sliceop
  | %empty
  ;
sliceop // Used in: opt_sliceop
  : COLON test
  | COLON
  ;
exprlist // Used in: del_stmt, for_stmt, list_for, comp_for
  : expr star_COMMA_expr COMMA
  | expr star_COMMA_expr
  ;
star_COMMA_expr // Used in: exprlist, star_COMMA_expr
  : star_COMMA_expr COMMA expr
  | %empty
  ;
testlist // Used in: expr_stmt, pick_yield_expr_testlist, return_stmt, for_stmt, opt_testlist, yield_expr
  : test star_COMMA_test COMMA
    { $$ = $1; }
  | test star_COMMA_test
    { $$ = $1; }
  ;
dictorsetmaker // Used in: opt_dictorsetmaker
  : test COLON test pick_for_test_test
  | test pick_for_test
  ;
star_test_COLON_test // Used in: star_test_COLON_test, pick_for_test_test
  : star_test_COLON_test COMMA test COLON test
  | %empty
  ;
pick_for_test_test // Used in: dictorsetmaker
  : comp_for
  | star_test_COLON_test opt_COMMA
  ;
pick_for_test // Used in: dictorsetmaker
  : comp_for
  | star_COMMA_test opt_COMMA
  ;
classdef // Used in: decorated, compound_stmt
  : CLASS NAME LPAR opt_testlist RPAR COLON suite
  | CLASS NAME COLON suite
  ;
opt_testlist // Used in: classdef
  : testlist
  | %empty
  ;
arglist // Used in: opt_arglist
  : star_argument_COMMA pick_argument
    {
      if ($1 == NULL) {
        $$ = new std::vector<Node*>();
      }
      else {
        $$ = $1;
      }
      $$->push_back($2);
    }
  ;
star_argument_COMMA // Used in: arglist, star_argument_COMMA
  : star_argument_COMMA argument COMMA
    {
      if ($1 == NULL) {
        $$ = new std::vector<Node*>();
      }
      else {
        $$ = $1;
      }
      $$->push_back($2);
    }
  | %empty
    { $$ = NULL; }
  ;
star_COMMA_argument // Used in: star_COMMA_argument, pick_argument
  : star_COMMA_argument COMMA argument
  | %empty
    {}
  ;
opt_DOUBLESTAR_test // Used in: pick_argument
  : COMMA DOUBLESTAR test
  | %empty
  ;
pick_argument // Used in: arglist
  : argument opt_COMMA
    { $$ = $1; }
  | STAR test star_COMMA_argument opt_DOUBLESTAR_test
    { $$ = NULL; }
  | DOUBLESTAR test
    { $$ = NULL; }
  ;
argument // Used in: star_argument_COMMA, star_COMMA_argument, pick_argument
  : test opt_comp_for
    { $$ = $1; }
  | test EQUAL test
    { $$ = NULL; }
  ;
opt_comp_for // Used in: argument
  : comp_for
  | %empty
  ;
list_iter // Used in: list_for, list_if
  : list_for
  | list_if
  ;
list_for // Used in: listmaker, list_iter
  : FOR exprlist IN testlist_safe list_iter
  | FOR exprlist IN testlist_safe
  ;
list_if // Used in: list_iter
  : IF old_test list_iter
  | IF old_test
  ;
comp_iter // Used in: comp_for, comp_if
  : comp_for
  | comp_if
  ;
comp_for // Used in: testlist_comp, pick_for_test_test, pick_for_test, opt_comp_for, comp_iter
  : FOR exprlist IN or_test comp_iter
    { $$ = NULL; }
  | FOR exprlist IN or_test
    { $$ = NULL; }
  ;
comp_if // Used in: comp_iter
  : IF old_test comp_iter
  | IF old_test
  ;
testlist1 // Used in: atom, testlist1
  : test
  | testlist1 COMMA test
  ;
yield_expr // Used in: pick_yield_expr_testlist, yield_stmt, pick_yield_expr_testlist_comp
  : YIELD testlist
    { $$ = $2; }
  | YIELD
    { $$ = NULL; }
  ;
star_DOT // Used in: pick_dotted_name, star_DOT
  : star_DOT DOT
  | %empty
  ;

%%

#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0) {
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                                       yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
