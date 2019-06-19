#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int my_strlen(char*str)//非递归求字符串长度；
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
	printf("请输入一串字符：");
	scanf("%s", &arr);
	printf("该字符串的长度为：%d\n", my_strlen(arr));
	system("pause");
	return 0;
}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//int my_strlen(char*str)//递归求字符串长度；
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
//	printf("请输入一串字符：");
//	scanf("%s", &arr);
//	printf("该字符串的长度为：%d\n", my_strlen(arr));
//	system("pause");
//	return 0;
//}