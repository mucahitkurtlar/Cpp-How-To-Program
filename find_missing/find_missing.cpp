#include <iostream>
#define SIZE 9

using namespace std;

void sort(int[]);
void printArr(int[]);
//int findMissing(int&);

int main(){
	int arr[] = {1, 3, 5, 0, 9, 6, 4, 8, 7};
#ifndef SIZE
	cout << "SIZE is not defined!\n";
	return 2;
#endif
//	cout << findMissing(arr) << endl;
	sort(arr);
	printArr(arr);
	return 0;
}

void sort(int arr[]){
	int temp;
	for(int i = 0; i < SIZE - 1; i++){
		for(int j = 0; j < SIZE - 1; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArr(int arr[]){
	for(int i = 0; i < SIZE; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
