#include<iostream>
using namespace std;
// template<typename T>
// void Swap(T& left,T& right)
// {
//     T temp = left;
//     left = right;
//     right = temp;
// }

// int main()
// {
//     int i1 = 10;
//     int i2 = 20;
//     Swap(i1 ,i2);
//     cout << i1 <<" "<< i2 << endl;
//     double d1 = 1.0;
//     double d2 = 2.0;
//     Swap(d1,d2);
//     cout << d1 << " "<< d2 << endl;
//     char c1 = '1';
//     char c2 = '2';
//     Swap(c1,c2);
//     cout << c1 <<" "<< c2 << endl;
//     return 0;
// }

template<class T>
T Add(const T& left,const T& right)
{
    return left + right;
}

int main()
{
    int i1 = 1,i2 = 2;
    double d1 = 1.0,d2 = 2.0;
    cout << Add(i1 , i2) << endl;
    cout << Add<int>(d1 , d2) << endl;
    return 0;
}


