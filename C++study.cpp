#include<iostream>
#include<string>
using namespace std;


//string 字符存取

void test01()
{
	string str1 = "hello";
	cout << str1 << endl;

	//1.通过[]访问单个字符
	/*for (int  i = 0; i < str1.size(); i++)
	{
		cout << str1[i] << " ";
	}
	cout << endl;*/

	//通过at方法
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i) << " ";
		
	}
	cout << endl;

	//修改单个字符
	str1[0] = 'f';
	cout << str1 << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
