#include <iostream>
#include <string>

using namespace std;

struct Sale_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	/*int i, &ri = i;
	i = 5;
	ri = 10;
	cout << i << " " << ri << endl;*/

	/*int ival = 42;
	int *p = &ival;
	cout << *p << endl;

	*p = 0;
	cout << *p;

	p = &ival;
	cout << p << endl;*/

	//生成空指针
	//int *p1 = nullptr;//c++11 推荐
	//int *p2 = 0;
	//int *p3 = NULL;

	/*double obj = 3.14, *pd = &obj;
	double *pv = &obj;
	pv = pd;

	cout << *pv << endl;
	cout << pv << endl;*/

	/*int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;

	cout << "The Value of ival\n"
		 << ival << "\n"
		 << *pi << "\n"
		 << **ppi << endl;*/

	//const int aaa = 512;

	////类型别名
	//typedef double wages;
	//typedef wages base, *p;

	///*using SI = Sales_item;*/

	//auto i = 0, *p = &i;
	////auto sz = 0, pi = 3.14; 错误 类型不一致 不能用auto

	//struct Sales_data {
	//	string bookNo;
	//	unsigned units_sold = 0;
	//	double revenue = 0.0;
	//};

	Sale_data total;
	double totalPrice;
	if (cin >> total.bookNo >> total.units_sold >> totalPrice)
	{
		total.revenue = total.units_sold * totalPrice;

		Sale_data trans;
		double transPrice;
		while (cin >> trans.bookNo >> trans.units_sold >> transPrice)
		{
			trans.revenue = trans.units_sold * transPrice;

			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
				if (total.units_sold != 0)
					cout << total.revenue / total.units_sold << endl;
				else
					cout << "(no sales)" << endl;

				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}

		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
		if (total.units_sold != 0)
			cout << total.revenue / total.units_sold << endl;
		else
			cout << "(no sales)" << endl;

		return 0;
	}
	else
	{
		cerr << "No data?!" << endl;
		return -1;  // indicate failure
	}

	return 0;
}