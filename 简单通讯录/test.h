#pragma once
#define MAX_NUM_PER 5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//�������Ϣ
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
	Personlnfo per[MAX_NUM_PER];//�ṹ������
	int usedSize;//��ǰͨѶ¼������
}Contact;

void InitContact(Contact* pCon);//��ʼ��ͨѶ¼

void AddContact(Contact* pCon);

//�ҵ������±� �Ҳ�������-1 ��������
int SearchContact(Contact* pCon);

void DelContact(Contact* pCon);

void ShowContact(Contact* pCon);

void ClearContact(Contact* pCon);

void DestroyContact(Contact* pCon);