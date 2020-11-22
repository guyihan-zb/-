#include<stdio.h>
#include<string.h>
void reverse(char* left ,char* right)
{
	while (left < right)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
void reverse2(char* str)
{
	int len = strlen(str);
	if (len <= 1)
		return;
	//��������
	reverse(str, str + len - 1);
	//���յ��ʾֲ�����
	char* cur = str;
	while (*cur)
	{
		//���ҵ��ʵı߽磺�ո����'\0'
		char* start = cur;
		while (*cur != ' ' && *cur != '\0')
			++cur;
		//��ǰ���ʵ�����
		//��ת����
		reverse(start, cur - 1);
		//������һ�����ʵ�����
		//�����ո�
		while (*cur == ' ')
			++cur;
	}
}
void test()
{
	char str[101];
    gets(str);
	reverse2(str);
	printf("%s\n", str);
}
int main()
{
	test();
	return 0;
}