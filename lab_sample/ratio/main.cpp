#include <iostream>
#include "Ratio.h"

using namespace std;

Ratio operator*(Ratio &obj0, Ratio &obj1){
  Ratio result(obj0.getNum() * obj1.getNum(), obj0.getDen() * obj1.getDen());
  return result;
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
  result = ratio0 * ratio1;
  result.print();

  return 0;
}
