#include <iostream>
#include "Ratio.h"

using namespace std;

Ratio::Ratio(int n, int d): num(n), den(d){}

int Ratio::getNum(){
	return num;
}

int Ratio::getDen(){
	return den;
	}

void Ratio::setNum(int n){
	num = n;
}

void Ratio::setDen(int d){
	den = d;
}

void Ratio::print(){
	cout << num << "/" << den;
}

void Ratio::println(){
	print();
	cout << endl;
}
