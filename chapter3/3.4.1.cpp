#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main5()
{
	//3.21
	/*vector<string> v;
	string s;

	while (cin >> s) {
		v.push_back(s);
	}
	for (auto it = v.begin(); it != v.end() && !it->empty(); ++it) {
		cout << *it << (it != v.end() - 1 ? "," : "");
	}

	for (auto i : v) {
		cout << i << endl;
	}*/

	//3.22
	/*vector<string> text;
	text.push_back("aaaa aaa aaaaa");
	text.push_back("");
	text.push_back("bbbbbbbbbbbbbb bbbbbbbbbbb bbbbbbb");

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for (auto &c : *it)
		{
			if (isalpha(c)) {
				c = toupper(c);
			}
		}
	}

	for (auto it : text) {
		cout << it << endl;
	}*/

	//3.23
	vector<int> num{1,2,3,4,5,6,7,8,9,10};
	for (auto it = num.begin(); it != num.end(); ++it) {
		*it = (*it) * 2;
	}
	for (auto c : num) {
		cout << c << endl;
	}

	return 0;
}