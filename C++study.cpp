#include<iostream>
#include<string>
using namespace std;

//函数的声明
//比较函数，实现两个整型数字进行比较，返回较大的值

//如果不声明，则只能将函数的定义写在main之前
/*int max(int a, int b)
{
	return a > b ? a : b;//三目运算符简化
}*/


int max(int a, int b);//函数的声明，提前告诉编辑器函数存在，可将函数写在声明之后任意位置
//声明能写多次，但是定义只能写一次


int main()
{
	cout << "两个数中最大的值为：" << max(10,20) << endl;//cout可以直接输出函数的值
	system("pause");
	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;//三目运算符简化
}
