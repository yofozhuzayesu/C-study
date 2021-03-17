#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	常用集合算法
	set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
	求两个集合的差集 同样要求两个容器都是有序
	两个容器有先后区别
	v1和v2容器的差集 =  v1容器中不是v1和v2交集的部分
	v2和v1容器的差集 =  v2容器中不是v1和v2交集的部分
*/

//遍历输出
void myprint(int v)
{
	cout << v << "  ";
}

//内置数据类型
void test01()
{

	vector<int>v1;
	vector<int>v2;
	vector<int>vt;
	v1.push_back(15);
	v1.push_back(20);
	v1.push_back(18);
	v1.push_back(20);
	v1.push_back(19);
	v1.push_back(21);
	sort(v1.begin(), v1.end());

	for (int i = 0; i < 18; i++)
	{
		v2.push_back(i);
	}

	//给目标容器开辟空间，最特殊的情况是 两个容器没有交集，则目标容器的大小等于最大的容器容量
	//使用max算法 同样也包含在algorithm头文件内
	vt.resize(max(v1.size(),v2.size()));

	//求V1和V2的差集
	//vector<int>::iterator itend =  set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	//for_each(vt.begin(), itend, myprint);

	//求V2和V1的差集
	vector<int>::iterator itend = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vt.begin());
	for_each(vt.begin(), itend, myprint);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
