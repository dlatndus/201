#include <iostream>
#include<string.h>
using namespace std;

class Person {
private:
	string sName;
protected:
	int nAge;
public:
	Person();
	Person(string sName, int age);
	void hi();
};

class Student : public Person {
private:
		int nHakbun = 0;
public:
		Student();
		Student(string name, int age, int nHakbun);
		void study();
};

class CBox {
public:
	double width;
};

class ChildBox : CBox {
public:
	void setWidth(double w) {
	width = w;
	}
};
Student::Student() :Person()
{
	nHakbun = 0;
}

Student::Student(string name, int age, int nHakbun)
	:Person(name, age), nHakbun(nHakbun){}


void Student::study() {
	hi();
	cout << "�й� : " << nHakbun << endl;
	nAge = 100;
}

Person::Person(){
	sName = "�͸�";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age)
	{}

void Person::hi() {
	cout << "�̸� : " <<sName << " ���� : " <<  nAge  << endl;
}

int main(void) {
	Person p1 = Person();
	p1.hi();

	Person* p2 = new Person("������", 50);
	p2->hi();
	delete p2;
	
	Person* p3 = new Person[5];
	p3[0].hi();
	delete []p3;


	cout << "-----------------------------------------------" << endl;

	Student s1 = Student("dsalds",12,123);
	s1.study();

	Student stu;
	//stu.nAge = 100;//error

	return 0;
}