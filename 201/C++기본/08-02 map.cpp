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
	ONEUS["김영조"] = "레이븐";
	ONEUS["이서호"] = "서호";
	ONEUS["김건학"] = "이도";
	ONEUS["이건희"] = "건희";
	ONEUS["여환웅"] = "환웅";
	ONEUS["손동주"] = "시온";

	map<string, string>::iterator iter;
	for (iter = ONEUS.begin(); iter != ONEUS.end(); iter++)
		cout << iter->first << "은 " << iter->second << "이다" << endl; //key  v


		cout << "저의 최애는 " << ONEUS["여환웅"] << endl;

}