#include<iostream>
#include<string>
#include"swap.h"//注意这里用的是引号，不是尖括号
using namespace std;

//指针
//基本概念：通过指针间接访问内存
/*
1.内存编号从0开始，一般用16进制标书
2.可以利用指针变量记录地址
*/

int main()
{
	//定义指针
	int a = 10;
	//定义指针的语法：数据类型 * 指针变量
	int * p;
	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p=" << p << endl;

	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加*表示解引用，找到指针指向的内存中的数据
	*p = 100;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;

	system("pause");
	return 0;
}

