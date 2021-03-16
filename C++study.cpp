#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/*
	谓词概念
	返回bool类型的仿函数称为谓词
	如果operator()接受一个参数，那么叫做一元谓词
	如果operator()接受两个参数，那么叫做二元谓词

*/
class Five
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test01()
{
	vector<int>v;
	for (int  i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//需求：在容器中查找有没有大于5的数字
	//需要使用到find_if算法  返回值是找到的第一个大于5的元素的迭代器
	vector<int>::const_iterator it= find_if(v.begin(), v.end(), Five());//第三个参数是谓词，应该传入一个函数对象，但是用匿名函数对象也可以
	if (it != v.end())
	{
		cout << "找到了大于5的数字为" << (*it) << endl;
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
