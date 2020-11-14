#include <stdio.h>
int main1()
{
	int arr[3][4];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
				printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	return 0;	
}