#include<iostream>
using namespace std;

int main() 
{ 
	
	//continue 语句
	//在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)//输出偶数，奇数不输出
		{
			cout << i << endl;
		}
		continue;//可以筛选条件，执行到此就不再向下执行，执行下一次操作
	}
	
	system("pause");
	return 0;

}
