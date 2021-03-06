#include<iostream>
#include<string>
using namespace std;

//虚析构和纯虚析构
//纯虚析构与纯虚函数不同的是：纯虚函数只需声明即可，而纯虚析构函数需要在类外写具体实现
//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}

	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
	/*virtual ~Animal()
	{
		cout << "Animal的虚析构函数调用" << endl;
	}*/

	//纯虚析构的声明
	//析构函数必须有函数的具体实现
	//因为假设父类中有限数据开辟到堆区了，需要在析构函数中释放
	//需要在类外写纯虚析构函数的具体实现
	virtual ~Animal() = 0;

	//纯虚函数
	virtual void speak() = 0;
};
//类外写纯虚析构函数的具体实现
Animal::~Animal()
{
	cout << "Animal的纯虚析构函数的调用" << endl;
}

class cat :public Animal
{
public:

	//构造函数
	cat(string name)
	{
		//创建在堆区，利用指针m_name去维护
		cout << "cat的构造函数调用" << endl;
		m_name = new string(name);
		//需要在析构函数中，释放该数据
	}

	virtual void speak()
	{
		cout <<*m_name<< "小猫在说话" << endl;
	}

	//析构函数
	~cat()
	{
		if (m_name != NULL)
		{
			cout << "cat的析构函数调用" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string *m_name;
};

void test01()
{
	Animal *animal = new cat("tom");
	animal->speak();
	//父类指针指向子类，释放父类指针的时候不会调用子类的析构函数，导致子类如果有堆区属性出现内存泄漏
	//解决方法：将父类中的析构函数改为虚析构
	delete animal;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
