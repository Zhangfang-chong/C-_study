#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
//ջ��stackͷ�ļ��У������ݽṹ�����ջ
using namespace std;
int main()
{
	stack<int>s;//����һ����ջs
	for (int i = 0; i < 6; i++)
	{
		s.push(i);//��Ԫ��iѹ��ջs��
	}
	cout << s.top() << endl;//����ջ��Ԫ��
	cout << s.size() << endl;
	s.pop();//�Ƴ�ջ��Ԫ��
	cout << s.top() << endl;
	return 0;
}