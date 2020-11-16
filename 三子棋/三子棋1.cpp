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
	//printf("玩游戏\n");
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
			break;//肯定有一个人赢了
		}
		ComputerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;//肯定有一个人赢了
		}
	}

	if (ret == ' Q')
	{
		printf("平局\n");
		return;
	}
	if (ret == 'X')
	{
		printf("玩家赢\n");
		return;
	}
	if (ret == 'O')
	{
		printf("电脑赢\n");
		return;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	printf("请输入你的操作：\n");
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
			printf("退出游戏\n");
			break;
		default:
			break;
		}

	} while (input);
	return 0;
}