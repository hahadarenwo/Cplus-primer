#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool compare(int *const pb1, int *const pe1, int* const pb2, int* const pe2) {
	if ((pe1 - pb1) != (pe2 - pb2)) {
		return false;
	}
	else {
		for (int *i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j) {
			if (*i != *j) {
				return false;
			}
		}
	}
	return true;
}

int main8()
{
	//3.34
	//将 p1 移动到 p2 的位置。任何情况下都合法。

	//3.35
	int num[5] = {1,2,3,4,5};
	auto *last = end(num);
	for (int *t = begin(num); t < last; ++t) {
		*t = 0;
	}
	for (auto c : num) {
		cout << c << endl;
	}

	//3.36
	int arr1[3] = { 0, 1, 2 };
	int arr2[3] = { 0, 2, 4 };

	if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "The two arrays are equal." << endl;
	else
		cout << "The two arrays are not equal." << endl;

	cout << "==========" << endl;

	vector<int> vec1 = { 0, 1, 2 };
	vector<int> vec2 = { 0, 1, 2 };

	if (vec1 == vec2)
		cout << "The two vectors are equal." << endl;
	else
		cout << "The two vectors are not equal." << endl;


	return 0;
}