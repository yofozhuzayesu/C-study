#include<iostream>
#include<deque>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

/*
	案例：评委打分
	有5名选手：选手ABCDE,10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分

	实现步骤：
	1.创建五名选手，放到vector中
	2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分到deque容器中
	3.sort算法对deque容器中分组排序，去除最高分和最低分
	4.deque容器遍历一遍，累加总分
	5.获取平均分
*/

//选手类
class person
{
public:
	person() {};
	person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
};

//创建选手
void creatPerson(vector<person>&v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];
		//默认平均分
		int score = 0;
		person p(name, score);
		//将创建的对象放入到容器中
		v.push_back(p);
	}
}

//打分  最后只需要知道平均分即可
void setScore(vector<person>&v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//设置一个容器，将评委的打分放入
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//rand()%41  表示产生0-40之间的随机数
			d.push_back(score);
			cout << score << "  ";
		}
		cout << endl;
		//先排序
		sort(d.begin(), d.end());

		//累加 并去除最高分和最低分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin()+1; dit != d.end()-1; dit++)
		{
			sum += (*dit);
		}


		//计算平均分
		(*it).m_score = sum / 8;
	}
}

int main()
{
	
	//1.创建五名选手
	vector<person>v;
	creatPerson(v);

	//2.给五名选手打分
	setScore(v);

	//3.显示最后得分
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_name << "  " << (*it).m_score <<endl;
	}

	system("pause");
	return 0;
}
