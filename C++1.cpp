#include<iostream>
using namespace std;

int main()
{
	//一维数组名
	/*1.可以统计整个数组在内存中的长度
	  2.可以获取数组在内存中的首地址
	  */
	
	//1.查看数组的内存长度
	int arr[5] = { 1,2,3,4,5 };
	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中的元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2.查看数组的首地址
	cout <<"数组的首地址："<<(int)arr << endl;//(int)arr强制将十六进制转成十进制

	//3.查看第一个元素的地址
	cout << "数组中第二个元素的地址为：" << (int)&arr[1] << endl;//&是取址符号


	//注意：数组名是一个常量，不可以赋值

	system("pause");
	return 0;

}
