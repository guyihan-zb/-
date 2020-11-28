#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int MyStrlen1(const char *str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int MyStrlen( char* str)
{
	assert(str != NULL);
	char* pc = str;
	while (*pc != '\0')
	{
		pc++;
	}
	//*pc==\0
	return pc - str;
}
char* MyStrpy1(char *dest,const char* src)
{
	assert(dest != NULL&&src!=NULL);
	char* p = dest;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	//代码执行到这里，代表src=\0;
	*dest = '\0';
	return p;
}
char* MyStrpy(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* p = dest;
	while (*dest++ = *src++);
	//代码执行到这里，代表src=\0;
	*dest = '\0';
	return p;
}
char* MyStrcat(char* dest,const char *src)
{
	assert(dest != NULL);
	if (src == NULL)
	{
		return dest;
	}
	char* p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return p;
}
int MyStrcmp(char* str1,char* str2)
{
	assert(str1 != NULL&&str2!=NULL);
	if (str1 == NULL)return -1;
	if (str2 == NULL)return 1;
	while (*str1 == *str2)
	{
		if (*str1=='\0')
		{
			return 0;
		}
		str1++;
		str2++;		
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
char* MyStrstr(char* str1, char* str2)
{
	char* start = str1;
	char* s1 = str1;
	char* s2 = str2;
	while (*start != '\0')
	{
		char* s1 = start;
		char* s2 = str2;
		while (*s1 == *s2 && *s1 && *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return start;
		}
		start++;
	}
	return NULL;
}
void* Mymemcpy(void* dest, void* src, int count)
{
	void* ret = dest;
	while (count != 0)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
		count--;
	}
	return ret;
}
void Mymemove(void* dest, void* src, int count)
{
	void* ret = dest;
	if (src > dest)
	{
		while (count != 0)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
			count--;
		}
	}
	else
	{
		count--;
		while (count >= 0)
		{
			*((char*)dest + count) = *((char*)src + count);
			count--;
		}		
	}
	return ret;
}
int main()
{
	char buffer1[] = "DWgaOtP12df0";
	char buffer2[] = "DWGAOTP12DF0";
	int ret = memcmp(buffer1, buffer2, 3);
	printf("%d\n", ret);
	return 0;

	/*int arr[] = { 1,2,3,4,5,6,7,8 };
	Mymemove(arr+2, arr, 16);
	for (int i = 0;i < 8; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;*/

	/*char str[] = "192.168.1.0*zhangbo";
	char* p = strtok(str, ".*");
	while (p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, ".*");
	}*/

	/*char* str1 = "heaabche";
	char* str2 = "abc";
	char* p = MyStrstr(str1, str2);
	printf("%s\n", p);
	return 0;*/

	/*char dest[20] = "bit";
	char* src = "helloabc";
	strncpy(dest, src,2);
	printf("%s\n", dest);
	return 0;*/

//============strcmp================
	/*char* str1 = "abca";
	char* str2 = "abcd";
	int ret = MyStrcmp(str1, str2);
	printf("%d\n", ret);
	return 0;*/

//==========strcpy和strcat===========
	/*char dest[20] ="bit";
	char* src = "helloabc";
	MyStrcat(dest, src);
	printf("%s\n", dest);
	return 0;*/

//===========strlen===================
	/*char str[] = "abcdef";
	printf("%d\n", MyStrlen(str));
	return 0;*/
}