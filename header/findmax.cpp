#include <iostream>
#include "maximum.h"

using namespace std;

int main(){
	int n1, n2, n3;
	cout << "Enter three number:";
	cin >> n1 >> n2 >> n3;
	cout << "The max value is " << maximum(n1, n2, n3) << endl;
	return 0;
}
