#include <iostream>

using namespace std;

class Ratio {
  friend Ratio operator*(const Ratio &, const Ratio &);
  friend Ratio operator-(const Ratio &, const Ratio &);
  friend Ratio operator-(const Ratio &);
  friend bool operator<(const Ratio &, const Ratio &);
  
public:
  Ratio(Ratio &);
  Ratio(int, int);
  int getNum();
  int getDen();
  void add(Ratio &);
  void mul(Ratio &);
  void div(Ratio &);
  void print();
  static Ratio div(Ratio &, Ratio &);
private:
  int num, den;
  int gcd(int, int);
  void reduce();
};
