#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
//栈在stack头文件中，是数据结构里面的栈
using namespace std;
int main()
{
	stack<int>s;//定义一个空栈s
	for (int i = 0; i < 6; i++)
	{
		s.push(i);//将元素i压入栈s中
	}
	cout << s.top() << endl;//访问栈顶元素
	cout << s.size() << endl;
	s.pop();//移除栈顶元素
	cout << s.top() << endl;
	return 0;
}