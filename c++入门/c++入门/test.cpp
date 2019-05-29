//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////int main()
////{
////	int a = 0;
////	cout << "请输入一个数字:";
////	cin >> a;
////	cout << "a=" << a << endl;
////	system("pause");
////	return 0;
////}
////  缺省参数   缺省参数是声明或定义函数时为函数指定一个默认值。在调用该函数时，如果没有指定实参则采用
////              该默认值，否则使用指定的实参
//void test(int a = 5)//缺省参数；
//{
//	cout << "a = "<<a << endl;
//}
//int main()
//{
//	test();
//	test(10);
//	system("pause");
//	return 0;
//}//半缺省参数必须从左至右依次给出，不能间隔，缺省参数不能再函数声明和定义中同时出现
//
//
////函数重载
////函数参数的类型或者数量或者顺序必须不同
//
//
////一个程序要运行起来要经历  预处理  编译   汇编   链接
//
//
//
//
//date& operator-=(int day)
//{
//	_day -= day;
//	//考虑是否退位
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
		//比特科技
		//	8. 成员变量的命名风格
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
	// 基本类型(内置类型)
	int _year;
	int _month;
	int _day;
	// 自定义类型
	Time _t;
};
int main()
{
	Date d;
	system("pause");
	return 0;
}