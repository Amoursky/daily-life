#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int min = a;
	int i = 0;
	printf("��������������\n");
	scanf_s("%d,%d", &a, &b);
	if (min > b)
		min = b;
	else
		min = a;
	for (int i = min; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("���Լ��Ϊ��%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}