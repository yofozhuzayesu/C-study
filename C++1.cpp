#include<iostream>
using namespace std;
#include<ctime>//系统时间头文件
int main() 
{
	
	//猜数字游戏，猜一个数字和随机数字比较
	//猜对了退出游戏
	//猜错了，提示结果过大or过小，再猜一次

	//添加随机数种子 利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1.系统生成随机数
	int num = rand() % 100 + 1;//生成0-99的随机数

	//2.玩家输入的数据
	int value = 0;
	while (1)
	{
		cin >> value;
		if (value > num)
		{
			cout << "您猜测的数据过大" << endl;

		}
		else if (value < num)
		{
			cout << "您猜测的数据过小" << endl;

		}
		else if (value = num)
		{
			cout << "恭喜您猜对了" << endl;
			break;
		}
	}

	system("pause");

	return 0;

}
