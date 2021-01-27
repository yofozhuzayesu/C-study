#include<iostream>
#include<string>
using namespace std;

//new的基本语法

int * func()
{
	//在堆区创建整形数据
	//new返回的是该数据类型的指针
	int *p = new int(10);//小括号
	return p;
}
void test01()//在堆区开辟数据
{
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，利用关键字delete
	delete p;
	//cout << *p << endl;//内存已经被释放，再次访问就是非法操作，会报错
}

void test02()//在堆区开辟数组
{
	//创建10整形数据的数组
	int * arr = new int[10];//注意是中括号，10代表的数组内有10个元素,返回数组的首地址
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;//释放数组的时候，要加中括号才可以
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}

