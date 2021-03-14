#include<iostream>
#include<map>
using namespace std;

/*
	大小和交换
	size()
	empty()
	swap(st)     //交换两个集合容器
*/
void printMap(const map<int, int> &m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key值:" << (*it).first << "  " << "Value:" << (*it).second << endl;
	}
}
void test01()
{
	map<int, int>mp1;
	//map中的元素都是对组
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(4, 20));
	mp1.insert(pair<int, int>(2, 30));
	mp1.insert(pair<int, int>(3, 40));
	if (mp1.empty())
	{
		cout << "空" << endl;
	}
	else
	{
		cout << "非空" << endl;
	}
	cout << "该容器的大小为" << mp1.size() << endl;
	//遍历输出 默认按key值升序排列
	printMap(mp1);

	cout << "------------分割线-------------" << endl;
	map<int, int>mp2;
	mp2.insert(pair<int, int>(9, 10));
	mp2.insert(pair<int, int>(5, 90));
	mp2.insert(pair<int, int>(2, 60));
	mp2.insert(pair<int, int>(4, 70));
	mp2.insert(pair<int, int>(8, 20));
	mp2.insert(pair<int, int>(1, 50));
	printMap(mp2);

	//交换操作
	cout << "------------分割线-------------" << endl;
	mp1.swap(mp2);
	cout << "这是交换后mp1：" << endl;
	printMap(mp1);
	cout << "这是交换后mp2：" << endl;
	printMap(mp2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
