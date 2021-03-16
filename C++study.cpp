#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

/*
	关系仿函数:实现关系对比
	template<class T> bool equa_to<T>               //等于
	template<class T> bool not _equa_to<T>          //不等于
	template<class T> bool greater<T>            //大于
	template<class T> bool greater_equal<T>         //大于等于
	template<class T> bool less<T>                  //小于
	template<class T> bool less_equal<T>            //小于等于

*/
void printVector(vector<int> v)
{
	for (vector<int>::iterator i = v.begin(); i!= v.end(); i++)
	{
		cout << *i << "   ";
	}
	cout << endl;
}

//大于操作
void test01()
{
	vector<int> v;
	v.push_back(90);
	v.push_back(70);
	v.push_back(40);
	v.push_back(80);
	v.push_back(60);
	printVector(v);

	//利用编译器提供的函数对象实现降序排列
	//如果sort算法不传第三个参数的话，则重载的是less排序规则的函数
	sort(v.begin(), v.end(), greater<int>());
	printVector(v);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
