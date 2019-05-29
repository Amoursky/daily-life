#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//求个位是6能被3整除的数
int main()//代码虽然简单，但是我却学到了这种思想
{
	int i = 0;
	int s = 0;
	int count = 0;
	for (i = 1; i <= 99; i++)
	{
		s = 1000 + i * 10 + 6;//自己先满足其中的一个条件，然后去判断另一个条件
		if (s % 3 == 0)
			count++;
	}
	printf("number=%d\n",count);
	system("pause");
	return 0;
}