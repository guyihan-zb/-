#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3  //定义行和列
#define COL 3
#include<stdio.h>
#include<string.h>
//字符串旋转
int findRound(const char* src, char* find)
{
	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src); //先拷贝一遍
	strcat(tmp, src); //再连接一遍
	char* ret = strstr(tmp, find);
	if (ret == NULL) 
	{
		return 0;
	}
	return 1; //看看找不找得到
}

//字符串左旋
//每一次移动后面的到前面，然后再最后把刚开始tmp等于最后一个
//比如ABCD->BBCD->BCCD->BCDD->BCDA
int letf_move1( char* src, int time)
{
	int i, j, tmp;
	int len = strlen(src);
	time %= len;
	for (i = 0; i < time; i++)
	{
		tmp = src[0];
		for (j = 0; j < len - 1; j++) //单次平移
		{
			src[j] = src[j + 1];
		}
		src[j] = tmp;
	}
	return 0;	
}
int letf_move2(char* src, int time)
{
	int len = strlen(src);
	int pos = time % len; //断开位置的下标
	char tmp[256] = { 0 }; 
	//更准确的话可以选择malloc len + 1个字节的空间来做这个tmp
	strcpy(tmp, src + pos); //先将后面的全部拷过来
	strncat(tmp, src, pos); //然后将前面几个接上
	strcpy(src, tmp); //最后拷回去
	return 0;
}
//还可以有更好的选择，例如ABCDEFG，左旋3次后变成DEFGABC，有一个特殊的操作方式：
//先将要左旋的前三个家伙逆序（CBADEFG），然后将后半段也逆序（CBAGFED），最后整体逆序（DEFGABC）即可。
void reverse_part(char* str, int start, int end) 
//将字符串从start到end这一段逆序
{
	int i, j;
	char tmp;
	for (i = start, j = end; i < j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}
void letf_move(char* src, int time)
{
	int len = strlen(src);
	int pos = time % len;
	reverse_part(src, 0, pos - 1); //逆序前段
	reverse_part(src, pos, len - 1); //逆序后段
	reverse_part(src, 0, len - 1); //整体逆序
}
int findnum(int a[][3], int x, int y, int f) //第一个参数的类型需要调整
{
	int i = 0, j = x - 1; //从左上角开始遍历
	while (j >= 0 && i < y)
	{
		if (a[i][j] < f) //比我大就向下
		{
			i++;
		}
		else if (a[i][j] > f) //比我小就向左
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


//杨氏矩阵
int main3()
{
	int a[][3] = {{1, 3, 5},{3, 5, 7},{5, 7, 9} }; //一个示例
	if (findnum(a, 3, 3, 2))
	{
		printf("It has been found!\n");
	}
	else
	{
		printf("It hasn't been found!\n");
	}
	return 0;
}

//字符串左旋
int main2()
{
	char src[] = "ABCD";
	int time = 0;
	scanf_s("%d", &time);
	letf_move(src,time);
	printf("%s\n", src);
	return 0;
}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
int main1()
{
	char src[] = "abcd";
	char find[] = "cdab";
	findRound(src, find);
	int ret = findRound(src, find);
	if (ret == 1) {
		printf("是旋转字符串\n");
	}
	else if (ret == 0) {
		printf("不是旋转字符串\n");
	}
	return 0;
}