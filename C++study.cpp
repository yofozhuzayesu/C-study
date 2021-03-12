#include<iostream>
#include<vector>
using namespace std;

/*
	vector容器
	功能：vector数据结构和数组非常类似，也称为单端数组
	与普通数组的区别：不同之处在于数组是静态空间，而vector可以动态拓展
	动态拓展：并不是在原空间之后续解新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
			  vector容器的迭代器是支持随机访问的迭代器
*/

/*
	vector构造函数
	vector<T> v                        //采用模板实现类实现，默认构造函数
	vector(v.begin(),v.end())          //将[begin,end) (注意是左闭右开)区间中的元素拷贝给本身
	vector(n,elem)                     //构造函数将n个elem拷贝给本身
	vector(const vector &vec)          //拷贝构造函数
*/
void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;//无参默认构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//通过区间方式构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int>v3(5, 2);
	printVector(v3);

	vector<int>v4(v3);
	printVector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
