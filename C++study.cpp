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

//2.类做友元
class Building
{
	friend class GoodGay; //将GoodGay类 设置成Building类的友元 可以访问本类中的私有成员
public:
	Building();
	~Building();
	string m_sittingroom;
private:
	string m_bedroom;
};

Building::Building()//类外写构造函数的方法
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

Building::~Building()
{
}

class GoodGay
{
public:
	GoodGay();
	~GoodGay();
	Building *building;
	void visit();
private:

};

GoodGay::GoodGay()
{
	//创建一个建筑物的对象
	building = new Building;//让指针building  指向在堆区新创建出来的Building类型的对象
}

GoodGay::~GoodGay()
{
}

void GoodGay::visit()//类外写成员函数
{
	cout << "好基友类正在访问" << building->m_sittingroom << endl;//访问公共属性
	cout << "好基友类正在访问" << building->m_bedroom << endl;//访问私有属性
}

void test()
{
	GoodGay g;
	g.visit();
}
int main()
{
	test();
	system("pause");
	return 0;
}
