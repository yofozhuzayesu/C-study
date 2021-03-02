#include<iostream>
#include<string>
using namespace std;

//继承——面向对象的三大特性之一
//例如类与类之间存在特殊的关系，比如动物中有猫科动物，猫科动物又有老虎豹子等
//定义这些类的时候，下级别的成员除了拥有上一级的共性，还有自己的特性
//利用继承的技术就能减少重复代码

//example  很多网站有公共的头部、底部甚至公共得到左侧列表，只有中心内容不同
//利用普通写法和继承的写法来实现网页中的内容，看看继承存在的意义以及好处

//普通实现
//JAVA页面
//class JAVA
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA PYTHON C++（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
//
//class PYTHON
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA PYTHON C++（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "PYTHON学科视频" << endl;
//	}
//};
//
//
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA PYTHON C++（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//


//继承写法
//好处：减少重复的代码
//语法：class 子类 : 继承方式 父类
//子类也称为派生类 父类也称为基类
//公共元素
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
	}
	void left()
	{
		cout << "JAVA PYTHON C++（公共分类列表）" << endl;
	}
};
//JAVA类 继承Base
class JAVA :public BasePage
{
public:
	void content()
	{
		cout << "JAVA学科视频" << endl;
	}
};
//C++类
class cpp :public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};
//PYTHON类 
class PYTHON :public BasePage
{
public:
	void content()
	{
		cout << "PYTHON学科视频" << endl;
	}
};

void test01()
{
	cout << "JAVA下载页面如下" << endl;
	JAVA j;
	j.header();
	j.left();
	j.footer();
	j.content();
	cout << "---------------------------" << endl;

	cout << "PYTHON下载页面如下" << endl;
	PYTHON p;
	p.header();
	p.left();
	p.footer();
	p.content();
	cout << "---------------------------" << endl;

	cout << "C++下载页面如下" << endl;
	cpp c;
	c.header();
	c.left();
	c.footer();
	c.content();
	cout << "---------------------------" << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
