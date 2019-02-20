#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main7()
{
	//3.27
	//a非法 纬度必须是一个常量表达式
	//b合法
	//c txt_size无法马上得到
	//d数组越界

	//3.28
	//数组的元素会被默认初始化。sa 的元素值全部为空字符串，ia 的元素值全部为0。sa2 的元素值全部为空字符串，ia2 的元素值全部未定义。
	
	//3.29
	/*数组的大小是确定的。
		不能随意增加元素
		不允许拷贝和赋值*/

	//3.30
	//array_size - 1;

	//3.31
	int num[10];
	for (int c = 0; c < 10; ++c) {
		num[c] = c;
	}
	int num2[10];
	for (int c = 0; c < 10; ++c) {
		num2[c] = num[c];
	}
	//3.32
	vector<int> v(10);
	for (int i = 0; i != 10; ++i) {
		v[i] = num[i];
	}
	cout << endl;

	//3.33
	//数组中所有元素的值将会未定义。
	return 0;
}