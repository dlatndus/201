#include<iostream>
#include<string>
#include<map>

using namespace std;

//�迵�� - ���̺�
//�̼�ȣ - ��ȣ
//����� - �̵�
//�̰��� - ����
//��ȯ�� - ȯ��
//�յ��� - �ÿ�

void main(void)
{
	map<string, string> ONEUS; //ONEUS
	ONEUS["�迵��"] = "���̺�";
	ONEUS["�̼�ȣ"] = "��ȣ";
	ONEUS["�����"] = "�̵�";
	ONEUS["�̰���"] = "����";
	ONEUS["��ȯ��"] = "ȯ��";
	ONEUS["�յ���"] = "�ÿ�";

	map<string, string>::iterator iter;
	for (iter = ONEUS.begin(); iter != ONEUS.end(); iter++)
		cout << iter->first << "�� " << iter->second << "�̴�" << endl; //key  v


		cout << "���� �־ִ� " << ONEUS["��ȯ��"] << endl;

}