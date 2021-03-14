#include<iostream>
#include<set>
#include<ctime>
using namespace std;

/*
	set/multiset容器大小和交换   插入和删除
	size();
	empty();
	swap();

	insert(elem)
	clear();
	erase(pos);
	erase(beg,end);
	erase(elem);          //删除容器中值为elem的元素


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
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
	}

	cout << "s1中元素个数为：" << s1.size() << endl;


	set<int>s2;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		int num = rand() % 41 + 60;
		s2.insert(num);
	}
	printSet(s2);

	s2.swap(s1);
	cout << "************************" << endl;
	cout << "交换后：" << endl;
	printSet(s1);
	printSet(s2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
