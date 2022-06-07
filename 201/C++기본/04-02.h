#include <iostream>
using namespace std;

class Integer {
public :
	Integer(void) {}
	Integer(int v) : value(v) {}
	
	void print();
	Integer operator+(const Integer& rhs);

private :
	int value;
};

