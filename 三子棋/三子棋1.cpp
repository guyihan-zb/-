#include"game.h"
void menu()
{
	printf("***********************\n");
	printf("********0.exit********\n");
	printf("********1.play**********\n");
	printf("***********************\n");
}
void game()
{
	//printf("����Ϸ\n");
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	ShowBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;//�϶���һ����Ӯ��
		}
		ComputerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;//�϶���һ����Ӯ��
		}
	}

	if (ret == ' Q')
	{
		printf("ƽ��\n");
		return;
	}
	if (ret == 'X')
	{
		printf("���Ӯ\n");
		return;
	}
	if (ret == 'O')
	{
		printf("����Ӯ\n");
		return;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	printf("��������Ĳ�����\n");
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			break;
		}

	} while (input);
	return 0;
}