#include<iostream>
using namespace std;

int main()
{
    string s("hello,bit!!!");
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s<<endl;
    s.clear();
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(10,'a');
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s<<endl;
    s.resize(15);
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s<<endl;
    s.resize(5);
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s<<endl;
    return 0;
}


