#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//4.21
	/*vector<int> ivec{1,2,3,4,5,6,7,8,9};

	for (auto i : ivec) {
		cout << ((i % 2 == 1) ? i*2 : i) << " ";
		//(i & 0x1) ? i*2 : i
	}

	cout << endl;*/

	//4.22
	int grade;
	string finalgrade, finalgrade1;
	while (cin >> grade) {
		finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
		cout << finalgrade << endl;

		if (grade > 90) {
			cout << "high pass";
		}
		else if (grade > 75) {
			cout << "pass";
		}
		else if (grade > 60) {
			cout << "low pass";
		}
		else {
			cout << "fail";
		}
	}
	//if��������� �ṹ������

	//4.23
	//�ӷ�����������ȼ�������������������Ҫ��Ϊ
	//string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	
	//4.24
	//���������
	//��ô��ͬ��
	//finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
	//�����ʱ grade > 90 ����һ���������ʽ�Ľ���� "high pass" �����ַ�������ֵ�������� const char *���ǿ�����Ϊ�档��˵ڶ����������ʽ�Ľ���� "fail"�������ͳ���������ì�ܵ��߼���
	
	return 0;
}