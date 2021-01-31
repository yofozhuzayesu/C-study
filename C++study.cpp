#include<iostream>
#include<string>
using namespace std;


//函数默认参数
//在C++中，函数的形参列表中的形参是可以有默认值的
//语法：返回值类型 函数名 （参数=默认值）｛｝

int func(int a = 10, int b = 20)
{
	return a + b;

}
//注意事项

//1.如果某个位置已经有了默认参数，那么从这个位置往后从左到右都必须有默认值
//int func2(int a, int c = 10, int b)
//{
//}

//2.如果函数的声明有了默认参数，函数的实现（定义）就不能由默认参数
//int func3(int a=10, int b=10);
//int func3(int a = 10, int b = 10)
//{
//	return a + b;
//}


int main()
{
	int a = func(20,30);//如果有数据传入就用传入的数据，如果没有数据传入，则用默认的数据
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}

