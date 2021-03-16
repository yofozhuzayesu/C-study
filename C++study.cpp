#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/*
	二元谓词
*/
void printVector(vector<int> v)
{
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << "  ";
	}
	cout << endl;
}
class myCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(60);
	v.push_back(30);
	v.push_back(50);
	//sort算法默认按照升序排序
	sort(v.begin(), v.end());
	cout << "升序排序为：";
	printVector(v);
	
	//使用函数对象 改变算法策略 变成从小到大排序
	//最后一个参数只用类名不够，需要加小括号
	sort(v.begin(), v.end(),myCompare());
	cout << "降序排序为：";
	printVector(v);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
