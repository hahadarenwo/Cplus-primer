#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main6()
{
	//4.17
	//前置递增运算符将对象本身作为左值返回，而后置递增运算符将对象原始值的副本作为右值返回。


	//4.18
	//将会从第二个元素开始取值，并且最后对 v.end() 进行取值，结果是未定义的。
	
	//4.19
	//判断ptr 不是一个空指针，并且ptr 当前指向的元素的值也为真，然后将ptr指向下一个元素
	//判断 ival 的值为真，并且 (ival + 1) 的值也为真
	//表达式有误。C++并没有规定 <= 运算符两边的求值顺序，应该改为 vec[ival] <= vec[ival + 1]
	
	return 0;
}