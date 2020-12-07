#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>
#include <stdlib.h>
enum State
{
    VALID, //合法状态
    INVALID //非法状态
};
enum State state = INVALID;
int MyAtoi(const char *str)
{
    long long ret = 0;
    int flag = 1;//标识正负数
    assert(str != NULL);//空指针
    if (*str == '\0')//空字符串
    {
        return 0;
    }
    while (isspace(*str))   //空白字符
    {
        str++;
    }
    if (*str == '+')
    {
        str++;
    }
    else if (*str == '-')
    {
        str++;
        flag = -1;
    }
    while (*str)
    {
        if (isdigit(*str))
        {
            ret = ret * 10 + flag * (*str - '0');
            if (ret > INT_MAX && ret < INT_MIN)//越界情况
            {
                return 0;
            }
        }
        else
        {
            state = VALID;//合法状态
            return (int)ret;
        }
        str++;
    }
    state = VALID;
    return (int)ret;
}
char* mystrncpy(char* strDest, const char* strSource, size_t count)
{
    assert(strDest);
    assert(strSource);
    while (count--)
    {
        *strDest++ = *strSource++;
    }
    return strDest;
}
char* my_strncat(char* dest, const char* src, size_t count)
{
    assert(dest);
    assert(src);
    char* ret = dest;
    while (*dest)    //找到目标字符串的结尾
    {
        dest++;
    }
    while (count--)  //拼接count次
    {
        if (*src)  //如果源字符串不等于\0，则拼接
        {
            *dest++ = *src++;
        }
    }
    *dest = '\0';
    return ret;
}
int main1()
{
    char a[20] = "abc";
    char b[] = "hello world";
    char *zhangbo=my_strncat(a+1, b+1, 3);
    printf("%s\n", zhangbo);
    return 0;


    /*char string[100] = "Cats are nice usually";
    printf("Before: %s\n", string);
    mystrncpy(string, "Dogs", 4);
    mystrncpy(string + 9, "hola", 4);
    printf("After:  %s\n", string);
    system("pause");*/


    /*char *p = "   255lhngf862";
    int ret = MyAtoi(p);
    if (state == VALID)
    {
        printf("%d\n", ret);
    }*/
	return 0;
}