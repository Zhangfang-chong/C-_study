#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<map>
#include<string>
//map�Ǽ�ֵ�ԣ�����һ��������Ӧһ��ѧ�ţ��Ϳ��Զ���һ���ַ���string���͵�����Ϊ����ѧ��int���͵�Ϊֵ
//��map<string.int>m;��Ȼ��ֵҲ����������������map���Զ������еļ�ֵ�԰��ռ���С��������
using namespace std;
int main()
{
	map<string, int>m;//����һ���յ�map m ����string���ͣ�ֵ��int����
	m["hello"] = 2;//��keyΪ"hello",valueΪ2�ļ�ֵ��key-value����map��
	cout << m["hello"] << endl;//����map��keyΪ"hello"��value ���key������ �򷵻�0
	cout << m["world"] << endl;
	m["world"] = 3;//��world����Ӧ��ֵ�޸�Ϊ3
	m[","] = 1;// ����һ���ֵ�ԣ���Ϊ"," ֵΪ1
	//�õ��������������map�е�����Ԫ�أ�����it->first��ȡ��ֵ��it->second��ȡ
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << it->second << endl;
	}
	//����map�ĵ�һ��Ԫ�أ�������ļ���ֵ
	cout << m.begin()->first << " " << m.begin()->second << endl;
	//����map�����һ��Ԫ�أ�������ļ���ֵ
	cout << m.rbegin()->first << " " << m.rbegin()->second << endl;
	//���map��Ԫ�ظ���
	cout << m.size() << endl;
	return 0;
}