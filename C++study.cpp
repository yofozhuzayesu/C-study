#include<iostream>
#include<string>
using namespace std;

//多继承语法
//C++允许一个类继承多个类

//语法：class 子类: 继承方式 父类1，继承方式 父类2......
//多继承可能会引发父类中有同名成员出现，需要加作用域区分
//实际开发中不建议使用

class base1
{
public:
	base1()
	{
		m_a = 100;
	}
	int m_a;
};

class base2
{
public:
	base2()
	{
		m_a = 200;
	}
	int m_a;
};

//子类需要继承base1 和 base2
class son :public base1, public base2
{
public:
	son()
	{
		m_c = 300;
		m_d = 400;
	}
	int m_c;
	int m_d;
};


void test01()
{
	son s;
	cout << "子类son占用的内存空间" << sizeof(son) << endl;
	//当父类中出现同名成员，需要加作用域区分
	cout << "base1 m_a = " << s.base1::m_a << endl;
	cout << "base2 m_a = " << s.base2::m_a << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
