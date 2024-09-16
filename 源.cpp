#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main2()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	int i;
	for (i = b; i>0; i--)
	{
		if (b % i == 0 && a % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
	