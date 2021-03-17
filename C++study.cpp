#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
	reverse 将容器内元素进行反转
	reverse(iterator beg,iterator end)

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
	v.push_back(15);
	v.push_back(30);
	v.push_back(18);
	v.push_back(21);

	cout << "反转之前的容器为：";
	for_each(v.begin(), v.end(),myprint);
	cout << endl;
	
	//反转容器
	reverse(v.begin(), v.end());
	cout << "反转之后的容器为：";
	for_each(v.begin(), v.end(), myprint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
