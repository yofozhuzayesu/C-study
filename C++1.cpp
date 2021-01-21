#include<iostream>
using namespace std;

int main() {
	
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数做相除的运算，结果依然是整数，去除小数部分

	//int a2 = 10;
	//int b2 = 0;
	//cout << a2 / b2 << endl;//除数不可以为0

	double d1 = 0.5;
	double d2 = 0.2;
	cout << d1 / d2 << endl;//小数也可以相除，除的尽的时候是整数，除不尽的时候是小数
	

	system("pause");

	return 0;

}
