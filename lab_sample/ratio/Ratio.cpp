 #include <iostream>
 #include "Ratio.h"

 using namespace std;

 Ratio::Ratio(int n, int d){
   num = n;
   den = d;
   reduce();
 }

 Ratio::Ratio(Ratio &obj){
   num = obj.num;
   den = obj.den;
   reduce();
 }

 void Ratio::add(Ratio &obj){
   int extendedNum = num * obj.den;
   int extendenDen = den * obj.den;
   int extendedObjNum = obj.num * den;
   int extendedObDen = obj.den * den;
   num = extendedNum + extendedObjNum;
   den = extendenDen + extendedObDen;
   reduce();
 }

 void Ratio::mul(Ratio &obj){
   int newNum = num * obj.num;
   int newDen = den * obj.den;
   num = newNum;
   den = newDen;
   reduce();
 }

 void Ratio::div(Ratio &obj){
   int newNum = num * obj.den;
   int newDen = den * obj.num;
   num = newNum;
   den = newDen;
   reduce();
 }

 void Ratio::print(){
   cout << num << "/" << den << endl;
 }

 int Ratio::gcd(int x, int y){
   if(y == 0)
    return x;
   else
    gcd(y, x%y);
 }

 void Ratio::reduce(){
   int gcdResult = gcd(num, den);
   num /= gcdResult;
   den /= gcdResult;
 }
