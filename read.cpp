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
		cout << "�鿴·������Ϣ�����룺1" << '\n' << "·�ɱ����·����ѯ�����룺2" << '\n' << "·�ɱ�㡢����������룺3" << '\n' << "·�ɱ�㡢��ɾ�������룺4"<<'\n'<<"�˳������룺0"<< endl;
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
