#include<iostream>
using namespace std;

/*
	普通函数和函数模板的调用规则:（也就是在重载的情况下）
	1.如果函数模板和普通函数都可以实现，优先调用普通函数
	2.可以通过空模板参数列表来强制调用函数模板
	3.函数模板也可以发生重载
	4.如果函数模板可以产生更好的匹配，优先调用函数模板
*/

void Myprint(int a, int b)
{
	cout << "这是普通函数调用" << endl;
}

template<class T>
void Myprint(T a, T b)
{
	cout << "这是模板函数的调用" << endl;
}

//模板函数重载
template<class T>
void Myprint(T a, T b,T c)
{
	cout << "这是模板函数的调用" << endl;
}


void test01()
{
	Myprint(10, 30);
}

void test02()
{
	//通过空模板参数列表，强制调用函数模板
	Myprint<>(20, 60);
}
void test03()
{
	//理论上普通函数和函数模板都可以调用
	//但是模板能产生更好的匹配，优先调用模板
	Myprint('c', 'v');
}
int main()
{
	test01();//优先调用普通函数
	test02();//强制调用函数模板
	test03();
	system("pause");
	return 0;
}
