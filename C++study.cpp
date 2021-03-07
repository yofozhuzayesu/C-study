#include<iostream>
using namespace std;

//函数模板注意事项


template<typename T> //template可以替换为class  没啥区别
void Myswap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 20;
	int b = 10;
	char c = 'c';
	//1.自动类型推导 必须推导出一致的数据类型T，才可以使用
	//Myswap(a, c);// 错误 无法推导出一致的数据类型T
	Myswap(a, b);
	cout << a << endl;
	cout << b << endl;

}

template<class T>
void func()
{
	cout << "func函数的调用" << endl;
}

void test02()
{
	//2.模板必须要确定出T的数据类型，才可以使用
	//func();//错误  因为无法确定T的数据类型
	func<int>();//强制确定T的数据类型
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
