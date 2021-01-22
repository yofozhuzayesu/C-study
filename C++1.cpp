#include<iostream>
using namespace std;

int main()
{
	//5只小猪称体重

	int arr[5];
	//1.输入小猪体重
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入第" << i+1 << "只小猪的体重：" << endl;
		cin >> arr[i];

	}
	//2.将小猪体重排序
	int max = 0;
	for (int j = 0; j < 5; j++)
	{
		if (arr[j]>=max)
		{
			max = arr[j];
		}
	}
	cout << "小猪体重最重为：" << max << endl;

	system("pause");
	return 0;

}
