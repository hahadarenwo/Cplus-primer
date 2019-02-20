#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main6()
{
	//二分搜索
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
	//因为迭代器支持的运算只有 - ，而没有 + 。end - beg 意思是相距若干个元素，将之除以2然后与beg相加，表示将beg移动到一半的位置。
	return 0;
}