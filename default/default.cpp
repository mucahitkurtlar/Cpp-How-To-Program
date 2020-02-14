#include <iostream>

using namespace std;

float volume(float length = 1, float width = 1, float height = 1);

int main(){ 
	cout << "The value of 1 x 1 x 1 box is " << volume() << endl;
	cout << "The value of 5 x 1 x 1 box is " << volume(5) << endl;
	cout << "The value of 4 x 2 x 1 box is " << volume(4, 2) << endl;
	cout << "The value of 2 x 3.2 x 4 box is " << volume(2, 3.2, 4) << endl;
	return 0;
}

float volume(float length, float width, float height){
	return length * width * height;
}
