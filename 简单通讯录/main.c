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
	Contact con;//通讯录
	InitContact(&con);

	do
	{
		menu();		
		printf("请输入你的操作:  \n");
		scanf_s("%d", &input);
		int ret = 0;//定义ret的时候要放到switch的外面
		switch (input)
		{
		case 0:
			printf("推出游戏");
			break;
		case 1:
			AddContact(&con);
			break;
		case 2:
		    ret=SearchContact(&con);
			if (ret == -1)
			{
				printf("查无此人\n");
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