#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main2()
{
	//3.6
	string s = "this is a string";
	for (auto &c : s) {
		c = 'X';
	}
	cout << s << endl;

	//3.7
	/*string s = "this is a string";
	for (char &c : s) {
		c = 'X';
	}
	cout << s;*/

	//3.8
	//for循环更好 不直接操作索引

	//3.9
	//不合法 下标访问了空字符串

	//3.10
	string s1 = "hgelo,,wporlds!";
	string result;
	for (auto c : s1) {
		if (!ispunct(c)) {
			result += c;
		}
	}
	cout << result << endl;

	//3.11
	//要根据for循环中的代码来看是否合法，c是string 对象中字符的引用，s是常量。因此如果for循环中的代码重新给c赋值就会非法，如果不改变c的值，那么合法。
	return 0;
}