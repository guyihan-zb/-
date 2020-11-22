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
	//整体逆置
	reverse(str, str + len - 1);
	//按照单词局部逆置
	char* cur = str;
	while (*cur)
	{
		//查找单词的边界：空格或者'\0'
		char* start = cur;
		while (*cur != ' ' && *cur != '\0')
			++cur;
		//当前单词的区间
		//逆转单词
		reverse(start, cur - 1);
		//查找下一个单词的区间
		//跳过空格
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