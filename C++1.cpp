#include<iostream>
using namespace std;

int main() {

	//三只小猪称体重
	
	//1.输入三只小猪的体重
	//2.判断小猪的体重
	//3.输出小猪的体重

	//输入小猪的体重
	int a, b, c;
	cout << "请输入小猪a的体重=";
	cin >> a;
	cout << "请输入小猪b的体重=";
	cin >> b;
	cout << "请输入小猪c的体重=";
	cin >> c;
	
	//输出三只小猪的体重
	cout << "小猪a的体重为" << a << "kg" << endl << "小猪b的体重为" << b << "kg" << endl << "小猪c的体重为" << c << "kg" << endl;

	//判断小猪重量

	
	if (a < b)
	{
		if ( b < c)//c>a c>b
		{
			cout << "小猪体重排序为a<b<c" << endl;
		}
		else//b>a b>c
		{
			if (a<c)
			{
				cout << "三只小猪体重排序为a<c<b" << endl;

			}
			else
			{
				cout << "三只小猪体重排序为c<a<b" << endl;

			}
		}
	}
	else
	{
		if (a<c) //b<a a<c
		{
			cout << "三只小猪的体重排序为b<a<c" << endl;
		}
		else //a>b a>c
		{
			if (b>c)
			{
				cout << "三只小猪的体重排序为c<b<a" << endl;

			}
			else //b<c
			{
				cout << "三只小猪的体重排序为b<c<a" << endl;

			}

		}
	}

	system("pause");

	return 0;

}
