#include<iostream>
using namespace std;

int main() 
{ 
	//for循环语句
	//语法 for (起始表达式;条件表达式;末尾表达式）
	//｛
	//   循环语句
	//	｝

	for (int i = 1; i <= 100; i++)
	{
		int a = i % 10;
		int b = i / 10;
		if (a==7||b==7||i%7==0)
		{
			cout << "敲桌子" << endl;

		}
		else
		{
			cout << i << endl;
		}
		
	}

	system("pause");
	return 0;

}
