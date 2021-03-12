#include<iostream>
#include<deque>
using namespace std;

/*
	deque插入和删除
	与vector不同的是 可以前插和前删
*/

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	//尾删
	d1.pop_back();
	printDeque(d1);

	//前删
	d1.pop_front();
	printDeque(d1);

}

void test02()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);

	//insert插入
	d.insert(d.begin()+2, 2,1000);//第一个参数是pos  第二个参数是插入的个数  第三个元素是插入的数据
	printDeque(d);

	//区间插入
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);
}

//删除
void test03()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);

	d.erase(d.begin(), d.begin() + 3);
	printDeque(d);

	d.clear();
	printDeque(d);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
