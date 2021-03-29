#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<map>
#include<string>
//map是键值对，比如一个人名对应一个学号，就可以定义一个字符串string类型的人名为键，学号int类型的为值
//如map<string.int>m;当然键值也可以是其他变量，map会自动将所有的键值对按照键从小到大排列
using namespace std;
int main()
{
	map<string, int>m;//定义一个空的map m 键是string类型，值是int类型
	m["hello"] = 2;//将key为"hello",value为2的键值对key-value存入map中
	cout << m["hello"] << endl;//访问map中key为"hello"的value 如果key不存在 则返回0
	cout << m["world"] << endl;
	m["world"] = 3;//将world键对应的值修改为3
	m[","] = 1;// 设立一组键值对，键为"," 值为1
	//用迭代器遍历，输出map中的所有元素，键用it->first获取，值用it->second获取
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << it->second << endl;
	}
	//访问map的第一个元素，输出它的键和值
	cout << m.begin()->first << " " << m.begin()->second << endl;
	//访问map的最后一个元素，输出它的键和值
	cout << m.rbegin()->first << " " << m.rbegin()->second << endl;
	//输出map的元素个数
	cout << m.size() << endl;
	return 0;
}