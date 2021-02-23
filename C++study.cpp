#include<iostream>
#include<string>
using namespace std;

//在程序里，有些私有属性也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
//友元的目的就是让一个函数或者类访问另一类中的私有成员
//友元的关键字是 frined

//友元三种实现
//1.全局函数做友元
//2.类做友元
//3.成员函数做友元

//成员函数做友元
class Building;//如果类B使用类A，要么按顺序，要么先声明
class GoodGay
{
public:
	GoodGay();
	void visit();//让visit函数可以访问私有属性
	void visit2();//visit2函数不可以访问私有属性
	Building *b;
};
class Building
{
	//表示GoodGay类下的visit成员函数作为本类的友元
	friend void GoodGay::visit();
public:
	Building();
	string m_sittingroom;//客厅	
private:
	string m_bedroom;//卧室
};
GoodGay::GoodGay()
{
	b = new Building;//创建Building类型的数据，需要放在Building类定义之后，不然编译器不清楚创建的类的内存大小
}
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}
void GoodGay::visit()
{
	cout << "好基友类中的visit函数正在访问" << b->m_sittingroom << endl;
	cout << "好基友类中的visit函数正在访问" << b->m_bedroom << endl;
}
void GoodGay::visit2()
{
	cout << "好基友类中的visit函数正在访问" << b->m_sittingroom << endl;
}
void test01()
{
	GoodGay g;
	g.visit();
	g.visit2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
