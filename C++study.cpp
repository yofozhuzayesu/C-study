#include<iostream>
#include<string>
using namespace std;

/*
	string基本概念
	本质：string是C++风格的字符串，而string本质上是一个类

	string和char*的区别：
	char* 是一个指针
	string是一个类，类内部封装char*，管理这个字符串，是一个char*型的容器
*/

//string的构造函数
void test01()
{
	string s1;//默认构造
	cout << s1 << endl;

	const char* str = "Hello World";
	string s2(str);//有参构造  也可以写成string s2("Hello World");
	cout << s2 << endl;

	string s3(s2);//拷贝构造
	cout << s3 << endl;

	string s4(5, 'c');//使用5个c字符初始化
	cout << s4 << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
