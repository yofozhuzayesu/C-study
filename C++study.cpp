#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
	按条件统计元素出现次数
	count_if(iterator beg,iterator end,_Pred)
	/_Pred谓词
*/

class greaterFive
{
public:
	bool operator()(int v)
	{
		return v > 5;
	}
};
//内置数据类型
void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	int i = count_if(v.begin(), v.end(), greaterFive());
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
	bool operator()(const person &p)
	{
		return p.m_age > 18;
	}
	string m_name;
	int m_age;
};
class Greater18
{
public:
	bool operator()(const person &p)
	{
		return p.m_age > 18;
	}
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
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	int i = count_if(v.begin(), v.end(), Greater18());
	cout << "年龄大于18的人有" << i << "人" << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
