#include<iostream>
#include<string>
using namespace std;

//成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性

class person
{
public:
	//设置姓名
	void setname(string p_name)
	{
		name = p_name;
	}
	//获取姓名
	string getname()
	{
		return name;
	}
	//获取年龄 只读
	int getage()
	{
		age = 18;
		return age;
	}
	//设置爱人 只写
	void setlover(string p_lover)
	{
		lover = p_lover;
	}
private:
	string name;//可读可写
	int age;//只读
	string lover;//只写

};


int main()
{
	person p1;
	p1.setname("张三");
	cout << "姓名为：" << p1.getname() << endl;//属性设置为私有，行为设置为公共，通过行为获取属性
	cout << "年龄为：" << p1.getage() << endl;
	p1.setlover("李四");
	system("pause");
	return 0;
}

