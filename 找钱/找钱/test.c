//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	printf("请输入商品的价格和顾客付的钱数（商品价格，顾客付的钱）：");
//	float a = 0;
//	float b = 0;
//	scanf("%f,%f",&a,&b);
//	printf("找钱：%.2f\n",b-a);
//	system("pause");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{	
//	float f = 0;
//	float c = 0;
//	printf("请输入华氏温度：");
//	scanf("%f",&f);
//	c = ((5.0/9.0) * (f - 32));
//	printf("摄氏温度为:%.2f\n",c);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>  
//int CheckSystem()
//{
//	union check
//	{
//		int i;
//		char ch;
//	}c;
//	c.i = 1;
//	return (c.ch == 1);
//}
//int main()
//{
//	int i = 0;
//	if (CheckSystem())
//	{
//		printf("小端口模式\n");
//	}
//	else
//	{
//		printf("大端口模式\n");
//	}
//	system("pause");
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 1;
	char b = (char)a;
	printf("%d\n",b);
	system("pause");
	return 0;
}