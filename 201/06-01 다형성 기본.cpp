#include<iostream>

using namespace std;

class Animal 
{
public :
	void eat() { cout << "�����Ծ�" << endl; }
	void roar() { cout << "����¢��" << endl; }
	void walk() { cout << "�����ɾ�" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal
{
public:
	void roar(void) { cout << "����" << endl; }
};

class Dog : public Animal
{
public:
	void roar(void) { cout << "�۸�" << endl; }
};

void main(void)
{
	Animal* animal = new Animal();
	animal->roar(); //����¢��
	delete animal;

	animal = new Tiger();
	animal->roar(); //����¢��(���� X)
	delete animal;

	animal = new Dog();
	animal->roar(); //����¢��(���� X)
	delete animal;
}