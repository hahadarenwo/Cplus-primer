#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main13()
{
	//2.34
	int i = 0, &r = i;
	auto a = r;

	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;

	const auto f = ci;
	auto &g = ci;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	cout << g << endl;
	cout << "--------------" << endl;
	a = 42; b = 42; c = 42; //d = 42; e = 42; g = 42;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	cout << g << endl;

	//2.35
	const int i = 42;
	auto j = i; const auto &k = i; auto *p = &i;
	const auto j2 = i, &k2 = i;
	//j 是 int，k 是 const int的引用，p 是const int *，j2 是const int，k2 是 const int 的引用。
	return 0;
}