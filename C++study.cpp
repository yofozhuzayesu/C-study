#include<iostream>
#include<string>
using namespace std;

//函数的占位参数
//返回值类型 函数名 （数据类型）{}

//目前阶段的占位参数用不到，后面课程会用到
//占位参数 还可以有默认参数
void func(int a,int = 10)
{
	cout << a << endl;
}

int main()
{
	func(20);

	system("pause");

	return 0;
}

