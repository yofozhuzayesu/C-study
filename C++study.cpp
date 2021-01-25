#include<iostream>
#include<string>
using namespace std;

//结构体指针，利用操作符->可以通过结构体指针访问结构体属性

struct student
{
	string name;
	int age;
	int grade;
};


int main()
{
	//创建学生结构体变量
	student s1 = { "张三",18,65 };

	//通过指针指向结构体变量
	student * p = &s1;

	//通过指针访问结构体变量中的数据,->
	cout << p->name << endl;
	cout << p->age << endl;
	cout << p->grade << endl;


	system("pause");
	return 0;
}

