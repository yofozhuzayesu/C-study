#include<iostream>
using namespace std;

int main() {

	//选择结构 单行if语句
	//用户输入分数，若>600，视为考上一本，并在屏幕上输出

	//1.用户输入分数
	int score = 0;
	cout << "请输入您的分数:" ;
	cin >> score;
	//2.输出用户分数
	cout << "您的分数为：" << score << endl;

	//3.判断用户分数是>600，并输出用户是否考上一本大学
	if (score >= 600)//千万不要加分号
	{
		cout << "恭喜您考上一本大学" << endl;

	}
	else
	{

		cout << "很遗憾您没有考上一本大学" << endl;

	}

	system("pause");

	return 0;

}
