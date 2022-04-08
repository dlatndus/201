#include <iostream>//cout, endl 사용
#include<stdio.h> //printf사용
#include<string.h>//strlen사용
#include<string>//std::string클래스 사용

using namespace std;


int main(void)
{
	char cI[] = "aaa";
	printf("%d \n", strlen(cI)); //3

	string cppl = "aaa";
	cout << cppl.size() << endl;	//3
	cout << cppl.length() << endl;	//size()와 같은 결과
}
