#include<iostream>
#include<string>
using namespace std;

//多态案例三-电脑组装

//CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
	~CPU()
	{
		cout << "这是CPU的析构函数调用" << endl;
	}
};

//显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
	~VideoCard()
	{
		cout << "这是VideCard的析构函数调用" << endl;
	}
};

//内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
	~Memory()
	{
		cout << "这是Memory的析构函数调用" << endl;
	}
};

//电脑类
class Computer
{
public:
	Computer(CPU *cpu, VideoCard *vc, Memory *mem)
	{
		//将这三个指针全部做接受处理
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供一个工作函数
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
		cout << "这是Computer类的析构函数在工作" << endl;
	}
private:
	CPU *m_cpu;//CPU零件指针
	VideoCard *m_vc;//显卡零件指针
	Memory *m_mem;//内存条零件指针
};

//具体厂商
//英特尔
class InterCPU:public CPU
{
public:
	virtual void calculate()
	{
		cout << "这是Inter的CPU在工作" << endl;
	}

};

class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "这是Inter的显卡在工作" << endl;
	}

};

class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "这是Inter的内存条在工作" << endl;
	}

};

void test01()
{
	//第一台电脑零件
	CPU *i_cpu = new InterCPU;
	VideoCard *i_vc = new InterVideoCard;
	Memory *i_mem = new InterMemory;

	//创建第一台电脑
	//不能直接创建Computerd对象,因为Computer类不存在默认构造函数
	Computer *c1 = new Computer(i_cpu, i_vc, i_mem);
	//或者直接可以写new Computer(new LenovoCPU,new xxxx,new xxx)

	c1->work();
	//释放c1指针指向的堆区的 类型为Computer的对象数据
	//电脑零件的堆区数据的解决方法？
	//因为delete c1要调用Computer类的析构函数，所以可以在Computer的析构函数中释放电脑零件的数据
	delete c1;


}
int main()
{
	test01();
	system("pause");
	return 0;
}
