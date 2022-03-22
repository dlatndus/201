#include <stdio.h>

int main(void)
{
	int a, b, c = 0;
	a = ++c; //c먼저 1증가  a=1 b=0 c=1
	b = c++; //b에 대입하고 c 증가 a=1 b=1 c=2
	printf("%d %d %d\n", a, b, ++c); //a=1 b=1 c=3

	return 0;
}




