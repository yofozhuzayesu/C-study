#include<iostream>
#include<set>
using namespace std;

/*
	set和multiset区别
	set不可以插入重复数据，而multiset可以
	set插入数据的同时会返回插入结果，表示插入是否成功
	multiset不会检测数据，因此可以插入重复数据
 */

void printSet(const set<int>st)
{
	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void printMultiset(const multiset<int> ms)
{
	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>s1;
	pair<set<int>::iterator,bool> ret =  s1.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}

	pair<set<int>::iterator, bool> ret2 = s1.insert(10);
	if (ret2.second)
	{
		cout << "第二次插入成功" << endl;
	}
	else
	{
		cout << "第二次插入失败" << endl;
	}

	
}

void test02()
{
	//multiset允许重复插入
	multiset<int> ms1;
	ms1.insert(10);
	ms1.insert(10);
	printMultiset(ms1);

	//multiset的insert函数返回的是一个迭代器
	multiset<int>::iterator it = ms1.insert(400);
	cout << *it << endl;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
