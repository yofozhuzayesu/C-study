#include<iostream>
#include<string>
using namespace std;

//函数调用符() 也可以重载
//由于重载后使用的方式非常像函数的调用，因此称为仿函数
//仿函数没有固定写法，非常灵活

class MYprint
{
public:
	//重载的函数调用运算符
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void test01()
{
	MYprint p;
	p("hello world");//由于使用起来非常类似函数调用，因此称为仿函数
}

//仿函数非常灵活，没有一个固定的写法
//加法类
class MYadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MYadd a;
	int sum = a(10, 20);
	cout << sum << endl;

	//匿名函数对象 就是未命名的对象使用函数重载符，因为局部对象函数结束完了就释放了，无需在保留
	cout << MYadd()(100, 200) << endl;
}



int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
