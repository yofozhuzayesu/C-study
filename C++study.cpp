#include<iostream>
#include<string>
using namespace std;

//继承方式
//继承方式：
//        公共继承：能分别继承public和protected           无法访问父类private
//        保护继承：public和protected全部继承为 protected 无法访问父类private
//        私有继承：public和protected全部继承为 private   无法访问父类private

//公共继承
class base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1 :public base1
{
public:
	void func()
	{
		m_a = 10;//父类中的公共权限成员 到子类中依然是公共权限
		m_b = 10;//父类中的保护权限成员 到子类中依然是保护权限
		//m_c = 10;// 父类的私有权限成员 子类无法访问
	}
};
void test01()
{
	son1 s1;
	s1.m_a = 100;
	//s1.m_b = 100; //保护权限类外访问不到
}

//保护继承
class base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son2 :protected base2
{
public:
	void func()
	{
		m_a = 100;//父类中公共成员，到子类中变为保护权限
		m_b = 100;//父类中保护成员，到子类中变为保护权限
		//m_c = 100;  //父类私有成员不可访问
	}
};
void test02()
{
	son2 s2;
	//继承的m_a m_b全部变成保护权限，类外不可访问
	/*s2.m_a = 100;
	s2.m_b = 100;*/  
}

//私有继承
class base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son3 :private base3
{
public:
	void func()
	{
		//父类中公共成员和保护成员全部变成私有成员
		m_a = 100;
		m_b = 100;
		//m_c = 100; //父类私有成员不可访问
	}
};
class son3test : private son3
{
public:
	void func()
	{
		//m_a = 100;//可证明son3中继承的属性已变成私有成员

	}
};
int main()
{

	system("pause");
	return 0;
}
