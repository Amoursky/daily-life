#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input = 0;
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };
	printf("������һ������:");
	scanf("%d", &input);
	n = input;
	for (i = 0; i < 32; i = i + 2)
	{
		arr1[k] = (n & 1);//������λ��������
		n >>= 2;
		k++;
	}
	n = input;
	k = 0;
	n >>= 1;
	for (j = 0; j < 32; j = j + 2)
	{
		arr2[k] = (n & 1);//��ż��λ��������
		n >>= 2;
		k++;
	}
	printf("����λΪ��");
	for (i = 15; i >= 0; i--)
	{
		printf("%d ", arr1[i]);
	}
	printf("\nż��λΪ��");
	for (j = 15; j >= 0; j--)
	{
		printf("%d ", arr2[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}