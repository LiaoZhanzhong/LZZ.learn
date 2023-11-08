#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void meum()
	{
	printf("******************************\n");
	printf("***** 1.play    0.exit  ******\n");
	printf("******************************\n");
	}
void game()
{   
	char ret = 0;
	//数组-存放走出棋盘的信息
	char board[ROW][COL] = { 0 };

	InitBoard(board, ROW, COL);//初始化棋盘

	DisplayBoard(board, ROW, COL);//打印棋盘

	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);

		ret = InWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);

		ret = InWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		if (ret == '*')
		{
			printf("玩家胜利\n");
		}
		else if(ret  == '#')
		{
			printf("电脑胜利\n");
		}
		else
		{
			printf("平局\n");
		}
	}
		
};
void test()
{
	srand(( unsigned int)time(NULL));
	int input = 0;
	do
	{
		meum();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
		}
	}
	while (input);
}

int main()
{
	test();
	return 0;
}