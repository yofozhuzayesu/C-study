#include<iostream>
#include<string>
using namespace std;

//封装意义二
/*
访问权限 ：
1. public 公有权限  成员 类内可以访问  类外也可以访问
2. procted 保护权限 成员 类内可以访问  类外不可以访问  儿子也可以访问父亲中的保护内容
3. private 私有权限 成员 类内可以访问  类外不可以访问
*/

class Person
{
public:
	//公共权限
	string name;
protected:
	//保护权限
	string car;
private:
	//私有权限
	int passwords;


public:
	void func()
	{
		name = "张三";
		car = "拖拉机";
		passwords = 463545;
	}
};


int main()
{
	Person p1;
	p1.name = "李四";
	//p1.car = "奔驰"；保护权限的内容类外不可以访问
	//p1.passwords = 48645; 私有权限的内容类外不可以访问
	system("pause");
	return 0;
}

