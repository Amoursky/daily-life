#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define L 10//���ô�ӡ������ǵ�������


int main()
{
	int i = 0;
	int j = 0;
	int arr[L][L] = { 0 };
	for (i = 0; i < L; i++)
	{
		arr[i][0] = 1;//����һ�е�����Ԫ�ظ�1��
	}
	for (i = 1; i < L; i++)
	{
		for (j = 1; j < L; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//�ӵڶ�������ÿ�еĵڶ���Ԫ�ض�����һ������ƫһ����λ�����Ϸ�Ԫ��֮�ͣ�
		}
	}
	for (i = 1; i < L; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("     %d     ", arr[i][j]);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}