#include<iostream>
#include<string>
using namespace std;

//const 修饰指针
/*
1.const修饰指针 常量指针：指针的指向可以改，但是指针指向的值不可以改 (const int *p)
2.const修饰常量 指针常量：指针的指向不可以改，但是指针指向的值可以改(int * const p )
3.const即修饰指针，又修饰常量：指针的指向和指向的值都不可以改（const int * const p ）
*/


int main()
{
	//const修饰指针
	int a = 20;
	int b = 10;
	const int * p = &a;
	p = &b;
	//*p = b;错误，指针指向的值不可以改

	//const修饰常量
	int * const p2 = &a;
	*p2 = b;
	//p2 = &b;错误，指针的指向不可以修改

	//const双修饰
	const int * const p3 = &a;
	//*p3 = b;错误
	//p3 = &b;错误

	system("pause");
	return 0;
}

