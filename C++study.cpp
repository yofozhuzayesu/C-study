#include<iostream>
#include<string>
using namespace std;

//继承同名静态成员处理方式
//问题：继承中同名的静态成员在子类对象上如何进行访问？

//静态成员和非静态成员出现同名，处理方式一样
//访问子类同名成员，直接访问即可
//访问父类同名成员，需要加作用域

class base
{
public:

	static int m_a;//静态成员变量 所有对象共享同一内存，类内声明，类外初始化
	static void func()//静态成员函数
	{
		cout << "base下的测试函数" << endl;
	}
};
int base::m_a = 100;

class son:public base
{
public:
	static int m_a;//静态成员变量
	static void func()//静态成员函数
	{
		cout << "son下的测试函数" << endl;
	}
};
int son::m_a = 200;

//同名静态成员属性
void test01()
{
	son s;
	//通过对象访问数据
	cout << "通过对象访问" << endl;
	cout << s.m_a << endl;//访问子类对象中同名成员变量
	cout << s.base::m_a << endl;//访问父类对象中同名成员变量

	//通过类名访问
	cout << "通过类名访问" << endl;
	cout << son::m_a << endl;//通过子类名访问

	//第一个双冒号表示 通过类名访问数据
	//第二个双冒号表示 访问base作用域下的数据
	//即通过son类名访问base作用域下的数据
	cout << son::base::m_a << endl;
}
void test02()
{
	son s;
	//通过对象访问
	cout << "以下是通过对象访问" << endl;
	s.func();
	s.base::func();

	//通过类名访问
	cout << "以下是通过类名访问" << endl;
	son::func();
	son::base::func();
}

//同样子类中出现同名的静态成员函数  编译器会自动隐藏父类中所有同名的静态成员函数
//若需要调用也是要加父类作用域
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
