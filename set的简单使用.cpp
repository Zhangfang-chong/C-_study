#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<set>
//set�Ǽ��ϣ�һ��set����ĸ�Ԫ���Ǹ�����ͬ�ģ�����set�ᰴ��Ԫ�ؽ��дӴ�С������
using namespace std;
int main()
{
	set<int>s;//����һ���ռ��ϣ�������vector,������int����
	s.insert(1);//��s�в���һ��1
	cout << *(s.begin()) << endl;//�������s�ĵ�һ��Ԫ�أ�������s.begin()���÷�������vector
	for (int i = 0; i < 6; i++) {
		s.insert(i);
	}
	for (auto it = s.begin(); it != s.end(); it++) {//�õ�������������S�����ÿһ��Ԫ��
		cout << *it << " ";
	}
	cout << endl << (s.find(2) != s.end()) << endl;//���Ҽ���S�е�ֵ������������s.end()��ʾδ�ҵ�
	//��Ϊs.end()��ʾs�����һ��Ԫ�ص���һ��Ԫ�����ڵ�λ��
	s.erase(1);//ɾ��Ԫ��1
	cout << (s.find(1) != s.end()) << endl;//��ʱ�Ҳ���Ԫ��1
	return 0;
}