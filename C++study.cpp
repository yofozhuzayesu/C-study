#include<iostream>
#include<string>
using namespace std;

//类对象作为类成员
//C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
//思考：类对象作为另一个类的成员的时候，两个类的构造函数的调用顺序


class phone
{
public:
	string PName;//手机品牌
	phone(string pname)
	{
		cout << "调用了phone类的有参构造函数" << endl;
		PName = pname;
	}

	~phone()
	{
		cout << "调用了phone类的析构函数" << endl;
	}
};

class person
{
public:
	string p_name;//姓名
	phone p_phonename;//手机

	//p_phonename(phonename) 相当于phone PName = phonename  隐式转换法
	person(string name, string phonename):p_name(name),p_phonename(phonename)//初始化列表方式初始化
	{
		cout << "调用person类的有参构造函数" << endl;
	}

	~person()
	{
		cout << "调用person类的析构函数" << endl;
	}
};

//当其他类的对象作为本类的成员，构造的时候先构造类对象，在构造自身
//析构的顺序与构造相反，先析构类对象，再析构类内部的对象
void test01()
{
	person p("张三", "华为");
	cout << p.p_phonename.PName << endl;//输出语句要注意，格式是A类.B类.B类中的属性
}
	
int main()
{
	test01();
	system("pause");
	return 0;
}
