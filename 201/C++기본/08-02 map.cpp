#include<iostream>
#include<string>
#include<map>

using namespace std;

//�̼�ȣ - ��ȣ
//����� - �̵�
//�̰��� - ����
//��ȯ�� - ȯ��
//�յ��� - �ÿ�

void main(void)
{
	map<string, string> ONEUS; //ONEUS
	ONEUS.insert(pair<string, string>("�̼�ȣ", "��ȣ"));
	ONEUS.insert(pair<string, string>("�����", "�̵�"));
	ONEUS.insert(pair<string, string>("�̰���", "����"));
	ONEUS.insert(pair<string, string>("��ȯ��", "ȯ��"));
	ONEUS.insert(pair<string, string>("�յ���", "�ÿ�"));
	

	map<string, string>::iterator iter;
	for (iter = ONEUS.begin(); iter != ONEUS.end(); iter++)
		cout << iter->first << "�� " << iter->second << "�̴�" << endl; //key  v
	cout << endl;

	ONEUS.erase("�յ���");

	for (iter = ONEUS.begin(); iter != ONEUS.end(); iter++)
		cout << iter->first << "�� " << iter->second << "�̴�" << endl; //key  v

}