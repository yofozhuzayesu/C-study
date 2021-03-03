#include<iostream>
#include<string>
using namespace std;

//菱形继承：有两个派生类继承同一个基类  又有某个类同时继承这两个派生类  这就是菱形继承 也叫钻石继承

//动物类
class animal
{
public:
	int m_age;

};
//羊类
//在继承之前 加上关键字 virtual 变成虚继承
//animal类称为虚基类
class sheep:virtual public animal
{

};
//驼类
//在继承之前 加上关键字 virtual 变成虚继承
//animal类称为虚基类
class tuo:virtual public animal
{

};

//羊驼类

class sheeptuo : public sheep, public tuo
{

};

void test01()
{
	sheeptuo st;
	//st.m_age = 18;  m_age出现二义性 无法明确
	st.sheep::m_age = 18;
	st.tuo::m_age = 28;

	//第一个问题：当发生菱形继承时，两个父类拥有相同数据，需要加以作用域区分
	//从羊类继承的m_age
	cout << "st.sheep::m_age=" << st.sheep::m_age << endl;
	//从驼类继承的m_age
	cout << "st.tuo::m_age=" << st.tuo::m_age << endl;
	//采用虚继承方式后
	cout << "st.m_age=" << st.m_age << endl;

	//但是m_age只需要一份即可，菱形继承导致数据有两份，资源浪费
	//利用虚继承可以解决 菱形继承的问题
	//利用虚继承 继承的是两个不同的虚基类指针以及一个变量m_age  而这个两个指针都指向同一份内存 也就是m_age变成唯一
}
int main()
{
	test01();
	system("pause");
	return 0;
}
