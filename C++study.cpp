#include<iostream>
#include<list>
#include<ctime>
using namespace std;

/*
	list反转和排序

	reverse();//反转
	sort();//排序

	所有不支持随机访问迭代器的容器，不可以用标准算法
	不支持随机访问迭代器的容器，内部都会提供一些对应的算法
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
	printList(l);//10 20 30 40 
	
	//反转
	l.reverse();
	printList(l);// 40 30 20 10
}


//若想降序排列 需要重载sort函数，重载的条件的是形参不同
//将该函数放在sort内，会判断是使用降序还是升序
bool myCompare(int v1, int v2)
{
	//降序  让第一个数>第二个数
	return v1 > v2;
}
//排序
void test02()
{
	list<int>l;
	srand(time(NULL));//利用时间做种子
	for (int i = 0; i < 10; i++)
	{
		
		int num = rand() % 41 + 60;
		l.push_back(num);
	}
	cout << "排序前：" << endl;
	printList(l);
	cout << "排序后：" << endl;
	//l.sort();//默认按升序排列
	l.sort(myCompare);//按降序排列
	printList(l);
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
