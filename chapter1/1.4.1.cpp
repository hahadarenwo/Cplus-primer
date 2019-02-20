#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main3()
{
	//1.9
	int i = 50;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		++i;
	}
	cout << sum << endl;

	//1.10
	i = 10;
	sum = 0;
	while(i > 0){
		sum += i;
		--i;
	}
	cout << sum << endl;

	//1.11
	int a, b;
	sum = 0;
	cout << "Please enter two numbers : ";
	cin >> a >> b;
	if (b > a) {
		int x = a;
		a = b;
		b = x;
	}
	while (a >= b) {
		sum += a;
		--a;
	}
	cout << sum;

	return 0;
}