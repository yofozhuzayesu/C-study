#include<iostream>
#include<string>

using namespace std;

//函数
/*
1.返回值类型
2.函数名
3.参数表列
4.函数体语句
5.return语句

*/
//实现一个加法的函数，计算数据相加的结果，并且返回

int add(int num1,int num2)//函数定义的时候num1,num2没有真实的数据，叫做形参
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	int num1,num2;//此处的sum1 sum2是实际参数，叫做实参
	cout << "请输入第一个数：";
	cin >> num1;
	cout << "请输入第二个数：";
	cin >> num2;

	int sum = add(num1, num2);//函数调用的时候，实参会传递给形参，函数的返回值传递给sum
	cout << "两个数的总和为："<<sum << endl;

	system("pause");
	return 0;

}
