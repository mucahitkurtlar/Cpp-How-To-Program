#include <iostream>

using namespace std;

class Matrix {
public:
  Matrix();
  Matrix(int, int, int, int);
  Matrix(const Matrix&);
  int sum();
  unsigned int isPositive();
  void print();
private:
  int w, x, y, z;
};
