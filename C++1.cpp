#include<iostream>
using namespace std;

int main() {

	//赋值运算符
	// = += -= *= %=

	//=
	int a1 = 10;
	a1 = 100;
	cout << "a1=" << a1 << endl;

	//+=
	int a2 = 10;
	a2 +=2;//a=a+2
	cout << "a2=" << a2 << endl;

	//-=
	int a3 = 10;
	a3 -= 2;//a=a-2
	cout << "a3=" << a3 << endl;

	//*=
	int a4 = 10;
	a4 *= 2;//a=a*2
	cout << "a4=" << a4 << endl;

	//*=
	int a5 = 10;
	a5 /= 2;//a=a/2
	cout << "a5=" << a5 << endl;

	//*=
	int a6 = 10;
	a6 %= 2;//a=a%2
	cout << "a6=" << a6 << endl;

	system("pause");

	return 0;

}
