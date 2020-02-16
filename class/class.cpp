#include <iostream>

using namespace std;

class Student{
	public:
		string name;
		string id;
		unsigned int age;
		Student(string name, string id, unsigned int age){
			Student::name = name;
			Student::id = id;
			Student::age = age;
		}
		void printStudent(){
			cout << name << "\t" << id << "\t" << age << endl;
		}
};

int main(){
	Student student("Burhan", "18280868", 19);
	student.printStudent();
	return 0;
}
