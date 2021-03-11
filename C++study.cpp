#include<iostream>
#include<string>
using namespace std;


//string插入和删除

void test01()
{
	string str = "hello";
	str.insert(1, "111");//表示从h之后插入三个1
	cout << str << endl;

	//删除
	str.erase(1, 3);//表示从str[1]开始，删3个
	cout << str << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
