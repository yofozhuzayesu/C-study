#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
	merge 两个容器元素合并，并存储到另一容器中
	merge(iterator beg1,iterator end1,iterator beg2,iterator end2,itetator dest)
	//注意两个容器必须是有序的
	//dest 目标容器开始迭代器
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
	vector<int>v2;
	v.push_back(15);
	v.push_back(30);
	v.push_back(18);
	v.push_back(21);

	for (int i = 0; i < 10; i++)
	{
		//v.push_back(i + 1);
		v2.push_back(i);
	}
	
	//目标容器
	vector<int>vT;
	//需要提前给目标容器给分配内存
	vT.resize(v.size() + v2.size());
	//需要给两个容器先排序 两个容器内的数据必须同为升序 或者降序
	sort(v.begin(), v.end());
	merge(v.begin(), v.end(), v2.begin(), v2.end(), vT.begin());
	for_each(vT.begin(), vT.end(), myprint);
	

}

int main()
{
	test01();
	system("pause");
	return 0;
}
