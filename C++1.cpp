#include<iostream>
using namespace std;

int main() 
{ 
	
	//嵌套循环实现99乘法表

	for (int i = 1; i <= 9; i++)//外层循环
	{
		for (int j = 1; j <=i; j++)//内层循环
		{
			cout << j << "*" << i << "=" << i * j<<"\t";
		}
		cout << endl;

	}
	system("pause");
	return 0;

}
