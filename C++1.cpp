#include<iostream>
using namespace std;

int main() {

	//1.前置递增
	//2.后置递增
	//3.前置和后置的区别

	int a = 10;
	++a;//让变量+1
	cout <<"a="<<a << endl;
	
	int	b = 10;
	b++;//让变量+1
	cout << "b="<<b << endl;

	int a1 = 10;
	int b1 = ++a1 * 10;//前置运算，先让变量进行+1，再进行表达式运算
	cout << "a1=" << a1 << endl;//这里的a1进行了++运算
	cout << "b1=" << b1 << endl;

	int a2 = 10;
	int b2 = a2++ * 10;//后置运算 ，先进行表达式运算，再进行++
	cout << "a2=" << a2 << endl;//这里的a2进行了++运算
	cout << "b2=" << b2 << endl;

	system("pause");

	return 0;

}
