#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void game()
{
	char conceal_main[ROW + 2][COL + 2];//��ʵ�����飻
	char show_main[ROW][COL];//չʾ�����飻
	init_conceal(conceal_main, '0', ROW + 2, COL + 2);//��ʼ����ʵ���飻
	init_show(show_main, '*', ROW, COL);//��ʼ��չʾ���飻
	//output_conceal(conceal_main, ROW + 2, COL + 2);//��ӡ��ʵ���飬ʵ������ʱ����ʾ��ʵ���飻
	printf("________________________________________\n");
	printf("________________________________________\n");
	output_show(show_main, ROW, COL);//��ӡ��ʾ���飻
	set(conceal_main, ROW, COL);//������ף�
	printf("________________________________________\n");
	printf("________________________________________\n");
	//output_conceal(conceal_main, ROW + 2, COL + 2);//��ӡ���׺����ʵ���飬��������߲鿴�Ƿ��׳ɹ���ʵ������ʱ����ʾ��
	find(conceal_main,show_main);//���׺�����
}


void test()//���Ժ��������Դ��룻
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		meau();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
}


int main()
{
	test();

	system("pause");
	return 0;
}