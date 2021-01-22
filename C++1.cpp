#include<iostream>
using namespace std;

int main()
{
	//二维数组数组名
	/*
	1.查看二维数组所占内存空间
	2.获取二维数组的首地址
	*/

	//查看二维数组的内存空间
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组所占空间大小=" << sizeof(arr) << endl;

	cout << "二维数组第一行占用内存：" << sizeof(arr[0]) << endl;//sizeof只能计算行占用的内存，不能用sizeof[][0]计算列的内存

	cout << "二维数组第一个元素占用的内存：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[0]) << endl;//计算行数用总的内存除以一行占用的内存

	cout << "二维数组的列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//计算列数用一行的内存空间，除以一个元素的内存空间

	//查看二维数组的首地址
	cout << "二维数组的首地址为："<<(int)arr << endl;

	//查看二维数组第一行的首地址
	cout << "二维数组第一行的首地址为：" << (int)arr[0] << endl;

	//查看第二行的首地址
	cout << "二维数组第二行的首地址为：" << (int)arr[1]<< endl;

	//查看第一个元素的首地址
	cout << "二维数组第一个元素的首地址为：" << (int)&arr[0][0] << endl;//&——取地址符
	system("pause");
	return 0;

}
