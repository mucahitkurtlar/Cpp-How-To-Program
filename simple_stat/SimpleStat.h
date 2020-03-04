#include <iostream>

using namespace std;

class SimpleStat {
	public:
		SimpleStat();
		float getAverage();
		bool addNumber(int);
	private:
		bool isNewLargest(int);
		int largest;
		int counter;
		int sum;
};
