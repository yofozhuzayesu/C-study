#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	常用集合算法
	set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,interator dest)
	//注意两个集合必须是有序序列
	//dest目标容器开始迭代器
	//返回一个迭代器，迭代器就是交集容器的end
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

	for (int i = 0; i < 20; i++)
	{
		v2.push_back(i);
	}

	//给目标容器开辟空间，最特殊的情况是 大容器包含小容器的全部元素 则令目标容器的容量为小容器大小
	//使用min算法 同样也包含在algorithm头文件内
	vt.resize(min(v1.size(), v2.size()));
	vector<int>::iterator itend =  set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	//如果不用一个itend接收的话，直接遍历到vt.end(),多余的部分还会被填充0
	for_each(vt.begin(), vt.end(), myprint);//15 18 19 0 0 0
	cout << endl;
	for_each(vt.begin(), itend, myprint);// 15 18 19
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
