#include<stdio.h>
void sort(int arr[],int len )
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j+1] > arr[j])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 2,15,39,5,6,7,89,43,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	sort( arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}