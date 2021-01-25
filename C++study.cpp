#include<iostream>
#include<string>
using namespace std;

//结构体做函数参数
//两种传递方式 值传递和地址传递



struct student
{
	string name;
	int age;
	int grade;
};

//值传递方式
void PrintStu(student stu)
{
	stu.age = 100;
	cout << stu.name << endl;
	cout << stu.age << endl;
	cout << stu.grade << endl;

}

//地址传递方式
void PrintStu2(student *p)//struct可以省略
{
	p->age = 100;
	cout << p->name << endl;
	cout << p->age << endl;
	cout << p->grade << endl;
}
int main()
{
	//值传递  不修饰实参
	student s = { "张三",18,65 };
	//PrintStu(s);
	//cout << s.age << endl;

	//地址传递 会修饰实参
	PrintStu2(&s);
	cout << s.age << endl;
	system("pause");
	return 0;
}

