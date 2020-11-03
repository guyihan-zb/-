#include<stdio.h>
int main()
{
	//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int key = 8;
	//int len = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = len - 1;
	//int mid = 0;
	//while (left < right)
	//{
	//	mid = (left + right) / 2;
	//	if (arr[mid] < key)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > key)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//		break;
	//}
	//if (left <= right)
	//{
	//	printf("找到了,下标是%d\n",mid);
	//}
	//else
	//{
	//	printf("没找到\n");
	//}

	//猜数字
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int count = 3;
//	char pass[10];
//	while (count != 0)
//	{
//		printf("请输入你的密码： \n");
//		scanf("%s", pass);
//		if (strcmp(pass, "1234") == 0)
//		{
//			printf("%s\n", "密码相同");
//			break;
//		}
//		count--;
//		printf("你还有 %d 次机会\n", count);
//	}

	//在屏幕上输出9 * 9乘法口诀表
	//int i, j;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <=i; j++)
	//	{
	//		printf("%d*%d=%d   ", j, i,i*j);
	//	}
	//	printf("\n");
	//}
	
	//求10 个整数中最大值
	/*int max,i,j;
	int arr[10] = { 15,62,69,54,2,36,58,41,63,96 };
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int max = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = max;
			}
		}
	}
	printf("%d\n", arr[j]);*/
	
	//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//	double  sum= 0;         //最终的结果
//	int i = 1;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;        //奇数项，往sum上相加
//		}
//		else
//		{
//			sum -= 1.0 / i;      //偶数项，往sum上相减
//		}
//	}
//	printf("sum=%lf\n", sum);    //打印sum
    
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
	/*int count = 0;
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i / 10 == 9) || (i % 10 == 9))
		{
			count++;
		}
	}
	printf("%d\n", count + 1);*/
	
	//写一个代码：打印100~200之间的素数
	/*int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d\n", i);
		}
	}*/
	
	//写一个代码：打印100~200之间的素数
	/*int i,j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i && i % j; j++);

		if (j == i)
		{
			printf("%d\n", i);
		}
	}*/
	
	//打印1000年到2000年之间的闰年
	/*int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0)
		{
			if (i % 1000 != 0)
			{
				printf("%d\n", i);
			}
		}
		if(i % 400 == 0)
		{
			printf("%d\n", i);
		}
	}*/
	
	//给定两个数，求这两个数的最大公约数
	/*int a = 45;
	int b = 15;
	int i = 100;
    for (; i >1; i--)
	{
		if (a % i==0 && b % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}*/
	return 0;
}