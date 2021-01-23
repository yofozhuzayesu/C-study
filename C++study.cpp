#include<iostream>
#include<string>

using namespace std;

//函数常见形式
/*
1.无参无返
2.有参无返
3.有参有返
4.无参有返
*/

//1.无参无返
void test1()
{
	cout << "this is test1" << endl;
}

//2.无参无返

void test2(int a )
{
	cout << "this is test2 a=" << a<<endl;

}

//3.有参有返
int test3(int a, int b)
{
	int sum = a + b;
	return sum;
}

//4.无参有返
int test4()
{
	return 100;

}
int main()
{
	//test1
	test1();//注意不要漏掉括号
	//test2
	test2(20);
	//test3
	int num1 = test3(10,20);
	cout << num1 << endl;
	//test4
	int num2 = test4();
	cout << num2 << endl;


	system("pause");
	return 0;

}
