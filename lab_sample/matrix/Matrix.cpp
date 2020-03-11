#include <iostream>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(){
  w = x = y = z = 0;
}

Matrix::Matrix(int a, int b, int c, int d){
  w = a;
  x = b;
  y = c;
  z = d;
}

Matrix::Matrix(const Matrix &obj){
  w = obj.w;
  x = obj.x;
  y = obj.y;
  z = obj.z;
}

int Matrix::sum(){
  return w + x + y + z;
}

unsigned int Matrix::isPositive(){
  if(w > 0 && x > 0 && y > 0 && z > 0){
    return 1;
  }
  return 0;
}

void Matrix::print(){
  cout << w << " " << x << endl << y << " " << z << endl;
}
