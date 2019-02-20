#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main1()
{
	//3.2
	string s,s1;
	while (getline(cin,s)) {
		cout << s << endl;
	}
	while (cin >> s1) {
		cout << s1 << endl;
	}

	//3.3
	//stringÓöµ½¿Õ°×Ö±½ÓÖÕÖ¹ÇÐ²»±£Áô¿Õ°×
	//getline±£Áô¿Õ°× Óöµ½ÖÕÖ¹·û»òÕß»»ÐÐ½áÊø

	//3.4
	string s2, s3;
	cin >> s2 >> s3;
	if (s2.size() > s3.size()) {
		cout << "1111";
	}
	else if (s2.size() < s3.size()) {
		cout << "2222";

	}
	else {
		cout << "333";
	}

	//3.5
	string result, s4;
	while (cin >> s4) {
		result += s + " ";
	}
	cout << result << endl;

	return 0;
}