#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被 释放
//通过文件可以将数据持久化
//C++中对文件操作需要包含头文件<fstream>

//文件分类两种
//1.文本文件    文件以文本的ASCII码形式存储在计算机中
//2.二进制文件  文件以文本的二进制形式存储在计算机中，用户一般不能直接去读

//操作文件的三大类
//1.ofstream :写操作
//2.ifstream :读操作
//3.fstream: 读写操作

//文本文件  写文件
void test01()
{
	//1.包含头文件

	//2.创建流对象 
	ofstream ofs;

	//3.指定打开方式
	ofs.open("test.txt", ios::out);

	//4.写内容
	ofs << "姓名：张三" << endl;
	ofs << "年龄：18" << endl;
	ofs << "性别：男" << endl;

	//5.关闭文件
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
