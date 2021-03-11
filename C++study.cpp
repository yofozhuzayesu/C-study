#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


/*
    STL基本概念
	1.STL：标准模板库
	2.STL从广义上分为容器（container）算法(algorithm)迭代器(itreator)
	3.容器和算法之间通过迭代器进行无缝连接
	4.STL几乎所有的代码都采用了模板类或者模板函数
*/

/*
	STL六大组件：容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器
	1.容器：各种数据结构，如vector、list、deque、set、map等，用来存放数据
	2.算法：各种常用的算法，如sort、find、copy、for_each等
	3.迭代器：扮演了容器与算法之间的胶合剂
	4.仿函数：行为类似函数，可作为算法的某种策略
	5.适配器：一种用来修饰容器或者仿函数或迭代器接口的东西
	6.空间配置器：负责空间的配置与管理
*/

/*

	容器：vector
	算法：for_each（遍历）
	迭代器:vector<int>::iterator
*/


void printArr(int val)
{
	cout << val << " ";
}
//vector容器存放内置数据类型
void test01()
{	//创建了一个vector容器
	vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//访问容器中的数据
	/*for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;*/

	//通过迭代器访问容器中的数据
	//vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器中的第一个元素
	//vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素的下一个位置

	//第一种遍历方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << " ";
	//	itBegin++;
	//}

	//第二种遍历方式
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << " ";

	//}
	//cout << endl;

	//第三种遍历方式  利用STL中提供的遍历算法
	for_each(v.begin(), v.end(), printArr);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
