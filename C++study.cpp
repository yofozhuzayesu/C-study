#include<iostream>
#include<string>
using namespace std;

//引用的本质：在C++内部实现是一个指针常量

void func(int& ref)//发现是引用，转换为int *const ref = &a
{
	ref = 100;//ref是引用，转换为*ref = 100;
}
int main()
{
	int a = 10;
	/*int& ref = a;//自动转化为int *const ref = &a,指针常量：指向不可以更改，也就是说明引用为什么不可以更改
	ref = 20;//内部发现ref是引用，自动帮我们转换为：*ref = 20

	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;//只要碰到引用，就会自动做解引用的操作*/
	
	func(a);
	cout << "a=" << a << endl;
	//cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}

