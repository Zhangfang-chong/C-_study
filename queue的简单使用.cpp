#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;//����һ���ն���q
	for (int i = 0; i < 6; i++)
	{
		q.push(i);//��i��ֵ����ѹ�����q��
	}
	cout << q.front() << " " << q.back() << endl;//���ʶ��ж���Ԫ�غͶ�βԪ��
	cout << q.size() << endl;//�������Ԫ�صĸ���
	q.pop();//�Ƴ����е���Ԫ��
	cout << q.front() << endl;
	return 0;
}