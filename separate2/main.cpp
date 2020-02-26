#include <iostream>
#include "GradeBook.h"//class'ı kullanabilmek icin header file'ı dahil ediyoruz

using namespace std;

int main(){
	GradeBook myGradeBook("CS101");//nesne olusturup constructor icin deger veriyoruz
	myGradeBook.displayMessage();//nesne icin fonksiyon cagiriyoruz
	return 0;
}
