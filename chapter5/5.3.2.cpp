#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main4()
{
	//5.9 5.10
	/*char i;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	while (cin >> i) {
		if (i == 'a' || 'A') {
			++aCnt;
		}
		else if(i == 'e' || 'E'){
			++eCnt;
		}
		else if (i == 'i' || 'I') {
			++iCnt;
		}
		else if (i == 'o' || 'O') {
			++oCnt;
		}
		else if (i == 'u' || 'U') {
			++uCnt;
		}
	}
	cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt << endl;
	return 0;*/

	//5.12
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch, prech = '\0';

	while (cin >> ch) {
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
			if (prech == 'f') {
				++fiCnt;
			}
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\n':
			++newLineCnt;
			break;
		case 'f':
			if (prech == 'f') {
				++ffCnt;
			}
			break;
		case 'l':
			if (prech == 'f') {
				++flCnt;
			}
			break;
		}
		prech = ch;
	}

	cout << "Number of vowel a(A): \t" << aCnt << '\n'
		<< "Number of vowel e(E): \t" << eCnt << '\n'
		<< "Number of vowel i(I): \t" << iCnt << '\n'
		<< "Number of vowel o(O): \t" << oCnt << '\n'
		<< "Number of vowel u(U): \t" << uCnt << '\n'
		<< "Number of space: \t" << spaceCnt << '\n'
		<< "Number of tab char: \t" << tabCnt << '\n'
		<< "Number of new line: \t" << newLineCnt << '\n'
		<< "Number of ff: \t" << ffCnt << '\n'
		<< "Number of fl: \t" << flCnt << '\n'
		<< "Number of fi: \t" << fiCnt << endl;

	return 0;
	
	//5.13
	//û�м�break;
	//case 'a': aCnt++;break;

	//int ix ������switch����

	//case����Ӧ�ü�ð��
	//case 1: case 3: case 5:....

	//case �����ǳ������ʽ


}