#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

class HoYoverse
{
public:
	string gen = "genshin";
	string bung = "3rd";

	void game(){
		cout << gen << endl;
		cout << bung << endl;
		cout << "" << endl;
	}

};

class genshin:public HoYoverse
{
public:
	int type;

	void game() {
		cout << "원신을시작합니다" << endl;
	}
	void chtype() {
		cout << "타입선택(1,2,3) ";
		scanf("%d", &type);
		switch (type)
		{
		case 1: cout << "불" << endl;
			break;
		case 2: cout << "얼음" << endl;
			break;
		case 3: cout << "물" << endl;
			break;
		default:
			break;
		}
	}
	void mmonster() {
		cout << "우와 츄츄족이다 난착하니까 공격따위 하지 않아" << endl;
		cout << "" << endl;
	}
};

class bung3rd : public HoYoverse

{
public:
	int weapon;

	void game() {
		

		cout << "붕괴을시작합니다" << endl;
		
	}
	void chweapon() {
		cout << "무기선택(1,2,3) ";
		scanf("%d", &weapon);
		switch (weapon)
		{
		case 1: cout << "권총" << endl;
			break;
		case 2: cout << "대검" << endl;
			break;
		case 3: cout << "낫" << endl;
			break;
		default:
			break;
		}
	}
	void chstage() {
		cout << "우와 스토리 스테이지다 하지만 난 이벤트가 쌓여있어서 하지 않아" << endl;
		cout << "" << endl;
	}

};

int main(void) {

	HoYoverse p1 = HoYoverse();
	p1.game();

	genshin g1 = genshin();
	g1.game();
	g1.chtype();
	g1.mmonster();

	bung3rd b1 = bung3rd();
	b1.game();
	b1.chweapon();
	b1.chstage();

	


	
	return 0;
}