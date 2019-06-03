#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	int k = 1;
	int count = 1;
	char board[ROW][COL];
	init_board(board, ' ', ROW, COL);//初始化棋盘；
	output_board(board, ROW, COL);//打印棋盘；
	do
	{
		player(board, '*', ROW, COL);//玩家走；
		count++;
		output_board(board, ROW, COL);//打印棋盘；
		judge(board, '*');//判断输赢；
		k = judge(board, '*');
		if (k == 0)
		{
			printf("\n恭喜玩家获胜！！！");
			break;
		}
		printf("\n");
		if (count == ROW*COL)
		{
			printf("该局打平");
			break;
		}
		computer(board, '@', ROW, COL);//电脑走；
		count++;
		output_board(board, ROW, COL);//打印棋盘；
		judge(board, '@');//判断输赢；
		k = judge(board, '@');
		if (k == 0)
		{
			printf("\n电脑获胜!");
			break;
		}
		printf("\n");
		if (count == ROW*COL)
		{
			printf("该局打平");
			break;
		}
	} while (k);
}



void test()
{
	int choose = 0;
	do
	{
		srand((unsigned int)time(NULL));
		meau();
		printf("请选择：");
		scanf("%d", &choose);
		printf("\n");
		printf("\n");
		switch (choose)
		{

		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择\n");
			continue;

		}
	} while (choose);
}



int main()
{
	test();
	system("pause");
	return 0;
}
