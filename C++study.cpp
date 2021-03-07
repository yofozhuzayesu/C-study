#include<iostream>
#include<string>
using namespace std;

/*
	模板的局限性：
	模板并非万能，例如用模板写一个比较的函数，但是传入的参数是两个person类的对象，就无法正常运行
	C++为了解决这种问题，提供模板的重载，可以为这些特定的类型提供具体化的模板
*/
class person
{
public:
	person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};


template<class T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化的person版本实现代码，具体化优先调用
template<> bool myCompare(person &p1, person &p2)
{
	if (p1.m_name==p2.m_name&&p1.m_age==p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a=b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void test02()
{
	person p1("Tom", 11);
	person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1=p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
