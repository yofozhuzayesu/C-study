#include<iostream>
using namespace std;

int main() {

	//逻辑运算符
	//或 ||  其中一个为真则为真，两个都为假则假
	//与 &&  两个都为真的时候才为真，否则为假
	//非 ！  a假，则!a为真

	//非
	int a = 10;//只要不为0，则都为真
	cout << a << endl;//输出10
	cout << !a << endl;//输出假
	cout << !!a << endl;//输出真

	//与
	int a1 = 10;
	int b1 = 10;
	cout << (a1&&b1) << endl;//两个都为真输出1；

	int a2 = 10;
	int b2 = 0;
	cout << (a2&&b2) << endl;//其中一个为假，输出0

	int a3 = 0;
	int b3 = 0;
	cout << (a3&&b3) << endl;//两个都为假，输出0
 
	//或
	int c1 = 10;
	int d1 = 10;
	cout << (c1||d1) << endl;//两个都为真，输出1

	int c2 = 10;
	int d2 = 0;
	cout << (c2||d2) << endl;//其中一个为假一个为真，输出1

	int c3 = 0;
	int d3 = 0;
	cout << (c3||d3) << endl;//两个都为假，输出0

	system("pause");

	return 0;

}
