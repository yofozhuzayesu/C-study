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

//1.全局函数做友元
class Building
{
	//利用关键字 friend 使得全局函数成为友元，可以访问私有属性
	friend void goodGay(Building &building);
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

//全局函数
void goodGay(Building &building)
{
	cout << "好基友的全局函数正在访问" << building.m_SittingRoom << endl;
	cout << "好基友的全局函数正在访问" << building.m_BedRoom << endl;//成为友元后即可访问
}


int main()
{
	Building b;
	goodGay(b);
	system("pause");
	return 0;
}
