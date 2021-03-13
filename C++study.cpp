#include<iostream>
#include<set>
using namespace std;

/*
	set/multiset容器
	所有元素都会在插入的时自动排序

	本质：属于关联式容器，底层结构是用二叉树实现

	set/multiset区别
	set不允许容器中有重复的元素
	multiset允许容器中有重复的元素

	构造：
	set<T> st;
	set(const set &st)
	赋值：
	set& operator=(const set &st)

 */

void printSet(const set<int>st)
{
	for (set<int>::iterator it =st.begin(); it != st.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>s1;

	//set插入数据 只有insert方式
	//插入的时候就自动升序排序了  并且不会出现重复值
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	s1.insert(40);

	printSet(s1);

	//拷贝构造
	set<int>s2(s1);
	printSet(s2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
