#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int my_strlen(char arr[])//计算字符串长度；
{
	int i = 0;
	while (1)
	{
		if (arr[i] != '\0')
		{
			i++;
		}
		else
		{
			return i;
		}
	}
}

int rotate_compare(char *arr1, char*arr2, int len)//指针方法旋转；
{
	int i = 0;
	int j = 0;
	char s = 0;
	for (i = 0; i < (len - 1); i++)
	{
		s = *arr2;
		for (j = 0; j < (len - 1); j++)
		{
			*(arr2 + j) = *(arr2 + j + 1);
		}
		*(arr2 + len - 1) = s;
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int i = 0;
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	printf("请输入第一个字符串：");
	scanf("%s", arr1);
	printf("请输入第二个字符串：");
	scanf("%s", arr2);
	i = rotate_compare(arr1, arr2, my_strlen(arr2));
	if (i == 1)
	{
		printf("字符串二是字符串一经过旋转得来的\n");
	}
	else
	{
		printf("字符串二不是字符串一经过旋转得来的\n");
	}
	system("pause");
	return 0;
}