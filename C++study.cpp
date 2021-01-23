#include<iostream>
#include<string>
using namespace std;


//指针、数组、函数
//封装一个函数，利用冒泡排序，实现对整形数组的升序排序

//参数1 数组的首地址 参数2 数组长度
void BubbleSort(int arr[],int len)//参数是数组时，传递的是数组的首地址，在函数中无法计算数组长度，需要在外部计算
{
	for (int i = 0; i < len-1; i++)
	{
		int * p = arr;//将指针重新定位到数组头部
		for (int j = 0; j < len- i-1; j++)
		{	
			if (*p > *(p + 1))//*的优先级比+高，所以要加括号，以下同理
			{
				int temp = *p;
				*p = *(p + 1);
				*(p + 1) = temp;
			}
			p++;
		}
	}
	int *p2 = arr;//for循环中的变量作用域只在for内，因此要重新定义一个指针
	for (int i = 0; i < len; i++)
	{
		cout << *p2 << endl;
		p2++;
	}
}


int main()
{
	int arr2[] = {5,4,6,8,2,3,7,5,8,6,9,4,5,2,6};
	int length = sizeof(arr2) / sizeof(arr2[0]);
	BubbleSort(arr2,length);
	for (int i = 0; i < length; i++)
	{
		cout << arr2[i];//输出的也是排序之后的，说明地址传递会修饰实参
	}
	system("pause");
	return 0;
}

