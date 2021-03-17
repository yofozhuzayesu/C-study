#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	查找相邻重复元素
	adjacent_find(iterator beg,iterator end)
	//查找相邻重复元素，返回相邻元素的第一个位置的迭代器
*/



//查找内置数据
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(20);
	v.push_back(30);
	vector<int>::iterator i = adjacent_find(v.begin(), v.end());
	if (i!=v.end())
	{
		cout << "找到了元素" << *i << endl;
	}
	else
	{
		cout << "未找到相邻的元素" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}
