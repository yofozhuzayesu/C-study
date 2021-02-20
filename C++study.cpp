#include<iostream>
#include<string>
using namespace std;

//拷贝构造函数的调用时机
//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的方式给函数参数传值
//3.以值方式返回局部对象

class person
{
public:
	person()
	{
		cout << "person默认构造函数调用" << endl;
	}
	person(int age)
	{
		p_age = age;
		cout << "person有参构造函数调用" << endl;
	}
	person(const person &p)
	{
		p_age = p.p_age;
		cout << "person拷贝构造函数调用" << endl;
	}
	~person()
	{
		cout << "person默认析构函数调用" << endl;

	}
	int p_age;
};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()//使用一个已经创建完毕的对象来初始化一个新对象
{
	person p1(20);
	person p2(p1);
	cout << "p2的年龄是：" << p2.p_age << endl;
}

//2.值传递的方式给函数参数传值
void dowork(person p)
{
	
}
void test02()
{
	person p;
	dowork(p);//值传递,会调用拷贝构造函数（值传递本身就是创建一个临时副本）
}

//3.以值方式返回局部对象
person dowork2()
{
	person p1;//创建的是局部变量，函数调用结束后会释放
	return p1;//所以这里返回的是创建的一个新的对象（拷贝复制而来）
}
void test03()
{
	person p = dowork2();
}
int main()
{
	//test01();
	//test02();
	//test03();
	system("pause");
	return 0;
}
