#include <iostream>
#include <string>

using namespace std;

/*
class player
{
public:
	player(const char* name, int hp, int attack, int dp);
	~player();
	void pro();

private:
	string name;
	int hp;
	int attack;
	int dp;

};
*/

template <typename T, typename S >
class player {
public:
	player(S name, T hp, T attack, T dp)
		: name(name), hp(hp), attack(attack), dp(dp)
	{

	};

	~player()
	{
	};

	void pro()
	{
		cout << name << endl << hp << endl << attack << endl << dp << endl;
	};


private:
	S name;
	T hp;
	T attack;
	T dp;


};



int main(void)
{
	player<int,string>* p1 = new player<int, string>("¼ö¿¬", 100000, 1000000, 1000000);

	p1->pro();

	delete p1;
	return 0;
}