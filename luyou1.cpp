AAA *AAA::FF(struct AAA *head)
{
	AAA *p1, *p2;
	p1 = new AAA;
	p2 = new AAA;
	p1 = head;
	BBB *p5, *p6;
	p5 = new BBB;
	int i, j, k;
	string a, b;
	cout << "路由删除器请输入：1" << '\n' << "删除线请输入：2" << endl;
	cin >> k;
	if (k == 1)
	{
		cout << "请输入路由器名：（路由器x）" << endl;
		cin >> a;
		for (i = 0;; i++)
		{
			if (p1->a1 == a&&i == 0)
			{
				head = p1->link;
				break;
			}
			else if (p1->a1 == a)
			{
				p2->link = p1->link;
				break;
			}
			else if (p1->link == NULL)
			{
				cout << "输入错误！" << endl;
				break;
			}
			else
			{
				p2 = new AAA;
				p2 = p1;
				p1 = p1->link;
			}
		}
		p1 = new AAA;
		p1 = head;
		for (i = 0;; i++)
		{
			p5 = new BBB;
			p6 = new BBB;
			p5 = p1->linkk;
			for (j = 0;; j++)
			{
				if (p5->b2 == a&&j == 0)
				{
					p1->linkk = p5->linkk;
					break;
				}
				else if (p5->b2 == a)
				{
					p6->linkk = p5->linkk;
					break;
				}
				else if (p5->linkk == NULL)
				{
					break;
				}
				else
				{
					p6 = new BBB;
					p6 = p5;
					p5 = p5->linkk;
				}
			}
			if (p1->link == NULL)
			{
				break;
			}
			else
			{
				p1 = p1->link;
			}
		}
	}
	if (k == 2)
	{
		cout << "请输入起始路由器和终点路由器（路由器a 路由器b)" << endl;
		cin >> a >> b;
		cout << a << b << endl;
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
		cout << "666" << endl;
		p6 = new BBB;
		if (p1->a1 == a)
		{
			p5 = p1->linkk;
			for (i = 0;; i++)
			{
				if (p5->b2 == b&&i == 0)
				{
					p1->linkk = p5->linkk;
					break;
				}
				else if (p5->b2 == b)
				{
					p6->linkk = p5->linkk;
					break;
				}
				else if (p5->linkk == NULL)
				{
					cout << "输入错误！" << endl;
					break;
				}
				else
				{
					p6 = new BBB;
					p6 = p5;
					p5 = p5->linkk;
				}
			}
		}
		cout << "666" << endl;
		p1 = new AAA;
		p5 = new BBB;
		p6 = new BBB;
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
		if (p1->a1 == b)
		{
			p5 = p1->linkk;
			for (i = 0;; i++)
			{
				if (p5->b2 == a&&i == 0)
				{
					p1->linkk = p5->linkk;
					break;
				}
				else if (p5->b2 == a)
				{
					p6->linkk = p5->linkk;
					break;
				}
				else if (p5->linkk == NULL)
				{
					cout << "输入错误！" << endl;
					break;
				}
				else
				{
					p6 = new BBB;
					p6 = p5;
					p5 = p5->linkk;
				}
			}
		}
	}
	return head;
};