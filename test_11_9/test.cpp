#include<iostream>
#include<string>
using namespace std;

void testString()
{
    string s;
    s.push_back('h');
    s.append("hello");
    cout << s << endl;
}

int main()
{
    testString();
    return 0;
}