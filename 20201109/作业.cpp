#include <stdio.h>
//冒泡排序1和2
void BubbleSort(int array[], int size)
{
    // 外层循环控制冒泡排序的趟数
    // size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
    for (int i = 0; i < size - 1; ++i)
    {
        int isChange = 0;
        // 具体冒泡的方式：用相邻的两个元素进行比较，前一个大于后一个元素时，交换着两个数据，依次直到数组的末尾
        for (int j = 1; j < size - i; ++j)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;

                isChange = 1;   // 如果本次冒泡进行数据交换了，说明本次还是无序的，就将isChange设置为1
            }
        }

        // 如果本次冒泡中，元素没有交换，则本次开始冒泡时，数据已经有序了，后面的冒泡可以不用进行了
        if (!isChange)
            return;
    }
}

void paixu(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
//实现函数init() 初始化数组为全0
void show(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//实现print()  打印数组的每个元素
void Init(int arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = 0;
    }
}
//实现reverse()  函数完成数组元素的逆置。
void reverse(int arr[], int len)
{
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
int compare(int m, int n, int i)
{


    if (i == 0)
        return 0;
    if (i % 2 == 1)
    {
        i = i >> 1;
        return 1 + compare(m, n, i);
    }
    else
    {
        i = i >> 1;
        return 0 + compare(m, n, i);

    }
}

int main()
{
    //打印整数二进制的奇数位和偶数位
       int num = 20;//00000000 00000000 00000000 0001 0100
       int i = 31;
        for (i = 31; i >= 1; i -= 2)
        {
            printf("%d ", (num >> i) & 1);
        }
        printf("\n");
        for (i = 30; i >= 0; i -= 2)
        {
            printf("%d ", (num >> i) & 1);
        }
        printf("\n");

    /*int m = 0;
    int n = 0;
    scanf_s("%d%d", &m, &n);
    int i = m ^ n;
    printf("%d", compare(m, n, i));*/

 // 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
    //int i;
    //int A[10];
    //int B[10];
    //int t[10];
    //printf("请输入数组A：");
    //for (i = 0; i < 10; i++)
    //{
    //    scanf_s(" %d", &A[i]);
    //}
    //printf("请输入数组B：");
    //for (i = 0; i < 10; i++)
    //{
    //    scanf_s(" %d", &B[i]);
    //}
    //for (i = 0; i < 10; i++)
    //{
    //    t[i] = A[i];
    //    A[i] = B[i];
    //    B[i] = t[i];
    //}
    //for (i = 0; i < 10; i++)
    //{
    //    printf("%d ", A[i]);
    //}
    //printf("\n");//为了使结果看起来清晰，把数组A和数组B上下分隔开
    //for (i = 0; i < 10; i++)
    //{
    //    printf("%d ", B[i]);
    //}
    //printf("\n");

	//int arr[] = { 12,6,5,4,8,2 };//这个求的就是真实的数组长度
	//int len = sizeof(arr) / sizeof(arr[0]);
 //   //Init(arr, len);
 //   reverse(arr, len);
 //   for (int i = 0; i < len; i++)
 //   {
 //       printf("%d ", arr[i]);
 //   }
 //   printf("\n");

    /*show(arr, len);
	paixu(arr, len);
    show(arr, len);*/
    return 0;
}

//统计二进制中1的个数
//#include<stdio.h>
//int _Count(int x)
//{
//    int cnt = 0; while (x)
//    {
//        x &= (x - 1); cnt++;
//    }
//    return cnt;
//}

//交换两个变量（不创建临时变量）
//#include<stdio.h>
//int main()
//{
//    int a = 20;
//    int b = 10;
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("%d %d\n", a, b);
//    return 0;
//}