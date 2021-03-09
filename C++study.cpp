#include<iostream>
#include<string>
using namespace std;

/*
	类模板案例
	1.可以对内置的数据类型以及自定义数据类型进行存储
	2.将数组中的数据存储到堆区
	3.构造函数中可以传入数组的容量
	4.提供对应的拷贝函数以及operator= 防止浅拷贝问题
	5.提供尾插法和尾删法对数组中的数据进行增加和删除
	6.可以通过下标的方式访问数组中的元素
	7.可以获取数组中当前元素的个数和数组的容量

*/

template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		//初始化
		this->m_Capacity = capacity;
		//初始化的时候 元素个数为0
		this->m_Size = 0;
		//按照传入的容量 在堆区开辟相应的空间
		this->pAddress = new T[this->m_Capacity];
		//cout << "这是有参构造函数的调用" << endl;
	}

	//尾插法
	void Push_Back(const T &value)
	{
		//先判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			//cout << "容量已满，无法再插入数据" << endl;
			return;
		}
		this->pAddress[this->m_Size] = value;//在数组末尾插入数据
		this->m_Size++;//更新数组大小
	}

	//尾删法
	void Pop_Back()
	{
		//直接让用户无法访问最后一个元素，即是尾删
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;//逻辑上尾删
	}

	//通过下标的访问数组中的元素
	//类对象 无法识别中括号[],因此还需要重载下[]
	//如果想让返回值 this->pAddress[index] 可以作为左值，则需要返回自身，所以采用引用的方式
	T & operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回数组的容量
	int getCapacity()
	{
		return this->m_Capacity;
	}
	//返回数组的大小
	int getSize()
	{
		return this->m_Size;
	}

	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "析构函数的调用" << endl;
			delete[] this->pAddress;//因为是数组，要加[]
			this->pAddress = NULL;//置空，防止变成野指针
		}
	}
	//拷贝构造函数
	//防止浅拷贝
	MyArray(const MyArray&arr)
	{

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		//如果arr中有数据了，则需要将arr中的数据全部拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		//cout << "这是拷贝构造函数的调用" << endl;
	}
	//operator= 也是防止浅拷贝的问题
	MyArray & operator = (const MyArray &arr)
	{
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			//将this中的所有数据置为空和置为0
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		//cout << "这是=重载的调用" << endl;
		return *this;//将自身作一个返回
	}
private:
	T *pAddress;//指针指向堆区开辟的真实数据
	int m_Capacity;//数组容量
	int m_Size;//数组元素个数

};



//输出内置数据类型
void printArray(MyArray<int> &arr)
{
	for (int  i = 0; i < arr.getSize(); i++)
	{
		//重载了[]运算符，可以直接输出arr[]
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	//MyArray是类模板，调用的时候需要定义参数类型
	//构造函数初始化
	MyArray<int>arr1(5);

	for (int  i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}

	cout << "arr1中的元素为：";
	printArray(arr1);
	cout << "arr1的容量大小为"<<arr1.getCapacity() << endl;
	cout << "arr1的元素个数为"<<arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	

	//尾删测试
	arr2.Pop_Back();
	cout << "arr2中的元素为：";
	printArray(arr2);
	cout << "arr2的容量大小为" << arr2.getCapacity() << endl;
	cout << "arr2的元素个数为" << arr2.getSize() << endl;
}

//测试自定数据类型
class person
{
public:
	//编写了有参构造函数后，C++就不会在提供默认构造函数
	//MyArray<person>arr3(5)  该句调用MyArray类的有参构造函数，会在堆区创建person类的数据，又会调用person类的默认构造
	//所以需要手动补齐默认构造
	person() {};
	person(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
//输出自定义数据类型
void printPersonArray(MyArray<person> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].m_name << " " << arr[i].m_age << endl;
	}
}
void test02()
{
	MyArray<person>arr3(5);
	person p1("孙悟空", 9999);
	person p2("孙悟空", 9999);
	person p3("孙悟空", 9999);
	person p4("孙悟空", 9999);
	person p5("孙悟空", 9999);

	arr3.Push_Back(p1);
	arr3.Push_Back(p2);
	arr3.Push_Back(p3);
	arr3.Push_Back(p4);
	arr3.Push_Back(p5);

	printPersonArray(arr3);
	cout << "arr3的容量为：" << arr3.getCapacity() << endl;
	cout << "arr3的大小为：" << arr3.getSize() << endl;


	MyArray<person>arr4(arr3);
	arr4.Pop_Back();
	printPersonArray(arr4);
	cout << "arr4的容量为：" << arr4.getCapacity() << endl;
	cout << "arr4的大小为：" << arr4.getSize() << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
