#include<iostream>
#include<string>
using namespace std;

//空指针：指针变量指向内存中编号为0的空间
//用途：初始化指针变量（即一开始指针不知道指向哪，就指向0好了）
//注意：空指针指向的内存是不可访问的

//野指针：指针变量指向非法的内存空间

int main()
{
	
	/*
	//空指针
	int *p = NULL;
	//p = 100;  0-255之间的内存编号是系统占用的， 不可访问
	*/

	//野指针
	//在程序中尽量避免野指针
	int * p = (int *)0x11110;//这个指针地址并未申请，无权限访问，运行的时候会崩溃
	cout << *p << endl;
	system("pause");
	return 0;
}

