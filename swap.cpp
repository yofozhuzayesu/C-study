#include"swap.h"
//函数的声明在swap.h中，所以要先引用

void swap(int a, int b)//函数定义
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;//用到的cout语句是iostream头文件中的，所以在swap.h的头文件中也需要引用
	cout << "b=" << b << endl;

}
