#include<iostream>
#include<string>
using namespace std;

//案例2
/*
  设计一个英雄的结构体：姓名 年龄 性别  共5名英雄
  通过冒泡排序的方法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
 */

//英雄结构体
struct Hero
{
	string name;
	int age;
	string sex;
};

//英雄赋值
void allocate(Hero h[], int len)
{
	string NameSeed[5] = { "刘备","关羽","张飞","赵云","貂蝉" };
	string SexSeed[5] = { "男","男","男","男","女" };
	int a[5] = { 23,22,20,21,19 };
	for (int i = 0; i < len; i++)
	{
		h[i].name = NameSeed[i];
		h[i].sex = SexSeed[i];
		h[i].age = a[i];
	}
}

//冒泡排序
void BubbleSort( Hero h[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			//如果j下标的元素大于 j+1元素的年龄，就交换两个元素
			if (h[j].age>h[j+1].age)
			{
				Hero temp = h[j];//结构体冒泡排序，交换的单元是结构体变量，而不是结构体变量中的一个组成部分
				h[j] = h[j + 1];
				h[j + 1] = temp;
			}
		}
	}
}

void print(Hero h[], int len)
{
	for (int  i = 0; i < len; i++)
	{
		cout << h[i].name << "  " << h[i].age << "  " << h[i].sex << endl;
	}
}

int main()
{
	Hero h1[5];//创建结构体变量
	int length = sizeof(h1) / sizeof(h1[0]);//计算结构体数组长度
	//结构体元素赋值
	allocate(h1, length);
	//冒泡排序
	BubbleSort(h1,length);
	//输出
	print(h1, length);

	system("pause");
	return 0;
}

