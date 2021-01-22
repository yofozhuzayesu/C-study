#include<iostream>
using namespace std;

int main()
{
	//数组元素逆置
	
	//创建数组
	int arr[] = { 1,2,3,4,5 };

	//逆置数组

	int start = 0;//记录起始下标位置
	int end = sizeof(arr) / sizeof(arr[0])-1;//记录结束下标位置

	while (start<end)//逆置元素
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		end--;
		start++;
	}
		
	
	for (int i = 0; i < 5; i++)//输出元素
	{
		cout << arr[i] << endl;

	}
	system("pause");
	return 0;

}
