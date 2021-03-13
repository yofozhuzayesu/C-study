#include<iostream>
#include<list>
#include<ctime>
#include<string>
using namespace std;

/*
	排序案例
	案例描述：将person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
	排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

 */

class person
{
public:
	person() {};
	person(string name,int age,int height)
	{
		this->m_name = name;
		this->m_height = height;
		this->m_age = age;
	}
	string m_name;
	int m_age;
	int m_height;
};

//遍历输出
void printList(const list<person>l)
{
	for (list<person>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << (*it).m_name << "  " << (*it).m_age << "  " << (*it).m_height << endl;
	}
}

//指定排序规则
bool myCompare(person &p1, person &p2)
{
	//按照年龄升序
	if (p1.m_age==p2.m_age)
	{
		//年龄相同的情况下  按身高降序
		return p1.m_height > p2.m_height;
	}
	return p1.m_age < p2.m_age;
}
void test01()
{
	list<person>lst;
	person p1("张三", 23, 178);
	person p2("李四", 45, 196);
	person p3("王五", 23, 187);
	person p4("陈六", 19, 185);
	person p5("徐七", 20, 177);
	person p6("刘八", 20, 179);

	lst.push_back(p1);
	lst.push_back(p2);
	lst.push_back(p3);
	lst.push_back(p4);
	lst.push_back(p5);
	lst.push_back(p6);
	cout << "排序前：" << endl;
	printList(lst);

	//排序
	lst.sort(myCompare);
	cout << "****************************" << endl;
	cout << "排序后：" << endl;
	printList(lst);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
