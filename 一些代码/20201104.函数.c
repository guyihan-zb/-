#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include "test.h"

/*
"" : ����ȥ�⵱��ȥ��,ȥ���ص�ͷ�ļ���ȥ��
<>:ֻ��ȥ����ȥ��
ֻҪ��#include   �ͻὫ���������ͷ�ļ� ��ȫ������
��������ǰ��.c�ļ�����
*/
void menu()
{
	printf("**********************\n");
	printf("*******1.play******\n");
	printf("*******0.exit*********\n");
	printf("**********************\n");
}
void game()
{
	//printf("�����Ϸ\n");
	int randNum = rand() % 100 +1;// [0-100) + 1-> [1-101)
	while (1)
	{
		printf("��������Ҫ�µ����֣�\n");
		int num = 0;
		scanf("%d", &num);
		if (num < randNum)
		{
			printf("��С��\n");
		}
		else if (num > randNum)
		{
			printf("�Ҵ���\n");
		}
		else
		{
			printf("�ҵ���\n");
			break;
		}
	}
}
//int Max(int a,int b);//������һ������


void Swap(int *pa,int *pb)
{
	/*int tmp = a;
	a = b;
	b = tmp;*/
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void isPrime(int n)
{
	int i = 2;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)//n == 9  i == 3
		{
			printf("��������\n");
			break;
		}
	}
	if (i >= n)
	{
		printf("������\n");
	}
}
int isPrime1(int n)
{
	int i = 2;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)//n == 9  i == 3
		{
			return 0;
		}
	}
	if (i >= n)
	{
		//printf("������\n");
		return 1;
	}
	return 0;
}
int isPrime2(int n)
{
	int i = 2;
	for (i = 2; i <= n/2; i++)
	{
		if (n % i == 0)//n == 9  i == 3
		{
			return 0;
		}
	}
	if (i >  n/2)
	{
		//printf("������\n");
		return 1;
	}
	return 0;
}

int isPrime3(int n)
{
	int i = 2;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)//n == 9  i == 3
		{
			return 0;
		}
	}
	if (i >   sqrt(n))
	{
		//printf("������\n");
		return 1;
	}
	return 0;
}

int isLeapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int binartSerach(int arr[],int key,int len)
{
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int mid = (left + right) >> 1;
		if (arr[mid] < key) //5 < 18
		{
			left = mid+1;
		}
		else if (arr[mid]  > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
void test(int *px)
{
	*px = *px + 1;
}

//           �β�
int Max(int a, int b)
{
	return a > b ? a : b;
}
int Max3(int a,int b,int c)
{
	/*int max = Max(a,b);
	int max2 = Max(max,c);
	return max2;*/
	return Max(Max(a, b),c);//��ʽ����
}
//void Function();
//ѭ��������
int Fac(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
//n = 5
int Fac2(int n)
{
	if (n == 1) 
	{
		return 1;
	}
	int tmp = n * Fac2(n - 1);
	return tmp;
}
int main()
{
	int ret = Fac2(5);
	printf("%d\n",ret);
	//Function();
	return 0;
}

void Function()
{
	printf("Function\n");
	int a = 10;
	if (a == 10) {
		return;
	}
	Function();
	//printf("Function\n");
}






//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//
//	//printf("%d\n", Max3(1,2,3));
//	/*int  num = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		test(&num);
//	}
//	printf("%d\n",num);*/
//	/*int arr[] = {1,2,3,4,5,6,7,8};
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	int index = binartSerach(arr,8,len);
//
//	if (index == -1)
//	{
//		printf("û���������\n");
//	}
//	else
//	{
//		printf("�ҵ���������֣��±�Ϊ%d\n", index);
//	}*/
//	/*if (isLeapYear(2004) == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}*/
//	/*isPrime(19);
//	if (isPrime3(19) == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}*/
//
//	//int a = 10;
//	//int b = 20;
//	//printf("����ǰ��%d,%d\n",a,b);
//	///*int tmp = a;
//	//a = b;
//	//b = tmp;*/
//	//Swap(&a,&b);//��ַ����
//	//printf("������%d,%d\n", a, b);
//
//	//int a = 10;
//	//int b = 20;
//	//int ret = Max(a,b);//�����ĵ���    ʵ��  ��ֵ����
//	//printf("%d\n",ret);
//	
//	//int a = 10;
//
//	//void *p = "hello";
//	//void *pp = &a;
//	//char bufffer[10] = {0};//char *
//
//	//void *pc = memset(bufffer,'a',5);
//	//printf("%s\n",pc);
//	//printf("%s\n", bufffer);
//
//
//	/*char strDest[10] = "abcd";
//	printf("%s\n", strDest);
//	strDest[0] = 'g';
//	printf("%s\n", strDest);*/
//	//char strSrouce[10] = "hello";
//
//	/*char *strDest = "abcd";
//	printf("%s\n", strDest);
//	*strDest = 'g';
//	printf("%s\n", strDest);*/
//
//	//char *strSrouce= "hello";
//
//	//char strDest[10] = "abcd";
//	//char strSrouce[10] = "hello";
//	//char *p = strcpy(strDest, strSrouce);
//	////                          char * ->  �����������ַ
//	//printf("%s\n",p);
//
//	//int a = 10;
//	//int *p = &a;
//
//
//	/*srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��������Ĳ�����1���������0�����˳�\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("��������\n");
//			break;
//		}
//	} while (input != 0);*/
//	return 0;
//}


