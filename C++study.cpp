#include<iostream>
#include<string>
using namespace std;

//设计一个立方体类
//1.创建立方体类
//2.设计属性
//3.设计行为 获取立方体面积和体积
//4.分别利用全局函数和成员函数判断两个立方体是否相等
class cube
{
public:
	//设置长
	void setL(int L)
	{
		m_L = L;
	}
	//设置宽
	void setW(int W)
	{
		m_W = W;
	}
	//设置高
	void setH(int H)
	{
		m_H = H;
	}
	//获取长
	int getL()
	{
		return m_L;
	}
	//获取宽
	int getW()
	{
		return m_W;
	}
	//获取高
	int getH()
	{
		return m_H;
	}
	//计算体积
	int cubeV()
	{
		return m_L * m_W * m_H;
	}
	//计算面积
	int cubeS()
	{
		return (m_L*m_H + m_L * m_W + m_W * m_H) * 2;
	}

	//利用成员函数判断两个立方体是否相同
	bool isSameByClass(cube &c)
	{
		if (m_L==c.getL()&&m_H==c.getH()&&m_W==c.getW())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	int m_L;
	int m_W;
	int m_H;

};

//利用全局函数来判断立方体是否相同
bool isSame(cube &c1, cube &c2)//利用引用的方式传递数据，防止再拷贝一份数据
{
	if (c1.getL()==c2.getL()&&c1.getH()==c2.getH()&&c1.getW()==c2.getW())
	{
		return true;
	}
	return false;
}

int main()
{
	cube c1;//创建第一个立方体
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	cout << "立方体的体积为：" << c1.cubeV() << endl;
	cout << "立方体面积为：" << c1.cubeS() << endl;

	cube c2;//创建第二个立方体
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);

	//bool ret = isSame(c1, c2);//利用全局函数判断
	bool ret = c1.isSameByClass(c2);//利用成员函数判断是否相同
	if (ret)
	{
		cout << "这两个立方体相同" << endl;

	}
	else
	{
		cout << "这两个立方体不同" << endl;
	}
	system("pause");
	return 0;
}

