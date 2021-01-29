#include<iostream>
#include<string>
using namespace std;


//引用做函数参数
//普通值传递时，实参无法修饰
//利用引用的技术可以让形参修饰实参，简化指针操作

//值传递
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//地址传递
void swap02(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	/*swap01(a, b);//值传递
	cout << a << endl;
	cout << b << endl;

	swap02(&a, &b);//地址传递
	cout << a << endl;
	cout << b << endl;*/

	swap03(a, b);//引用传递
	cout << a << endl;//实参发生改变
	cout << b << endl;
	system("pause");
	return 0;
}

