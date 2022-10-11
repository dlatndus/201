#include<iostream>
#include<vector>
using namespace std;
int main() {

	vector<int> v;
	int input, tot = 0;
	double avg;

	

	for (int i = 0; i < 5; i++) {
		cin >> input;
		v.push_back(input);
	}

	vector<int>::iterator ptr;

	for (ptr = v.begin(); ptr != v.end(); ptr++) {
		cout << "v : " << *ptr << endl;
		tot += *ptr;
	}
	cout << "tot : " << tot << endl;
	cout << "avg : " << tot/5 << endl;


	return 0;
}