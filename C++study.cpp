#include<iostream>
#include<vector>
using namespace std;

/*
	vector数据存取

	at(int idx)            //返回索引idx所指的数据
	operator[]             //返回索引idx所指的数据
  	front()                //返回容器中第一个数据元素
	back()                 //返回容器中最后一个数据元素

*/

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	printVector(v1);

	//返回索引指向的数据
	cout << v1.at(0) << endl;
	cout << v1[2] << endl;

	//返回第一个元素
	cout << v1.front() << endl;
	//返回最后一个元素
	cout << v1.back() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
