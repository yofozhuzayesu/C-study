#include<iostream>
#include<deque>
using namespace std;

/*
	deque大小操作
	empty()                //判断容器是否为空
	size()                 //返回容器中元素的个数
	resize(int num)        //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
						   //如果容器变短，则末尾超出容器长度的元素被删除
	resize(int num,elem)   //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
	                       //如果容器变短，则末尾超出容器长度的元素被删除

	注意：deque没有capacity函数，也就是deque可以无限的开辟空间
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

	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
	}

	cout << "d1的元素个数为：" << d1.size() << endl;
	
	d1.resize(15);
	printDeque(d1);
	
	d1.resize(19, 1);
	printDeque(d1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
