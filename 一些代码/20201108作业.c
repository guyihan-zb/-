#include <stdio.h>

void fun1(int a, int b)
{
	a = 10;
	b = 10;
}

void fun2(int* a, int *b)
{
	int c = 10;
	int d = 20;
	a = &c;
	b = &d;
	*a = 100;
	*b = 200;
}

int main()
{
	int m = 1, n = 2;
	fun1(m, n);
	int* pm = &m; 
	int* pn = &n;
	fun2(pm, pn);
	return 0;
}

//������ʹ��֮ǰ������ֻ�������޶���
//int add(int a, int b);  //��������
//void fun(int a, int b)
//{
//	//ʹ��add����
//	add(a, b);
//}
//
//
//int add(int a, int b)  //��������
//{
//	return a + b;
//}
//
//int main()
//{
//	fun(1, 2);
//	return 0;
//}

//void fun()
//{
//	printf("fun()\n");
//	fun();
//}
//
//int main()
//{
//	fun();
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i < 10; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//void fun(int *a, int *b)
//{
//	*a = 10;
//	*b = 20;
//}
//void fun2(int a, int b)
//{
//	a = 10;
//	b = 20;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	fun2(a, b);
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 4, 5, 7, 19, 21, 2, 5, 8 };
//	int max = arr[0];
//	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d\n", max);
//}
//int main()
//{
//	//������ͣ� ������
//	float sum = 0.0;
//	/*
//	for (int i = 1; i < 100; i += 2)
//	{
//		//���㣺 ����������
//		sum += 1.0 / i;
//	}
//	for (int i = 2; i <= 100; i += 2)
//	{
//		sum -= 1.0 / i;
//	}
//	*/
//	float flag = 1.0;
//	for (int i = 1; i <= 100; ++i)
//	{
//		sum += flag / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//int main()
//{
//	int start, end;
//	int count = 0;
//	scanf("%d%d", &start, &end);
//	for (int i = start; i <= end; ++i)
//	{
//		/*
//		//�ж�ÿһ������λ��
//		int tmp = i;
//		int len = 1;
//		while (tmp / 10)
//		{
//			++len;
//			tmp /= 10;
//		}
//		*/
//		int tmp = i;
//		//��ȡÿһλ�ϵ����֣�%10   /10
//		while (tmp)
//		{
//			if (tmp % 10 == 9)
//			{
//				count++;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	for (int i = 1; i < 100; ++i)
//	{
//		//��ȡ��λ�ϵ�9��%10 == 9
//		if (i % 10 == 9)
//		{
//			++count;
//		}
//		//��ȡʮλ�ϵ�9: /10 == 9
//		if (i / 10 == 9)
//		{
//			++count;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int start, end;
//	scanf("%d%d", &start, &end);
//	for (int i = start; i <= end; ++i)
//	{
//		int j;
//		for (j = 2; j <= sqrt(i); ++j)
//		{
//			if (i % j == 0)
//			{
//				//i��������
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//	
//}
//int main()
//{
//	for (int i = 1; i < 2000; ++i)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	// a > b
//	// �������Լ��Ϊ c, a % b������Ϊr
//	// r = a % b  --> r = a - k * b
//	// a = m * c    b = n * c
//	// r = m * c - k * n * c = (m - kn)*c
//
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//}

//int main()
//{
//	//a b���Լ���� ͬʱ���Ա�a,b�����������
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	//�����ĳ�����ʼ���ң���һ�����Ա�����������Ϊ���Լ��
//	//���Լ��<=��������С����
//	for (int i = b; i > 0; --i)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a < 100)
//	{
//		printf("while: %d\n", a++);
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 100; ++i)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//void  test()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	
//	case 1:
//		printf("1\n");
//		break;
//	default:
//		printf("default\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}