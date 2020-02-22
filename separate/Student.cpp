#include <iostream>
#include "Student.h"

using namespace std;

	Student::Student(string name, int age, string id){
		setName(name);
		setAge(age);
		setId(id);
	}
	
	void Student::setName(string name){
		Student::name = name;
	}
	
	string Student::getName(){
		return name;
	}

	void Student::setAge(int age){
		Student::age = age;
	}

	int Student::getAge(){
		return age;
	}

	void Student::setId(string id){
		Student::id = id;
	}
	
	string Student::getId(){
		return id;
	}

	void Student::displayStudent(){
		cout << "Name\tAge\tId\n" << name << "\t" << age << "\t" << id
			<< endl;
	}
