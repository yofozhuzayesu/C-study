#include<iostream>
#include<string>
using namespace std;

//运算符重载：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型

//加号运算符重载：实现两个自定义数据类型相加的运算



class person
{
public:
	int m_a;
	int m_b;
	//1.成员函数重载+号
	/*person operator +(person &p)
	{
		person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}*/
};

//通过全局函数重载+号
person operator+(person &p1, person &p2)
{
	person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}

void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	person p2;
	p2.m_a = 10;
	p2.m_b = 30;

	person p3 = p1 + p2;
	cout << p3.m_a << endl;
	cout << p3.m_b << endl;
}
//成员函数重载本质调用
//person p3 = p1.operator+(p2)

//全局函数重载本质调用
//person p3 = operator+(p1,p2)

//person p3 = p1 + p2   
//运算符重载，也可以发生函数重载，就是同样的名字 operator+ 可以定义不同的数据类型
int main()
{
	test01();
	system("pause");
	return 0;
}
