#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//���λ��6�ܱ�3��������
int main()//������Ȼ�򵥣�������ȴѧ��������˼��
{
	int i = 0;
	int s = 0;
	int count = 0;
	for (i = 1; i <= 99; i++)
	{
		s = 1000 + i * 10 + 6;//�Լ����������е�һ��������Ȼ��ȥ�ж���һ������
		if (s % 3 == 0)
			count++;
	}
	printf("number=%d\n",count);
	system("pause");
	return 0;
}