#include <iostream>

using namespace std;

int squareByValue(int);
int squareByReference(int &);

int main(){
	int n;
	cout << "Please enter an integer:";
	cin >> n;
       	cout << "Square by value is " << squareByValue(n) << endl;
	cout << "The number you entered after the call by value function: " << n << endl;
	cout << "Square by reference is " << squareByReference(n) << endl;
	cout << "The number you entered after the call by reference function: " << n << endl;
	return 0;
}

int squareByValue(int x){
	return x *= x;
}

int squareByReference(int &x){
	return x *= x;
}
