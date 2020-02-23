#include <iostream>
#include "GradeBook.h"//header file'ı dosyaya dahil ediyoruz

using namespace std;

GradeBook::GradeBook(string name){
	setCourseName(name);
}

void GradeBook::setCourseName(string name){
	courseName = name;
}

string GradeBook::getCourseName(){
	return courseName;
}

void GradeBook::displayMessage(){
	cout << "Welcome to " << courseName << "!\n";
}
