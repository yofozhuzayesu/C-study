#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	遍历算法  搬运容器到另一个容器中
	transform(iterator beg1,iterator end1,itetator beg2,_func)
	_func  如果是普通函数的话就写函数名即可  是函数对象的话 需要写括号

*/

void myprint(int v)
{
	cout << v << " ";
	
}

//搬运执行的相当是一个赋值操作，所以需要返回一个值
int myTrans(int v)
{
	return v;
}


void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;
	//搬运之前需要先设置目标容器的容量 不然会崩
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), myTrans);
	for_each(v2.begin(), v2.end(), myprint);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
