#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3


int main()
{
	int i = 0;
	int j = 0;
	int k = 1;
	int input = 0;
	int m = 0;
	int n = COL - 1;
	int arr[ROW][COL] = { 0 };
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = k;
			k++;
		}
	}
	printf("请输入需要查找的数字：");
	scanf("%d", &input);
	while (1)
	{
		if (input>arr[m][n])
		{
			m++;
			if (m > ROW - 1)
			{
				printf("查无此数\n");
				break;
			}
		}
		else if (input<arr[m][n])
		{
			n--;
			if (n < 0)
			{
				printf("查无此数\n");
				break;
			}
		}
		else
		{
			printf("该数字存在:   arr[%d][%d]=%d\n", m, n, input);
			break;
		}
	}



	system("pause");
	return 0;
}