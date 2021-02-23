#include<iostream>
#include<string>
using namespace std;

//静态成员
//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
//分为：
//静态成员变量：所有对象共享同一份数据
//			    在编译阶段分配内存
//			    类内声明，类外初始化
//静态成员函数：所有对象共享一个函数
//			    静态成员函数只能访问静态成员变量

class person
{
public:
	//静态成员函数
	static void func()
	{
		m_a = 100;//静态成员函数可以访问静态成员变量
		//m_b = 200;  //会出错，静态成员函数 不可以访问非静态成员变量,因为无法区分到底是哪个对象的属性
		cout << "static静态成员函数的调用" << endl;
	}
	static int m_a;//静态成员变量 需要在类内声明，类外初始化
	int m_b;//非静态成员变量


	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2函数的调用" << endl;
	}
};

int person::m_a = 0;//静态成员变量在类外初始化


//静态成员函数的两种访问方式
void test01()
{
	//通过对象调用
	person p;
	p.func();

	//通过类名访问
	person::func();
	//person::func2();私有静态成员函数在类外不可访问
}
int main()
{
	test01();
	system("pause");
	return 0;
}
