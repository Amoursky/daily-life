#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[10];
	int i = 0;
	char mima[] = { "2580" };
	printf("���������λ���\n");

	for (i = 0; i < 3; i++)
	{	
		printf("����������:");
	    scanf("%s",&input);
		if (strcmp(mima, input) == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			if ((2 - i) == 0)
			{
				printf("���λ������꣬�˳�����\n");
				break;
			}
			printf("�������������%d�λ��ᣬ����������\n",2-i);
			continue;
		}
	}
	system("pause");
	return 0;
}