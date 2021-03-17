#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	常用集合算法
	set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
	//求两个集合的并集
	//两个集合必须是有序序列
	//如果两个容器有相同的元素 只会取一个 
	//但是一个容器内有相同的元素 会保留
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

	for (int i = 0; i < 16; i++)
	{
		v2.push_back(i);
	}

	//给目标容器开辟空间，最特殊的情况是 两个容器没有交集，则目标容器的大小为两个容器大小相加
	//使用min算法 同样也包含在algorithm头文件内
	vt.resize(v1.size()+ v2.size());
	vector<int>::iterator itend =  set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	//如果不用一个itend接收的话，直接遍历到vt.end(),多余的部分还会被填充0
	for_each(vt.begin(), vt.end(), myprint);
	cout << endl;
	for_each(vt.begin(), itend, myprint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
