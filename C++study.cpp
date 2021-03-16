#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

/*
	逻辑仿函数：实现逻辑运算
	template<class T> bool logical_and<T>               //逻辑与
	template<class T> bool logical_or<T>                //逻辑或
	template<class T> bool logical_not<T>               //逻辑非

*/
void printVector(vector<bool> v)
{
	for (vector<bool>::iterator i = v.begin(); i!= v.end(); i++)
	{
		cout << *i << "   ";
	}
	cout << endl;
}

//测试非
void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	
	printVector(v);

	//利用逻辑非  将容器V搬运到容器V2中，并执行取反操作
	vector<bool>v2;
	v2.resize(v.size());

	//搬运算法 transform  前两个参数是原容器的起止地址，第三个参数是新容器的起地址
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	printVector(v2);
	

}
int main()
{
	test01();
	system("pause");
	return 0;
}
