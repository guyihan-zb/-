//���Ͼ�������벻һ��
#include<stdio.h>
#define ROW 3  //�����к���
#define COL 3
int Find(int a[ROW][COL], int x)
{
    int i = 0;      //��ʼ��i��j
    int j = COL - 1;
    while (1)
    {
        int temp = a[i][j];   //�ҵ��˷���1
        if (temp = x)
        {
            printf("�ҵ���,λ���� %d %d", i, j);
            break;
        }
        else if (temp > x && j >= 0)//��x�󣬸�����
        {
            temp = a[i--][j];
        }
        else if (temp < x && j >= 0)//��xС��������
        {
            temp = a[i][j++];
        }
        else//û�ҵ�������0**�ص�����**
        {
            printf("û�ҵ�\n");
            break;
        }
    }
    return 0;
}
int  main4()
{
    int i=0, j=0;
    int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
    printf("������Ҫ���ҵ�����");
    int x = 0;
    scanf_s("%d", &x);
    if (Find(a, x))
    return 0;
}

