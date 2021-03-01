#include<iostream>
#include<string>
using namespace std;

//左移运算符重载 <<

class person
{
public:
	int m_a;
	int m_b;
	//利用成员函数重载左移运算符 p.operator<<(cout)  简化版本 p<<cout
	//通常不会成员函数重载左移运算符  因为无法实现cout在左侧
	/*void operator<<(cout)
	{
		
		
	}*/
};

//只能利用全局函数重载左移运算符
//cout属于输出流对象
ostream & operator<<(ostream &cout,person p) //本质是operator<<(cout,p)  简化成cout<<p
{
	cout << p.m_a << endl;
	cout << p.m_b << endl;
	return cout;
}
void test01()
{
	person p;
	p.m_a = 10;
	p.m_b = 20;
	//cout << p << endl;
	//链式编程思想
	//正常情况下，cout有返回值，可以继续追加对象，但是目前定义的是无返回值
	//修改方式是将重载函数改成有返回值的，返回的对象类型为ostream
	cout << p << "Hello world" << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}
