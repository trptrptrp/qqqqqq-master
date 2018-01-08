#include"readme.h"
#include"reada.cpp"
#include"luyou.cpp"
#include"luyou1.cpp"
int main()
{
	AAA gg;
	AAA *h1=&gg;
	AAA *head=NULL;
	head=h1->AA(head);
	int i, j, k;
	for (i = 0;; i++)
	{
		cout << "*****************************" << endl;
		cout << "查看路由器信息请输入：1" << '\n' << "路由表最短路径查询请输入：2" << '\n' << "路由表点、线添加请输入：3" << '\n' << "路由表点、线删除请输入：4"<<'\n'<<"退出请输入：0"<< endl;
		cin >> k;
		cout << "*****************************" << endl;
		if (k == 0)
		{
			break;
		}
		if (k == 1)
		{
			head = h1->BB(head);
		}
		if (k == 2)
		{
			head = h1->DD(head);
		}
		if (k == 3)
		{
			head = h1->EE(head);
		}
		if (k == 4)
		{
			head = h1->FF(head);
		}
	}
	return 0;
}
