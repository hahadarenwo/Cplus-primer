#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//4.21
	/*vector<int> ivec{1,2,3,4,5,6,7,8,9};

	for (auto i : ivec) {
		cout << ((i % 2 == 1) ? i*2 : i) << " ";
		//(i & 0x1) ? i*2 : i
	}

	cout << endl;*/

	//4.22
	int grade;
	string finalgrade, finalgrade1;
	while (cin >> grade) {
		finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
		cout << finalgrade << endl;

		if (grade > 90) {
			cout << "high pass";
		}
		else if (grade > 75) {
			cout << "pass";
		}
		else if (grade > 60) {
			cout << "low pass";
		}
		else {
			cout << "fail";
		}
	}
	//if更容易理解 结构清晰啊

	//4.23
	//加法运算符的优先级高于条件运算符。因此要改为
	//string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	
	//4.24
	//如果是左结合
	//那么等同于
	//finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
	//假如此时 grade > 90 ，第一个条件表达式的结果是 "high pass" ，而字符串字面值的类型是 const char *，非空所以为真。因此第二个条件表达式的结果是 "fail"。这样就出现了自相矛盾的逻辑。
	
	return 0;
}