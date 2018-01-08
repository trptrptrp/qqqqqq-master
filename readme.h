#ifndef README_H
#define README_H
#include<iostream>
#include<string>
#include<fstream> 
using namespace std;
struct BBB
{
	int b1;//长度 
	string b2;//下一个路由器
	BBB *linkk; 
} ;
struct AAA
{
	string a1;//路由器 
	AAA *link;
	BBB *linkk;
	virtual AAA *AA(struct AAA *head);//读取
	virtual AAA *BB(AAA *head);//全输出
	//virtual AAA *CC(AAA *head);
	virtual AAA *DD(struct AAA *head);//求最短路径
	virtual AAA *EE(AAA *head);//添加
	virtual AAA *FF(AAA *head);//删除
};

#endif
