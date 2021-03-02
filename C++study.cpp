#include<iostream>
#include<string>
using namespace std;

//赋值运算符重载
//C++编译器至少给一个类添加4个函数
//1.默认构造函数（无参，函数体为空）
//2.默认析构函数（无惨，函数体为空）
//3.默认拷贝构造函数，对属性进行值拷贝
//4.赋值运算符operator=，对属性进行值拷贝

//如果类中有属性指向堆区，做赋值操作也会出现深浅拷贝问题

class person
{
public:
	person(int age)
	{
		m_age = new int(age);//在堆区开辟一个数据，并返回该数据的指针
	}
	int *m_age;

	~person()//堆区的数据要手动释放 在析构函数中释放
			   //若不重载=号，P2=P1后，两个对象的*m_age指针都指向堆区同一块数据，会导致重复释放引发出错
			   //解决方案，利用深拷贝解决浅拷贝带来的问题
	{
		if (m_age !=NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}


	//重载赋值运算符
	person & operator=(person &p)//形参必须得用引用的方式，不然该函数执行完毕后，实参会释放，导致后面二次释放出错
								 //返回值类型也需要用引用的方式，不用引用的话直接返回值，会复制一个新的对象
	{
		//编译器是提供浅拷贝
		//m_age = p.m_age;

		//应该先判断是否有属性在堆区，如果有则先释放，再深拷贝
		if (this->m_age!=NULL)
		{
			delete this->m_age;
			this->m_age = NULL;
		}
		//深拷贝操作
		this->m_age = new int(*p.m_age);
		//返回对象自身
		return *this;
	}

};


void test01()
{
	person p1(18);
	person p2(20);
	person p3(30);
	p3 = p2 = p1;
	cout << *p1.m_age << endl;
	cout << *p2.m_age << endl;
	cout << *p2.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
