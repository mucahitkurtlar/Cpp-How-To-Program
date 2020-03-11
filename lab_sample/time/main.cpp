#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time t1(22, 59, 59);
	cout<<"Time 1: ";
	t1.print();
	cout<<"Copy of Time 1 Object: ";
	Time t2(t1);
	t2.print();

	cout<<"Reset (Time 1) ";
	t1.reset(0,0,0);
	t1.print();

	cout<<"Advance (Time 2) ";
	t2.advance(0,0,1);
	t2.print();
	return 0;
}
