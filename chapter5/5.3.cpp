#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main3()
{
	//5.5 5.6
	vector<string> scores = {"F","D","C","B","A","A++"};
	
	int x;

	while (cin >> x) {
		string letter;
		if (x < 60) {
			letter = scores[0];
		}
		else {
			letter = scores[(x - 50) / 10];
			if (x != 100) {
				letter += x % 10 > 7 ? "+" : x % 10 < 3 ? "-" : "";
			}
			cout << letter << endl;
		}
	}

	//5.7
	//ivall = ival2;
	//if () {}
	//int ival�����ڵ�һ��if����;
	//if(ival == 0)

	//5.8
	//C++���Թ涨else�����������δƥ���ifƥ�䡣

	return 0;
}