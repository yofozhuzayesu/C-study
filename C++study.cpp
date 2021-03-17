#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
	copy 容器内指定范围的元素拷贝到另一容器中
	copy(iterator beg,iterator end,iterator dest)
	//dest 目标容器起始迭代器

*/

//遍历输出
void myprint(int v)
{
	cout << v << "  ";
}

//内置数据类型
void test01()
{

	vector<int>v;
	vector<int>vt;
	v.push_back(15);
	v.push_back(30);
	v.push_back(18);
	v.push_back(21);

	//需要先给目标容器分配内存
	vt.resize(v.size());
	copy(v.begin(), v.end(), vt.begin());
	for_each(vt.begin(), vt.end(), myprint);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
