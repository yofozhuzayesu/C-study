#include<iostream>
#include<string>
using namespace std;


//string 字符串比较
/*
	比较方式：是按字符的ASCII码进行对比
	 = 返回0
	 > 返回1
	 < 返回-1
*/

void test01()
{
	string str1 = "hello";
	string str2 = "hello";

	if (str1.compare(str2)==0)
	{
		cout << "str1 = str2" << endl;
	}
	else if (str1.compare(str2)>0)
	{
		cout << "str1 > str2" << endl;
	}
	else
	{
		cout << "str1 < str2" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}
