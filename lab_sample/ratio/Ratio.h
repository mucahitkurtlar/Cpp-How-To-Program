#include <iostream>

using namespace std;

class Ratio {
public:
  Ratio(Ratio &);
  Ratio(int, int);
  void add(Ratio &);
  void mul(Ratio &);
  void div(Ratio &);
  void print();

private:
  int num, den;
  int gcd(int, int);
  void reduce();
};
