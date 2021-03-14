#include<iostream>
#include<map>
using namespace std;

/*
	map容器默认排序规则 是按照key值进行从小到大排序
	利用防函数，可以改变排序规则

*/
class myCompare
{
public:
	bool operator()(int v1, int v2)
	{
		//降序
		return v1 > v2;
	}
};

void printMap(const map<int, int,myCompare> &m)
{
	for (map<int, int,myCompare>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key值:" << (*it).first << "  " << "Value:" << (*it).second << endl;
	}
}
void test01()
{
	//将map的第三个数据类型改为自定义的类， 即可按照降序排列
	map<int, int,myCompare>mp1;
	
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(4, 60));
	mp1.insert(pair<int, int>(7, 50));
	mp1.insert(pair<int, int>(3, 60));

	printMap(mp1);
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}
