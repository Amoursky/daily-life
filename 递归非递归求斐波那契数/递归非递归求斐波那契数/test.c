#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//�ǵݹ鷨��쳲���������
{
	int n = 0;
	int i = 0;
	int sum = 0;
	int sum1 = 1;
	int sum2 = 1;
	printf("������Ҫ���쳲���������������");
	scanf("%d", &n);
	printf("\n");
	if (n < 3)
	{
		printf("������Ϊ��1");
	}
	for (i = 3; i <= n; i++)
	{
		sum = sum1 + sum2;
		sum1 = sum2;
		sum2 = sum;
	}
	printf("������Ϊ��%d", sum);
	system("pause");
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int feibo(int n)//�ݹ鷨��쳲���������
//{
//	int number = 0;
//	if (n < 3)
//	{
//		return 1;
//	}
//	number = feibo(n - 1) + feibo(n - 2);
//	return number;
//}
//
//
//int main()
//{
//	int n = 0;
//	printf("������Ҫ���쳲���������������");
//	scanf("%d", &n);
//	printf("\n");
//	feibo(n);
//	printf("������Ϊ��%d", feibo(n));
//	system("pause");
//	return 0;
//}