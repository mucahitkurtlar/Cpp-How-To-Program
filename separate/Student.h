#include <iostream>

using namespace std;

class Student {
	public:
		Student(string, int, string);
		void setName(string);
		string getName();
		void setAge(int);
		int getAge();
		void setId(string);
		string getId();
		void displayStudent();
	private:
		string name;
		int age;
		string id;
};
