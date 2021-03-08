#include<iostream>
#include<string>
using namespace std;

/*
	类模板和函数模板的区别：
	1.类模板没有自动类型推导的使用方式
	2.类模板在模板参数列表中可以有默认参数,函数模板中不允许使用
*/

//使AgeType 默认为int 型
template<class NameType,class AgeType = int>
class person
{
public:
	person(NameType name,AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	NameType m_name;
	AgeType m_age;
	void showName()
	{
		cout << this->m_name << endl;
		cout << this->m_age << endl;
	}
};

void test01()
{
	//person p1("孙悟空",9999); //无法使用自动类型推导，
	//需要用显式指定类型
	person<string, int> p1("孙悟空", 99999);
	p1.showName();
}

void test02()
{
	//模板中已设置默认参数，可以省去模板参数列表中的int
	person<string> p2("猪八戒", 999);
	p2.showName();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
