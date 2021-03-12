#include<iostream>
#include<stack>
using namespace std;

/*
	stack容器
	stack是一种先进后出的数据结构，他只有一个出口
	栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为

	构造函数
	stack<T> stk;                    //stack采用模板类实现，stack对象的默认构造形式
	stack(const stack &stk)          //拷贝构造函数

	赋值操作
	stack& operator=(const stack &stk)  //重载等号运算符

	数据存取
	push(elem)                        //向栈顶添加元素
	pop()                             //从栈顶移除第一个元素
	top()                             //返回栈顶元素

	大小操作
	empty()                           //判断栈是否为空
	size()                            //返回栈的大小


 */

void test01()
{
	stack<int>stk;
	//stack<int>::iterator;  栈无法遍历

	//入栈
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	cout << stk.top() << endl;
	cout << stk.size() << endl;

	//出栈
	stk.pop();
	cout << stk.top() << endl;
	cout << stk.size() << endl;
		
}


int main()
{
	test01();
	system("pause");
	return 0;
}
