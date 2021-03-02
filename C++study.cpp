#include<iostream>
#include<string>
using namespace std;

//继承中的对象模型
//问题：从父类继承过来的成员，哪些属于子类对象中

class Base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

//公共继承
class son1 :public Base
{
public:
	int m_d;

};

//利用开发人员命令提示工具查看对象模型
//cd 跳转文件路径
//查看命名
//cl /d1 reportSingleClassLayout类名 文件名（打一部分按TAB键会自动补齐）
void test01()
{
	//16
	//父类中的所有非静态成员属性都会被子类继承下去
	//父类中的私有成员属性 是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了
	cout << sizeof(son1) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
