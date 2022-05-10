#include <iostream>
#include <string>

using namespace std;

class student {
private:
	int nHakbun;
	string sName;

public:
	//생성자 : 객체가 생성되면 자동으로 호출되는 함수
	//반환형을 갖고있지 않는다.
	student();
	student(int Hakbun, string Name);

	void show();

};
student::student() {
	this -> nHakbun = 1234;
	this -> sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;

}
//멤버변수를 초기화 할 수 있으며 따라서
//const형 변수와 참조형 변수를 멤버변수로 할 수 있다

student::student(int Hakbun, string Name)
	:nHakbun(Hakbun), sName(Name) //멤버변수(매개변수)
{
	cout << "학번이 등록되었습니다." << endl;
}

void student::show() {
	cout << "학번은" << nHakbun << "입니다" << endl;
	cout << "이름은" << sName << "입니다" << endl << endl;
}
int main(void) {
	student stu1 = student();
	stu1.show();

	student stu2 = student(1111, "JWP");
	stu2.show();
}

//this는 객체 자기자신을 가르킴
//rkskekfkakqktkdkwkckzkxkvkgkgkgkgkgkgkgkgkgkgkgkgkgkgkea;;;d jkd d  kad     kdd ajjjjjf lkfllfk jallllllllld 