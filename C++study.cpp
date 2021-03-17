#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
	统计元素出现的次数
	count(iterator beg,iterator end,value)
*/


//内置数据类型
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	int i = count(v.begin(), v.end(), 10);
	cout << "出现了" << i << "次" << endl;

}

//自定义数据类型
class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//参数里必须得加const 否则会报错
	bool operator==(const person &p)
	{
		if (this->m_name ==p.m_name &&this->m_age==p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_name;
	int m_age;
};
void test02()
{
	vector<person> v;
	person p1("张三", 19);
	person p2("李四", 15);
	person p3("王五", 26);
	person p4("陈六", 35);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	int i = count(v.begin(), v.end(), p2);
	cout << "p2出现了" << i << "次" << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
