#include<iostream>
#include<map>
using namespace std;

/*
	map/multimap基本概念
	map中所有元素都是pair
	pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
	所有元素都会根据元素的键值自动排序

	本质：map/multimap属于关联式容器，底层结构是用二叉树实现的

	优点：可以根据key值快速找到value指

	区别
	map不允许容器中有重复key值元素
	multimap允许容器中有重复key值元素
 */

/*
	构造：
	map<T1,T2>mp;
	map(const map &mp);   //拷贝构造
	赋值：
	map& operator=(const map &mp);//重载等号运算符
*/

void test01()
{
	map<int, int>mp1;
	//map中的元素都是对组
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(4, 20));
	mp1.insert(pair<int, int>(2, 30));
	mp1.insert(pair<int, int>(3, 40));

	for (map<int,int>::const_iterator it = mp1.begin(); it != mp1.end(); it++)
	{
		cout << (*it).second << " ";//10 30 40 20  默认按key升序排序
	}
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}
