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

//文本文件  读文件
void test01()
{
	//1.包含头文件

	//2.创建流对象 
	ifstream ifs;

	//3.代开文件 并且判断是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	
	//4.读数据
	//第一种方法
	/*char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf << endl;
	}*/

	//第二种办法
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//第三种方法
	string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}

	//第四种方法 最不常用
	//char c;
	//while ((c=ifs.get())!= EOF)// EOF  end of file
	//{
	//	cout << c;
	//}
	//5.关闭文件
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
