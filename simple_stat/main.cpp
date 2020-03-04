#include <iostream>
#include "SimpleStat.h"

using namespace std;

int main(){
	int num;
	SimpleStat x;
	cin >> num;
	while(x.addNumber(num)){
		cin >> num;
	}
	cout << x.getAverage() << endl;
	return 0;
}
