#include<iostream>
#include<string>
using namespace std;

/*
	函数对象概念
	重载了函数调用操作符的类，其对象常称为函数对象
	函数对象使用重载（）时，行为类似函数调用，也叫仿函数

	本质：函数对象(仿函数)是一个类，不是一个函数

	特点：
	函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
	函数对象超出普通函数的概念，函数对象可以有自己的状态
	函数对象可以作为参数传递

*/

//函数和对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
class myAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test01()
{
	myAdd m1;
	cout << m1(10, 90) << endl;
}

//函数对象超出普通函数的概念，函数对象可以有自己的状态
class myPrint
{
public:
	myPrint()
	{
		this->count=0;
	}
	void operator()(string str)
	{
		cout << str << endl;
		this->count++;
	}
	int count;//内部自己的状态
};

void test02()
{
	myPrint m;
	m("chenxing");
	m("chenxing");
	m("chenxing");
	m("chenxing");
	cout<<"myprint调用次数" << m.count << endl;
}

//函数对象可以作为参数传递
void doPrint(myPrint &mp,string str)
{
	mp(str);
}
void test03()
{
	myPrint myprint;
	doPrint(myprint,"chenxing");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
