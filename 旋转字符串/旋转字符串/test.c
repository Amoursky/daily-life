#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int my_strlen(char arr[])//�����ַ������ȣ�
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

void rotate(char*arr, int len, int m)//ָ�뷽����ת��
{
	int i = 0;
	int j = 0;
	char s = 0;
	for (i = 0; i < m; i++)
	{
		s = *arr;
		for (j = 0; j < (len - 1); j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = s;
	}
	printf("%s\n", arr);

}

//void rotate(char arr[], int len, int m)//���鷽����ת��
//{
//	int i = 0;
//	int j = 0;
//	char s = 0;
//	for (i = 0; i < m; i++)
//	{
//		s = arr[0];
//		for (j = 0; j < (len - 1); j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = s;
//	}
//	printf("%s",arr); 
//	printf("\n");
//}

int main()
{
	int input = 0;
	char arr[] = "ABCDEFG";
	printf("������������ĸ�ĸ�����");
	scanf("%d", &input);
	rotate(arr, my_strlen(arr), input);
	system("pause");
	return 0;
}