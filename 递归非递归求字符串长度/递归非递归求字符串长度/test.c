#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int my_strlen(char*str)//�ǵݹ����ַ������ȣ�
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[20] = { 0 };
	printf("������һ���ַ���");
	scanf("%s", &arr);
	printf("���ַ����ĳ���Ϊ��%d\n", my_strlen(arr));
	system("pause");
	return 0;
}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//int my_strlen(char*str)//�ݹ����ַ������ȣ�
//{
//	if (*(str + 1))
//	{
//		return my_strlen(str + 1) + 1;
//	}
//	return 1;
//}
//
//
//
//int main()
//{
//	char arr[20] = { 0 };
//	printf("������һ���ַ���");
//	scanf("%s", &arr);
//	printf("���ַ����ĳ���Ϊ��%d\n", my_strlen(arr));
//	system("pause");
//	return 0;
//}