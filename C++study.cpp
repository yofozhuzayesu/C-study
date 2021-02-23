#include<iostream>
#include<string>
using namespace std;

//空指针访问成员函数
//C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针

//如果用到this指针，需要加以判断保证代码的健壮性

class person
{
public:
	void showpersonname()
	{
		cout << "this is person class" << endl;
	}
	void showpersonage()
	{
		//报错原因：传入的指针是NULL指针（也就是this也是指向的空），无法访问其中的属性
		//解决方法：添加一个判断
		if (this ==NULL)
		{
			return;//为空就直接退出，否则就执行下一行
		}
		cout << "person age = " << this->m_age << endl;//报错
	}
	int m_age;

};

void test01()
{
	person *p = NULL;
	p->showpersonname();
	p->showpersonage();
}


int main()
{
	test01();
	system("pause");
	return 0;
}
