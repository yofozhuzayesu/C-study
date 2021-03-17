#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

/*
	常用算术生成算法
	算术生成算法属于小型算法，使用时包含的头文件为 numeric

	accmulate(iterator beg,iterator end,value)  计算容器元素累计总和
	//value 是指的起始值  比如写0 就是0+v[1]+v[2]+v[3].....

	fill(iterator beg,iterator end,value)  向容器中填充元素
	//value填充的值
	fill可以填充空容器（需要先定义容器容量）
	也可以填充非空容器，相当于替换replace操作
*/

//遍历输出
void myprint(int v)
{
	cout << v << "  ";
}

//内置数据类型
void test01()
{

	vector<int>v1;
	v1.push_back(15);
	v1.push_back(20);
	v1.push_back(18);
	v1.push_back(20);
	v1.push_back(19);
	v1.push_back(21);
	//cout << accumulate(v1.begin(), v1.end(), 0) << endl;//113
	
	fill(v1.begin(), v1.begin() + 2, 100);
	for_each(v1.begin(), v1.end(), myprint);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
