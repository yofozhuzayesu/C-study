#include<iostream>
#include<string>
using namespace std;

//string查找和替换

/*
	功能描述：
	查找：查找指定字符串是否存在
	替换：在指定的位置替换字符串

*/

//1.查找
void test01()
{
	string str1 = "abcdefghjklmn";
	int pos = str1.find("de");
	cout << pos << endl;//pos为3 表示从第四号位开始    查找不到的时候就返回-1 （必须要用一个整形变量接收）

	//rfind
	//rfind从右往左查找（也就是从右边开始有更靠前的de的时候就查找该de），find从左往右查找
	//虽热两个查找方式不同，但是输出结果都是从左往右的
	pos = str1.rfind("de");
	cout << pos << endl;
}


//替换
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//表示从1号位置开始，往后三个字符替换成"1111"
	cout << str1 << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
