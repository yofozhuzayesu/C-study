#include<iostream>
#include<deque>
using namespace std;

/*
	deque 数据存取操作
	at(int idx)
	operatot[]
	front()     //返回容器中的第一个数据元素
	back（）    //返回容器中的最后一个数据元素
*/

void printDeque(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(40);
	d1.push_back(50);

	cout << d1[1] << endl;//20
	cout << d1.at(1) << endl;//20
	cout << d1.front() << endl;//10
	cout << d1.back() << endl;//50
}
int main()
{
	test01();
	system("pause");
	return 0;
}
