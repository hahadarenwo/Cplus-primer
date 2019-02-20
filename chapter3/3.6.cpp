#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//3.43
	int arr[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	for (const int(&row)[4] : arr) {
		for (int col : row) {
			cout << col << " ";
		}
	}
	cout << endl;

	for (size_t i = 0; i != 3; ++i) {
		for (size_t j = 0; j != 4; ++j) {
			cout << arr[i][j] << " ";
		}
	}
	cout << endl;

	for (int(*row)[4] = arr; row != arr + 3; ++row)
		for (int *col = *row; col != *row + 4; ++col) cout << *col << " ";

	cout << endl;

	//3.44
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	using int_array = int[4];

	for (int_array &p : ia) {
		for (int q : p) {
			cout << q << " ";
		}
	}
	cout << endl;

	for (size_t i = 0; i != 3; ++i)
		for (size_t j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
	cout << endl;

	for (int_array* p = ia; p != ia + 3; ++p)
		for (int *q = *p; q != *p + 4; ++q)
			cout << *q << " ";
	cout << endl;

	//3.45
	for (auto& p : ia)
		for (auto q : p)
			cout << q << " ";
	cout << endl;

	for (auto i = 0; i != 3; ++i)
		for (auto j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
	cout << endl;

	for (auto p = ia; p != ia + 3; ++p)
		for (auto q = *p; q != *p + 4; ++q)
			cout << *q << " ";
	cout << endl;

	return 0;
}