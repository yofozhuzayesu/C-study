#include<iostream>
#include<map>
using namespace std;

/*
	查找和统计
	find(key)      //查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end()
	count(key)     //统计key的元素个数 对于map容器而言 结果为0或1
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
	
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(4, 60));
	mp1.insert(pair<int, int>(7, 50));
	mp1.insert(pair<int, int>(3, 60));

	//查找key=3的数据
	map<int, int>::iterator it = mp1.find(9);
	if (it != mp1.end())
	{
		cout << "找到了" << endl;
		cout << "key值为：" << (*it).first << "   " << "value:" << (*it).second << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}
