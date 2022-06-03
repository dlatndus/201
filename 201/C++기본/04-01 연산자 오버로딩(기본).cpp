#include <iostream>	// cout, endl 사용
using namespace std;

class Point
{
public:
	// 생성자
	Point(int _x, int _y);
	Point(void);

	// 연산자 오버로딩
	Point operator+(const Point& rhs);

	void print(void);

private:
	int mX;
	int mY;
};

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}
Point::Point() {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY<< ")"<< endl;
}

Point Point::operator+(const Point& rhs)
{
	Point p;		// 매개변수가 없는 생성자 필요
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1 + p2;	//  p1.operator+(p2)
	
	sum.print();			// (4, 6) 출력
	
	return 0;
}


