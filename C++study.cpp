#include<iostream>
#include<string>
using namespace std;

//string 子串

void test01()
{
	string str = "abcdef";
	string substr = str.substr(1, 3);//表示从str[1]开始，取三位
	cout << substr << endl;
}

//实用操作
void test02()
{
	string email = "zhangsan@qq.com";
	int pos = email.find("@");
	string userName = email.substr(0, pos);
	cout << userName << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
