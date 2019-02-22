#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main3()
{
	//布尔值不参与运算
	//bool b = true;
	//bool b2 = -b
	//b被提升为int -1 然后转为bool 因为不为0 所以是true;

	//4.4
	//91
	int s = (12 / 3 * 4) + 5 * 15 + 24 % 4 / 2;
	cout << s << endl;

	//4.5
	//-86 -18 0 -2

	//4.6
	//x % 2 == 0 ? "奇数" : "偶数";

	//4.7
	//当计算的结果超出该类型所能表示的范围时就会产生溢出。
	short svalue = 32767; ++svalue; // -32768
	unsigned uivalue = 0; --uivalue;  // 4294967295
	unsigned short usvalue = 65535; ++usvalue;  // 0

	return 0;
}