#include <iostream>//cout, endl 사용
#include<stdio.h> //printf사용

#include<string>//std::string클래스 사용

using namespace std;


int main(void)
{
	char cI[] = "aaa";
	printf("%s \n", cI); //aaa

	string cppl = "aaa";
	printf("%s \n", cppl.c_str()); //aaa
	cout << cppl.c_str() << endl;
}
