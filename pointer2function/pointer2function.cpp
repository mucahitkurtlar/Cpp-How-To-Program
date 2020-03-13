#include <iostream>

using namespace std;

int add(int, int);
int sub(int, int);
int calculator(int (*)(int, int), int, int);

int main(){
	cout << "5 + 3 = " << calculator(add, 3, 5) << endl;
	cout << "10 - 7 = " << calculator(sub, 10, 7) << endl;
	return 0;

}

int add(int x, int y){
	return x + y;
}

int sub(int x, int y){
	return x- y;
}

int calculator(int (*func)(int, int), int x, int y){
	int result;
	result = (*func)(x, y);
	return result;
}
