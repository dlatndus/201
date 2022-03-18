#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	//ptr3이 num2를 가리킴(&num3 -> &num2)
	ptr3 = ptr2;
	//ptr2이 num1를 가리킴
	ptr2 = ptr1;
	//ptr1이 num1를 가리킴
	ptr1 = ptr2;

	printf("%d %d %d", *ptr1, *ptr2, *ptr3);

	return 0;
}

