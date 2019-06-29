#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float l = 0.0;
	float sq = 0.0;

	printf("请输入三角形的三条边：");
	scanf("%f,%f,%f",&a,&b,&c);
	l = (a + b + c) / 2;
	sq = sqrt(l*(l-a)*(l-b)*(l-c));
	printf("三角形的面积是：%f\n",sq);
	system("pause");
	return 0;
}
