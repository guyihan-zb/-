
#include<stdio.h>

void find_two_diff_num(int arr[], int sz, int* p1, int* p2)
{
	int i = 0;//ѭ������
	int ret = 0;
	int pos = 0;
	*p1 = 0;//����1�ĵ�ַ
	*p2 = 0;//����2 �ĵ�ַ
	//1.������������� 
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];//ѭ�������һ�εĽ����5^6,������101^110=011
	}
	//2.��ret��������Ϊ1��һλ
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)//��һ�����������ĺ���λΪ1
		{
			pos = i;
			break;
		}
	}
	//����
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			(*p1) ^= arr[i];
		}
	}
	(*p2) = (*p1) ^ ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 7, 8 };
	int sz = sizeof(arr) / sizeof(arr[0]);//�����С
	int num1 = 0;//����1
	int num2 = 0;//����2
	find_two_diff_num(arr, sz, &num1, &num2);
	printf("num1=%d,num2=%d\n", num1, num2);
	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Num
//{
//	int num1;
//	int num2;
//}Num;
//
//Num Find_notdouble(int arr[], int size)
//{
//	Num n;
//	n.num1 = 0;
//	n.num2 = 0;
//	//����������������Ľ�����ǲ���ͬ����������
//	int tmp = 0;
//	int pos = 0;
//	for (int i = 0; i < size; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//�ҳ��������bitΪ1��λ������
//	for (int i = 0; i < sizeof(int) * 8; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//		{
//			pos = i;//��bitΪ1����һλ���ڵ�λ�ñ�������
//			break;
//		}
//	}
//	//����posλΪ1�������е�Ԫ�ؽ��з���
//	for (int i = 0; i < size; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//posλΪ1����һ�飬������Ľ�����������в�ͬ������
//		{
//			n.num1 ^= arr[i];
//		}
//		else
//		{
//			n.num2 ^= arr[i];//posλΪ0������һ�飬������Ľ��������һ���в�ͬ������
//		}
//	}
//	return n;
//}
//
//int main()
//{
//
//	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5 };
//	Num _num = Find_notdouble(arr, sizeof(arr) / sizeof(arr[0]));
//	printf("ֻ����һ�ε���������Ϊ��");
//	printf("%d %d \n", _num.num1, _num.num2);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//void find_num(int arr[], int sz)
//{
//    int i, j, k = 0;
//    for (i = 0; i < sz; i++)
//    {
//        k = 0;
//        for (j = 0; j < sz; j++)
//        {
//            if (arr[j] == arr[i])
//                k++;
//        }
//        if (k == 1)
//            printf("����Ϊ %d\n", arr[i]);
//    }
//    printf("\n");
//}
//void Find(int arr[], int len)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int ret = 0;
//	int n = 0;
//	int i = 0;
//	int bit = 0;
//	for (i = 0; i < len; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	for (n = 0; n < 32; n++)
//	{
//		if (((ret >> n) & 1) == 1)
//			break;
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (((arr[i] >> n) & 1) == 1)
//			num1 = num1 ^ arr[i];
//		else
//			num2 = num2 ^ arr[i];
//	}
//	printf(" num1=%d\n num2=%d\n", num1, num2);
//}
//
//int main()
//{
//	int a[] = { 1, 2, 3, 3, 2, 1, 4, 5 };
//	int len = sizeof(a) / sizeof(a[0]);
//	Find(a, len);
//    /*int arr[] = { 1, 2, 3, 4, 1, 2, 3, 5 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    find_num(arr, sz);*/
//    return 0;
//}