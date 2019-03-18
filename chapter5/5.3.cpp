#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main3()
{
	//5.5 5.6
	vector<string> scores = {"F","D","C","B","A","A++"};
	
	int x;

	while (cin >> x) {
		string letter;
		if (x < 60) {
			letter = scores[0];
		}
		else {
			letter = scores[(x - 50) / 10];
			if (x != 100) {
				letter += x % 10 > 7 ? "+" : x % 10 < 3 ? "-" : "";
			}
			cout << letter << endl;
		}
	}

	//5.7
	//ivall = ival2;
	//if () {}
	//int ival定义在第一个if外面;
	//if(ival == 0)

	//5.8
	//C++语言规定else与它最近的尚未匹配的if匹配。

	return 0;
}