#include<stdio.h>
int main2()
{
	int i = 0;
	while (i <= 10)
	{
		i=i+1;
		if (i == 5)
		{
			continue;
		}
		printf("%d ", i);
	}



 //   int sum = 0;//1-10�ĺ�
	//int sumEve = 0;//1-10֮��ż���ĺ�
	//int sumOdd = 0;//1-10֮�������ĺ�
	//int i = 1;
	//for (; i <= 10; i++)
	//{
	//	sum += i;
	//}
	//printf("%d\n", sum);
 //   i = 0;
	//while (i <= 10)
	//{
	//	sumEve += i;
	//	i += 2;
	//}
	//printf("%d\n", sumEve);
	//i = 1;
	//while (i <= 10)
	//{
	//	sumOdd += i;
	//	i += 2;
	//}
	//printf("%d\n", sumOdd);
	return 0;
}