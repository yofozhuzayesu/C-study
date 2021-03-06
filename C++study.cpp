#include<iostream>
#include<fstream>
using namespace std;

//二进制文件
//打开方式指定为 ios:binary

//写文件
//二进制方式写文件主要利用流对象调用成员函数write
//函数原型:ostream & write(const char * buffer,int len);
//参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数

//二进制文件可以自定义输入类型

class person
{
public:
	char m_name[64];//姓名
	int m_age;//年龄
};

void test01()
{
	//1.包含头文件

	//2.创建流对象
	ofstream ofs;

	//3.打开文件
	ofs.open("person.txt", ios::out | ios::binary);//ios::out表示输入  ios::binary表示是二进制方式  |表示位或操作符

	//4.写文件
	person p = { "张三",18 };//初始化
	ofs.write((const char *)&p, sizeof(person));

	//5.关文件
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
