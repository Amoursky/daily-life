define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[40];
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑将于一分钟后关机\n");
		printf("请输入‘我们宿舍蒙涵最漂亮’后按下回车解除关机操作\n");
		scanf("%s", &input);
		if (strcmp("我们宿舍蒙涵最漂亮", input) == 0)
		{
			system("shutdown -a");
			printf("已停止关机\n开玩笑啦，其实你们都很漂亮，嘿嘿\n");
			break;

		}
		else
			printf("输入错误，请重新输入\n");
	}
	system("pause");
	return 0;
}
