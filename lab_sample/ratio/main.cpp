#include <iostream>
#include "Ratio.h"

using namespace std;

int main() {
  Ratio ratio0(6, 4);
  Ratio ratio1(17, 4);
  ratio0.print();
  ratio1.print();
  ratio0.add(ratio1);
  ratio0.print();
  ratio0.mul(ratio1);
  ratio0.print();
  ratio1.div(ratio0);
  ratio1.print();
  return 0;
}
