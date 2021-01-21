#include<iostream>
using namespace std;

int main() {

	//选择结构 单行if语句
	//用户输入分数，若>600，视为考上一本，>500，则考上二本，>400，则视为考上三本，否则专科

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

		if (score >= 700)
		{
			cout << "恭喜您能考上清华大学！" << endl;
		}
		else if (score >= 650)
		{
			cout << "恭喜您能考上人民大学" << endl;
		}
		
		
	}
	else if(score >= 500)
	{

		cout << "恭喜您考上二本大学" << endl;

	}
	else if (score >= 400)
	{
		cout << "恭喜您考上三本大学" << endl;

	}
	else
	{
		cout << "带专人，带专魂，带专都是人上人！" << endl;

	}

	//比如分数650，超过600 500 400  但是只会执行第一个判断

	system("pause");

	return 0;

}
