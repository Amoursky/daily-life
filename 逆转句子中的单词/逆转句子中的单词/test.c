#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

int my_strlen(char arr[])
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

void reverse_arr(char* left, char* right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverse(char arr[])
{
	int len = my_strlen(arr);
	char *start = arr;
	char *end = NULL;
	char *ret = arr;
	int i = 0;
	reverse_arr(arr, arr + len - 1);//���������ַ���
	while (*arr)
	{
		start = arr;
		while ((*arr != ' ') && (*arr != '\0'))
		{
			arr++;
		}
		end = arr - 1;//��ʱ*arrָ����ǿո����Լ�һȷ������ĩλ��
		reverse_arr(start, end);//���򵥸�����
		if (*arr == ' ')
		{
			arr++;
		}
	}
	printf("%s\n", ret);
}

int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	system("pause");
	return 0;
}