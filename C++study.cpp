#include<iostream>
#include<string>
using namespace std;


//结构体数组：将自定义的结构体放入数组中方便维护
//语法 struct 结构体名 数组名[元素个数] = {{},{},{},...{}}；

//结构体除了定义结构体可以在main之外，定义和赋值需要在main函数之内做

//1.定义结构体
struct student
{
	string name;
	int age;
	int grade;
};


int main()
{
	//2.创建结构体数组
	student arr[2]
	{
		{"张三",18,65},
		{"李四",17,95}
	};
	//3.给结构体数组中的元素赋值
	arr[0].name = "王五";//把结构体数组中的第一个元素中的姓名更改
	
	//遍历结构体数组
	for (int i = 0; i < 2; i++)
	{
		cout << arr[i].name << endl;
		cout << arr[i].age << endl;
		cout << arr[i].grade << endl;
	}

	system("pause");
	return 0;
}

