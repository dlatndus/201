#include <iostream>
using namespace std;

class Integer {
public:
	Integer(void) {}
	Integer(int v) : value(v) {}
	
	Integer operator+(const Integer& rhs);

	void print();

private:
	int value;
};

int main(void)
{
	Integer a(1);
	Integer b(2);
	Integer c = a + b;
	c.print();		// 3이 출력되도록
	
	return 0;
}

void Integer::print()
{
	cout << value << endl;
}

Integer Integer::operator+(const Integer& rhs)
{
	Integer temp;
	temp.value = value + rhs.value;
	
	return temp;
}