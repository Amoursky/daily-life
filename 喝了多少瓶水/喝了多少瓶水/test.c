#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k = 20;//Ǯ����
	int p = 0;//����ˮʣ��ƿ������
	int p1 = 0;//�䵥��ƿ������
	int num = 0;//��ˮ��������
	while (k != 0)
	{
		num = num + k;
		p = k + p1;
		k = p / 2;
		p1 = p % 2;
	}
	printf("���Ժ� %d ƿ��ˮ\n", num);



	system("pause");
	return 0;
}
