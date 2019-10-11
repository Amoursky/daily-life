//
//  main.cpp
//  test_9_27
//
//  Created by 赵凡 on 2019/9/27.
//  Copyright © 2019 赵凡. All rights reserved.
//

#include <iostream>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

using namespace std;

//class Date
//{
//public:
//    void SetDate(int year,int month,int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    void Display()
//    {
//        cout << _year << "_" << _month << "_" << _day << endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    Date d1;
//    d1.SetDate(2017, 5, 1);
//    d1.Display();
//
//    Date d2;
//    d2.SetDate(2018, 5, 1);
//    d2.Display();
//    return 0;
//}


//class Date
//{
//public:
//    //无参构造函数
//    Date()
//    {}
//
//    //带参构造函数
//    Date(int year,int month,int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    void Display()
//    {
//        cout << _year << "_" << _month << "_" << _day << endl;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//void TestDate()
//{
//    Date d1;  //调用无参构造函数
//    d1.Display();
//    Date d2(2015,1,1);  //调用带参构造函数
//    d2.Display();
//    //如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//    //以下声明了d3函数，该函数无参，返回一个日期类型的对象
//    //Date d3();
//}
//
//int main()
//{
//    cout<<"hello"<<endl;
//    TestDate();
//    return 0;
//}


//class Time
//{
//public:
//    Time()
//    {
//        cout<<"Time()"<<endl;
//        _hour = 0;
//        _minute = 0;
//        _second = 0;
//    }
//
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//
//class Date
//{
//private:
//    //基本类型（内置类型）
//    int _year;
//    int _month;
//    int _day;
//
//    //自定义类型
//    Time _t;
//};
//
//int main()
//{
//    Date d;
//    return 0;
//}


typedef int DataType;
class SeqList
{
public:
    SeqList(int capacity = 10)
    {
        _pData = (DataType*)malloc(capacity * sizeof(DataType));
        assert(_pData);
        
        _size = 0;
        _capacity = capacity;
    }
    
    ~SeqList()
    {
        if(_pData)
        {
            free(_pData);//释放堆上的空间
            _pData = NULL;//将指针置空
            _size = 0;
            _capacity = 0;
        }
    }
    
private:
    int* _pData;
    size_t _size;
    size_t _capacity;
};
