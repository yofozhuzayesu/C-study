#include<iostream>
#include<string>
using namespace std;

/*
	类模板作用
	建立一个通用类，类中的成员 数据类型可以不具体制定，用一个虚拟的类型来代表

	语法：
	template<typename T>
	类
*/

//类模板
template<class NameType,class AgeType>
class person
{
public:
	person(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showPerson()
	{
		cout << this->m_name << endl;
		cout << this->m_age << endl;
	}
	string m_name;
	int m_age;
};

void test01()
{
	//<string,int>是模板参数列表 用来个NameType 和 AgeType来传值
	//("孙悟空", 999)则是传给了构造函数
	person<string, int> p1("孙悟空", 999);
	p1.showPerson();
}


int main()
{
	test01();
	system("pause");
	return 0;
}
