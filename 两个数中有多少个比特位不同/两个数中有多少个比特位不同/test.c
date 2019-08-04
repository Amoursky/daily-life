#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x = 0;
	int y = 0;
	int i = 0;
	int count = 0;
	printf("请输入两个数(其间用空格隔开):");
	scanf("%d%d", &x, &y);
	for (i = 0; i <32; i++)
	{
		if ((((x >> i) & 1)&((y >> i) & 1)) == 0)//将两边结果都为1的情况排除掉；
		{
			if (((x >> i) != 0) || ((y >> i) != 0))//将两边结果都为0的情况排除掉；
			{
				count++;
			}
		}
	}
	printf("有%d个比特位不同\n", count);

	system("pause");
	return 0;
}