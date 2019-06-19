#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//非递归法求斐波那契数；
{
	int n = 0;
	int i = 0;
	int sum = 0;
	int sum1 = 1;
	int sum2 = 1;
	printf("请输入要求的斐波那契数的序数：");
	scanf("%d", &n);
	printf("\n");
	if (n < 3)
	{
		printf("所求数为：1");
	}
	for (i = 3; i <= n; i++)
	{
		sum = sum1 + sum2;
		sum1 = sum2;
		sum2 = sum;
	}
	printf("所求数为：%d", sum);
	system("pause");
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int feibo(int n)//递归法求斐波那契数；
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
//	printf("请输入要求的斐波那契数的序数：");
//	scanf("%d", &n);
//	printf("\n");
//	feibo(n);
//	printf("所求数为：%d", feibo(n));
//	system("pause");
//	return 0;
//}