#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

/*
	查找算法find 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end

	find(iterator beg,iterator end,value)  -----迭代器 迭代器  要查找的值
*/



//查找内置数据
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中是否有5这个元素
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it !=v.end())
	{
		cout << "找到了元素" << (*it) << endl;
	}
	else
	{
		cout << "未找到该元素" << endl;
	}
}

//查找自定义数据类型
//因为find函数的底层 是判断*First == value  对于自定义数据类型无法比较  需要重载==
class person
{
public:
	person() {};
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//重载==
	bool operator==(const person &p)
	{
		if (this->m_name ==p.m_name && this->m_age==p.m_age)
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
	person p1("张三", 18);
	person p2("李四", 36);
	person p3("王五", 28);
	person p4("陈六", 16);
	person p5("刘七", 18);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	vector<person>::iterator it = find(v.begin(), v.end(), p2);

	if (it != v.end())
	{
		cout << "找到了元素" << (*it).m_name << endl;
	}
	else
	{
		cout << "未找到该元素" << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
