#include<iostream>
#include<string>
using namespace std;

//常量引用主要用来修饰形参，防止误操作

//打印输出
void fun(const int& val)
{
	//val = 1000;
	cout << val << endl;
}
int main()
{
	//int a = 10;
	//int& b = 10;//引用必须引用一块合法的内存空间
	//const int & b = 10;//加上const,编译器将代码修改 int tremp = 10; const int & ref = 10
	//ref = 20;//加入const之后 变为只读，不可修改

	int a = 10;
	fun(a);
	system("pause");
	return 0;
}

