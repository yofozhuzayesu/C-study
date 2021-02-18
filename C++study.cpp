#include<iostream>
#include<string>
using namespace std;

//函数重载：函数名可以相同，提高复用性
//满足条件
//1.同一个作用域下
//2.函数名称相同
//3.函数参数类型不同或者个数不同或者顺序不同

//注意：函数的返回值不可用作为函数重载的条件

void func()
{
	cout << "函数1的调用" << endl;

}

void func(int a)
{
	cout << "函数2的调用" << endl;

}
void func(double a)
{
	cout << "函数3的调用" << endl;

}
void func(double a,int b )
{
	cout << "函数4的调用" << endl;

}

void func(int a ,double b)
{
	cout << "函数5的调用" << endl;

}
//函数的返回值不可以作为重载的条件
/*int func(int a, double b)
{
	cout << "函数5的调用" << endl;

}*/
int main()
{
	//func();//调用函数1
	//func(20);//调用函数2
	//func(3.14);//调用函数3
	//func(3.14, 10);//调用函数4
	func(2, 3.14);//调用函数5
	system("pause");
	return 0;
}

