#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main4()
{
	//1.12
	//��i��-100 �ӵ� 100
	//sum��ֵΪ0
	
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
	//while�Ƚϼ�� for�������

	//1.15
	//�����Ĵ������﷨�������ʹ�������������Щ���Ǳ��������Լ����Ĵ���
	
	return 0;
}