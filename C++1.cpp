#include<iostream>
#include<string>

using namespace std;

int main()
{
	//二维数组应用
	//有三名同学的语数外成绩，输出三名同学的成绩
	int score[3][3] = {
		{100,100,100},
		{90,20,60},
		{60,50,90}
	};
	string names[3] = { "张三","李四","王五" };//需要调用string头文件
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		cout <<names[i]<<"的总成绩为："<<sum << endl;

	}
	system("pause");
	return 0;

}
