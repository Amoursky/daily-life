#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	int k = 1;
	int count = 1;
	char board[ROW][COL];
	init_board(board, ' ', ROW, COL);//��ʼ�����̣�
	output_board(board, ROW, COL);//��ӡ���̣�
	do
	{
		player(board, '*', ROW, COL);//����ߣ�
		count++;
		output_board(board, ROW, COL);//��ӡ���̣�
		judge(board, '*');//�ж���Ӯ��
		k = judge(board, '*');
		if (k == 0)
		{
			printf("\n��ϲ��һ�ʤ������");
			break;
		}
		printf("\n");
		if (count == ROW*COL)
		{
			printf("�þִ�ƽ");
			break;
		}
		computer(board, '@', ROW, COL);//�����ߣ�
		count++;
		output_board(board, ROW, COL);//��ӡ���̣�
		judge(board, '@');//�ж���Ӯ��
		k = judge(board, '@');
		if (k == 0)
		{
			printf("\n���Ի�ʤ!");
			break;
		}
		printf("\n");
		if (count == ROW*COL)
		{
			printf("�þִ�ƽ");
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
		printf("��ѡ��");
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
			printf("ѡ�����������ѡ��\n");
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
