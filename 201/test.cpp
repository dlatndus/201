#include <iostream>
#include<string>
#include<map>

using namespace std;

int main(void) 
{
	map<int, string> class201;
	class201.insert(pair<int, string>(2108, "임수연"));
	class201.insert(pair<int, string>(2109, "장서영"));

	for (auto & iter : class201)
		cout << iter.first << "번 " << iter.second << endl;
}