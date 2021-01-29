#include<iostream>
#include<string>
using namespace std;


//引用
//作用：给变量起别名
//语法：数据类型 &别名 = 原名

//引用注意事项
//引用必须初始化
//引用在初始化后，不可以改变
int main()
{
	int a = 20;
	int c = 10;
	int &b = a;//引用初始化，不能写int &b;
	//int &b = c;引用初始化之后，不可以改变
	b = 20;
	cout << a << endl;
	cout << b << endl;
	system("pause");
	return 0;
}

