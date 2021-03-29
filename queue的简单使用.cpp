#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;//定义一个空队列q
	for (int i = 0; i < 6; i++)
	{
		q.push(i);//将i的值依次压入队列q中
	}
	cout << q.front() << " " << q.back() << endl;//访问队列队首元素和队尾元素
	cout << q.size() << endl;//输出队列元素的个数
	q.pop();//移除队列的首元素
	cout << q.front() << endl;
	return 0;
}