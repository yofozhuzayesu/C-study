#include<iostream>
#include<list>
using namespace std;

/*
	list 插入和删除

	push_back(elem)
	pop_back()
	push_front(elem)
	pop_front
	insert(pos.elem);//在pos位置插入elem元素的拷贝，返回新数据的位置
	insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值
	insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值
	clear()
	erase(beg,end)
	erase(pos);//删除pos位置的数据，返回下一个数据的位置
	remove(elem);//删除容器中所有与elem值匹配的元素
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

	//头插
	l.push_front(50);
	printList(l);//50 10 20 30 40
	
	//insert插入
	list<int>::iterator it = l.begin();
	l.insert(++it, 1000);
	printList(l);//50 1000 10 20 30 40

	//删除
	it = l.begin();
	l.erase(++it);
	printList(l);// 50 10 20 30 40

	//移除
	l.push_back(10000);
	l.push_back(10000);
	l.push_back(10000);
	cout << "移除之前" << endl;
	printList(l);
	cout << "移除之后" << endl;
	l.remove(10000);//删除同样的所有的所有数据
	printList(l);
}


int main()
{
	test01();
	system("pause");
	return 0;
}
