#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int arr[100][1000] = { 0 };
	int a = 0;
	for (int i = 0; i < 100; i++)
	{
		arr[i][0] = 1;
		arr[i][1] = a;
		a++;
	}
	for (int i = 1; i < 100; i++)
	{
		for (int j = 2; j < 1000; j++)
		{
			arr[i][j] = arr[i - 1][j - 2] + arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	int n = 0;
	cin >> n;
	for (int j = 1; j < 1000; j++)
	{
		if (j == 999 || arr[n - 1][j] == 0)
		{
			cout << "-1" << endl;
			break;
		}
		if (arr[n - 1][j] % 2 == 0)
		{
			j++;
			cout << j << endl;
			break;
		}
	}
	system("pause");
	return 0;
}