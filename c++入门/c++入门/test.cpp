//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////int main()
////{
////	int a = 0;
////	cout << "������һ������:";
////	cin >> a;
////	cout << "a=" << a << endl;
////	system("pause");
////	return 0;
////}
////  ȱʡ����   ȱʡ�������������庯��ʱΪ����ָ��һ��Ĭ��ֵ���ڵ��øú���ʱ�����û��ָ��ʵ�������
////              ��Ĭ��ֵ������ʹ��ָ����ʵ��
//void test(int a = 5)//ȱʡ������
//{
//	cout << "a = "<<a << endl;
//}
//int main()
//{
//	test();
//	test(10);
//	system("pause");
//	return 0;
//}//��ȱʡ������������������θ��������ܼ����ȱʡ���������ٺ��������Ͷ�����ͬʱ����
//
//
////��������
////�������������ͻ�����������˳����벻ͬ
//
//
////һ������Ҫ��������Ҫ����  Ԥ����  ����   ���   ����
//
//
//
//
//date& operator-=(int day)
//{
//	_day -= day;
//	//�����Ƿ���λ
//	while (_day <= 0)
//	{
//		--month;
//		if (-month == 0);
//		day=
//	}
//}
//
//
//
//#include<stdio.h>
//int main()
//{
//	
//
//
//
//	return 0;
//}
//
//
//
//#include<stdio.h>
//void main()
//{
//
//}

#include<iostream>
using namespace std;
//class Date
//{
//public:
//	void Display()
//	{
//		cout << _year << "_" << _month << "_" << _day << endl;
//	}
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1, d2;
//	d1.SetDate(2018, 5, 1);
//	d2.SetDate(2018, 7, 1);
//	d1.Display();
//	d2.Display();
//	system("pause");
//	return 0;
//}


class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		//���ؿƼ�
		//	8. ��Ա�������������
			_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	// ��������(��������)
	int _year;
	int _month;
	int _day;
	// �Զ�������
	Time _t;
};
int main()
{
	Date d;
	system("pause");
	return 0;
}