#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*
	replace 将容器内指定范围的旧元素修改为新元素
	replace(iterator beg,iteratoe end,oldvalue,newvalue);

	replace_if 将区间内满足条件的元素，替换成指定元素
	replace_if(iterator beg,iterator end,_pred,newvalue)
	//pred 谓词
*/

//遍历输出
void myprint(int v)
{
	cout << v << "  ";
}

//谓词
class mypred
{
public:
	bool operator()(int v)
	{
		return v > 18;
	}
};

//内置数据类型
void test01()
{

	vector<int>v;
	v.push_back(15);
	v.push_back(20);
	v.push_back(18);
	v.push_back(20);
	v.push_back(19);
	v.push_back(21);

	//replace使用
	//replace(v.begin(), v.end(), 20, 2000);
	//for_each(v.begin(), v.end(), myprint);

	//replace_if使用
	replace_if(v.begin(), v.end(), mypred(), 1000);
	for_each(v.begin(), v.end(), myprint);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
