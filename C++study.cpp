#include<iostream>
#include<list>
using namespace std;

/*
	List赋值和交换

	assign(beg,end)
	assign(n,elem)
	list& operator=(const list&l)
	swap(lst)
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

	//assign赋值操作
	list<int> l2;
	l2.assign(l1.begin(), l1.end());
	printList(l2);

	//assing赋值操作  n个elem
	list<int>l3;
	l3.assign(5, 6);
	printList(l3);
	
}

//交换操作
void test02()
{
	list<int>l1;

	//添加数据
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	list<int>l2(10, 100);
	cout << "交换前：" << endl;
	printList(l1);
	printList(l2);

	l1.swap(l2);
	cout << "交换后；" << endl;
	printList(l1);
	printList(l2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
