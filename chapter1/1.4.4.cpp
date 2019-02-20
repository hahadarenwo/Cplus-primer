#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main6()
{
	//1.17
	//输出 xx occurs 你输入的个数 times
	//输出XX occurs 1 times

	//1.18
	int currVal = 0, val = 0;
	if (cin >> currVal) {
		int cnt = 1;
		while (cin >> val) {
			if (val == currVal) {
				++cnt;
			}
			else {
				cout << currVal << " occurs "
					<< cnt << " times " << endl;
				currVal = val;
				cnt = 1;
			}
		}
		cout << currVal << " occurs "
			<< cnt << " times " << endl;
	}
	
	//1.19
	//源程序已经修改为可以判断

	return 0;
}