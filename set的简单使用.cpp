#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<set>
//set是集合，一个set里面的个元素是各不相同的，而且set会按照元素进行从大到小的排序
using namespace std;
int main()
{
	set<int>s;//定义一个空集合，类似于vector,数据是int类型
	s.insert(1);//向s中插入一个1
	cout << *(s.begin()) << endl;//输出集合s的第一个元素，类似于s.begin()的用法类似于vector
	for (int i = 0; i < 6; i++) {
		s.insert(i);
	}
	for (auto it = s.begin(); it != s.end(); it++) {//用迭代器遍历集合S里面的每一个元素
		cout << *it << " ";
	}
	cout << endl << (s.find(2) != s.end()) << endl;//查找集合S中的值，如果结果等于s.end()表示未找到
	//因为s.end()表示s的最后一个元素的下一个元素所在的位置
	s.erase(1);//删除元素1
	cout << (s.find(1) != s.end()) << endl;//此时找不到元素1
	return 0;
}