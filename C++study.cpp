#include<iostream>
#include<string>
using namespace std;

//深拷贝与浅拷贝
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作

class person
{
public:
	person()
	{
		cout << "person默认构造函数调用" << endl;
	}
	person(int age,int height)
	{
		p_age = age;
		p_Height=new int(height);
		cout << "person有参构造函数调用" << endl;
	}
	person(const person &p)    //在不定义拷贝构造函数的情况下，编译器默认提供拷贝构造函数
	{
		p_age = p.p_age;
		//p_Height = p.p_Height 编译器默认实现就是这行代码——浅拷贝
		//深拷贝
		p_Height = new int(*p.p_Height);
		cout << "person拷贝构造函数调用" << endl;
	}
	~person()
	{
		//析构代码作用，将堆区开辟数据做释放操作
		if (p_Height != NULL)//如果不为空就置为空
		{
			delete p_Height;
			p_Height = NULL;//规范操作
		}
		//浅拷贝带来的问题就是堆区的内存重复释放
		//根据先进后出的顺序，拷贝出来的对象P2会先释放堆区的数据，导致P1再释放堆区的数据的时候出现错误
		//解决方法：浅拷贝的问题要利用深拷贝解决，就是自己再写一个拷贝函数，重新开辟一个堆区存放数据


		cout << "person默认析构函数调用" << endl;

	}
	int p_age;
	int *p_Height;//身高
};

void test01()
{
	person p1(18,180);
	cout << "p1的年龄：" << p1.p_age << endl;
	cout << "p1的身高：" << *p1.p_Height << endl;

	person p2(p1);
	cout << "p2的年龄：" << p2.p_age << endl;//年龄是浅拷贝
	cout << "p2的身高：" << *p2.p_Height << endl;//身高是深拷贝
}
int main()
{
	test01();
	system("pause");
	return 0;
}
