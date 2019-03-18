#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
	//5.23
	int x, y;

	cout << "please input two numbers: " << endl;

	while (cin >> x >> y) {
		try
		{
			if (y == 0) {
				throw exception("divisor is 0");
			}
			cout << x / y << endl;
		}
		catch (exception err)
		{
			cout << err.what() << "\nTry Again Enter y or n" << endl;
			char c;
			cin >> c;
			if (c != 'y') {
				break;
			}
		}
		cout << "please input two numbers: " << endl;
	}

	return 0;
}