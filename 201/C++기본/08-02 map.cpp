#include<iostream>
#include<string>
#include<map>

using namespace std;

//김영조 - 레이븐
//이서호 - 서호
//김건학 - 이도
//이건희 - 건희
//여환웅 - 환웅
//손동주 - 시온

void main(void)
{
	map<string, string> ONEUS; //ONEUS
	ONEUS.insert(pair<string, string>("김영조", "레이븐"));
	ONEUS.insert(pair<string, string>("이서호", "서호"));
	ONEUS.insert(pair<string, string>("김건학", "이도"));
	ONEUS.insert(pair<string, string>("이건희", "건희"));
	ONEUS.insert(pair<string, string>("여환웅", "환웅"));
	ONEUS.insert(pair<string, string>("손동주", "시온"));

	map<string, string>::iterator iter;
	for (iter = ONEUS.begin(); iter != ONEUS.end(); iter++)
		cout << (*iter).first << "은 " << (*iter).second << "이다" << endl; //key  v
	map<string, string>::iterator first_love = ONEUS.find("여환웅");
	cout << "저의 최애는 " << (*first_love).second << endl;

}