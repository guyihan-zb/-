#include<stdio.h>
int checkData1(int* p)
{
	int tmp[7] = { 0 };
	int i;
	for (i = 0; i < 5; i++)
	{
		if (tmp[p[i]])
		{
			return 0;
		}
		tmp[p[i]] = 1;
	}
	return 1;
}
int checkData(int* p)
{
	char tmp = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		tmp |= 1 << p[i];
	}
	return tmp == 0x3E;
}
void swapArgs(int* a, int* b)//��������
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void diveRank(int* p, int n)
{
	if (n >= 5)
	{
		//��ʱ��nҲ����������ѭ�������ġ�
		if ((p[1] == 2) + (p[0] == 3) == 1 && //B�ڶ����ҵ���
				(p[1] == 2) + (p[4] == 4) == 1 && //�ҵڶ���E����
				(p[2] == 1) + (p[3] == 2) == 1 && //�ҵ�һ��D�ڶ�
				(p[2] == 5) + (p[3] == 3) == 1 && //C����ҵ���
				(p[4] == 4) + (p[0] == 1) == 1)   //�ҵ��ģ�A��һ
				//���ڴ�ʱ��ִ�е�ȫ���У����Բ���Ҳʡ�ˡ�
		{
			for (int i = 0; i < 5; i++)
			{
				printf("%d", p[i]);
			}
			putchar('\n ');
		}
		return;
	}
	int i;
	for (i = n; i < 5; i++) //����ݹ鷽ʽ������˶�1~5��ȫ���У������ǴӺ���ǰ��ͣ��ִ�н�����
		//���Բο��Ľ�����ԭ���룬������ݹ����д�س�ѭ���󣬿��Ը��õ���⡣
	{
		swapArgs(p + i, p + n);
		diveRank(p, n + 1);
		swapArgs(p + i, p + n);
	}
}
int main()
{
	int p[5] = { 1, 2, 3, 4, 5 }; //��Ȼ������ȫ���У����Գ�ֵ������á�
	diveRank(p, 0);

	/*int p[5];
	for (p[0] = 1; p[0] <= 5; p[0]++)
	{
		for (p[1] = 1; p[1] <= 5; p[1]++)
		{
			for (p[2] = 1; p[2] <= 5; p[2]++)
			{
				for (p[3] = 1; p[3] <= 5; p[3]++)
				{
					for (p[4] = 1; p[4] <= 5; p[4]++)
					{
						if ((p[1] == 2) + (p[0] == 3) == 1 && (p[1] == 2) + (p[4] == 4) == 1 &&
							(p[2] == 1) + (p[3] == 2) == 1 && (p[2] == 5) + (p[3] == 3) == 1 &&
							(p[4] == 4) + (p[0] == 4) == 1 && checkData(p))
						{
							for (int i = 0; i < 5; i++)
							{
								printf("%d", p[i]);
							}
							putchar('\n ');
						}
					}
				}
			}
		}
	}*/
	return 0;
}