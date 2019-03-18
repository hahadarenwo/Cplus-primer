#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main8()
{
	//5.20 5.21
	string str;
	string prestr;
	bool no_twice = true;

	while (cin >> str) {
		if (str == prestr && isupper(str[0])) {
			cout << str << " occurs twice in succession." << endl;
			no_twice = false;
			break;
		}
		prestr = str;
	}
	if (no_twice) { //if(cin.eof())
		cout << "no word was repeated." << endl;
	}

	return 0;
}