#include <iostream>

using namespace std;

class Ratio {
	public:
		Ratio(int, int);
		int getNum();
		int getDen();
		void setNum(int);
		void setDen(int);
		void print();
		void println();

	private:
		int num, den;
};
