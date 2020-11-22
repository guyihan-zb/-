#include<stdio.h>
int fun(int a, int b)
{
	int max = a;
	int min = b;
	if (max < min)
	{
		max = b;
		min = a;
	}
	int i;
	for (  i= max;; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			break;
		}
	}
	return i;
}
int fun2(int a, int b)
{
	int i;
	for ( i = 1; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			break;
		}
	}
	return i;
}
int fun3(int a, int b)
{
	int c;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	return b;
}
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n", fun(a, b));
	printf("%d\n", fun2(a, b));
	printf("%d\n", a*b/fun3(a, b));
	return 0;
}