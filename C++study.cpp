#include<iostream>
#include<list>
using namespace std;

/*
	list大小操作
	size()
	empty()
	resize(num)
	resize(num,elem)

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

	//size() 和empty()
	if (l1.empty())
	{
		cout << "l1容器为空" << endl;
	}
	else
	{
		cout << "l1容器不为空" << endl;
	}
	cout << "l1中的元素个数为：" << l1.size() << endl;
	
	//resize
	l1.resize(6);
	printList(l1);//默认用0填充
	l1.resize(15, 2);//指定用2填充
	printList(l1);

}


int main()
{
	test01();
	system("pause");
	return 0;
}
