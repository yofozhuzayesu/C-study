#include<iostream>
#include<string>
using namespace std;

//结构体：属于用户自己定义的数据类型，用于用户存储不同的数据类型


//1.创建学生数据类型：包括（姓名、年龄、分数）
//自定义数据类型：一些类型集合组成的一个类型
//语法 struct 类型名称｛成员列表｝

struct  student
{
	//成员类别
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int grade;
}s3;//创建结构体的时候 顺便创建结构体变量

int main()
{
	//2.通过学生类型创建具体学生
	//2.1 struct student s1;
	student s1;//创建结构体变量的时候，关键字struct可以省略，但是创建的时候不可以省略
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.grade = 95;
	cout << "姓名：" << s1.name << endl;
	cout << "年龄：" << s1.age << endl;
	cout << "成绩：" << s1.grade << endl;

	//2.2 struct student s2 = { , , };
	struct student s2 = {
		"李四",
		19,
		65
	};
	cout << "姓名：" << s2.name << endl;
	cout << "年龄：" << s2.age << endl;
	cout << "成绩：" << s2.grade << endl;

	//2.3 在定义结构体时顺便创建结构体变量,一般不用该方式
	s3.name = "王五";
	s3.age = 20;
	s3.grade = 96;
	cout << "姓名：" << s3.name << endl;
	cout << "年龄：" << s3.age << endl;
	cout << "成绩：" << s3.grade << endl;


	system("pause");
	return 0;
}

