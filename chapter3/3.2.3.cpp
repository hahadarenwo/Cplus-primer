#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main2()
{
	//3.6
	string s = "this is a string";
	for (auto &c : s) {
		c = 'X';
	}
	cout << s << endl;

	//3.7
	/*string s = "this is a string";
	for (char &c : s) {
		c = 'X';
	}
	cout << s;*/

	//3.8
	//forѭ������ ��ֱ�Ӳ�������

	//3.9
	//���Ϸ� �±�����˿��ַ���

	//3.10
	string s1 = "hgelo,,wporlds!";
	string result;
	for (auto c : s1) {
		if (!ispunct(c)) {
			result += c;
		}
	}
	cout << result << endl;

	//3.11
	//Ҫ����forѭ���еĴ��������Ƿ�Ϸ���c��string �������ַ������ã�s�ǳ�����������forѭ���еĴ������¸�c��ֵ�ͻ�Ƿ���������ı�c��ֵ����ô�Ϸ���
	return 0;
}