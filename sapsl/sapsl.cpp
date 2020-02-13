#include <iostream>

using namespace std;

int main(){
	int product, smallest, largest;
	float num0, num1, num2, average, sum;
	cout << "Input threee different integers:\n";
	cin >> num0 >> num1 >> num2;
	if(num1 < (smallest = num0))
		smallest = num1;
	if(num2 < smallest)
		smallest = num2;
	if(num1 > (largest = num0))
		largest = num1;
	if(num2 > largest)
		largest = num2;
	sum = num0 + num1 + num2;
	product = num0 * num1 * num2;
	average = sum / 3;
	cout << "Sum is " << sum << endl << "Average is " << average << endl
		<< "Product is  " << product << endl << "Smallest is "
		<< smallest << endl << "Largest is " << largest << endl;
	return 0;
}
