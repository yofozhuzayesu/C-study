#include<iostream>
using namespace std;

int main()
{
	//冒泡排序
	//比较相邻的元素，如果第一个比第二个大，就交换
	//对每一对相邻的元素做同样的工作，执行完毕后，找到一个最大值
	//重复以上的步骤，每次比较次数-1，直到不需要比较

	int arr[] = { 1,5,2,6,8,3 };
	int length = sizeof(arr) / sizeof(arr[0])-1;

	for (int i = 0; i < length; i++)//总排序轮数是 元素个数-1
	{
		//内层循环对比 次数=元素个数-当前轮数-1
		for (int j = 0; j < length-i; j++)//不减去i也可以，只是经过上一轮后，最后的元素已经是大于前一个了
		{
			if (arr[j] >= arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
	}
	for (int a = 0; a < length+1; a++)
	{
		cout << arr[a] << endl;

	}
	

	system("pause");
	return 0;

}
