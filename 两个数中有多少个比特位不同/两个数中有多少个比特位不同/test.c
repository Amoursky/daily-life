#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x = 0;
	int y = 0;
	int i = 0;
	int count = 0;
	printf("������������(����ÿո����):");
	scanf("%d%d", &x, &y);
	for (i = 0; i <32; i++)
	{
		if ((((x >> i) & 1)&((y >> i) & 1)) == 0)//�����߽����Ϊ1������ų�����
		{
			if (((x >> i) != 0) || ((y >> i) != 0))//�����߽����Ϊ0������ų�����
			{
				count++;
			}
		}
	}
	printf("��%d������λ��ͬ\n", count);

	system("pause");
	return 0;
}