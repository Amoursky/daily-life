#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input = 0;
	while (1)
	{
		printf("������Ҫת������ĸ��");
		input = getch();
		if ('A' <= input&&input <= 'Z')
		{
			printf("����%c ���%c\n", input, input + 32);
		}
		else if ('a' <= input&&input <= 'z')
		{
			printf("����%c ���%c\n", input, input - 32);
		}
	}
	system("pause");
	return 0;
}