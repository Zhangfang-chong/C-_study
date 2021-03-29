#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>//使用vector动态数组需要引用头文件
using namespace std;
int main()
{
	//vector<int>a;
	////v1.resize(10);
	//for (int i = 0; i < 10; i++)
	//	a.push_back(i);//在a的末尾添加一个元素i
	//cout << a.size() << endl<< a[5];
	vector<int>a(20, 5);//定义的时候指定vector的大小并把所有元素赋一个指定的值
	for (auto it = a.begin(); it != a.end(); it++)//使用迭代器遍历每一个元素 c.end()指向容器最后一个元素的下一个元素 it为指针
		cout << *it << ' ';
	return 0;
}