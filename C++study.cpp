#include<iostream>
#include<string>

using namespace std;

//值传递

//函数的形参发生改变，并不会影响实参

//定义函数，实现两个数字进行交换

//如果函数不需要返回值，声明的时候可以写void

void swap(int num1, int num2)
{
	int num = num1;
	num1 = num2;
	num2 = num;
	cout << "交换后第一个数字为：" << num1 << endl;

	cout << "交换后第二个数字为：" << num2 << endl;

	//return;//返回值不需要的时候，也可以不用写
}


int main()
{
	int num1,num2;//此处的sum1 sum2是实际参数，叫做实参
	cout << "请输入第一个数：";
	cin >> num1;
	cout << "请输入第二个数：";
	cin >> num2;

	swap(num1, num2);//在函数内，由实参传递给形参的值发生了改变

	cout << "原始第一个数字为：" << num1 << endl;//函数外，实参并没有改变
	cout << "原始第二个数字为：" << num2 << endl;

	system("pause");
	return 0;

}
