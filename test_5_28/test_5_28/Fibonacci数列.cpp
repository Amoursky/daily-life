#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;//����һ��������������������һ��쳲��������ľ���
int main()
{
	int N;
	int a = 0;
	int b = 1;
	int c = 0;
	cin >> N;
	while (1)
	{
		c = a + b;
		if (b<N&&N<c)
		{
			int m = N - b;
			int n = c - N;
			if (m<n)
			{
				cout << m << endl;
				break;
			}
			else
			{
				cout << n << endl;
				break;
			}
		}
		if (N == c)
		{
			cout << "0" << endl;
			break;
		}
		a = b;
		b = c;
	}
	system("pause");
	return 0;
}



//class Parenthesis {           //�ж��Ƿ���һ���ϸ�����Ŵ�
//public:
//	bool chkParenthesis(string A, int n)
//	{
//		// write code here
//		for (int i = 0; i<n; i++)
//		{
//			if (A[i] == '(')
//			{
//				count++;
//			}
//			if (A[i] == ')')
//			{
//				count--;
//			}
//		}
//		if (count == 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};