#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<time.h>
using namespace std;

/*
	洗牌： 指定范围内的元素随机调整次序
	random_shuffle(iterator beg,iterator end)
	若想每次乱序结果不一样，同样需要设置一个随机数种子
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
	
	//随机数种子
	srand((unsigned int)time(NULL));
	//随机打乱顺序
	random_shuffle(v.begin(), v.end());
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
	
	//随机数种子
	srand((unsigned int)time(NULL));
	//随机打乱顺序
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
