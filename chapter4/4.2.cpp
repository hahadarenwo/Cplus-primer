#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main3()
{
	//����ֵ����������
	//bool b = true;
	//bool b2 = -b
	//b������Ϊint -1 Ȼ��תΪbool ��Ϊ��Ϊ0 ������true;

	//4.4
	//91
	int s = (12 / 3 * 4) + 5 * 15 + 24 % 4 / 2;
	cout << s << endl;

	//4.5
	//-86 -18 0 -2

	//4.6
	//x % 2 == 0 ? "����" : "ż��";

	//4.7
	//������Ľ���������������ܱ�ʾ�ķ�Χʱ�ͻ���������
	short svalue = 32767; ++svalue; // -32768
	unsigned uivalue = 0; --uivalue;  // 4294967295
	unsigned short usvalue = 65535; ++usvalue;  // 0

	return 0;
}