#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main6()
{
	//��������
	/*vector<int> text;
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;
	int sought = 5;

	while (mid != end && *mid != sought) {
		if (sought < *mid) {
			end = mid;
		}
		else {
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}*/

	//3.24
	vector<int> s;
	int i;
	while (cin >> i) {
		s.push_back(i);
	}
	for (auto it = s.begin(); it != s.end() - 1; ++it) {
		cout << *it + *(it + 1) << endl;
	}

	auto n = s.begin();
	auto m = s.end() - 1;
	while (n < m) {
		cout << *n + *m << endl;
		++n;
		--m;
	}

	//3.25
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++*(scores.begin() + grade / 10);
		}
	}
	for (auto c : scores) {
		cout << c << endl;
	}

	//3.26
	//��Ϊ������֧�ֵ�����ֻ�� - ����û�� + ��end - beg ��˼��������ɸ�Ԫ�أ���֮����2Ȼ����beg��ӣ���ʾ��beg�ƶ���һ���λ�á�
	return 0;
}