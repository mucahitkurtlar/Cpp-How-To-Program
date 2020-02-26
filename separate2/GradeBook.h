#include <iostream>

using namespace std;

class GradeBook {
	public:
		GradeBook(string);//Constructor olusturuyoruz. Obje olusturulunca doğrudan calisacak
		void setCourseName(string);//set foksiyonu ile kurs ismi ataniyot
		string getCourseName();//get ile kurs ismini aliyoruz
		void displayMessage();

	private:
		string courseName;//private oldugundan class disindan dogrudan erisim yok
};
