#include<iostream>
#include<string>
using namespace std;

/*
	类模板对象做函数参数
	类模板实例化出的对象，向函数传参的方式

	一共有三种传入方式
	1.指定传入的类型 --直接显示对象的数据类型
	2.参数模板化     --将对象中的参数变为模板进行传递
	3.整个类模板化   --将这个对象类型 模板化进行传递
*/

template<class T1,class T2>
class person
{
public:
	person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	T1 m_name;
	T2 m_age;
	void showPerson()
	{
		cout << this->m_name << endl;
		cout << this->m_age << endl;
	}
};

//1.指定传入类型  也就是指定person类模板中参数列表为<string,int>类型
void printPerson1(person<string,int> &p)
{
	p.showPerson();
}
void test01()
{
	person<string, int> p1("孙悟空", 999);
	//类模板对象
	printPerson1(p1);
}

//2.参数模板化  告诉函数 形参中的T1 T2是模板中的两个参数
template<class T1,class T2>
void printPerson2(person<T1,T2> &p)
{
	p.showPerson();
	//利用 typeid查看模板参数类型
	cout << "T1的类型=" << typeid(T1).name() << endl;
	cout << "T2的类型=" << typeid(T2).name() << endl;
}
void test02()
{
	person<string, int> p2("猪八戒", 888);
	printPerson2(p2);
}

//3.将整个类都模板化 让编译器自动识别
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T的数据类型" << typeid(T).name() << endl;
}
void test03()
{
	person<string, int> p3("沙僧", 777);
	printPerson3(p3);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
