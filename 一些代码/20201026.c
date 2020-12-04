#define  _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

//int globale = 99;//全局变量

enum Sex
{
	MALE = 99,//0
	FEMALE,
	SECRET
};

int main()
{
	float f = 12.5f;
	printf("%d\n", MALE);
	//printf("%d\n", FEMALE);
	//printf("%d\n", SECRET);

	/*
	int sum1 = 0
	int sum2 = 0;
	scanf("%d%d",&sum1,&sum2);
	printf("%d,%d\n",sum1,sum2);
	*/

	/*int _ = 10;
	int ________ = 10;
	int _________________ = 10;
	int ________________________________________ = 10;
	printf("%d,%d\n", _, ________________________________________);
*/

	//int globale = 199;//局部变量优先使用
	//printf("%d\n", globale);

	//int a = 100;//局部变量
	//int c = 99;
	//char ch = 'a';
	//printf("%d\n", a);
	return 0;

	//在32位平台下
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4   
	//printf("%d\n", sizeof(long));//4 
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8
	//printf("%d\n", sizeof(long double));//8
/*
	char ch = 'a';
	short sh = 12;
	int i = 1;
	long l = 123;
	long long ll = 234;
	float f = 12.5;
	double d = 99.99;
	//格式化输出
	printf("%c\n",ch);
	printf("%d\n", sh);
	printf("%d\n",i);
	printf("%ld\n", l);
	printf("%lld\n", ll);
	printf("%f\n", f);
	printf("%lf\n", d);*/


	//10 = 99;

	/*char ch;
	scanf("%c",&ch);
	printf("%c\n",ch);
	printf("hello world\n");
	return 0; ctr+k+c*/
	//printf("hello world22222222\n");
}