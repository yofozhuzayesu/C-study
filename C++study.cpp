#include<iostream>
#include<string>
using namespace std;

/*
	类模板中成员函数创建时机
	1.普通类中的函数一开始就可以创建
	2.类模板中的成员函数在调用时才创建
*/

class person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class Myclass
{
public:
	T obj;
	//类模板中的成员函数
	//点击生成项目成功，表明func1和func2两个函数没有创建（因为不知道obj是哪个类）
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	Myclass<person1>p1;
	p1.func1();
	//p1.func2();
}

int main()
{
	test01();
	system("pause");
	return 0;
}
