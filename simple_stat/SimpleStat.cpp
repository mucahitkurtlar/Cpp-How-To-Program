#include <iostream>
#include "SimpleStat.h"

using namespace std;

SimpleStat::SimpleStat(){
	largest = counter = sum = 0;
}

bool SimpleStat::isNewLargest(int num){
	if(num > largest)
		return true;
	return false;
}

bool SimpleStat::addNumber(int num){
	if(num >= 0){
		sum += num;
		if(isNewLargest(num))
			largest = num;
		counter++;
		return true;
	}
	else
		return false;
}

float SimpleStat::getAverage(){
	if(counter > 0)
		return static_cast<float>(sum) / counter;
	return 0;
}
