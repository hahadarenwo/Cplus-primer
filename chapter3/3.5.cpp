#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main7()
{
	//3.27
	//a�Ƿ� γ�ȱ�����һ���������ʽ
	//b�Ϸ�
	//c txt_size�޷����ϵõ�
	//d����Խ��

	//3.28
	//�����Ԫ�ػᱻĬ�ϳ�ʼ����sa ��Ԫ��ֵȫ��Ϊ���ַ�����ia ��Ԫ��ֵȫ��Ϊ0��sa2 ��Ԫ��ֵȫ��Ϊ���ַ�����ia2 ��Ԫ��ֵȫ��δ���塣
	
	//3.29
	/*����Ĵ�С��ȷ���ġ�
		������������Ԫ��
		���������͸�ֵ*/

	//3.30
	//array_size - 1;

	//3.31
	int num[10];
	for (int c = 0; c < 10; ++c) {
		num[c] = c;
	}
	int num2[10];
	for (int c = 0; c < 10; ++c) {
		num2[c] = num[c];
	}
	//3.32
	vector<int> v(10);
	for (int i = 0; i != 10; ++i) {
		v[i] = num[i];
	}
	cout << endl;

	//3.33
	//����������Ԫ�ص�ֵ����δ���塣
	return 0;
}