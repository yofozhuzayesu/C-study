#include<iostream>
#include<string>
using namespace std;

//指针占用内存空间
//在32位操作系统下：指针变量占4个字节的内存空间(无论什么类型的指针，float double char string)
//64位：8个字节  即x64


int main()
{
	int a = 10;
	int *p = &a;
	cout << "指针占用的内存空间=" << sizeof(float * ) << endl;
	cout << "指针占用的内存空间=" << sizeof(int *) << endl;
	cout << "指针占用的内存空间=" << sizeof(double *) << endl;
	cout << "指针占用的内存空间=" << sizeof(char *) << endl;
	cout << "指针占用的内存空间=" << sizeof(string *) << endl;
	system("pause");
	return 0;
}
