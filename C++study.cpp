#include<iostream>
#include<string>
using namespace std;

//继承中同名的处理方式
//当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？

//访问子类同名成员，直接访问即可
//访问父类同类成员，需要加作用域

class base
{
public:
	base()
	{
		m_a = 100;
	}
	void func()
	{
		cout << "这是Base类下的测试函数" << endl;
	}
	int m_a;
};

class son : public base
{
public:
	son()
	{
		m_a = 200;
	}

	void func()
	{
		cout << "这是son类下的测试函数" << endl;
	}
	int m_a;
};

//同名成员属性处理方式
void test01()
{
	son s;
	cout << s.m_a << endl;//访问子类的同名成员

	//如果通过子类访问父类同类成员，需要加作用域
	cout << s.base::m_a << endl;//访问从父类中继承下来的同名成员
	
}

void test02()
{
	son s;
	s.func();//出现同名的成员函数时，直接调用，调用的是子类中的同名成员

	s.base::func();//访问父类，要加作用域
}

//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员函数（也就是父类中同名重载的函数）
//如果想访问父类中被隐藏的同名成员函数，需要加作用域

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
