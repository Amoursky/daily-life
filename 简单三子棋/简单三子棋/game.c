#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"



void meau()//选择菜单；
{
	printf("\n");
	printf("\n");
	printf("***************************************\n");
	printf("****** 1.play          0.exit *********\n");
	printf("***************************************\n");
}

void init_board(char board[ROW][COL], char M, int row, int col)//初始化数组；
{
	memset(board, M, row*col*sizeof(board[0][0]));
}

void output_board(char board[ROW][COL], int row, int col)//打印棋盘；
{
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	for (i = 0; i < row; i++)
	{
		printf("%d ", i);
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("  ");
			for (k = 0; k < (col - 1 + 3 * col); k++)
			{
				printf("_");
			}
			printf(" \n");
		}
	}
	printf("   ");
	for (m = 0; m < row; m++)
	{
		printf("%d   ", m);
	}
}

void player(char board[ROW][COL], char M, int cow, int rol)//玩家走；
{
	int x = 0;
	int y = 0;
	int k = 1;
	do
	{
		printf("\n");
		printf("请玩家输入坐标(坐标格式   横,纵   输入完成后按下回车)：");
		scanf("%d,%d", &x, &y);
		printf("\n");
		if (board[y][x] != ' ')
		{
			printf("该坐标已被占用，请输入合法坐标！\n");
			k = 1;
			continue;
		}
		else
		{
			board[y][x] = M;
			k = 0;
			break;
		}
	} while (k);
}

void computer(char board[ROW][COL], char M, int cow, int rol)//电脑走；
{
	printf("电脑走后的结果\n");
	int s = 0;
	do
	{
		int x = 0;
		int y = 0;
		x = rand() % ROW + 0;
		y = rand() % ROW + 0;
		if (board[y][x] != ' ')
		{
			s = 1;
			continue;
		}
		else
		{
			board[y][x] = M;
			s = 0;
			break;
		}
	} while (s);
}

int judge(char board[ROW][COL], char M)//判断输赢；
{
	if (board[0][0] == M&&board[0][1] == M&&board[0][2] == M)
	{
		return 0;
	}
	if (board[1][0] == M&&board[1][1] == M&&board[1][2] == M)
	{
		return 0;
	}
	if (board[2][0] == M&&board[2][1] == M&&board[2][2] == M)
	{
		return 0;
	}
	if (board[0][0] == M&&board[1][0] == M&&board[2][0] == M)
	{
		return 0;
	}
	if (board[0][1] == M&&board[1][1] == M&&board[2][1] == M)
	{
		return 0;
	}
	if (board[0][2] == M&&board[1][2] == M&&board[2][2] == M)
	{
		return 0;
	}
	if (board[0][0] == M&&board[1][1] == M&&board[2][2] == M)
	{
		return 0;
	}
	if (board[0][2] == M&&board[1][1] == M&&board[2][0] == M)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}




























