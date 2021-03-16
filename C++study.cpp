#include<iostream>
#include<functional>
using namespace std;

/*
	内建函数对象：STL内建了一些函数对象

	分类：
	算术仿函数
	关系仿函数
	逻辑仿函数

	使用方法和一般的函数完全相同
	使用内建函数对象 需要引入头文件functional
*/

/*
	算术仿函数
	实现四则运算，其中negate是一元运算，其他都是二元运算
	template<class T> T plus<T>          //加法仿函数
	template<class T> T minus<T>         //减法仿函数
	template<class T> T multiplies<T>    //乘法仿函数
	template<class T> T divides<T>       //除法仿函数
	template<class T> T modulus<T>       //取模仿函数
	template<class T> T negate<T>        //取反仿函数

*/

//取反操作
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}

//四则运算
void test02()
{
	plus<int> p;
	cout << p(10, 20) << endl;
	minus<int> m;
	cout << m(10, 50) << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
