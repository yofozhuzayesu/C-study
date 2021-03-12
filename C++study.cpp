#include<iostream>
#include<vector>
using namespace std;

/*
	vector容器的容量和大小操作
	函数原型：
	empty()                //判断容器是否为空
	capacity()             //容器的容量
	size()                 //返回容器中元素的个数
	resize(int num)        //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
						   //如果容器变短，则末尾超出容器长度的元素被删除
	resize(int num,elem)   //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
	                       //如果容器变短，则末尾超出容器长度的元素被删除

*/

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//判断容器是否为空
	//empty()函数返回值为bool类型
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
	}

	//获得容器的容量 13 
	cout << v1.capacity() << endl;
	//获得v1的大小
	cout << v1.size() << endl;

	//重新指定大小
	v1.resize(15);
	printVector(v1);//如果重新指定的过长，默认用0填充新的位置
	v1.resize(19, 100);//或者利用100填充
	printVector(v1);
}


int main()
{
	test01();
	system("pause");
	return 0;
}
