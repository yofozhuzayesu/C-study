#include<iostream>
#include<string>
using namespace std;

//函数重载的注意事项
//1.引用作为重载的条件
void func(int &a)
{
	cout << "func(int &a)的调用" << endl;

}
void func(const int &a)
{
	cout << "func(const int &a)的调用" << endl;

}
//2.函数重载碰到默认参数
void func2(int a,int b = 10)
{
	cout << "func2(int a,int b = 10 )的调用" << endl;
}
void func2(int a)
{
	cout << "func2(int a )的调用" << endl;
}

int main()
{
	//int a = 10;
	//func(a);//调用函数1，原因是a是变量是可读可写状态，所以调用的是第一个函数
	//func(10);//10的传递方式：相当于const int &a = 10,编译器自动分配一个临时空间存放a，用1的话是int &a = 10不合法

	//func2(10);//当函数重载碰到默认参数，会出现二义性报错，应该尽量避免这种情况

	system("pause");
	return 0;
}

