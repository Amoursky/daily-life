#include<iostream>
using namespace std;
template<typename T>
void Swap(T& left,T& right)
{
    T temp = left;
    left = right;
    right = temp;
}

int main()
{
    int i1 = 10;
    int i2 = 20;
    Swap(i1 ,i2);
    cout << i1 <<" "<< i2 << endl;
    double d1 = 1.0;
    double d2 = 2.0;
    Swap(d1,d2);
    cout << d1 << " "<< d2 << endl;
    char c1 = '1';
    char c2 = '2';
    Swap(c1,c2);
    cout << c1 <<" "<< c2 << endl;
    return 0;
}

