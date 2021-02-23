#include<iostream>
#include<string>
using namespace std;

//C++对象模型和this指针
//在C++中，类内的成员变量和成员函数分开储存
//只有非静态成员变量才属于类的对象上

class person
{
	int m_a;//非静态成员变量，属于类的对象上
	static int m_b;//静态成员变量，不属于类的对象上
	void func()
	{

	}//非静态成员函数，不属于类的对象上
	static void func2() {}//静态成员函数，不属于类的对象上
};
int person::m_b = 10;//静态成员变量初始化

void test01()
{
	person p1;
	//空对象占用内存空间:1
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p  = " << sizeof(p1) << endl;
}

void test02()
{
	person p2;
	//类对象中有一个int非静态成员变量，占用内存空间：4
	//说明非静态成员变量属于类的对象上
	//静态成员变量不属于类的对象上
	//非静态成员函数不属于类的对象上
	cout << "size of p  = " << sizeof(p2) << endl;//非空对象

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
