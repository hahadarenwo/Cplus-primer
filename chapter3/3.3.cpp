#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main3()
{
	//3.12
	//合法
	//不合法 类型不一样
	//合法

	//3.13
	//0
	//10个0
	//10个42
	//一个10
	//一个10 一个42
	//10个空
	//10个hi

	//3.14
	int s;
	vector<int> text;
	while (cin >> s) {
		text.push_back(s);
	}

	//3.15
	/*string s;
	vector<string> text;
	while (cin >> s) {
		text.push_back(s);
	}*/

	return 0;
}