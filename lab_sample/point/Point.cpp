#include <iostream>
#include "Point.h"
#include <cmath>

using namespace std;

Point::Point(int a, int b, int c){
  x = a;
  y = b;
  z = c;
}

Point::Point(const Point &obj){
  x = obj.x;
  y = obj.y;
  z = obj.z;
}

void Point::negate(){
  x *= -1;
  y *= -1;
  z *= -1;
}

double Point::norm(){
  return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

void Point::print(){
  cout << "(" << x << ", " << y << ", " << z <<")\n";
}
