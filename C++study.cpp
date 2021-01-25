#include<iostream>
#include<string>
using namespace std;

//结构体中用const防止误操作
//const使用场景——地址传递

struct student
{
	string name;
	int age;
	int grade;
};

//打印结构体名称
//采用地址传递方式，可以减少内存空间，并且不会复制新的副本出来
void PrintStudents(const student *s)
{
	//s->age = 100;加入const之后，一旦有修改的操作就会报错，防止我们的误操作
	cout << s->name << endl;
	cout << s->age << endl;
	cout << s->grade << endl;

}

int main()
{
	//创建结构体变量
	student s1 = { "张三",15,60 };
	//通过函数打印结构体变量信息
	PrintStudents(&s1);//

	system("pause");
	return 0;
}

