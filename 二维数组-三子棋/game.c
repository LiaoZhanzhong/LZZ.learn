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
	//����-����߳����̵���Ϣ
	char board[ROW][COL] = { 0 };

	InitBoard(board, ROW, COL);//��ʼ������

	DisplayBoard(board, ROW, COL);//��ӡ����

	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);

		ret = InWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);

		ret = InWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		if (ret == '*')
		{
			printf("���ʤ��\n");
		}
		else if(ret  == '#')
		{
			printf("����ʤ��\n");
		}
		else
		{
			printf("ƽ��\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	}
	while (input);
}

int main()
{
	test();
	return 0;
}