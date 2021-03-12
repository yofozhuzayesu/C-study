#include<iostream>
#include<queue>
using namespace std;

/*
	queue容器(队列容器)
	queue是一种先进先出的数据结构，他有两个出口，队头只能出数据，队尾只能进数据
	队列容器允许从一端新增元素，从另一端移除元素
	队列中只有队头和队尾才可以被外部使用，因此队列不允许有遍历行为
	
	构造函数：
	queue<T> que;
	queue<T> que(const queue &que);

	赋值操作：
	queue& opetator=(const queue &que)

	数据存取
	push(elem)      //往队尾加元素
	pop()           //从队头移除第一个元素
	back()          //返回最后一个元素   队尾的元素
	front()         //返回第一个元素     队头的元素

	大小操作：
	empty()
	size()
 */

void test01()
{
	queue<int> que;
	que.push(10);
	que.push(20);
	que.push(30);
	que.push(40);
	que.push(50);
	cout << "最后一个值为：" << que.back() << endl;
	cout << "第一个元素为：" << que.front() << endl;
	cout << "队列大小为" << que.size() << endl;

	//出队
	que.pop();
	cout << "出队一个元素后最后一个值为：" << que.back() << endl;
	cout << "出队一个元素后第一个元素为：" << que.front() << endl;
	cout << "出队一个元素后队列大小为" << que.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
