#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>//ʹ��vector��̬������Ҫ����ͷ�ļ�
using namespace std;
int main()
{
	//vector<int>a;
	////v1.resize(10);
	//for (int i = 0; i < 10; i++)
	//	a.push_back(i);//��a��ĩβ���һ��Ԫ��i
	//cout << a.size() << endl<< a[5];
	vector<int>a(20, 5);//�����ʱ��ָ��vector�Ĵ�С��������Ԫ�ظ�һ��ָ����ֵ
	for (auto it = a.begin(); it != a.end(); it++)//ʹ�õ���������ÿһ��Ԫ�� c.end()ָ���������һ��Ԫ�ص���һ��Ԫ�� itΪָ��
		cout << *it << ' ';
	return 0;
}