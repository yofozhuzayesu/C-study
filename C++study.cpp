#include<iostream>
#include<string>
using namespace std;

//递增运算符重载 ++
//通过重载递增运算符，实现自己的整形数据

//自定义整形变量
class MyInteger
{
	friend ostream & operator<<(ostream &cout, MyInteger m_int);
public:
	MyInteger()
	{
		m_num = 0;
	}
	//重载++运算符
	//重载前置++运算符
	MyInteger & operator++() //返回引用是为了对同一个对象进行递增操作
		                   //若不返回引用，返回一个新对象，则每次调用的时候输出都是1
	{
		//先进行++运算
		m_num++;
		//再将自身做返回
		return *this;
	}

	//重载后置++运算符
	//MyInteger& operator++() 与上一个函数重载了，但是返回值类型并不能作用于重载的条件
	//MyInteger& operator++(int) int代表占位参数，可以用于区分前置和后置递增，只能用int
	MyInteger operator++(int)
	{
		//先记录下当时的结果
		MyInteger temp = *this;
		//后递增
		this->m_num++;
		//最后将记录结果做返回
		return temp;
		//后置递增一定是返回值，因为局部对象在函数结束后就被释放了，返回引用的话就是非法操作
	}
private:
	int m_num;
};

//全局函数重载左移运算符
ostream & operator<<(ostream & cout, MyInteger myint )
{
	cout << myint.m_num;
	return cout;
}
void test01()
{
	MyInteger m;
	cout << ++(++m) << endl;
	cout << m << endl;
}

void test02()
{
	MyInteger m;
	cout << m++ << endl;
	cout << m << endl;
}
int main()
{
	//int a = 10;
	//cout << (a++)++ << endl; //非法操作 因为a++是一个常量，不能再执行运算


	//test01();
	test02();
	system("pause");
	return 0;
}
