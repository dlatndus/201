#include <iostream>
#include<string>
#include<map>

using namespace std;

int main(void) 
{
	map<int, string> class201;
	class201.insert(pair<int, string>(2108, "�Ӽ���"));
	class201.insert(pair<int, string>(2109, "�弭��"));

	for (auto & iter : class201)
		cout << iter.first << "�� " << iter.second << endl;
}