#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>
#include <stdlib.h>
enum State
{
    VALID, //�Ϸ�״̬
    INVALID //�Ƿ�״̬
};
enum State state = INVALID;
int MyAtoi(const char *str)
{
    long long ret = 0;
    int flag = 1;//��ʶ������
    assert(str != NULL);//��ָ��
    if (*str == '\0')//���ַ���
    {
        return 0;
    }
    while (isspace(*str))   //�հ��ַ�
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
            if (ret > INT_MAX && ret < INT_MIN)//Խ�����
            {
                return 0;
            }
        }
        else
        {
            state = VALID;//�Ϸ�״̬
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
    while (*dest)    //�ҵ�Ŀ���ַ����Ľ�β
    {
        dest++;
    }
    while (count--)  //ƴ��count��
    {
        if (*src)  //���Դ�ַ���������\0����ƴ��
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