#include<iostream>
#include<list>
using namespace std;

/*
	List构造函数

	list<T> lst;
	list(beg,end);       //拷贝构造函数将[beg,end)中的元素拷贝给本身
	list(n,elem);
	list(const list &lst)
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
	list<int>l1;

	//添加数据
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//遍历容器
	printList(l1);

	//区间构造
	list<int>l2(l1.begin(), l1.end());//list的遍历器不能执行+-操作
	printList(l2);

	//拷贝构造
	list<int>l3(l2);
	printList(l3);

	list<int>l4(5, 6);
	printList(l4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
