#include"readme.h"
AAA *AAA::EE(struct AAA *head)
{
	AAA *p1, *p2;
	p1 = new AAA;
	p2 = new AAA;
	p1 = head;
	BBB *p5, *p6;
	p5 = new BBB;
	int i, j, k;
	int c;
	string a, b;
	cout << "添加路由器请输入：1" << '\n' << "添加线请输入：2" << endl;
	cin >> k;
	if (k == 1)
	{
		for (i = 0;; i++)
		{
			p1 = p1->link;
			if (p1->link == NULL)
			{
				break;
			}
		}
		cout << "请输入路由器信息（路由器x）" << endl;
		cin >> p2->a1;
		for (i = 0;; i++)
		{
			p6 = new BBB;
			cout << "请输入链接的信息（长度 连接的路由器x）(输入0结束)" << endl;;
			if (i == 0)
			{
				cin >> p5->b1;
				if (p5->b1 == 0)
				{
					p2->linkk = NULL;
					break;
				}
				cin >> p5->b2;
				p2->linkk = p5;
			}
			else
			{
				cin >> p6->b1;
				if (p6->b1 == 0)
				{
					p5->linkk = NULL;
					break;
				}
				cin >> p6->b2;
				p5->linkk = p6;
				p5 = p5->linkk;
			}
		}
		p1->link = p2;
		p2->link = NULL;
		p5 = new BBB;
		p5 = p2->linkk;
		for (i = 0;; i++)
		{
			p1 = new AAA;
			p1 = head;
			for (j = 0;; j++)
			{
				if (p1->a1 == p5->b2)
				{
					break;
				}
				else if (p1->link == NULL)
				{
					cout << "输入错误！" << endl;
					break;
				}
				else
				{
					p1 = p1->link;
				}
			}
			BBB *p7;
			p7 = new BBB;
			if (p1->a1 == p5->b2)
			{
				p7 = p1->linkk;
				for (i = 0;; i++)
				{
					if (p7->linkk == NULL)
					{
						break;
					}
					p7 = p7->linkk;
				}
				p6 = new BBB;
				p6->b1 = p5->b1;
				p6->b2 = p2->a1;
				p7->linkk = p6;
				p6->linkk = NULL;
			}
			if (p5->linkk == NULL)
			{
				break;
			}
			else
			{
				p5 = p5->linkk;
			}
		}
	}
	if (k == 2)
	{
		cout << "请输入起始路由器和终点路由器（路由器a 路由器b)" << endl;
		cin >> a >> b;
		for (i = 0;; i++)
		{
			if (p1->a1 == a)
			{
				break;
			}
			else if (p1->link == NULL)
			{
				cout << "输入错误！" << endl;
				break;
			}
			else
			{
				p1 = p1->link;
			}
		}
		cout << "请输入长度：" << endl;
		cin >> c;
		if (p1->a1 == a)
		{
			p5 = p1->linkk;
			for (i = 0;; i++)
			{
				if (p5->linkk == NULL)
				{
					break;
				}
				p5 = p5->linkk;
			}
			p6 = new BBB;
			p6->b1 = c;
			p6->b2 = b;
			p5->linkk = p6;
			p6->linkk = NULL;
		}
		p1 = new AAA;
		p1 = head;
		for (i = 0;; i++)
		{
			if (p1->a1 == b)
			{
				break;
			}
			else if (p1->link == NULL)
			{
				cout << "输入错误！" << endl;
				break;
			}
			else
			{
				p1 = p1->link;
			}
		}
		p5 = new BBB;
		if (p1->a1 == b)
		{
			p5 = p1->linkk;
			for (i = 0;; i++)
			{
				if (p5->linkk == NULL)
				{
					break;
				}
				p5 = p5->linkk;
			}
			p6 = new BBB;
			p6->b1 = c;
			p6->b2 = a;
			p5->linkk = p6;
			p6->linkk = NULL;
		}
	}
	return head;
};