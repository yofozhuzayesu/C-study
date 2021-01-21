#include<iostream>
using namespace std;

int main() 
{ 
	//水仙花数：一个三位数，每个位上的数字的三次幂之和等于其本身
	//例如：1^3+5^3+3^3=153
	//利用do while 语句 求出所有三位数中的水仙花数
	int num = 100;
	do
	{
		//1.找出所有的三位数
		int a = num % 10;//取个位
		int b = num / 10 % 10;//取十位
		int c = num / 100;//取百位的
		if (a*a*a+b*b*b+c*c*c==num)//判断是否是水仙花数
		{
			cout << num << endl;
		}
		num++;
	} while (num<1000);

	system("pause");
	return 0;

}
