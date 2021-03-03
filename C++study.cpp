#include<iostream>
#include<string>
using namespace std;

//继承中构造和析构顺序
//子类继承父类后，当创建子类对象，也会调用父类的构造函数
//问题：父类和子类的构造和析构顺序是谁先谁后

class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}

	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};

class son : public Base
{
public:
	son()
	{
		cout << "son的构造函数" << endl;
	}

	~son()
	{
		cout << "son的析构函数" << endl;
	}
};
void test01()
{
	//Base b;
	son s;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
