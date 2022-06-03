#include <iostream>
#include<string>
using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	CBank(string name, string account, int balance);
	void deposit(int amount);
};

CBank::CBank(string name, string account, int balance) 
	:name(name), account(account), balance(balance)
{
	cout << "예금주 : " << name << " 계좌번호 : " << account << " 잔액 : " << balance << endl;
}

void CBank::deposit(int amount) {
	cout << "입금된 금액은" << amount << "원 입니다" << endl;
	balance += amount;
}

int main(void) {
	CBank c1 = CBank("as", "as", 1000);
	c1.deposit(1000);

	return 0;
}
