#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	STL常用算法
	算法主要是由头文件<algorothm><functional><numeric>组成
	<algorithm>是所有头文件中最大的一个，范围涉及到比较、交换、查找、遍历操作、复制、修改等等
	<numeric>体积很小，只包括几个在序列上面进行简单数学运算你的模板函数
	<functional>定义了一些模板类，用以声明函数对象

*/

/*
	遍历算法  遍历容器元素
	for_each(iterator beg,iterator end,_func)
	三个参数分别表示 开始迭代器 结束迭代器  _func函数或者函数对象

*/

//普通函数
void print01(int val)
{
	cout << val << " ";
}

//class对象
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//普通函数
	for_each(v.begin(), v.end(),print01);

	cout << endl;
	//对象
	for_each(v.begin(), v.end(), print02());
}
int main()
{
	test01();
	system("pause");
	return 0;
}
