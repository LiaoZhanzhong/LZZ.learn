#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game2.h"
void menu()
{
	printf("******************************\n");
	printf("***** 1.play    0.exit  ******\n");
	printf("******************************\n");
}

void game()
{   //�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	IntBoard(mine, ROWS, COLS ,'0');
	IntBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//����
	SetMine(mine, ROW, COL);
	//ɨ��
	FindMine(mine,show, ROW, COL);

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
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
	} while (input);
}

int main()
{
	test();
	return 0;
}