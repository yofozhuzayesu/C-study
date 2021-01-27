#include<iostream>
#include<string>
using namespace std;

//内存分区模型

/*
1.代码区：存放函数体的二进制代码，由操作系统进行管理
2.全局区：存放全局变量和静态变量以及常量
3.栈区：由编译器自动分配释放，存放函数的参数值，局部变量
4.堆区：由程序员分配和释放，若程序员不释放，程序结束时有操作系统回收
*/

//内存四区意义：不同区域存放的数据，赋予不同的生命周期，给与我们更大的灵活编程

//程序运行前
/*
在程序编译后，生成了exe可执行程序，未执行程序前分为两个区域
代码区：存放CPU执行的机器指令
		代码区是共享的。共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
		代码区是只读的。使其只读的原因是防止程序意外的修改了它的指令

全局区：存放全局变量和静态变量
		全局区还包含了常量区，字符串常量和其他常量也存放在此
		该区域的数据在程序结束后由操作系统释放
*/


//程序运行后
/*
栈区：
	由编译器自动分配释放，存放函数的参数值，局部变量等
	注意：不需要返回局部变量的地址时，栈区开辟的数据由编译器自动释放
*/

int * func()
{
	int a = 10;//局部变量，存放在栈区，栈区的数据在函数执行完毕后自动释放
	return &a;//返回局部变量的地址
}

int main()
{
	int *p = func();
	cout << *p << endl;//第一次可以打印正确的数字，因为编译器做了保留
	cout << *p << endl;//第二次数据不再保留
	system("pause");
	return 0;
}

