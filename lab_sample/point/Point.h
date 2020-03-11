#include <iostream>

using namespace std;

class Point {
public:
  Point(int, int, int);
  Point(const Point&);
  void negate();
  double norm();
  void print();

private:
  int x;
  int y;
  int z;
};
