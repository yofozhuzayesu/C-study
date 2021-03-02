#include<iostream>
#include<string>
using namespace std;

//关系运算符重载，可以让两个自定义类型的对象进行对比操作
class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	bool operator==(person &p)
	{
		if (this->m_name ==p.m_name&&this->m_age==p.m_age)
		{
			return true;
		}
		return false;
	}
	string m_name;
	int m_age;
};

void test01()
{
	person p1("李四",18);
	person p2("张三",18);
	if (p1 == p2 )
	{
		cout << "p1和p2相等" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}
