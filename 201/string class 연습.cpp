#include <iostream>
#include <cstring>

using namespace std;

class m_string
{
private:
	int _Mysize;
	char* _Myptr;

public:
	m_string();
	m_string(const char* _str);
	m_string(const m_string& _str);
	~m_string();

	int size();
	int length();
	int* c_str();
	m_string& operator= (const m_string& _str);
	m_string& operator+= (const m_string& _str);
	int operator== (const m_string& _str);
	m_string operator+(const m_string& _str);

	friend ostream& operator<< (ostream& os, const m_string& ms);
};

m_string::m_string()
{
	_Mysize = 0;
	_Myptr = NULL;

}

m_string::m_string(const char* _str)
{
	_Mysize = strlen(_str) + 1;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, _str);

}

m_string::m_string(const m_string& _str)
{
	_Mysize = _str._Mysize;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, _str._Myptr);
}

m_string::~m_string()
{
	if (_Myptr != NULL)
		delete[]_Myptr;

}

int m_string::size()
{
	return strlen(_Myptr);
	 
}

int m_string::length()
{
	return strlen(_Myptr);
}

int* m_string::c_str()
{
	int* asdf = new int;

	asdf = (int*)&_Myptr;
	return asdf - 2;

}

m_string& m_string::operator= (const m_string& _str)
{
	if (_Myptr != NULL)
		delete[]_Myptr;
	_Mysize = _str._Mysize;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, _str._Myptr);
	return *this;
}

m_string& m_string::operator+= (const m_string& _str)
{
	char* temp = new char[_Mysize + _str._Mysize - 1];
	strcpy(temp, _Myptr);
	strcat(temp, _str._Myptr);

	if (_Myptr != NULL)
		delete[]_Myptr;
	_Myptr = temp;
	return *this;
}

int m_string::operator== (const m_string& _str)
{
	if (strcmp(_Myptr, _str._Myptr) == 0)
		return 0;
	else
		return -1;
}

m_string m_string::operator+ (const m_string& _str)
{
	char* temp = new char[_Mysize + _str._Mysize - 1];
	strcpy(temp, _Myptr);
	strcat(temp, _str._Myptr);

	m_string result(temp);
	delete[]temp;

	return result;
}


ostream& operator<< (ostream& os, const m_string& ms)
{
	os << ms._Myptr;
	return os;
}

/*
istream& operator>> (istream& is, m_string& _str)
{
	char str[100];
	is >> str;
	_str = m_string(str);
	return is;
}
*/
int main(void) {

	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << &str2 << endl;
	cout <<  str2.c_str() << endl;

	cout << &str1 << endl;
	cout << str1.c_str() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	
	return 0;
}


