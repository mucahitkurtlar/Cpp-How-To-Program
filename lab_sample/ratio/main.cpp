#include <iostream>
#include "Ratio.h"

using namespace std;

Ratio operator*(Ratio &obj0, Ratio &obj1){
  Ratio result(obj0.getNum() * obj1.getNum(), obj0.getDen() * obj1.getDen());
  return result;
}

Ratio operator-(Ratio &obj0, Ratio &obj1){
  int extendedNum0 = obj0.getNum() * obj1.getDen();
  int extendedNum1 = obj1.getNum() * obj0.getDen();
  int extendedDen0 = obj0.getDen() * obj1.getDen();
  Ratio result(extendedNum0 - extendedNum1, extendedDen0);
  return result;
}

Ratio operator-(Ratio &obj){
  Ratio result(-1 * obj.getNum(), obj.getDen());
  return result;
}

bool operator<(Ratio &obj0, Ratio &obj1){
  int extendedNum0 = obj0.getNum() * obj1.getDen();
  int extendedNum1 = obj1.getNum() * obj0.getDen();
  if(extendedNum0 < extendedNum1)
    return true;
  return false;
}

int main() {
  Ratio ratio0(6, 4);
  Ratio ratio1(17, 4);
  Ratio result(1, 1);
  /*
  ratio0.print();
  ratio1.print();
  ratio0.add(ratio1);
  ratio0.print();
  ratio0.mul(ratio1);
  ratio0.print();
  */
  //result = Ratio::div(ratio1, ratio0);
  result = ratio0 - ratio1;
  result.print();
  result = -ratio0;
  result.print();
  ratio0.print();
  ratio1.print();
  if(ratio0 < ratio1)
    cout << "Araba nerde?\n";
  else
    cout << "Yarin verecekler\n";
  return 0;
}
