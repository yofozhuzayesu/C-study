#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	查找指定元素是否存在
	bool binary_search(iterator beg,iterator end,value)
	//查找指定的元素，查到返回true，否则false
	//注意：在无序序列中不可用

*/


void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//注意：容器必须是有序序列，如果是无序的话，会出错
	bool b = binary_search(v.begin(), v.end(), 30);
	if (b)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}
