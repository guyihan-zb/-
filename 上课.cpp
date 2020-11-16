#include<stdio.h>
//int arr2[10];
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}


	/*int arr[10] = { 1,2,3,4 };
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	/*int arr[10] = {1,2,3,4};
	printf("hello\n");
	
	int arr1[] = { 1,2,3,4 };*/

	//int arr[10];//局部变量时，里面的值为随机值
	//printf("hello\n");
	
	return 0;
}

