//实现.h的内容
#include"test.h"
void InitContact(Contact* pCon)
{
	assert(pCon != NULL);
	pCon->usedSize = 0;
	//将我们数组的内容，置为0
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
		printf("通讯录已经满了");
		return;
	}

	printf("请输入你的姓名: ");
	scanf("%s",pCon->per[pCon->usedSize].name);
	printf("请输入你的性别: ");
	scanf("%s",pCon->per[pCon->usedSize].sex);
	printf("请输入你的年龄: ");
	scanf("%d",&(pCon->per[pCon->usedSize].age));
	printf("请输入你的电话: ");
	scanf("%s",pCon->per[pCon->usedSize].tel);
	printf("请输入你的地址: ");
	scanf("%s",pCon->per[pCon->usedSize].address);
	pCon->usedSize++;
	printf("插入成功\n");
}

//找到返回下标 找不到返回-1 姓名查找
int SearchContact(Contact* pCon)
{
	assert(pCon != NULL);
	printf("请输入你要查找的姓名: ");
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
		printf("没有你要删除的人\n");
		return;
	}
	//说明有删除的人
	int i = index;
	for (; i < pCon->usedSize -1; i++)
	{
		pCon->per[i] = pCon->per[i + 1];
	}
	pCon->usedSize--;
	printf("删除成功\n");
}
void ShowContact(Contact* pCon)
{
	printf("%-10s  %-10s  %-10s  %-20s  %-10s\n", "姓名","年龄","性别","电话","地址");
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