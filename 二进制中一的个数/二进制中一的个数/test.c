#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int count_one_bits(unsigned int value)//��һ�ַ�����
{
	int num = 0;
	while (value != 0)
	{
		if ((value % 2) == 1)
		{
			num++;
			value = value / 2;
		}
	}
	return num;
}

//int count_one_bits(unsigned int value)//�ڶ��ַ�����
//{
//	int num = 0;
//	while (value != 0)
//	{
//		if ((value & 1) == 1)
//		{
//			num++;
//			value >>= 1;
//		}
//	}
//	return num;
//}


int main()
{
	int i = 0;
	printf("������һ�����֣�");
	scanf("%d", &i);
	printf("��%d��'1'\n", count_one_bits(i));
	system("pause");
	return 0;
}