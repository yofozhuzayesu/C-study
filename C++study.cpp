#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

/*
	find_if	 按条件查找元素
	find_if(iterator beg,iterator end,_Pred)
	//按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
	//_Pred函数或者谓词（返回bool类型的仿函数）
*/

//谓词
class GreaterFive
{
public:
	bool operator()(int v)
	{
		return v > 5;
	}
};

//查找内置数据
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中是否有>5的元素
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
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
class person
{
public:
	person() {};
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

//谓词
class Personname
{
public:
	bool operator()(person &p)
	{
		if (p.m_name=="张三"&&p.m_age==18)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
void test02()
{
	vector<person> v;
	person p1("张三", 19);
	person p2("李四", 36);
	person p3("王五", 28);
	person p4("陈六", 16);
	person p5("刘七", 18);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	vector<person>::iterator it = find_if(v.begin(), v.end(), Personname());

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
