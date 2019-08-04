#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;
	if (n <= 2)
	{
		return 1;
	}
	for (i = 0; i < n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 0;
	int net = 0;
	while (1)
	{
		printf("请输入要求的数的序数：");
		scanf("%d", &n);
		net = fib(n);
		printf("%d\n", net);
	}
	system("pause");
	return 0;
}