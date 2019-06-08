#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strcmp(const char *string1, const char *string2)
{
	assert(string1 != NULL);
	assert(string2 != NULL);
	char *p = string1;
	char *q = string2;
	while (*p == *q)
	{
		if (*p == '\0')
		{
			return 0;
		}
		p++;
		q++;
	}
	return *(unsigned char*)p - *(unsigned char*)q;
}
int main()
{
	char arr1[] = "Hello Word!";
	char arr2[] = "Hsllo Word!";
	printf("%d\n", my_strcmp(arr1, arr2));
	system("pause");
	return 0;
}


//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void my_strcpy(char *arr1, const char *arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;//将\0也拷贝过去；
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello word!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//char* my_strstr(const char*des, const char*src)
//{
//	assert(des != NULL);
//	assert(src != NULL);
//	char* p = des;
//	char* q = src;
//	while (*p != '\0')
//	{
//		if (*p == *q)
//		{
//			char *tmp = p;
//			char *ret = q;
//			while ((*p) == (*q))
//			{
//				p++;
//				q++;
//				if (*q == '\0')
//				{
//					return tmp;
//				}
//			}
//			p = tmp;
//			q = ret;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "Hello World!";
//	char arr2[] = "lo";
//	printf("%s\n ", my_strstr(arr1, arr2));
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void my_strcpy(char *arr1, const char *arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;//将\0也拷贝过去；
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello word!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char *my_strchr(const char *dest, char c)
//{
//	assert(dest != NULL);
//	while (*dest)
//	{
//		if (*dest == c)
//		{
//			return dest;
//		}
//		dest++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "Hello Word!";
//	printf("%s", my_strchr(arr1, 'o'));
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void *my_memmove(void * dst, const void * src, size_t count)
//{
//	void * ret = dst;
//	if (dst <= src || (char *)dst >= ((char *)src + count))
//	{
//		while (count--) {
//			*(char *)dst = *(char *)src;
//			dst = (char *)dst + 1;
//			src = (char *)src + 1;
//		}
//	}
//	else
//	{
//		dst = (char*)dst + count - 1;
//		src = (char *)src + count - 1;
//		while (count--)
//		{
//			*(char *)dst = *(char *)src;
//			dst = (char *)dst - 1;
//			src = (char *)src - 1;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char s[] = "Hello Word!";
//	printf("%s", my_memmove(s, s + 1, 5));
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//void *my_memcpy(void *dest, const void *src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *p = dest;
//	char *q = src;
//	int i = 0;
//	for (i = count; i > 0; i--)
//	{
//		*p = *q;
//		p++;
//		q++;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello Word!";
//	printf("%s\n", my_memcpy(arr1, arr2, 5));
//	system("pause");
//	return 0;
//}