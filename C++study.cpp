#include<iostream>
#include<string>
using namespace std;

//多态案例二 制作饮品
//大致流程：煮水-冲泡-倒入杯中-加入辅料

//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PutInCup()= 0;
	//辅料
	virtual	void PutSomething() = 0;

	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PutInCup();
		PutSomething();
	}
};

//制作咖啡
class coffee :public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PutInCup()
	{
		cout << "倒入咖啡杯中" << endl;
	}
	//辅料
	virtual	void PutSomething()
	{
		cout << "加入牛奶，糖" << endl;
	}
};
//制作茶叶
class tea :public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮百岁山" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PutInCup()
	{
		cout << "倒入茶杯" << endl;
	}
	//辅料
	virtual	void PutSomething()
	{
		cout << "加入柠檬" << endl;
	}
};


//工作函数
void doWork(AbstractDrinking *a)
{
	a->makeDrink();
	delete a;//释放堆区数据
}

void test01()
{
	//制作咖啡
	doWork(new coffee);

	cout << "--------------------" << endl;
	//制作茶叶
	doWork(new tea);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
