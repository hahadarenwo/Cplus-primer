#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main12()
{
	//2.27
	//int i = -1, &r = 0;         // ���Ϸ�, r ��������һ������
	//int *const p2 = &i2;        // �Ϸ�
	//const int i = -1, &r = 0;   // �Ϸ�
	//const int *const p3 = &i2;  // �Ϸ�
	//const int *p1 = &i2;        // �Ϸ�
	//const int &const r2;        // ���Ϸ�, r2 �����ã�����û�ж��� const
	//const int i2 = i, &r = i;   // �Ϸ�

	//2.28
	//int i, *const cp;       // ���Ϸ�, const ָ������ʼ��
	//int *p1, *const p2;     // ���Ϸ�, const ָ������ʼ��
	//const int ic, &r = ic;  // ���Ϸ�, const int �����ʼ��
	//const int *const p3;    // ���Ϸ�, const ָ������ʼ��
	//const int *p;           // �Ϸ�. һ��ָ�룬ָ�� const int

	//2.29
	//i = ic;     // �Ϸ�, ������ֵ����ͨ����
	//p1 = p3;    // ���Ϸ�, p3 ��constָ�벻�ܸ�ֵ����ָͨ��
	//p1 = &ic;   // ���Ϸ�, ��ָͨ�벻��ָ����
	//p3 = &ic;   // �Ϸ�, p3 �ǳ���ָ����ָ����
	//p2 = p1;    // �Ϸ�, ���Խ���ָͨ�븳ֵ������ָ��
	//ic = *p3;   // �Ϸ�, �� p3 ȡֵ����һ�� int Ȼ��ֵ�� ic

	//2.30
	//v2 �Ƕ���const��p2 �ǵײ�const��p3 ���Ƕ���const���ǵײ�const��r2 �ǵײ�const��

	//2.31
	//r1 = v2; // �Ϸ�, ����const�ڿ���ʱ����Ӱ��
	//p1 = p2; // ���Ϸ�, p2 �ǵײ�const�����Ҫ��������Ҫ�� p1 Ҳ�ǵײ�const
	//p2 = p1; // �Ϸ�, int* ����ת����const int*
	//p1 = p3; // ���Ϸ�, p3 ��һ���ײ�const��p1 ����
	//p2 = p3; // �Ϸ�, p2 �� p3 ���ǵײ�const������ʱ���Ե�����const

	return 0;
}