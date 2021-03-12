#include<iostream>
#include<deque>
using namespace std;

/*
	deque容器
	双端数组，可以对头端进行插入删除杀出

	deque和vector区别
	1.vector对于头部的插入删除效率低，数据量大，效率越低
	2.deque相对而言，对头部的插入删除速度比vector快
	3.vector访问元素时的速度会比deque快，这和两者内部实现有关

	deque构造函数 类似vector
*/

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//为了防止修改操作
		//形参中用const 
		//同样的迭代器 也要改写成const_iterator
		//*it = 100;
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2(d1.begin(), d1.end());//将d1中的区间内的元素拷贝给d2
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
