#include<iostream>
#include<string>
using namespace std;

/*
	类模板与继承，需要注意以下几点
	1.当子类继承的父类是一个类模板是，子类在声明的时候，要指定出父类中T的类型
	2.如果不指定，编译器无法给子类分配内存
	3.如果想灵活指定父类中T的类型，子类也需要变为模板

*/

template<class T>
class Base
{
	T m;
};
//class son :public Base//错误，必须要知道父类中的T类型，才能给子类
class Son:public Base<int>
{

};

//如果想灵活指定父类中T的类型，子类也需要变为模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;

	}
	T1 obj;
};
void test02()
{
	//Son2 s2;   错误 因为 Son2 也是模板 也需要指定模板参数类型
	Son2<int, char> s2;

}

int main()
{
	test02();
	system("pause");
	return 0;
}
