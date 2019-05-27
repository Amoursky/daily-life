//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	string a, b,c,d;
//	cin >> a >> b;
//	int len_a = a.size();
//	int count = 0;
//	for (int i = 0; i <= len_a; i++)
//	{
//		c = a;
//		d = c.insert(i, b);
//		int len_d = d.size();
//		for (int j = 0; j < len_d; j++)
//		{
//			if (d[j] != d[len_d - 1-j])
//			{
//				break;
//			}
//			if (j == (len_d - 1))
//			{
//				count++;
//			}
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int arr[100000] = { 0 };
//	int max = 0;
//	int n = 0;
//	int i = 0;
//	cin >> n;
//	for (i = 0; i<n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int j = 1; j < n; j++)//当前子数组的元素个数是j
//	{
//		for (int k = 0; k < n; k++)//当前子数组的第一个元素下标是k；
//		{
//			int s = 0;
//			int sum = 0;
//			s = k;
//			for (int m = 0; m < j; m++)//从当前元素向后循环加上j个元素
//			{
//				sum += arr[s];
//				s++;
//			}
//			if (sum>max)
//			{
//				max = sum;
//			}
//		}
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x = 1;
	do
	{
		printf("%2d\n",x++);
	} while (x--);
	system("pasue");
	return 0;
}

