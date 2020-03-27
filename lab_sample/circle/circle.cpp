#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

class Circle {
public:
  Circle(float oX = 0, float oY = 0, float r = 0){
    setOriginX(oX);
    setOriginY(oY);
    setRadius(r);
  }

  Circle(Circle &obj){
    setOriginX(obj.getOriginX());
    setOriginY(obj.getOriginY());
  }

  void setOriginX(float oX){
    originX = oX;
  }

  float getOriginX(){
    return originX;
  }

  void setOriginY(float oY){
    originY = oY;
  }

  float getOriginY(){
    return originY;
  }

  void setRadius(float r){
    radius = r;
  }

  float getRadius(){
    return radius;
  }

  float calculateRadius(float oX, float oY, float fX, float fY){
    setRadius(sqrt((fX - oX) * (fX - oX) + (fY - oY) * (fY - oY)));
    return getRadius();
  }

  float calculateArea(){
      return PI * getRadius() * getRadius();
  }

private:
  float originX;
  float originY;
  float radius;
};

int main() {
  float oX, oY, fX, fY;
  cin >> oX >> oY >> fX >> fY;
  Circle cir;
  cout << cir.calculateRadius(oX, oY, fX, fY) << " " << cir.calculateArea() << endl;
  return 0;
}
