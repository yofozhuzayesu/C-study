#include<iostream>
#include<string>
using namespace std;

//const修饰成员函数
//成员函数后面const后我们称该函数为常函数
//常函数内部可以修改成员属性
//成员属性声明时加mutable后，在常函数中依然可以修改

//常对象
//声明对象前加const称该对象为常对象
//常对象只能调用常函数

class person
{
public:
	
	//this 指针 本质是一个指针常量 (person * const this)，指向不可修改
	//每个类成员函数都有个this指针，函数后面加const  this指针就变成 const person * const p，指针的值也不可修改
	void showPerson() const 
	{
		//m_a = 100;  //本质就是this->m_a = 100;   不可修改
		this->m_b = 100;
		cout << this->m_b << endl;
	}
	void func()
	{

	}
	int m_a;
	mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值
};

//常函数
void test01()
{
	person p;
	p.showPerson();
}

//常对象
void test02()
{
	const person p;//在对象前+const，变为常对象，不可修改
	//p.m_a = 100;  报错 常对象中的属性值不可修改
	p.m_b = 16;//特殊值在常对象中也可以修改
	cout << p.m_b << endl;

	//常对象只能调用常函数
	p.showPerson();
	//p.func(); //常对象不可调用普通成员函数，因为普通成员函数可以修改成员属性

}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
