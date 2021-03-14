#include<iostream>
#include<map>
using namespace std;

/*
	插入和删除
	insert(elem)
	clear()
	erase(pos)    //删除迭代器所指的元素，返回下一个元素的迭代器
	erase(beg,end)
	erase(key)    //删除容器中值我key的元素
*/
void printMap(const map<int, int> &m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key值:" << (*it).first << "  " << "Value:" << (*it).second << endl;
	}
}
void test01()
{
	map<int, int>mp1;
	//map中的元素都是对组
	mp1.insert(pair<int, int>(1, 10));

	//第二种插入办法
	mp1.insert(make_pair<int, int>(3, 40));

	//第三种插入办法
	mp1.insert(map<int, int>::value_type(2, 60));

	//第四种  map重载了[] （但是不推荐）
	//中括号的意义在于利用key来访问value
	mp1[4] = 70;
	//cout << mp1[5] << endl;//在没有插入key值为5的元素时，会默认为0
	printMap(mp1);
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}
