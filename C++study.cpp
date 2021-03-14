#include<iostream>
#include<string>
using namespace std;

/*
	pair对组创建
	成对初夏你的数据，利用对组可以返回两个数据

	两种创建方式：
	pair<type,type> p (value1,value2)     //默认构造
	pair<type,type> p = make_pair(value1,value2)
 */


void test01()
{
	//创建对组
	pair<string, int> p("孙悟空", 9999);
	//获取对组属性
	cout << p.first << endl;
	cout << p.second << endl;


	//第二种方式创建对组
	pair<string, int> p2 = make_pair("猪八戒", 999999);
	cout << p2.first << endl;
	cout << p2.second << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
