#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main4()
{
	//4.8
	/*逻辑与运算符和逻辑或运算符都是先求左侧运算对象的值再求右侧运算对象的值，
	当且仅当左侧运算对象无法确定表达式的结果时才会计算右侧运算对象的值。这种策略称为 短路求值。
	
	相等性运算符未定义求值顺序。*/
	
	//4.9
	//先判断cp是不是一个空指针 如果不为空再判断地址上的值是否为空
	//最后结果为真

	//4.10
	int i;
	while (cin >> i && i != 42) {
		cout << i << endl;
	}

	//4.11
	/*while (a > b && b > c && c > b) {

	}*/

	//4.12
	//先比较j < k返回1或者0 然后判断i是否等于1或者0 结果为bool

	return 0;
}