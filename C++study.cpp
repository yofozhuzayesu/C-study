#include<iostream>
#include<fstream>
using namespace std;

//二进制文件
//打开方式指定为 ios:binary

//读文件
//二进制方式写文件主要利用流对象调用成员函数read
//函数原型:istream & read(char * buffer,int len);
//参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数


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
	ifstream ifs;

	//3.打开文件  并判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}
	//4.读文件
	person p;
	ifs.read((char *)&p, sizeof(person));//强制转为char *类型
	cout << p.m_name << endl;
	cout << p.m_age << endl;

	//5.关文件
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
