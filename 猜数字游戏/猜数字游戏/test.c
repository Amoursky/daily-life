#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("***************************************\n");
	printf("************* ��������Ϸ **************\n");
	printf("***************************************\n");
	int input = 0,qianwei=0,baiwei=0,shiwei=0,gewei=0;
	while (1)
	{
		printf("������Ҫ�µ��������(��λ�������Ҹ���λ���ϵ����ֲ��ظ�)-->");
		scanf("%d", &input);
		if (input > 9999 || input < 1000)
		{
			printf("�趨�����ֲ����Ϲ������������룡\n");
			continue;
		}
		qianwei = input / 1000;
		baiwei = (input - qianwei * 1000)/100;
		shiwei = (input-qianwei*1000-baiwei*100)/10;
		gewei = input - qianwei * 1000 - baiwei * 100 - shiwei * 10;
		if (qianwei == baiwei || qianwei == shiwei || qianwei == gewei || baiwei == shiwei || baiwei == gewei || shiwei == gewei)
		{
			printf("�趨�����ֲ����Ϲ������������룡\n");
			continue;
		}
		printf("���óɹ���\n");
		//printf("%d-%d-%d-%d\n", qianwei,baiwei,shiwei,gewei);
		break;
	}
	while (1)
	{
		printf("��������Ĳ²���(һ����λ��)-->");
		int user = 0;
		scanf("%d", &user);
		if (user > 9999 || user < 1000)
		{
			printf("�²�Ľ�������Ϲ������������룡\n");
			continue;
		}
		int qianwei_ = user / 1000;
		int baiwei_ = (user - qianwei_ * 1000) / 100;
		int shiwei_ = (user - qianwei_ * 1000 - baiwei_ * 100) / 10;
		int gewei_ = user - qianwei_ * 1000 - baiwei_ * 100 - shiwei_ * 10;
		//printf("%d-%d-%d-%d\n", qianwei_, baiwei_, shiwei_, gewei_);
		int count_a = 0;//count_a��ʾ���β¶Ե����ֵĸ�����
		int count_b = 0;//count_b��ʾ���β¶Ե����ֲ���λ����ȷ�ĸ�����
		if (qianwei_ == qianwei || qianwei_ == baiwei || qianwei_ == shiwei || qianwei_ == gewei)
		{
			count_a++;
			if (qianwei_ == qianwei)
			{
				count_b++;
			}
		}
		if (baiwei_ == qianwei || baiwei_ == baiwei || baiwei_ == shiwei || baiwei_ == gewei)
		{
			count_a++;
			if (baiwei_ == qianwei_)
			{
				count_a--;
			}
			if (baiwei_ == baiwei)
			{
				count_b++;
			}
		}
		if (shiwei_ == qianwei || shiwei_ == baiwei || shiwei_ == shiwei || shiwei_ == gewei)
		{
			count_a++;
			if (shiwei_ == qianwei_ || shiwei_ == baiwei_)
			{
				count_a--;
			}
			if (shiwei_ == shiwei)
			{
				count_b++;
			}
		}
		if (gewei_ == qianwei || gewei_ == baiwei || gewei_ == shiwei || gewei_ == gewei)
		{
			count_a++;
			if (gewei_ == qianwei_ || gewei_ == baiwei_ || gewei_ == shiwei)
			{
				count_a--;
			}
			if (gewei_ == gewei)
			{
				count_b++;
			}
		}
		if (qianwei_ == qianwei && baiwei_ == baiwei && shiwei_ == shiwei && gewei_ == gewei)
		{
			printf("��ϲ���¶��ˣ�\n");
			break;
		}
		printf("������˼�����´��ˣ�\n");
		printf("��ʾ��%dA%dB\n",count_a,count_b);
	}
	
	system("pause");
	return 0;
}