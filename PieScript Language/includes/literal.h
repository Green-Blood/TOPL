#include "node.h"
#include "poolOfNodes.h"
#include "tableManager.h"
#include <cmath>
#include <iomanip>
#include <string>


class IntLiteral;
class StringLiteral;
class ListLiteral;

class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(long double) const =0;
  virtual const Literal* opPlus(int) const =0;
  virtual const Literal* opPlus(std::string) const =0;

  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(long double) const =0;
  virtual const Literal* opMult(int) const =0;
  virtual const Literal* opMult(std::string) const =0;

  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(long double) const =0;
  virtual const Literal* opSubt(int) const =0;
  virtual const Literal* opSubt(std::string) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(long double) const =0;
  virtual const Literal* opDiv(int) const =0;
  virtual const Literal* opDiv(std::string) const =0;

 virtual const Literal* operator%(const Literal& rhs) const =0;
 virtual const Literal* opMod(long double) const =0;
 virtual const Literal* opMod(int) const =0;
 virtual const Literal* opMod(std::string) const =0;

 virtual const Literal* floorDivide(const Literal& rhs) const =0;
 virtual const Literal* opFlrDiv(long double) const =0;
 virtual const Literal* opFlrDiv(int) const =0;
 virtual const Literal* opFlrDiv(std::string) const =0;

 virtual const Literal* pow(const Literal& rhs) const =0;
 virtual const Literal* opPow(long double) const =0;
 virtual const Literal* opPow(int) const =0;
 virtual const Literal* opPow(std::string) const =0;

 virtual const Literal* EqEqEq(const Literal& rhs) const =0;
 virtual const Literal* opEqEqEqual(long double) const =0;
 virtual const Literal* opEqEqEqual(int) const =0;
 virtual const Literal* opEqEqEqual(std::string) const =0;

 virtual const Literal* operator<<(const Literal& rhs) const =0;
 virtual const Literal* opLshift(long double) const =0;
 virtual const Literal* opLshift(int) const =0;
 virtual const Literal* opLshift(std::string) const =0;

 virtual const Literal* operator>>(const Literal& rhs) const =0;
 virtual const Literal* opRshift(long double) const =0;
 virtual const Literal* opRshift(int) const =0;
 virtual const Literal* opRshift(std::string) const =0;

 virtual const Literal* operator==(const Literal& rhs) const =0;
 virtual const Literal* opEqEqual(long double) const =0;
 virtual const Literal* opEqEqual(int) const =0;
 virtual const Literal* opEqEqual(std::string) const =0;

 virtual const Literal* operator<(const Literal& rhs) const =0;
 virtual const Literal* opLess(long double) const =0;
 virtual const Literal* opLess(int) const =0;
 virtual const Literal* opLess(std::string) const =0;

 virtual const Literal* operator>(const Literal& rhs) const =0;
 virtual const Literal* opGreater(long double) const =0;
 virtual const Literal* opGreater(int) const =0;
 virtual const Literal* opGreater(std::string) const =0;

 virtual const Literal* operator<=(const Literal& rhs) const =0;
 virtual const Literal* opLessEqual(long double) const =0;
 virtual const Literal* opLessEqual(int) const =0;
 virtual const Literal* opLessEqual(std::string) const =0;

 virtual const Literal* operator>=(const Literal& rhs) const =0;
 virtual const Literal* opGreaterEqual(long double) const =0;
 virtual const Literal* opGreaterEqual(int) const =0;
 virtual const Literal* opGreaterEqual(std::string) const =0;

 virtual const Literal* operator!=(const Literal& rhs) const =0;
 virtual const Literal* opNotEqual(long double) const =0;
 virtual const Literal* opNotEqual(int) const =0;
 virtual const Literal* opNotEqual(std::string) const =0;

 virtual const Literal* operator&&(const Literal& rhs) const =0;
 virtual const Literal* opAndEqual(long double) const =0;
 virtual const Literal* opAndEqual(int) const =0;
 virtual const Literal* opAndEqual(std::string) const =0;

 virtual const Literal* operator||(const Literal& rhs) const =0;
 virtual const Literal* opOrEqual(long double) const =0;
 virtual const Literal* opOrEqual(int) const =0;
 virtual const Literal* opOrEqual(std::string) const =0;

 virtual const Literal* operator&(const Literal& rhs) const =0;
 virtual const Literal* opAmpersandEqual(long double) const =0;
 virtual const Literal* opAmpersandEqual(int) const =0;
 virtual const Literal* opAmpersandEqual(std::string) const =0;

 virtual const Literal* operator|(const Literal& rhs) const =0;
 virtual const Literal* opBarEqual(long double) const =0;
 virtual const Literal* opBarEqual(int) const =0;
 virtual const Literal* opBarEqual(std::string) const =0;

 virtual const Literal* operator^(const Literal& rhs) const =0;
 virtual const Literal* opXorEqual(long double) const =0;
 virtual const Literal* opXorEqual(int) const =0;
 virtual const Literal* opXorEqual(std::string) const =0;

  virtual const Literal* eval() const = 0;
  virtual void print() const {
    std::cout << "No Way" << std::endl;
  }
};



