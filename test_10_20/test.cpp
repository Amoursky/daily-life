#include<iostream>
using namespace std;

// int main()
// {
//     int a = 0;
//     cin >> a;
//     cout << "hello  "<< a <<endl;
//     return 0;
// }
// void Test()
// {
//     //动态申请一个int类型的空间
//     int* ptr4 = new int;
//     //动态申请一个int类型的空间并初始化为10
//     int* ptr5 = new int(10);
//     //动态申请10个int类型的空间
//     int* ptr6 = new int[10];
    
//     delete ptr4;
//     delete ptr5;
//     delete[] ptr6;
// }

class Test 
{
    public:
        Test()
            :_date(0)
        {
            cout<<"Test()"<<endl;
        }

        ~Test()
        {
            cout<<"~Test()"<<endl;
        }

    private:
        int _date;
};

void Test2()
{
    //申请单个Test类型的空间
    Test* p1 = (Test*)malloc(sizeof(Test));
    free(p1);
    cout<<"释放p1"<<endl;
    //申请10个Test类型的空间
    Test* p2 = (Test*)malloc(sizeof(Test) * 10);
    free(p2);
    cout<<"释放p2"<<endl;
}

int main()
{
    Test2();
    return 0;
}