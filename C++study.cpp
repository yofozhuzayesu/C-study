#include<iostream>
#include<string>
using namespace std;


//指针和函数
//1.值传递
//2.地址传递

void swap(int *p1, int *p2)//地址传递
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "swap a=" << *p1 << endl;
	cout << "swap b=" << *p2 << endl;

}
int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);//地址传递可以修饰实参
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}

