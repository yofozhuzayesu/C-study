#include<iostream>
using namespace std;

//函数模板案例
/*
  案例描述：
  利用模板封装一个排序的函数，可以对不同数据类型数组进行排序
  排序规则从大到小，排序算法为选择排序
  分别利用char数组和int数组进行测试
*/


//交换的函数模板
template<class T>
void Myswap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//排序算法
template<class T>
void Mysort(T arr[],int len)
{
	for (int  i = 0; i < len; i++)
	{
		int max = i;
		//内部循环，用于找出真实的最大值
		for (int j = i+1; j < len; j++)
		{
			//我们认定的最大值比遍历出的数值要小，说明j下标的元素才是真正的最大值
			if (arr[j]>arr[max])
			{
				max = j;//更新最大值的下标

			}
		}
		if (max != i)
		{
			//交换max和i元素
			Myswap(arr[max], arr[i]);
		}
	}
}

//打印数组模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
}
void test01()
{
	//测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr)/sizeof(char)-1;//数组总长度/每个字符长度  注意字符型数组在末尾自动填充\0 多占一个字节
	Mysort(charArr, num);
	printArray(charArr, num);
}

void test02()
{
	int arr[] = { 1,5,9,4,3,4,6 };
	int num = sizeof(arr) / sizeof(int);
	Mysort(arr, num);
	printArray(arr, num);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
