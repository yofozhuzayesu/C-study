#include<iostream>
#include<string>
using namespace std;

//构造函数的分类及调用
//分类 
//按照参数分类 ：分为无参构造和有参构造
//按照类型分类 ：分为普通构造函数和拷贝构造函数
class person
{
public:
	person(int a)
	{
		age = a;
		cout << "调用有参构造函数" << endl;
	}
	person()
	{
		cout << "调用无参构造函数" << endl;//也叫默认构造函数
	}
	//拷贝构造函数
	person(const person &p)
	{
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "调用拷贝构造函数" << endl;
	}

	~person()
	{
		cout << "调用析构函数" << endl;
	}
	int age;
};

//调用
void test01()
{
	//1.括号法
	//person p;//默认构造函数的调用
	//person p2(10);//有参构造函数
	//person p3(p2);//调用拷贝构造函数
	//cout << p2.age << endl;
	//cout << p3.age << endl;//p2.age的值赋值给了p3.age
	//注意事项1：调用默认构造函数的时候不要加（），这样会被编译器认为是一个函数的声明，不会认为在创建对象


	//2.显示法
	person p2 = person(10);//调用有参构造函数 
	person p3 = person(p2);//调用拷贝够赞函数
	//上式中的person(10);//匿名对象  特点：当前执行结束后，系统会立即回收掉匿名对象，然后再执行下一步语句

	//注意事项2：不要利用拷贝构造函数 初始化匿名对象
	//person(p2) 编译器会认为是person (p3)==person p3 会出错


	//3.隐式转换法
	person p4 = 10;//相当于写了 person p4 == person（10），调用有参构造
	person p5 = p4;//调用拷贝构造
}

int main()
{
	
	test01();//会调用析构函数
	system("pause");
	return 0;
}
