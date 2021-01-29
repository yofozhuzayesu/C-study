#include<iostream>
#include<string>
using namespace std;


//引用做函数的返回值



//1.不要返回局部变量的引用

int& test01()//引用做返回值的函数定义方式
{
	int a = 10;//局部变量存放在四区中的栈区
	return a;
}

int& test02()//引用做返回值的函数定义方式
{
	static int a = 10;//静态变量存放在全局区，在程序结束后释放
	return a;
}

int main()
{
	//int &ref = test01();
	//cout << ref << endl;//第一次编译器做了保存
	//cout << ref << endl;//第二次局部变量的内存已经被释放


	int &ref2 = test02();
	cout << ref2 << endl;//全局区的变量在程序结束后释放
	cout << ref2 << endl;

	test02() = 1000;//2.如果函数的返回值是引用，则函数的调用可以作为左值,返回的是一个变量a,给a赋值1000
	cout << ref2 << endl;//ref2作为a的别名，值也是1000
	cout << ref2 << endl;


	system("pause");
	return 0;
}

