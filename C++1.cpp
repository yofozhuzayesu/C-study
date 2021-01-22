#include<iostream>
using namespace std;

int main() 
{ 
	
	//goto 无条件跳转语句
	//如果标记的名称存在，执行到goto语句，会跳转到标记的位置
	//goto标记常用大写
	//标记格式： 标记：

	cout << "1" << endl;
	cout << "2" << endl;
	goto FLAG;//跳转到标记
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG ://标记
	cout << "5" << endl;


	system("pause");
	return 0;

}
