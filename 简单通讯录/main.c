#include"test.h"

void menu()
{
	printf("*********1.add************2.search***********\n");
	printf("*********3.del************4.show*************\n");
	printf("*********5.clear**********6.Destroy**********\n");
	printf("*********0.exit******************************\n");
}

void game()
{
	int input = 0;
	Contact con;//ͨѶ¼
	InitContact(&con);

	do
	{
		menu();		
		printf("��������Ĳ���:  \n");
		scanf_s("%d", &input);
		int ret = 0;//����ret��ʱ��Ҫ�ŵ�switch������
		switch (input)
		{
		case 0:
			printf("�Ƴ���Ϸ");
			break;
		case 1:
			AddContact(&con);
			break;
		case 2:
		    ret=SearchContact(&con);
			if (ret == -1)
			{
				printf("���޴���\n");
			}
			break;
		case 3:
			DelContact(&con);
			break;
		case 4:
			ShowContact(&con);
			break;
		case 5:
			ClearContact(&con);
			break;
		default:
			break;
		}
	} while (input);
}
int main()
{
	game();
	return 0;
}