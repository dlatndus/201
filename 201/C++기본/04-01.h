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
