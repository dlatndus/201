#include <iostream>
#include "04-01.h"
using namespace std;


Point::Point(int _x, int _y)
	: mX(_x), mY(_y)
{
	
}

Point::Point(){}

void Point::print(void) 
{
	cout << "mX : "<< mX <<" mY : "<< mY << endl;
}

Point Point::operator+(const Point& rhs)//=>오른쪽에 있는 객체 말함
{
	Point p;//매개변수 없는 생성자가 필요
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}

