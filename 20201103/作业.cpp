#include<stdio.h>
int main()
{
	//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
	//	printf("�ҵ���,�±���%d\n",mid);
	//}
	//else
	//{
	//	printf("û�ҵ�\n");
	//}

	//������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int count = 3;
//	char pass[10];
//	while (count != 0)
//	{
//		printf("������������룺 \n");
//		scanf("%s", pass);
//		if (strcmp(pass, "1234") == 0)
//		{
//			printf("%s\n", "������ͬ");
//			break;
//		}
//		count--;
//		printf("�㻹�� %d �λ���\n", count);
//	}

	//����Ļ�����9 * 9�˷��ھ���
	//int i, j;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <=i; j++)
	//	{
	//		printf("%d*%d=%d   ", j, i,i*j);
	//	}
	//	printf("\n");
	//}
	
	//��10 �����������ֵ
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
	
	//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//	double  sum= 0;         //���յĽ��
//	int i = 1;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;        //�������sum�����
//		}
//		else
//		{
//			sum -= 1.0 / i;      //ż�����sum�����
//		}
//	}
//	printf("sum=%lf\n", sum);    //��ӡsum
    
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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
	
	//дһ�����룺��ӡ100~200֮�������
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
	
	//дһ�����룺��ӡ100~200֮�������
	/*int i,j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i && i % j; j++);

		if (j == i)
		{
			printf("%d\n", i);
		}
	}*/
	
	//��ӡ1000�굽2000��֮�������
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
	
	//���������������������������Լ��
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