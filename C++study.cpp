#include<iostream>
#include<string>
using namespace std;

//多态案例-计算器类
//案例描述：分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类

//多态的优点
//代码组织结构清晰
//可读性强
//利于前期和后期的拓展以及维护

//普通写法
class Calculator
{
public:
	int getResult(string oper) //传入结果是一个操作符，根据传入的操作符判断执行加减乘除
	{
		//switch语句必须用整形或者枚举类型
		//用if语句
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper =="*")
		{
			return m_num1 * m_num2;
		}
		else if (oper == "/")
		{
			return m_num1 / m_num2;
		}
		//如果需要拓展新的功能，则需要修改源码
		//在真实的开发中，提倡 开闭原则
		//开闭原则：对拓展进行开放，对修改进行关闭

	}
	int m_num1;
	int m_num2;
	
};

void test01()
{
	Calculator c;
	string option;
	cout << "请输入两个数" << endl;
	cin >> c.m_num1 >> c.m_num2;
	cout << "请输入要执行的操作" << endl;
	cin >> option;
	int result = c.getResult(option);
	cout << "结果为：" << result << endl;
}

//利用多态实现计算器
//1.实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getR()
	{
		return 0;
	}
	int m_num1;
	int m_num2;
};

//2.加法计算器类
class addCalculator:public AbstractCalculator
{
public:
	int getR()
	{
		return m_num1 + m_num2;
	}
};

//2.减法计算器类
class subCalculator :public AbstractCalculator
{
public:
	int getR()
	{
		return m_num1 - m_num2;
	}
};

//3.乘法计算器类
class mulCalculator :public AbstractCalculator
{
public:
	int getR()
	{
		return m_num1 * m_num2;
	}
};

//4.除法计算器类
class divCalculator :public AbstractCalculator
{
public:
	int getR()
	{
		return m_num1 / m_num2;
	}
};

void test02()
{
	//多态使用条件
	//父类的指针或者引用指向子类对象
	AbstractCalculator *abc = new addCalculator;//利用指针的方法
	cout << "请输入要计算的两个数" << endl;
	cin >> abc->m_num1 >> abc->m_num2;
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getR() << endl;
	//用完后记得销毁
	delete abc;
	abc = NULL;

	//减法运算
	abc = new subCalculator;//销毁其实只是释放了堆区的数据，指针并没有销毁
	cout << "请输入要计算的两个数" << endl;
	cin >> abc->m_num1 >> abc->m_num2;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getR() << endl;
	//用完后记得销毁
	delete abc;
	abc = NULL;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
