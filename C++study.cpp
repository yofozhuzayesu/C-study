#include<iostream>
#include<string>
using namespace std;

//结构体嵌套结构体，结构体中的成员可以是另一个结构体


struct student
{
	string name;
	int age;
	int grade;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;//辅导的学生 要加stu（因为是变量，而不是student 类型的变量名）
};
int main()
{
	//创建老师
	teacher t;
	t.id = 16664;
	t.age = 56;
	t.name = "张三";
	t.stu.name = "李四";
	t.stu.grade = 18;
	t.stu.grade = 65;

	cout << t.name << endl;
	cout << t.stu.name << endl;
	system("pause");
	return 0;
}

