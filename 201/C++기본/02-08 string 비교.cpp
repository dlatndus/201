#include <iostream>//cout, endl 사용
#include<stdio.h> //printf사용
#include<string.h>//strcmp사용
#include<string>//std::string클래스 사용

using namespace std;


int main(void)
{
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d \n", strcmp(cI, cJ) == 0); //같은 글자
	printf("%d \n", strcmp(cI, cK) < 0); //사전수 aaa-> abc

	string cppl = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppl == cppJ) << endl;	//같을 글자
	cout << (cppl == cppK) << endl;	//사전순 aaa -> abc
}
