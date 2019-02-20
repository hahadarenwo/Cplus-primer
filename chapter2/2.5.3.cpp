#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main14()
{
	//2.36
	//c是int 
	//b也是int&

	//2.37
	//c是int
	//d是int&

	//2.38
	//decltype 处理顶层const和引用的方式与 auto不同，decltype会将顶层const和引用保留起来。
	int i = 0, &r = i;
	//相同
	auto a = i;
	decltype(i) b = i;

	//不同   d 是一个 int&
	auto c = r;
	decltype(r) d = r;

	return 0;
}