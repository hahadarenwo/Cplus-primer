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
	//(a)int 需要定义在外面
	//(b)没有控制循环体
	//(c)++sz去掉

	//5.16
	/*int i = 10;
	while (i > 0) {
		--i;
	}
	for (; i > 0; --i) {
		cout << i;
	}*/
	//倾向于for循环 可控的量多

	//5.17
	vector<int> l{0,1,1,2};
	vector<int> r{0,1,1,2,3,5,8};

	cout << (is_prefix(r,l) ? "yes\n" : "no\n");

	return 0;

}