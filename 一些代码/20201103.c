//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//#include<windows.h>
/*
break
1��ѭ���ڲ���switch
2������break��ֱ�ӽ������е�ѭ��
continue��
����continue��ֱ�ӽ������˵�ѭ��
*/
int main1()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 2)
		{
			break;
		}
		printf("%d\n", i);
		i++;
	}
}
//	int a = 10;
//gaobo:
//	if (a == 10)
//	{
//		printf("hehe\n");
//	}
//	goto gaobo;



	//char arr1[] = "abcdefg";
	//char arr2[] = "*******";
	////int len = sizeof(arr1) / sizeof(arr1[0]);
	//int len = strlen(arr1);
	//int left = 0;
	//int right = len - 1;
	//printf("%s\n",arr1);
	//while (left <= right)
	//{
	//	Sleep(1000);
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	printf("%s\n",arr2);
	//}
	/*int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 8;
	int len = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}
	}
	if (left <= right)
	{
		printf("�ҵ��ˣ�\n");
	}
	else
	{
		printf("û�ҵ���\n");
	}
*/




	/*int i = 0;
	for (; i < len; i++)
	{
		if (arr[i] == key)
		{
			printf("%d\n",i);
			break;
		}
	}
	if (i == len)
	{
		printf("û���ҵ�\n");
	}*/
	//1!+2!+3!+4!+5!
	//1+2+6+24+120 = 153
	/*int i = 1;
	int ret = 1;
	int j = 1;
	int sum = 0;
	while (j <= 5)
	{
		while (i <= j)
		{
			ret *= i;
			i++;
		}
		sum += ret;
		j++;
	}
	printf("%d\n",sum);*/
	/*int i = 1;
	do
	{
		printf("%d\n",i);
		i++;
	} while (i <= 0);
*/

	//for (;;)
	//{
	//	printf("hehe\n");
	//}

	/*for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= i;j++)
			if (i == 2)
			printf("%d ", i);
			if (i == 5)
			printf("%d ", i);*/

	//if (i == 0)
	//{
	//	break;
	//}

	//for ( i=1 ; i <= 10	 ; i++)
	//{
	//	printf("hehe\n");
	//}

	//CTR+Z   --> -1   ��������� ���ŵ��˻���������
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}*/

	////�ҵ�1-100֮�� ���ܱ�3����  Ҳ�ܱ�5����������
	//int i = 0;
	//while (i <= 99)
	//{
	//	i++;
	//	if (i % 15 != 0)
	//	{
	//		continue;
	//	}
	//	printf("%d\n",i);
	//}


	/*int i = 1;
	while (i <= 10)
	{
		if (i == 2)
		{
			continue;
		}
		printf("%d\n",i);
		i++;
	}*/



//	//1����1-10�ĺ�
//	//2����1-10֮��ż���ĺ�
//	//3����1-10֮�������ĺ�
//	int sum = 0;//1-10 �ĺ�
//	int sumEve = 0;//ż���ĺ�
//	int sumOdd = 0;//�����ĺ�
//	int i = 1;
//
//	while (i <= 10)
//	{
//		sum += i;
//		i++;
//	}
//	printf("%d\n",sum);
//	//֤��i > 10
//	i = 2;
//	while (i <= 10)
//	{
//		sumEve += i;
//		i += 2;
//	}
//	printf("sumEve=%d\n", sumEve);
//	i = 1;
//	while (i <= 10)
//	{
//		sumOdd += i;
//		i += 2;
//	}
//	printf("sumOdd=%d\n", sumOdd);
//
	return 0;
}
