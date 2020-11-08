#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Prime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("不是素数  %d\n",n);
			break;
		}
	}
	if (n == i)
	{
		printf("是素数    %d\n", n);
	}
	return 0;
}
int LeapYear(int f)
{
	if (f % 4 == 0 && f % 100 != 0||f%400==0)
	{
		printf("是闰年");
	}
	else
		printf("不是闰年");
	return 0;
}
void Swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int Show(int k)
{
	int i, j;
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d*%d=%d   ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
void cre(int n)
{
	if (n > 9)
	{
		cre(n / 10);
	}
	printf("%d\n", n % 10);
}
int fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	int temp = n * fac(n - 1);
	return temp;
}
int myStrlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	int tmp = 1 + myStrlen(str + 1);
	return tmp;
}

int power(int n,int k)
{
	if(k == 0)
	{
		return 1;
	}
	else if (k >= 1)
	{
		return n * power(n, k - 1);
	}
}
int add(int n)
{
	if (n > 9)
	{
		return add(n / 10) + n % 10;
	}
	else
		return n; 
}
void reverse_string(char* string) {
	int len = strlen(string) - 1;
	char tmp;
	if (len > 0)
	{
		tmp = *string;
		*string = *(string + len);
		*(string + len) = '\0';
		reverse_string(string + 1);
		*(string + len) = tmp;
	}
}
int fib(int n)//递归
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	int tmp = fib(n - 1) + fib(n - 2);
	return tmp;
}
int fib2(int n)//非递归
{
	if (n == 0)
	{
		return 0;
	}
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	for (int i = 3; i <= n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main1()
{

	//printf("%d\n",fib(7));

	/*char str[] = "abcdefg" ;
	printf("原字符串为:%s\n", str);
	reverse_string(str);
	printf("转换后字符串为:%s\n", str);*/

	/*int ret = add(172);
	printf("%d\n", ret);*/

	/*int ret=power(5, 3);
	printf("%d\n", ret);*/

	/*int ret = fib(8);
	printf("%d\n", ret);*/

	/*char str[] = "abcde";
	int len = myStrlen(str);
	printf("%d\n", len);*/

	/*int ret=fac(5);
	printf("%d", ret);*/

	//int n;
	//cre(6521);

	//int k;
	//printf("请输入需要打印的乘法表数");
	//scanf("%d", &k);
	//Show(k);

	//int a = 10;
	//int b = 20;
	//Swap(&a, &b);
	//printf("%d %d\n", a, b);

	//LeapYear(1998);

	/*int n;
	for (n = 100; n <= 200; n++)
	{
		Prime(n);
	}*/
	return 0;
}