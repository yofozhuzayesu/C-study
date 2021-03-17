#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
	swap 互换两个容器的元素  
	swap(container c1,container c2)
	交换容器时 注意两个容器类型要一致
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
	vector<int>v2;
	v1.push_back(15);
	v1.push_back(20);
	v1.push_back(18);
	v1.push_back(20);
	v1.push_back(19);
	v1.push_back(21);

	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myprint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myprint);
	cout << endl;
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}
