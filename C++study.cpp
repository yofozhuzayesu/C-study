#include<iostream>
#include<string>
using namespace std;

//构造函数调用规则
//默认情况下，C++编译器至少给一个类添加三个函数
//1.默认构造函数（无参，函数体为空）
//2.默认析构函数（无参，函数体为空）
//3.默认拷贝构造函数（对属性进行值拷贝）

//构造函数的调用规则
//1.如果用户定义有参构造函数，C++就不在提供无参构造，但是会默认提供拷贝构造
//2.如果用户定义拷贝构造函数，C++不会再提供其他构造函数

class person
{
public:
	/*person()
	{
		cout << "person默认构造函数调用" << endl;
	}*/
	person(int age)
	{
		p_age = age;
		cout << "person有参构造函数调用" << endl;
	}
	person(const person &p)    //在不定义拷贝构造函数的情况下，编译器默认提供拷贝构造函数
	{
		p_age = p.p_age;
		cout << "person拷贝构造函数调用" << endl;
	}
	~person()
	{
		cout << "person默认析构函数调用" << endl;

	}
	int p_age;
};

//void test01()
//{
//	person p;
//	p.p_age = 18;
//	person p2(p);
//	cout << p2.p_age << endl;
//}

void test02()
{
	person p(18);
	person p2(p);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
