#include<iostream>
#include<vector>
using namespace std;

/*
	vector预留空间
	减少vector在动态扩展容量时的拓展次数
	reserve(int len)       //容器预留len个元素长度，预留位置不初始化，元素不可访问
 
*/


void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<<" " ;
	}
	cout << endl;
}

void test01()
{
	vector<int>v;
	//利用reserve预留空间
	v.reserve(100000);
	int num = 0;//统计开辟的次数
	int *p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p!=&v[0])
		{
			//每次开辟内存时，首地址都会发生改变
			//不用reserve函数的话，num最后变成30
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
