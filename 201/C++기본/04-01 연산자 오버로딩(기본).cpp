#include <iostream>
using namespace std;

class Point {
public:
	//생성자
	Point(int _x, int _y);
	Point();

	//연산자 오버로딩
	Point operator+(const Point& rhs);

	void print(void);

private:
	int mX;
	int mY;



};

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

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1 + p2;

	sum.print();

}
