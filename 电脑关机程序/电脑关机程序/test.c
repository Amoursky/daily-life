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
		printf("���Խ���һ���Ӻ�ػ�\n");
		printf("�����롮���������ɺ���Ư�������»س�����ػ�����\n");
		scanf("%s", &input);
		if (strcmp("���������ɺ���Ư��", input) == 0)
		{
			system("shutdown -a");
			printf("��ֹͣ�ػ�\n����Ц������ʵ���Ƕ���Ư�����ٺ�\n");
			break;

		}
		else
			printf("�����������������\n");
	}
	system("pause");
	return 0;
}
