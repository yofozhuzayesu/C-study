#include<iostream>
#include<string>
using namespace std;

//多态是C++面向对象三大特性之一
//多态分为两类
//静态多态：函数重载和运算符重载属于静态多态，复用函数名
//动态多态：派生类和虚函数实现运行时多态

//静态多态和动态多态的区别
//静态多态的函数地址早绑定，编译阶段确定函数地址
//动态多态的函数地址晚绑定，运行阶段确定函数地址

//动物类
class animal
{
public:
	//虚函数
	//函数地址无法提前确定，需要根据所传参数的类型来判定
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类派生类
class cat : public animal
{
public:
	//函数重写 ：返回值 函数名 参数列表 完全相同
	//派生类重写的函数 可加virtual可不加
	void speak()
	{
		cout << "小猫在说话" << endl;
	}

};
//狗类派生类
class dog :public animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定，在编译阶段就确定了函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段绑定，地址晚绑定

//动态多态的满足条件：
//1.有继承关系
//2.子类需要重写父类的虚函数

//动态多态使用
//父类的指针或者引用，但是执行子类对象


void doSpeak(animal &Animal)//animal类的引用  animal & Animal = cat
{
	Animal.speak();
}

void test01()
{
	cat c;
	//C++中允许父类和子类的自动转换，父类的引用或指针可以直接指向子类对象
	doSpeak(c);//形参是animal类，实参是cat类

	dog d;
	doSpeak(d);
}

void test02()
{
	cout << "sizeof(animal)=" << sizeof(animal) << endl;
	//不加virtual时 函数不属于类的对象上面，因此输出1

	//加了virtual 输出4  因为animal类内部是个4字节的指针vfptr-虚函数（表）指针
	//该指针指向一个虚函数表vftable 表内部记录一个虚函数animal::speak的地址

	//若子类没发生函数重写，则直接继承animal::speak，也继承父类的虚函数表
	
	//若子类重写了父类的虚函数，子类的虚函数内部会替换成子类的虚函数地址
	//子类虚函数表中 变成记录 cat::speak的地址
	//当父类的指针或者引用指向子类对象时候，发生多态
	//传入cat类，则从虚函数走cat函数的地址
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
