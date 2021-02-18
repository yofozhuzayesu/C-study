#include<iostream>
#include<string>
using namespace std;


//C++面向对象三大特性：封装，继承，多态
/*
C++认为万物都皆为对象，对象上有其属性和行为
例如人可以作为对象，属性有姓名、年龄、身高、体重，行为有走，跑，跳吃饭等
车也可以作为对象，属性有轮胎，方向盘，车灯，行为有载人，放音乐等
具有相同性质的对象，我们可以抽象称为类，人属于人类，车属于车类
*/

/*
封装的意义：1.将属性和行为作为一个整体来表现生活中的事物
			2.将属性和行为加以权限控制
语法：class 类名{访问权限：属性 / 行为 }
*/

//设计一个圆类，求圆的周长 2 * PI * 半径
const double PI = 3.14;
class Circle
{
	//访问权限
	//公共权限
public:
	//属性
	//半径
	int M_r;

	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * M_r;
	}

};

//学生类
class Student
{
public:
	//类中的属性和行为，统称为成员
	//属性  也称 成员属性 or 成员方法
	//行为  也称 成员函数 or 成员方法

	string name;
	int id;

	//行为
	void show()
	{
		cout << "学生姓名为：" << name << endl;
		cout << "学生学号为：" << id << endl;
	}

	//给姓名赋值
	void setName(string s_name)
	{
		name = s_name;
	}

	//给学号赋值
	void setID(int s_id)
	{
		id = s_id;
	}
private:

};


int main()
{
	////通过圆类 创建具体的圆,即实例化
	//Circle c1;
	//c1.M_r = 10;
	//cout << "圆的周长=" << c1.calculateZC() << endl;

	Student s1;
	//给S1对象 进行属性赋值操作
	s1.setName("张三");
	s1.setID(468751);
	s1.show();

	system("pause");
	return 0;
}

