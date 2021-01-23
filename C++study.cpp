#include<iostream>
#include<string>
using namespace std;


//指针和数组
//利用指针访问数组的元素

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int * p = arr;//arr就是数组的首地址
	cout << "数组的第一个元素为：" << arr[0] << endl;

	cout << "利用指针访问第一个元素：" << *p << endl;

	cout << "利用指针访问第二个元素：" << *p+2 << endl;//指针的加法是每次+4

	//利用指针遍历数组
	int *p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;

	}
	system("pause");
	return 0;
}

