#include<iostream>
#include<list>
using namespace std;

/*
	list容器 数据存取
	对list容器中数据进行存取
	front()  //返回第一个元素
	back()   //返回最后一个元素

	list不支持at和[]  因为链表不是连续的存储空间
	迭代器也不支持随机（也就是跳跃式）访问  ---即不支持 list ::iterator+2操作 只支持++ --
 */

void printList(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}
void test01()
{
	list<int>l;
	//尾插
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	printList(l);
	cout << "L的第一个元素为" << l.front() << endl;
	cout << "L的最后一个元素为" << l.back() << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}
