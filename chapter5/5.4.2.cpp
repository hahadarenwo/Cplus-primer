#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_prefix(vector<int> lhs, vector<int> rhs) {
	if (lhs.size() > rhs.size()) {
		return is_prefix(rhs,lhs);
	}
	for (unsigned i = 0; i != lhs.size(); ++i) {
		if (lhs[i] != rhs[i]) {
			return false;
		}
	}
	return true;
}

int main6()
{
	//5.15
	//(a)int ��Ҫ����������
	//(b)û�п���ѭ����
	//(c)++szȥ��

	//5.16
	/*int i = 10;
	while (i > 0) {
		--i;
	}
	for (; i > 0; --i) {
		cout << i;
	}*/
	//������forѭ�� �ɿص�����

	//5.17
	vector<int> l{0,1,1,2};
	vector<int> r{0,1,1,2,3,5,8};

	cout << (is_prefix(r,l) ? "yes\n" : "no\n");

	return 0;

}