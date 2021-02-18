#include<iostream>
#include<string>
using namespace std;

//struct 和 class 的区别：默认的访问权限不同
/*
1.struct默认权限为公共
2.class默认权限为私有
*/

class C1
{
	int m_a;//不标注是public还是private 默认权限是私有

};

struct C2
{
	int m_b;//默认权限是公共权限
};
int main()
{
	C1 c1;
	//c1.m_a = 100; 私有权限无法访问 
	C2 c2;
	c2.m_b = 100;//公共权限可以访问 
	system("pause");
	return 0;
}

