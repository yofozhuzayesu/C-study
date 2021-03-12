#include<iostream>
#include<vector>
using namespace std;

/*
	vector互换容器
	目的：实现两个容器内元素进行互换
	原型：swap(vec)   //将vec与本身的元素互换

*/

//基本使用
void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<<" " ;
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	cout << "这是交换前的容器数据" << endl;
	printVector(v1);
	printVector(v2);

	cout << "这是交换后的容器数据：" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}


//2.实际用途
//巧用swap可以收缩内存空间
void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "V的容量为：" << v.capacity() << endl;
	cout << "V的大小为：" << v.size() << endl;

	v.resize(3);//重新指定大小  但是容量不会变
	cout << "V的容量为：" << v.capacity() << endl;
	cout << "V的大小为：" << v.size() << endl;

	//巧用swap收缩内存
	//vector<int>(v)  相当于对一个匿名对象进行拷贝构造，利用v目前所用的元素个数来初始化这个匿名对象的容量
	//.swap(v)  容器的指针交换  至于匿名对象 会由系统自动收回
	vector<int>(v).swap(v);
	cout << "V的容量为：" << v.capacity() << endl;
	cout << "V的大小为：" << v.size() << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
