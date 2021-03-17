#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
	排序算法sort 对容器内元素进行排序
	sort(iterator beg,iterator end,_Pred)
	_Pred谓词
*/

//遍历输出
void myprint(int v)
{
	cout << v << "  ";
}

//降序谓词
class mySort
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
//内置数据类型
void test01()
{
	vector<int>v;
	v.push_back(15);
	v.push_back(30);
	v.push_back(18);
	v.push_back(21);
	//默认按升序排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint);
	cout << endl;

	//利用谓词按降序排序
	sort(v.begin(), v.end(), mySort());
	for_each(v.begin(), v.end(), myprint);
	cout << endl;


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
	string m_name;
	int m_age;
};
//遍历输出
void myPrint2(const person &p)
{
	cout << "姓名：" << p.m_name << "年龄：" << p.m_age << endl;
}
//自定义数据类型排序谓词
class mySort2
{
public:
	bool operator()(const person &p1, const person &p2)
	{
		return p1.m_age > p2.m_age;
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
	v.push_back(p3);
	v.push_back(p4);
	for_each(v.begin(), v.end(), myPrint2);
	cout << endl;

	//利用谓词按年龄从大到小排
	sort(v.begin(), v.end(), mySort2());
	for_each(v.begin(), v.end(), myPrint2);
	cout << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
