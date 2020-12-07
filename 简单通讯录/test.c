//ʵ��.h������
#include"test.h"
void InitContact(Contact* pCon)
{
	assert(pCon != NULL);
	pCon->usedSize = 0;
	//��������������ݣ���Ϊ0
	memset(pCon->per,0,sizeof(pCon->per));
	/*for (int i = 0; i < MAX_NUM_PER; i++)
	{
		pCon->per[i].age=0;
		strcpy(pCon->per[i].name, 0);
	}*/
}

void AddContact(Contact* pCon)
{
	assert(pCon != NULL);
	if (pCon->usedSize == MAX_NUM_PER)
	{
		printf("ͨѶ¼�Ѿ�����");
		return;
	}

	printf("�������������: ");
	scanf("%s",pCon->per[pCon->usedSize].name);
	printf("����������Ա�: ");
	scanf("%s",pCon->per[pCon->usedSize].sex);
	printf("�������������: ");
	scanf("%d",&(pCon->per[pCon->usedSize].age));
	printf("��������ĵ绰: ");
	scanf("%s",pCon->per[pCon->usedSize].tel);
	printf("��������ĵ�ַ: ");
	scanf("%s",pCon->per[pCon->usedSize].address);
	pCon->usedSize++;
	printf("����ɹ�\n");
}

//�ҵ������±� �Ҳ�������-1 ��������
int SearchContact(Contact* pCon)
{
	assert(pCon != NULL);
	printf("��������Ҫ���ҵ�����: ");
	char name[10] = { 0 };
	scanf("%s", name);

	for (int i = 0; i < pCon->usedSize; i++)
	{
		if ((strcmp(pCon->per[i].name,name))==0)
		{ 
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pCon)
{
	assert(pCon != NULL);
	int index = SearchContact(pCon);
	if (index == -1)
	{
		printf("û����Ҫɾ������\n");
		return;
	}
	//˵����ɾ������
	int i = index;
	for (; i < pCon->usedSize -1; i++)
	{
		pCon->per[i] = pCon->per[i + 1];
	}
	pCon->usedSize--;
	printf("ɾ���ɹ�\n");
}
void ShowContact(Contact* pCon)
{
	printf("%-10s  %-10s  %-10s  %-20s  %-10s\n", "����","����","�Ա�","�绰","��ַ");
	for (int i = 0; i < pCon->usedSize; i++)
	{
		printf("%-10s  %-10d  %-10s  %-20s  %-10s\n",pCon->per[i].name, pCon->per[i].age, 
			pCon->per[i].sex, pCon->per[i].tel, pCon->per[i].address);
	}
}
void ClearContact(Contact* pCon)
{
	pCon->usedSize = 0;
}

void DestroyContact(Contact* pCon)
{

}