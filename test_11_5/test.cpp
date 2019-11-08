#include<iostream>
#include<string>
using namespace std;

// int main()
// {
//     // string s("hello,bit!!!");
//     string s;
//     getline(cin,s);
//     cout<<s.length()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.capacity()<<endl;
//     cout<<s<<endl;
//     s.clear();
//     cout<<s.size()<<endl;
//     cout<<s.capacity()<<endl;
//     s.resize(10,'a');
//     cout<<s.size()<<endl;
//     cout<<s.capacity()<<endl;
//     cout<<s<<endl;
//     s.resize(15);
//     cout<<s.size()<<endl;
//     cout<<s.capacity()<<endl;
//     cout<<s<<endl;
//     s.resize(5);
//     cout<<s.size()<<endl;
//     cout<<s.capacity()<<endl;
//     cout<<s<<endl;
//     return 0;
// }

void test1()
{
    string s1("keda");
    for(int i = 0;i < s1.size();i++)
    {
        cout << s1[i] << " ";
        s1[i] = 'm';
        cout << s1.operator[](i) << endl;
    }
    cout << endl;
}

void test2()
{
    string s1("bitedance");
    for(auto e : s1)
    {
        cout << e << endl;
    }
}

int main()
{
    //test1();
    test2();
    return 0;
} 