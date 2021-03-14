#include<iostream>
#include<set>
using namespace std;

/*
	set查找和统计
	find(key)             //查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end（）
	count(key)            //统计key的元素个数  对于set而言 结果为0或1
 */

void printSet(const set<int>st)
{
	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
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

	//查找
	set<int>::iterator pos = s1.find(300);//返回的是迭代器，所以需要一个迭代器变量来接收
	if (pos != s1.end())
	{
		cout << "找到了元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	cout << "容器中30的个数为：" << s1.count(30) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
