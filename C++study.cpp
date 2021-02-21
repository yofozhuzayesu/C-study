#include<iostream>
#include<string>
using namespace std;

//初始化列表
//作用：C++提供了初始化列表语法，用来初始化属性
//语法：构造函数()：属性1（值1），属性2（值2）...｛｝

class person
{
	
public:
	////传统初始化操作
	//person(int a,int b,int c)
	//{
	//	p_a = a;
	//	p_b = b;
	//	p_c = c;
	//}

	//初始化列表初始化属性
	person(int a,int b,int c) :p_a(a), p_b(b), p_c(c)//利用该方式使得初始化更灵活
	{

	}
	//属性
	int p_a;
	int p_b;
	int p_c;

};
void test01()
{
	//person p(10, 20, 30);//传统方式初始化（有参构造函数不使用初始化列表需要进行赋值操作）
	person p(10,20,30);//初始化列表
	cout << p.p_a << endl;
	cout << p.p_b << endl;
	cout << p.p_c << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
