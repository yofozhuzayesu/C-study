#include<iostream>
#include<string>
using namespace std;

//成员变量和成员函数是分开储存的
//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会公用一块代码
//问题：这一块代码市如何区分那个对象调用自己的呢

//C++通过提供特殊的对象指针，this指针，解决上述问题，this指针指向被调用的成员函数所属的对象

//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可

//this指针的用途：
//当形参和成员变量同名时，可用this指针来区分
//在类的非静态成员函数中返回对象本身，可用return *this

class person
{
public:
	person(int age)
	{
		//age = age; //同名冲突
		//this指针指向的是被调用的成员函数所属的对象
		this->age = age;
	}
	person& personAddage(person &p)//返回本体对象，需要使用引用的方式返回
	{
		this->age += p.age;//相当于把形参对象中的年龄+到被调用的成员函数所的对象上
		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this;
	}
	int age;

};

//解决名称冲突
void test01()
{
	person p1(18);
	cout << p1.age << endl;
}

void test02()
{
	person p1(10);
	person p2(10);
	//链式编程思想
	p2.personAddage(p1).personAddage(p2).personAddage(p2);//函数返回的是一个对象，可以继续再调用对象的成员函数
	cout << "p2的年龄：" << p2.age << endl;
}
int main()
{
	test01();//成员属性和形参同名，会出现问题，解决方法：1.规范编码 2.使用this
	test02();
	system("pause");
	return 0;
}
