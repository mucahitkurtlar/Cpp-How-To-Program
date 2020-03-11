#include <iostream>
#include "Matrix.h"

int main()
{
	Matrix m1;
	Matrix m2(1,2,3,4);
	Matrix m3(m2);

	cout<<"m1: "<<endl;
	m1.print();
	cout<<"m2: "<<endl;
	m2.print();
	cout<<"m3: "<<endl;
	m3.print();

	cout<<"sum: "<< m3.sum()<<endl;
	cout<<"Is m1 positive: "<<m1.isPositive()<<endl;
	cout<<"Is m2 positive: "<<m2.isPositive()<<endl;


	return 0;
}
