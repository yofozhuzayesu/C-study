#include<iostream>
#include<fstream>
using namespace std;

//C++另一种编程思想称为泛型编程，主要利用的技术就是模板
//C++提供两种模板机制：函数模板和类模板

//模板就是建立通用的模具，大大提高复用性
//模板特点：模板不可以直接使用，它只是一个框架
//模板的通用并不是万能的

/*
    函数模板作用：
    建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型带代表

	语法：
	template<typename T>
	函数声明或定义
	 
	template-----声明创建模板
	typename-----表明其后面的符号是一种数据类型，可以用class代替
	T------------通用的数据类型，名称可以替换，通常为大写字母
*/

//实现两个整形交换的函数
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void Myswap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	//利用函数交换
	//swapInt(a, b);

	//利用函数模板，有两种方式
	//1.自动类型推导
	//Myswap(a, b);
	//2.显示指定类型
	Myswap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;



	//double c = 3.5;
	//double d = 6.68;
	//swapDouble(c, d);
	//cout << "c=" << c << endl;
	//cout << "d=" << d << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
