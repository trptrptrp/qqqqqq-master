AAA *AAA::AA(struct AAA *head)
{
	cout << "ttttttttt" << endl;
	AAA *p1,*p2;
	p1 = new AAA;
	p2 = new AAA;
	BBB *p5,*p6;
	p5=new BBB;
	p6=new BBB; 
	int i,j;
	ifstream ff("luyou.txt", ios::in);
	if (!ff)
	{
		cout << "File1 open error!\n";
		exit(0);
	}
	else
	{
		ff >> p1->a1 ;
		ff>>p5->b1>>p5->b2;
		p1->linkk=p5;
		p6=p5;
		for(i=0;;i++)
		{
			BBB *p7;
			p7 = new BBB;
			ff>>p7->b1;
			if(p7->b1==0)
			{
				p6->linkk =NULL;
				break;
			}
			ff>>p7->b2;
			p6->linkk=p7;
			p6=p6->linkk;
		}
		p1->linkk=p5;
	}
	head = p1;
	p2 = head;
	for (i = 0;; i++)
	{
		AAA *p3;
		p3 = new AAA;
		BBB *p5,*p6;
		p5=new BBB;
		p6=new BBB; 
		ff >> p3->a1;
		if (p3->a1 =="#")
		{
			p2->link = NULL;
			break;
		}
		ff>>p5->b1>>p5->b2;
		p6=p5;
		for(j=0;;j++)
		{
			BBB *p7;
			p7 = new BBB;
			ff>>p7->b1;
			if(p7->b1==0)
			{
				p6->linkk = NULL;
				break;
			}
			ff>>p7->b2;
			p6->linkk=p7;
			p6=p6->linkk;
		}
		p3->linkk=p5;
		p2->link = p3;
		p2 = p2->link;
	}
	return head;
}
AAA *AAA::BB(AAA *head)//输出
{
	AAA *p1;
	p1 = new AAA;
	p1 = head;
	int i, j;
	for (i = 0;; i++)
	{
		BBB *p5;
		p5 = new BBB;
		cout<<p1->a1<< endl;
		for(j=0;;j++)
		{
		if(p1->linkk!=NULL&&j==0)
		{
		p5=p1->linkk;
		cout<<p5->b1 <<" "<<p5->b2 <<endl;
		}
		if(p5->linkk !=NULL&&j!=0)
		{
		cout<<p5->b1 <<" "<<p5->b2 <<endl;
		p5=p5->linkk ;
		}
		else if(p5->linkk!=NULL&&j==0)
		{
		p5=p5->linkk;
		}
		else if(p5->linkk==NULL)
		{
		cout << p5->b1 << " " << p5->b2<< endl;
		break;
		}
		}
		if (p1->link == NULL)
		{
			break;
		}
		p1 = p1->link;
	}
	return head;
};
AAA *AAA::DD(struct AAA *head)//求最短路径
{
	AAA *p1;
	p1 = new AAA;
	int i, j, k, w,l;
	string a, b;
	cout << "请输入：(路由器x)" << endl;
	cin >> a;
	cout << endl;
	p1 = head;
	for (i = 0;; i++)//寻找a
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
	 int d[2000][1];//长度
	static string e[2000][1], f[2000][100];//路径最后一站、路径经过站点
	int aa, bb, cc;
	int c;
	for (i = 0;i<100; i++)//i为间隔站数
	{
		BBB *p5;
		p5 = new BBB;
		if (i == 0)//初始化（直接相邻下一站）
		{
			p5 = p1->linkk;
			for (j = 0;; j++)
			{
				d[j][0] = p5->b1;//路径的长度
				e[j][0] = p5->b2;//路径的终点站
				f[j][0] = p1->a1;//路径上的站点
				f[j][1] = p5->b2;
				if (p5->linkk == NULL)
				{
					aa = 0;//每一批第一个
					bb = j + 1;//下一批第一个
					cc = j + 1;
					break;
				}
				p5 = p5->linkk;
			}
		}
		else
		{
			for (j = 0;; j++)
			{
				AAA *p3;
				p3 = new AAA;
				p3 = head;
				BBB *p6;
				p6 = new BBB;
				for (k = 0;; k++)//找站点
				{
					if (p3->a1 == e[aa][0])
					{
						aa++;
						break;
					}
					if (p3->link == NULL)
					{
						aa++;
						break;
					}
					else
					{
						p3 = p3->link;
					}
				}
				p6 = p3->linkk;
				for (k = 0;; k++)//加路径
				{
					for (l = 0;l<i+2; l++)//判断可不可以过
					{
						if (p6->b2 == f[aa-1][l])
						{
							l = -2;
							break;
						}
					}
					if (l < 0)
					{
						if (p6->linkk == NULL)
						{
							break;
						}
						else
						{
							p6 = p6->linkk;
						}

					}
					else
					{
						d[bb][0] = d[aa - 1][0] + p6->b1;
						e[bb][0] = p6->b2;
						for (w = 0; w < i + 1; w++)
						{
							f[bb][w] = f[aa - 1][w];
						}
						f[bb][i + 1] = p6->b2;
						bb++;
						if (p6->linkk == NULL)
						{
							break;
						}
						else
						{
							p6 = p6->linkk;
						}
					}
				}
				if (aa == cc)//一批结束
				{
					cc = bb;
					break;
				}
			}
		}
		if (aa == bb&&bb == cc)//求径结束
		{
			break;
		}
	}
	c = -1;
	AAA *p4;
	p4 = new AAA;
	p4 = head;
	for (j = 0;; j++)
	{
		c = -2;
		for (i = 0; i < bb; i++)//比较
		{
			if (e[i][0] == p4->a1&&c < 0)
			{
				c = i;
			}
			else if (e[i][0] == b&&c >= 0)
			{
				if (d[i][0] < d[c][0])
				{
					c = i;
				}
			}
		}
		if (c < 0)
		{}
		else
		{
			cout << f[c][0] << "  " << e[c][0];
			cout << "  距离：";
			cout << d[c][0] << endl;
			/*for (k = 0;; k++)//路径
			{
				cout << f[c][k] << "   ";
				if (f[c][k] == p4->a1)
				{
					cout<<'\n' << endl;
					break;
				}
			}*/
		}
		if (p4->link == NULL)
		{
			break;
		}
		p4 = p4->link;
	}

	return head;
};
