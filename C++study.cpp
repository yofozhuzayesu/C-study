#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

/*
	deque容器排序
	sort(iterator beg,iterator end)  //对beg和end区间的元素进行排序

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
	d1.push_back(60);
	d1.push_back(20);
	d1.push_back(40);
	d1.push_back(30);
	d1.push_back(10);

	//排序之前
	printDeque(d1);

	//排序之后  sort默认排序是升序  
	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序 例如vector
	sort(d1.begin(), d1.end());
	printDeque(d1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
