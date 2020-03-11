#include <iostream>
#include <cmath>
#include "Point.h"

int main()
{
	Point p1(3,-4,5);
	Point p2(p1);
	p2.print();
	p2.negate();
	p2.print();
	cout<<p1.norm()<<endl;

	return 0;
}
