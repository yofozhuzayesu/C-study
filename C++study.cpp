#include<iostream>
#include<string>
#include<ctime>
using namespace std;


//案例1 
/*
1.每名老师带5个学生，共有三名老师
2.老师的结构体中-老师姓名和存放5名学生的数组作为成员
3.学生的成员有姓名，考试分数，
4.创建数组存放三名老师，通过函数给每个老师以及所带的学生赋值，最终打印出老师的数据及老师所带的学生数据
*/
struct student 
{
	string name;
	int score;
};

struct teacher
{
	string name;
	student stu[5];
};
void allocate(teacher t[],int length)//给老师和学生赋值的函数
{
	string NameSeed = "ABCDE";//设置一个种子，方便赋值
	for (int i = 0; i < length; i++)//给老师赋值
	{
		t[i].name = "Teacher_";
		t[i].name += NameSeed[i];
		for (int j = 0; j < 5; j++)//通过内层循环给学生赋值
		{
			t[i].stu[j].name = "Student_";
			t[i].stu[j].name += NameSeed[j];
			t[i].stu[j].score = rand()%61+40;
		}
	}
}

void print(teacher t[], int length)//输出成绩
{
	for (int i = 0; i < length; i++)
	{
		cout << "老师姓名为：" << t[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t" << t[i].stu[j].name << "成绩为：" << t[i].stu[j].score << endl;;
		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建三名老师的数组
	teacher te[3];
	//通过函数赋值
	int len = sizeof(te) / sizeof(te[0]);
	allocate(te, len);
	//输出学生成绩
	print(te, len);

	system("pause");
	return 0;
}

