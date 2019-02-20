#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main4()
{
	//1.12
	//把i从-100 加到 100
	//sum的值为0
	
	//1.13
	int sum = 0;
	for (int i = 50; i < 100; ++i) {
		sum += i;
	}
	cout << sum << endl;

	sum = 0;
	for (int i = 10; i > 0; --i) {
		sum += i;
	}
	cout << sum << endl;

	int a, b;
	sum = 0;
	cout << "Please enter two numbers : ";
	cin >> a >> b;
	if (b > a) {
		int x = a;
		a = b;
		b = x;
	}
	for (; a >= b; --a) {
		sum += a;
	}
	cout << sum;

	//1.14
	//while比较简洁 for更加灵活

	//1.15
	//常见的错误有语法错误、类型错误、声明错误，这些都是编译器可以检查出的错误。
	
	return 0;
}