#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3  //�����к���
#define COL 3
#include<stdio.h>
#include<string.h>
//�ַ�����ת
int findRound(const char* src, char* find)
{
	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
	strcpy(tmp, src); //�ȿ���һ��
	strcat(tmp, src); //������һ��
	char* ret = strstr(tmp, find);
	if (ret == NULL) 
	{
		return 0;
	}
	return 1; //�����Ҳ��ҵõ�
}

//�ַ�������
//ÿһ���ƶ�����ĵ�ǰ�棬Ȼ�������Ѹտ�ʼtmp�������һ��
//����ABCD->BBCD->BCCD->BCDD->BCDA
int letf_move1( char* src, int time)
{
	int i, j, tmp;
	int len = strlen(src);
	time %= len;
	for (i = 0; i < time; i++)
	{
		tmp = src[0];
		for (j = 0; j < len - 1; j++) //����ƽ��
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
	int pos = time % len; //�Ͽ�λ�õ��±�
	char tmp[256] = { 0 }; 
	//��׼ȷ�Ļ�����ѡ��malloc len + 1���ֽڵĿռ��������tmp
	strcpy(tmp, src + pos); //�Ƚ������ȫ��������
	strncat(tmp, src, pos); //Ȼ��ǰ�漸������
	strcpy(src, tmp); //��󿽻�ȥ
	return 0;
}
//�������и��õ�ѡ������ABCDEFG������3�κ���DEFGABC����һ������Ĳ�����ʽ��
//�Ƚ�Ҫ������ǰ�����һ�����CBADEFG����Ȼ�󽫺���Ҳ����CBAGFED���������������DEFGABC�����ɡ�
void reverse_part(char* str, int start, int end) 
//���ַ�����start��end��һ������
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
	reverse_part(src, 0, pos - 1); //����ǰ��
	reverse_part(src, pos, len - 1); //������
	reverse_part(src, 0, len - 1); //��������
}
int findnum(int a[][3], int x, int y, int f) //��һ��������������Ҫ����
{
	int i = 0, j = x - 1; //�����Ͻǿ�ʼ����
	while (j >= 0 && i < y)
	{
		if (a[i][j] < f) //���Ҵ������
		{
			i++;
		}
		else if (a[i][j] > f) //����С������
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


//���Ͼ���
int main3()
{
	int a[][3] = {{1, 3, 5},{3, 5, 7},{5, 7, 9} }; //һ��ʾ��
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

//�ַ�������
int main2()
{
	char src[] = "ABCD";
	int time = 0;
	scanf_s("%d", &time);
	letf_move(src,time);
	printf("%s\n", src);
	return 0;
}

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
int main1()
{
	char src[] = "abcd";
	char find[] = "cdab";
	findRound(src, find);
	int ret = findRound(src, find);
	if (ret == 1) {
		printf("����ת�ַ���\n");
	}
	else if (ret == 0) {
		printf("������ת�ַ���\n");
	}
	return 0;
}