static const Literal* literize(std::string);
static const Literal* literize(int);
static const Literal* literize(long double);




class FloatLiteral: public Literal {
public:
  FloatLiteral(long double _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<long double>(lhs) * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(long double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);

    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(long double lhs) const {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::fmod(std::fmod(lhs, val) + val, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::fmod(std::fmod(lhs, val) + val, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* floorDivide(const Literal& rhs) const {
    return rhs.opFlrDiv(val);
  }
  virtual const Literal* opFlrDiv(long double lhs) const {
    if ( val == 0) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opFlrDiv(int lhs) const {
    if ( val == 0) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* pow(const Literal& rhs) const {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(long double lhs) const {
    const Literal* node = new FloatLiteral(std::pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const {
    const Literal* node = new FloatLiteral(std::pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator<<(const Literal& rhs) const {
    return rhs.opLshift(val);
  }
  virtual const Literal* opLshift(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for <<: 'float' and 'float'" << std::endl;
    return NULL;
  }
  virtual const Literal* opLshift(int lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for <<: 'int' and 'float'" << std::endl;
    return NULL;
  }

  virtual const Literal* operator>>(const Literal& rhs) const {
    return rhs.opRshift(val);
  }
  virtual const Literal* opRshift(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for <<: 'float' and 'float'" << std::endl;
    return NULL;
  }
  virtual const Literal* opRshift(int lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for <<: 'int' and 'float'" << std::endl;
    return NULL;
  }

  virtual const Literal* operator==(const Literal& rhs) const {
    return rhs.opEqEqual(val);
  }
  virtual const Literal* opEqEqual(long double lhs) const {
    int equalFlag = 0;
    if (std::abs(lhs - val) < 1e-6) {
      equalFlag = 1;
    }
    const Literal* node = new FloatLiteral(equalFlag);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opEqEqual(int lhs) const {
    const Literal* node = new FloatLiteral(std::floor(val) == lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* EqEqEq(const Literal& rhs) const {
    return rhs.opEqEqEqual(val);
  }
  virtual const Literal* opEqEqEqual(long double lhs) const {
    int equalFlag = 0;
    if (std::abs(lhs - val) < 1e-6) {
      equalFlag = 1;
    }
    const Literal* node = literize(1);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opEqEqEqual(int lhs) const {
    const Literal* node = literize(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator<(const Literal& rhs) const {
    return rhs.opLess(val);
  }
  virtual const Literal* opLess(long double lhs) const {
    const Literal* node = new FloatLiteral(lhs < val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opLess(int lhs) const {
    const Literal* node = new FloatLiteral(lhs < val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator>(const Literal& rhs) const {
    return rhs.opGreater(val);
  }
  virtual const Literal* opGreater(long double lhs) const {
    const Literal* node = new FloatLiteral(lhs > val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opGreater(int lhs) const {
    const Literal* node = new FloatLiteral(lhs > val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator<=(const Literal& rhs) const {
    return rhs.opLessEqual(val);
  }
  virtual const Literal* opLessEqual(long double lhs) const {
    const Literal* node = new FloatLiteral(lhs <= val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opLessEqual(int lhs) const {
    const Literal* node = new FloatLiteral(lhs <= val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator>=(const Literal& rhs) const {
    return rhs.opGreaterEqual(val);
  }
  virtual const Literal* opGreaterEqual(long double lhs) const {
    const Literal* node = new FloatLiteral(lhs >= val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opGreaterEqual(int lhs) const {
    const Literal* node = new FloatLiteral(lhs >= val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator!=(const Literal& rhs) const {
    return rhs.opNotEqual(val);
  }
  virtual const Literal* opNotEqual(long double lhs) const {
    const Literal* node = new FloatLiteral(lhs > val || lhs < val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opNotEqual(int lhs) const {
    const Literal* node = new FloatLiteral(std::floor(lhs) != val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator&&(const Literal& rhs) const {
    return rhs.opAndEqual(val);
  }
  virtual const Literal* opAndEqual(long double lhs) const {

    int accept=1;
    if ((std::abs(lhs) < 1e-6)||(std::abs(val) < 1e-6)) {
      accept=0;
    }
    const Literal* node = new FloatLiteral(accept);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opAndEqual(int lhs) const {
    int accept=1;
    if ((lhs==0)||(std::abs(val) < 1e-6)) {
      accept=0;
    }
    const Literal* node = new FloatLiteral(accept);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator||(const Literal& rhs) const {
    return rhs.opOrEqual(val);
  }
  virtual const Literal* opOrEqual(long double lhs) const {

    int accept=0;
    if ((std::abs(lhs) > 1e-6)||(std::abs(val) > 1e-6)) {
      accept=1;
    }
    const Literal* node = new FloatLiteral(accept);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opOrEqual(int lhs) const {
    int accept=0;
    if ((lhs!=0)||(std::abs(val) > 1e-6)) {
      accept=1;
    }
    const Literal* node = new FloatLiteral(accept);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator&(const Literal& rhs) const {
    return rhs.opAmpersandEqual(val);
  }
  virtual const Literal* opAmpersandEqual(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for &: 'float' and 'float'" << std::endl;
    return NULL;
  }
  virtual const Literal* opAmpersandEqual(int lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for &: 'int' and 'float'" << std::endl;
    return NULL;
  }

  virtual const Literal* operator|(const Literal& rhs) const {
    return rhs.opBarEqual(val);
  }
  virtual const Literal* opBarEqual(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for |: 'float' and 'float'" << std::endl;
    return NULL;
  }
  virtual const Literal* opBarEqual(int lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for |: 'int' and 'float'" << std::endl;
    return NULL;
  }

  virtual const Literal* operator^(const Literal& rhs) const {
    return rhs.opXorEqual(val);
  }
  virtual const Literal* opXorEqual(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for |: 'float' and 'float'" << std::endl;
    return NULL;
  }
  virtual const Literal* opXorEqual(int lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for |: 'int' and 'float'" << std::endl;
    return NULL;
  }


  virtual const Literal* opPlus(std::string lhs) const {
    return literize(lhs + std::to_string(val));
  }
  virtual const Literal* opMult(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opSubt(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opDiv(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opMod(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opFlrDiv(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opPow(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opEqEqEqual(std::string lhs) const {
    return literize(0);
  }
  virtual const Literal* opLshift(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opRshift(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opEqEqual(std::string lhs) const {
    const Literal* node = NULL;
    std::string::size_type sz;
    double tmp = std::stod (lhs,&sz);
    if(lhs.substr(sz).length()==0){
      node = literize(tmp==val);
    }
    else{
      node = literize(0);
    }
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opLess(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opGreater(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opLessEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opGreaterEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opNotEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opAndEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opOrEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opAmpersandEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opBarEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opXorEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const {
    if (std::abs(std::floor(val) - val) < 1e-6 && val < 1e+16) {
      std::cout << val << ".0" << std::endl;
    }
    else {
      std::cout << std::setprecision(12) << val << std::endl;
    }
  }
  long double getValue() const { return val; }
private:
  long double val;
};




class IntLiteral: public Literal {
public:
  IntLiteral(int _val): val(_val),empty(false) {}
  IntLiteral(): empty(true) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(long double lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<long double>(val) + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new IntLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new IntLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(long double lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new IntLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(long double lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    float res = (1.0*lhs) / val;
    if (lhs * val < 0) {
      if (lhs % val != 0) {
        res--;
      }
    }
    const Literal* node = new FloatLiteral(res);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(long double lhs) const {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::fmod(std::fmod(lhs, val) + val, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral((lhs % val + val) % val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* floorDivide(const Literal& rhs) const {
    return rhs.opFlrDiv(val);
  }
  virtual const Literal* opFlrDiv(long double lhs) const {
    if ( val == 0) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(std::floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opFlrDiv(int lhs) const {
    return opDiv(lhs);
  }

  virtual const Literal* pow(const Literal& rhs) const {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(long double lhs) const {
    const Literal* node = new FloatLiteral(std::pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const {
    const Literal* node = new IntLiteral(std::pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator<<(const Literal& rhs) const {
    return rhs.opLshift(val);
  }
  virtual const Literal* opLshift(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for <<: 'float' and 'int'" << std::endl;
    return NULL;
  }
  virtual const Literal* opLshift(int lhs) const {
    const Literal* node = new IntLiteral(lhs * std::pow(2, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator>>(const Literal& rhs) const {
    return rhs.opRshift(val);
  }
  virtual const Literal* opRshift(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for <<: 'int' and 'float'" << std::endl;
    return NULL;
  }
  virtual const Literal* opRshift(int lhs) const {
    const Literal* node = new IntLiteral(lhs / std::pow(2, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator==(const Literal& rhs) const {
    return rhs.opEqEqual(val);
  }
  virtual const Literal* opEqEqual(long double lhs) const {
    int equalFlag = 0;
    if (std::abs(lhs - val) < 1e-6) {
      equalFlag = 1;
    }
    const Literal* node = new IntLiteral(equalFlag);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opEqEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs == val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* EqEqEq(const Literal& rhs) const {
    return rhs.opEqEqEqual(val);
  }
  virtual const Literal* opEqEqEqual(long double lhs) const {
    const Literal* node = new IntLiteral(0);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opEqEqEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs == val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }


  virtual const Literal* operator<(const Literal& rhs) const {
    return rhs.opLess(val);
  }
  virtual const Literal* opLess(long double lhs) const {
    const Literal* node = new IntLiteral(lhs < val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opLess(int lhs) const {
    const Literal* node = new IntLiteral(lhs < val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator>(const Literal& rhs) const {
    return rhs.opGreater(val);
  }
  virtual const Literal* opGreater(long double lhs) const {
    const Literal* node = new IntLiteral(lhs > val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opGreater(int lhs) const {
    const Literal* node = new IntLiteral(lhs > val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator<=(const Literal& rhs) const {
    return rhs.opLessEqual(val);
  }
  virtual const Literal* opLessEqual(long double lhs) const {
    const Literal* node = new IntLiteral(lhs <= val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opLessEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs <= val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator>=(const Literal& rhs) const {
    return rhs.opGreaterEqual(val);
  }
  virtual const Literal* opGreaterEqual(long double lhs) const {
    const Literal* node = new IntLiteral(lhs >= val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opGreaterEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs >= val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator!=(const Literal& rhs) const {
    return rhs.opNotEqual(val);
  }
  virtual const Literal* opNotEqual(long double lhs) const {
    const Literal* node = new IntLiteral(std::floor(lhs) != val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opNotEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs != val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator&&(const Literal& rhs) const {
    return rhs.opAndEqual(val);
  }
  virtual const Literal* opAndEqual(long double lhs) const {
    int accept=1;
    if ((val==0)||(std::abs(lhs) < 1e-6)) {
      accept=0;
    }
    const Literal* node = new IntLiteral(accept);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opAndEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs && val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator||(const Literal& rhs) const {
    return rhs.opOrEqual(val);
  }
  virtual const Literal* opOrEqual(long double lhs) const {
    int accept=0;
    if ((val==1)||(std::abs(lhs) > 1e-6)) {
      accept=1;
    }
    const Literal* node = new IntLiteral(accept);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opOrEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs || val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

 virtual const Literal* operator&(const Literal& rhs) const {
    return rhs.opAmpersandEqual(val);
 }
 virtual const Literal* opAmpersandEqual(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for &: 'float' and 'int'" << std::endl;
    return NULL;
  }
 virtual const Literal* opAmpersandEqual(int lhs) const {
   const Literal* node = new IntLiteral(lhs&val);
   PoolOfNodes::getInstance().add(node);
   return node;
 }

  virtual const Literal* operator|(const Literal& rhs) const {
    return rhs.opBarEqual(val);
  }
  virtual const Literal* opBarEqual(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for |: 'float' and 'int'" << std::endl;
    return NULL;
  }
  virtual const Literal* opBarEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs|val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const {
    return rhs.opXorEqual(val);
  }
  virtual const Literal* opXorEqual(long double lhs) const {
    std::cout << "TypeError: unsupported operand type(s) for |: 'float' and 'int'" << std::endl;
    return NULL;
  }
  virtual const Literal* opXorEqual(int lhs) const {
    const Literal* node = new IntLiteral(lhs^val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }





  virtual const Literal* opPlus(std::string lhs) const {
      return literize(lhs + std::to_string(val));
  }
  virtual const Literal* opMult(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opSubt(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opDiv(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opMod(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opFlrDiv(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opPow(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opEqEqEqual(std::string lhs) const {
    return literize(0);
  }
  virtual const Literal* opLshift(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opRshift(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opEqEqual(std::string lhs) const {
    const Literal* node = NULL;
    std::string::size_type sz;
    int tmp = std::stoi (lhs,&sz);
    if(lhs.substr(sz).length()==0){
      node = literize(tmp==val);
    }
    else{
      node = literize(0);
    }
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opLess(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opGreater(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opLessEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opGreaterEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opNotEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opAndEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opOrEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opAmpersandEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opBarEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }
  virtual const Literal* opXorEqual(std::string lhs) const {
    std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
    return NULL;
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const {
    std::cout << val << std::endl;
  }
  int getValue() const { return val; }
  bool isEmpty() const { return empty; }
private:
  int val;
  bool empty;
};



class StringLiteral: public Literal {
public:
  StringLiteral(const std::string& _val) {
    val=_val.substr(1,_val.length()-2);
  }


 virtual const Literal* operator+(const Literal& rhs) const {
   return rhs.opPlus(val);
 }
 virtual const Literal* opPlus(long double lhs) const {
   return literize(std::to_string(lhs)+val);
 }
 virtual const Literal* opPlus(int lhs) const {
   return literize(std::to_string(lhs)+val);
 }
 virtual const Literal* opPlus(std::string lhs) const {
   return literize(lhs+val);
 }


  virtual const Literal* operator*(const Literal& rhs) const {
   return rhs.opMult(val);
 }
 virtual const Literal* opMult(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opMult(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opMult(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator-(const Literal& rhs) const {
   return rhs.opSubt(val);
 }
 virtual const Literal* opSubt(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opSubt(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opSubt(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator/(const Literal& rhs) const {
   return rhs.opDiv(val);
 }
 virtual const Literal* opDiv(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opDiv(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opDiv(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator%(const Literal& rhs) const {
    return rhs.opMod(val);
 }
 virtual const Literal* opMod(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opMod(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opMod(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* floorDivide(const Literal& rhs) const {
    return rhs.opFlrDiv(val);
 }
 virtual const Literal* opFlrDiv(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opFlrDiv(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opFlrDiv(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* pow(const Literal& rhs) const {
    return rhs.opPow(val);
 }
 virtual const Literal* opPow(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opPow(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opPow(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* EqEqEq(const Literal& rhs) const {
    return rhs.opEqEqEqual(val);
 }
 virtual const Literal* opEqEqEqual(long double lhs) const {
   return literize(0);
 }
 virtual const Literal* opEqEqEqual(int lhs) const {
   return literize(0);
 }
 virtual const Literal* opEqEqEqual(std::string lhs) const {
   return literize(!lhs.compare(val));
 }


  virtual const Literal* operator<<(const Literal& rhs) const {
    return rhs.opLshift(val);
 }
 virtual const Literal* opLshift(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLshift(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLshift(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator>>(const Literal& rhs) const {
    return rhs.opRshift(val);
 }
 virtual const Literal* opRshift(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opRshift(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opRshift(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator==(const Literal& rhs) const {
    return rhs.opEqEqual(val);
 }
 virtual const Literal* opEqEqual(long double lhs) const {
   const Literal* node = NULL;
   std::string::size_type sz;
   double tmp = std::stod (val,&sz);
   if(val.substr(sz).length()==0){
     node = literize(lhs==tmp);
   }
   else{
     node = literize(0);
   }
   PoolOfNodes::getInstance().add(node);
   return node;
 }
 virtual const Literal* opEqEqual(int lhs) const {
   const Literal* node = NULL;

   std::string::size_type sz;
   int tmp = std::stoi (val,&sz);
   if(val.substr(sz).length()==0){
     node = literize(lhs==tmp);
   }
   else{
     node = literize(0);
   }
   PoolOfNodes::getInstance().add(node);
   return node;
 }
 virtual const Literal* opEqEqual(std::string lhs) const {
   return literize(!lhs.compare(val));
 }


  virtual const Literal* operator<(const Literal& rhs) const {
    return rhs.opLess(val);
 }
 virtual const Literal* opLess(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLess(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLess(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator>(const Literal& rhs) const {
    return rhs.opGreater(val);
 }
 virtual const Literal* opGreater(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opGreater(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opGreater(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator<=(const Literal& rhs) const {
    return rhs.opLessEqual(val);
 }
 virtual const Literal* opLessEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLessEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLessEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator>=(const Literal& rhs) const {
    return rhs.opGreaterEqual(val);
 }
 virtual const Literal* opGreaterEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opGreaterEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opGreaterEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator!=(const Literal& rhs) const {
    return rhs.opNotEqual(val);
 }
 virtual const Literal* opNotEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opNotEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opNotEqual(std::string lhs) const {
   return literize(lhs.compare(val)==0?0:1);
 }


  virtual const Literal* operator&&(const Literal& rhs) const {
   return rhs.opAndEqual(val);
 }
 virtual const Literal* opAndEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opAndEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opAndEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator||(const Literal& rhs) const {
    return rhs.opOrEqual(val);
 }
 virtual const Literal* opOrEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opOrEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opOrEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator&(const Literal& rhs) const {
    return rhs.opAmpersandEqual(val);
 }
 virtual const Literal* opAmpersandEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opAmpersandEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opAmpersandEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator|(const Literal& rhs) const {
   return rhs.opBarEqual(val);
 }
 virtual const Literal* opBarEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opBarEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opBarEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator^(const Literal& rhs) const {
    return rhs.opXorEqual(val);
 }
 virtual const Literal* opXorEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opXorEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opXorEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }

  virtual const Literal* eval() const { return this; }
  virtual void print() const {
    std::cout << val << std::endl;
  }
  std::string getValue() const { return val; }
private:
  std::string val;
};




class ListLiteral: public Literal{
public:
  ListLiteral(): val() {}
  ListLiteral(const std::vector<Node*>& _val): val(_val) {}


virtual const Literal* operator+(const Literal& rhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opPlus(long double lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opPlus(int lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opPlus(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator*(const Literal& rhs) const {
   return NULL;
 }
 virtual const Literal* opMult(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opMult(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opMult(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator-(const Literal& rhs) const {
   return NULL;
 }
 virtual const Literal* opSubt(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opSubt(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opSubt(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator/(const Literal& rhs) const {
   return NULL;
 }
 virtual const Literal* opDiv(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opDiv(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opDiv(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator%(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opMod(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opMod(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opMod(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* floorDivide(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opFlrDiv(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opFlrDiv(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opFlrDiv(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* pow(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opPow(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opPow(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opPow(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* EqEqEq(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opEqEqEqual(long double lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opEqEqEqual(int lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opEqEqEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator<<(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opLshift(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLshift(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLshift(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator>>(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opRshift(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opRshift(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opRshift(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator==(const Literal& rhs) const {
    return NULL;
 }
  virtual const Literal* opEqEqual(int lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opEqEqual(long double lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opEqEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator<(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opLess(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLess(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLess(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator>(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opGreater(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opGreater(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opGreater(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator<=(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opLessEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLessEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opLessEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator>=(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opGreaterEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opGreaterEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opGreaterEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator!=(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opNotEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opNotEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opNotEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator&&(const Literal& rhs) const {
   return NULL;
 }
 virtual const Literal* opAndEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opAndEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opAndEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator||(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opOrEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opOrEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opOrEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator&(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opAmpersandEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opAmpersandEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opAmpersandEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator|(const Literal& rhs) const {
   return NULL;
 }
 virtual const Literal* opBarEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opBarEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opBarEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }


  virtual const Literal* operator^(const Literal& rhs) const {
    return NULL;
 }
 virtual const Literal* opXorEqual(long double) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opXorEqual(int) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }
 virtual const Literal* opXorEqual(std::string lhs) const {
   std::cout<<"Semantic Error: Operation not applicable with String"<<std::endl;
   return NULL;
 }



  virtual const Literal* eval() const { return this; }
  virtual void print() const {

    std::cout << "List : [";
    for (auto i = val.begin(); i != val.end(); ++i){
      static_cast<Literal*>(*i)->print();
    }
    std::cout <<"]"<< std::endl;
  }
  std::vector<Node*> getValue() const { return val; }

  Literal* getIValue(int index){
    //std::cout << index<<"   -----   "<<std::endl; //<<val.at(index).getValue()<< " ";
    return static_cast<Literal*>(val.at(index));
  }
  void push(Node* item){
    val.push_back(item);
  }
  void pushAll(Node* list){
    std::vector<Node*> items = static_cast<ListLiteral*>(list)->getValue();
    for (auto i = items.begin(); i != items.end(); ++i){
      this->push(static_cast<Literal*>(*i));
    }
  }
private:
  std::vector<Node*> val;
};


static const Literal* literize(std::string val) {
    return new StringLiteral('"'+val+'"');
}

static const Literal* literize(int val) {
    return new IntLiteral(val);
}

static const Literal* literize(long double val) {
    return new FloatLiteral(val);
}