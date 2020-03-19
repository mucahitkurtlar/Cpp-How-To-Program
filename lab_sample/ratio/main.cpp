#include <iostream>
#include "Ratio.h"

using namespace std;

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
  result = Ratio::div(ratio1, ratio0);
  result.print();

  return 0;
}
