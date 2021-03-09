#include<iostream>
#include<string>
using namespace std;

/*

  掌握类模板配合友元函数的类内和类外实现

  全局函数类内实现-直接在类内声明友元即可
  全局函数类外实现-需要提前让编译器知道全局函数的存在

*/

//提前让编译器知道Person类的存在
template<class T1,class T2>
class person;

//类外实现
//函数模板的实现
//所以在上面的声明中需要写明是函数模板的声明
template<class T1, class T2>
void printPerson2(person<T1, T2>p)
{
	cout << p.m_name << endl;
	cout << p.m_age << endl;
}


//通过全局函数打印person信息
template<class T1, class T2>
class person
{
	//全局函数类内实现
	friend void printPerson(person<T1, T2>p)
	{
		cout << p.m_name << endl;
		cout << p.m_age << endl;
	}

	//全局函数类外实现
	//类内写声明
	//普通函数的声明，不是类内的函数
	//加空模板的参数列表
	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(person<T1, T2>p);

public:
	person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};



//全局函数类内实现的测试
void test01()
{
	person<string, int> p("孙悟空", 999);
	printPerson(p);
}

//全局函数类外实现的测试
void test02()
{
	person<string, int> p2("孙悟空", 9999);
	printPerson2(p2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
