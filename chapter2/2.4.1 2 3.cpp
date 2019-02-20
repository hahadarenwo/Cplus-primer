#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main12()
{
	//2.27
	//int i = -1, &r = 0;         // 不合法, r 必须引用一个对象
	//int *const p2 = &i2;        // 合法
	//const int i = -1, &r = 0;   // 合法
	//const int *const p3 = &i2;  // 合法
	//const int *p1 = &i2;        // 合法
	//const int &const r2;        // 不合法, r2 是引用，引用没有顶层 const
	//const int i2 = i, &r = i;   // 合法

	//2.28
	//int i, *const cp;       // 不合法, const 指针必须初始化
	//int *p1, *const p2;     // 不合法, const 指针必须初始化
	//const int ic, &r = ic;  // 不合法, const int 必须初始化
	//const int *const p3;    // 不合法, const 指针必须初始化
	//const int *p;           // 合法. 一个指针，指向 const int

	//2.29
	//i = ic;     // 合法, 常量赋值给普通变量
	//p1 = p3;    // 不合法, p3 是const指针不能赋值给普通指针
	//p1 = &ic;   // 不合法, 普通指针不能指向常量
	//p3 = &ic;   // 合法, p3 是常量指针且指向常量
	//p2 = p1;    // 合法, 可以将普通指针赋值给常量指针
	//ic = *p3;   // 合法, 对 p3 取值后是一个 int 然后赋值给 ic

	//2.30
	//v2 是顶层const，p2 是底层const，p3 既是顶层const又是底层const，r2 是底层const。

	//2.31
	//r1 = v2; // 合法, 顶层const在拷贝时不受影响
	//p1 = p2; // 不合法, p2 是底层const，如果要拷贝必须要求 p1 也是底层const
	//p2 = p1; // 合法, int* 可以转换成const int*
	//p1 = p3; // 不合法, p3 是一个底层const，p1 不是
	//p2 = p3; // 合法, p2 和 p3 都是底层const，拷贝时忽略掉顶层const

	return 0;
}