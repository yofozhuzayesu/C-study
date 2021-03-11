#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/*

	容器：vector
	算法：for_each（遍历）
	迭代器:vector<int>::iterator
*/

//vector容器 存放自定义数据类型




//自定义数据类型
class person
{
public:
	person(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

//ostream &operator <<(ostream &cout, person p)
//{
//	cout << p.m_name << "  " << p.m_name << endl;
//	return cout;
//}

void test01()
{
	person p1("孙悟空", 99999);
	person p2("孙悟空", 99999);
	person p3("孙悟空", 99999);
	person p4("孙悟空", 99999);

	vector<person> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	for (vector<person>::iterator i = v.begin(); i != v.end(); i++)
	{
		//一种输出方式是重载<<符号
		//cout << *i << endl;

		//第二种输出方式  i的解引用就是person类对象，然后直接访问对象内中的属性即可
		//cout << (*i).m_name << " " << (*i).m_age << endl;

		//第三种输出方式
		//i是指针，可以通过指针的方式拿到数据
		cout << i->m_name << " " << i->m_age << endl;
	}
}

//存放自定义类型指针
void test02()
{
	person p1("孙悟空", 99999);
	person p2("孙悟空", 99999);
	person p3("孙悟空", 99999);
	person p4("孙悟空", 99999);

	vector<person*> v;
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	for (vector<person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//第一种输出方式，先解引用出对象
		//cout << (*(*it)).m_name << " " << (*(*it)).m_age << endl;

		//第二种方式，*it 也是指针
		cout << (*it)->m_name << " " << (*it)->m_age << endl;
	}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
