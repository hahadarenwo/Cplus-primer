#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main14()
{
	//2.36
	//c��int 
	//bҲ��int&

	//2.37
	//c��int
	//d��int&

	//2.38
	//decltype ������const�����õķ�ʽ�� auto��ͬ��decltype�Ὣ����const�����ñ���������
	int i = 0, &r = i;
	//��ͬ
	auto a = i;
	decltype(i) b = i;

	//��ͬ   d ��һ�� int&
	auto c = r;
	decltype(r) d = r;

	return 0;
}