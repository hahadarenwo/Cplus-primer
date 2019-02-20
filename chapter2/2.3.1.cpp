#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main8()
{
	//2.15
	//B和D 必须要赋予对象

	//2.16
	//(a) : 合法。给 d 赋值为 3.14159。
	//(b) : 合法。会执行自动转换（int->double）。
	//(c) : 合法。会发生小数截取。
	//(d) : 合法。会发生小数截取。

	//2.17
	int i, &ri = i;
	i = 5;
	ri = 10;
	cout << i << " " << ri << endl;
	//10 10

	return 0;
}