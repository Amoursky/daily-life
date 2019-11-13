#include<iostream>
#include<string>
using namespace std;

string addStrings(string num1, string num2)
{
	string s;
	int n1 = num1.size() - 1;
	int n2 = num2.size() - 1;
	int step = 0;
	int sum = 0;
	while (n1 >= 0 || n2 >= 0)
	{
		sum = 0;
		sum = sum + step;
		if (n1 >= 0)
		{
			sum = sum + num1[n1] - '0';
		}
		if (n2 >= 0)
		{
			sum = sum + num2[n2] - '0';
		}
		if (sum > 9)
		{
			sum -= 10;
			step = 1;
		}
		else
		{
			step = 0;
		}
		//char c = sum + '0';
		s.insert(0, 1, sum + '0');
		n1--;
		n2--;
	}
	if (step == 1)
	{
		s.insert(0, 1, '1');
	}
	return s;
}
int main()
{
	string s1("980");
	string s2("120");
	cout << addStrings(s1, s2) << endl;
	system("pause");
	return 0;
}
