#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main7()
{
	//5.18
	//do���{}
	//Ӧ�ý�ival ������ѭ����
	//Ӧ�ý�ival ������ѭ����

	//5.19
	string str1;
	string str2;
	string rsp;

	do {
		cout << "Please input str1 str2" << endl;
		cin >> str1 >> str2;
		cout << (str1 < str2 ? str1 : str2)
			<< " is less than the other." << "\n\n"
			<< "More ? Enter yes or no";

	} while (rsp[0] == 'y');

	return 0;
}