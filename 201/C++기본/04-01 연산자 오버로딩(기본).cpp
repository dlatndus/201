#include <iostream>
using namespace std;

class Point {
private:
	int mX;
	int mY;
public:
	Point(int _x, int _y);
	void print(void);


};

Point::Point(int _x, int _y)
	: mX(_x), mY(_y)
{
	
}

void Point::print(void) 
{
	cout << "mX : "<< mX <<" mY : "<< mY << endl;
}

int main(void)
{
	Point p1(1, 2);
	p1.print();

}
