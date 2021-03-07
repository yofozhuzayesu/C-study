#include<iostream>
using namespace std;

/*

   普通函数和函数模板区别：
   1.普通函数调用时可以发生自动类型转换（隐式类型转换）
   2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
   3.如果利用显示指定类型的方式，可以发生隐式类型转换

*/

//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

void test01()
{
	//发生隐式转换，就是函数自动将其他变量转换成int类型
	//c 对应的ASCII码是99
	cout << myAdd01('c', 10.5) << endl;
}

template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test02()
{
	cout << myAdd02(10, 30) << endl;
	//自动类型推导，无法发生隐式转换
	//cout << myAdd02(10.5, 30) << endl;

	//采用显式指定类型的方式，可以发生隐式类型转换
	cout << myAdd02<int>(10.5, 200.96) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
