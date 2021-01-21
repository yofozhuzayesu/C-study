#include<iostream>
using namespace std;

int main() {
	
	//switch 语句  执行多条件分支语句
	//给一个电影打分
	//10~9经典
	//7~8 非常好
	//5~6 一般
	//5分一下  烂片

	//步骤
	//1.邀请用户给电影评分
	cout << "请给该电影评分：";
	int score;
	cin >> score;
	cout << "您给该电影评分为：" << score <<"分"<< endl;

	//2.根据用户打分给电影评等级

	switch (score)//区别于if if后面可以判断表达式，可以判断一个区间，但是switch只能是整型或者字符型，但是switch结构清晰，执行效率高
	{	
	case 10:
		cout << "您认为该电影为经典电影" << endl; 
		break;//退出当前分数
	case 9:
		cout << "您认为该电影为经典电影" << endl;
		break;//退出当前分数
	case 8:
		cout << "您认为该电影为好电影" << endl;
		break;//退出当前分数
	case 7:
		cout << "您认为该电影为好电影" << endl;
		break;//退出当前分数
	case 6:
		cout << "您认为该电影为一般电影" << endl;
		break;//退出当前分数
	case 5:
		cout << "您认为该电影为一般电影" << endl;
		break;//退出当前分数
	default:
		cout << "您认为该电影为烂片" << endl;
		break;//退出当前分数
	}

	system("pause");

	return 0;

}
