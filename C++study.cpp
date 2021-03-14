#include<iostream>
#include<string>
#include<set>
using namespace std;

/*
	set容器排序
	set容器默认排序规则为从大到小，掌握如何改变排序规则

	技术点：利用仿函数，可以改变排序规则
 */



//利用仿函数改变set默认排序规则
class myCompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};

//自定义数据类型
class person
{
public:
	person() {};
	person(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};


//遍历循环--整形
void printSet1(const set<int> s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//循环遍历--降序
void printSet2(const set<int, myCompare> s)
{
	for (set<int, myCompare>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//存放内置数据类型
void test01()
{
	set<int>s1;
	//插入后会默认按升序排列
	s1.insert(10);
	s1.insert(50);
	s1.insert(20);
	s1.insert(30);
	s1.insert(60);
	//遍历输出
	printSet1(s1);

	//指定排序规则为从大到小
	set<int,myCompare>s2;
	s2.insert(10);
	s2.insert(50);
	s2.insert(20);
	s2.insert(30);
	s2.insert(60);
	//遍历输出
	printSet2(s2);
}

//利用仿函数改变排序规则
class comparePerson
{
public:
	bool operator()(const person &p1, const person &p2)
	{
		//按年龄降序排列
		return p1.m_age > p2.m_age;
	}
};
//set存放自定义数据类型
void test02()
{
	//对于自定义数据类型，都会制定排序规则，否则无法运行
	person p1("张三", 18);
	person p2("李四", 20);
	person p3("王五", 17);
	person p4("陈六", 20);
	person p5("赵七", 19);

	set<person,comparePerson> s1;
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	s1.insert(p5);

	for (set<person,comparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << (*it).m_name << "   " << (*it).m_age << endl;
	}

	//按照年龄降序排序，如果有年龄相同，则只会插入一个
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
