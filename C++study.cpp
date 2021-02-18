#include<iostream>
#include<string>
using namespace std;

//设计一个圆形类，一个点类，计算点和圆的关系
class cirlce
{
public:
	void setXYR(int a,int b,int c)//设置圆心的坐标和半径
	{
		x = a;
		y = b;
		r = c;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getR()
	{
		return r;
	}
private:
	int x;//横坐标
	int y;//纵坐标	
	int r;//半径
};
class point
{
public:
	void setXY(int a, int b)//设置点的坐标
	{
		x = a;
		y = b;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
private:
	int x;
	int y;
};

int relation(cirlce &c, point &p)
{
	int d = (c.getX() - p.getX())*(c.getX() - p.getX()) + (c.getY() - p.getY())*(c.getY() - p.getY());
	return d;
}
int main()
{
	cirlce c1;
	point p1;
	c1.setXYR(0, 0, 5);
	p1.setXY(3,4);
	int d = relation(c1, p1);
	if (d>(c1.getR()*c1.getR()))
	{
		cout << "点在圆外" << endl;
	}
	else if (d == (c1.getR()*c1.getR()))
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}

	system("pause");
	return 0;
}

