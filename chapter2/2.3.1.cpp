#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main8()
{
	//2.15
	//B��D ����Ҫ�������

	//2.16
	//(a) : �Ϸ����� d ��ֵΪ 3.14159��
	//(b) : �Ϸ�����ִ���Զ�ת����int->double����
	//(c) : �Ϸ����ᷢ��С����ȡ��
	//(d) : �Ϸ����ᷢ��С����ȡ��

	//2.17
	int i, &ri = i;
	i = 5;
	ri = 10;
	cout << i << " " << ri << endl;
	//10 10

	return 0;
}