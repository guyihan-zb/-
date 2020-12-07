#pragma once
#define MAX_NUM_PER 5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//人物的信息
typedef struct Personlnfo
{
	char name[10];
	char sex[5];
	int age;
	char tel[15];
	char address[20];
}Personlnfo;

typedef struct Contact
{
	Personlnfo per[MAX_NUM_PER];//结构体数组
	int usedSize;//当前通讯录的人数
}Contact;

void InitContact(Contact* pCon);//初始化通讯录

void AddContact(Contact* pCon);

//找到返回下标 找不到返回-1 姓名查找
int SearchContact(Contact* pCon);

void DelContact(Contact* pCon);

void ShowContact(Contact* pCon);

void ClearContact(Contact* pCon);

void DestroyContact(Contact* pCon);