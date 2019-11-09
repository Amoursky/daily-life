#include<iostream>
#include<string>
using namespace std;

void testString()
{
    string s;
    string s2("keda");
    //s.push_back('h');
    s += 'e';
    //s.append("hello");
    s += "hello";

    s += s2;
    cout << s << endl;
}

int main()
{
    testString();
    return 0;
}