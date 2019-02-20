#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main4()
{
	//3.16

	//3.17
	/*vector<string> v;
	string s;

	while (cin >> s) {
		v.push_back(s);
	}

	for (auto &c : v) {
		for (auto &c1 : c) {
			c1 = toupper(c1);
		}
	}

	for (auto i : v) {
		cout << i << endl;
	}*/

	//3.18
	//²»ºÏ·¨ ¿Õvector
	//vector<int> ivec(10);
	//or  ivec.push_back(42);

	//3.19
	//vector<int> num(10,42);
	//vector<int> num1{42, 42, 42, 42....};
	/*for(int i = 0; i < 10; i++){
	 num[i].push_back(0);
	}*/

	//3.20
	vector<int> s;
	int i;
	while (cin >> i) {
		s.push_back(i);
	}
	for (int i = 0; i < s.size() - 1; i++) {
		cout << s[i] + s[i + 1] << endl;
	}
	
	int n = 0;
	int m = s.size() - 1;
	while (n < m) {
		cout << s[n] + s[m] << endl;
		++n;
		--m;
	}

	return 0;
}