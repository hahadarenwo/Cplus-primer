#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main10()
{
	//4.28
	cout << "bool:\t\t" << sizeof(bool) << "bytes" << endl;
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;

	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;

	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;
	
	//4.29
	int x[10];
	int* p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;

	//4.30
	//(a) (sizeof x) + y
	//(b) sizeof(p->mem[i])
	//(c) sizeof(a) < b
	//(d) sizeof(f())

	return 0;
}