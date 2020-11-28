//杨氏矩阵的输入不一样
#include<stdio.h>
#define ROW 3  //定义行和列
#define COL 3
int Find(int a[ROW][COL], int x)
{
    int i = 0;      //初始化i和j
    int j = COL - 1;
    while (1)
    {
        int temp = a[i][j];   //找到了返回1
        if (temp = x)
        {
            printf("找到了,位置是 %d %d", i, j);
            break;
        }
        else if (temp > x && j >= 0)//比x大，给上走
        {
            temp = a[i--][j];
        }
        else if (temp < x && j >= 0)//比x小，给右走
        {
            temp = a[i][j++];
        }
        else//没找到，返回0**重点内容**
        {
            printf("没找到\n");
            break;
        }
    }
    return 0;
}
int  main4()
{
    int i=0, j=0;
    int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
    printf("请输入要查找的数：");
    int x = 0;
    scanf_s("%d", &x);
    if (Find(a, x))
    return 0;
}

