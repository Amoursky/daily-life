#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input = 0;
	while (1)
	{
		printf("请输入要转换的字母：");
		input = getch();
		if ('A' <= input&&input <= 'Z')
		{
			printf("输入%c 输出%c\n", input, input + 32);
		}
		else if ('a' <= input&&input <= 'z')
		{
			printf("输入%c 输出%c\n", input, input - 32);
		}
	}
	system("pause");
	return 0;
}