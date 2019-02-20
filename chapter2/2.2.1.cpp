#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main4()
{
	//2.9
	//a 不能在输入的时候初始化
	/*int input_value;
	cin >> input_value;*/

	//b 用列表初始化内置类型的变量时，如果存在丢失信息的风险，则编译器将报错。
	// double i = { 3.14 };

	//c 在这里 wage 是未定义的，应该在此之前将其定义。
	/*double wage;
	double salary = wage = 9999.99;*/

	//d 不报错 但是小数部分丢失
	//double i = 3.14


	//2.10
	//global_str 和 global_int 是全局变量，
	//所以初值分别为空字符串和 0 。 
	//local_int 是局部变量并且没有初始化，它的初值是未定义的。
	//local_str 是 string 类的对象，它的值由类确定，为空字符串。

	return 0;
}