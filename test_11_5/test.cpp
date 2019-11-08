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

// void test2()
// {
//     string s1("bitdance");
//     for(auto e : s1)
//     {
//         cout << e << " ";
//     }
//     cout << endl;
//     cout << s1.size() << endl;
//     cout << s1.length() << endl;
//     cout << s1.capacity() << endl;
//     s1.clear();
//     cout << "clean：";
//     cout << s1 << endl;
//     cout << s1.size() << endl;
//     cout << s1.length() << endl;
//     cout << s1.capacity() << endl;
//     char a = 'A';
//     printf("%d",a);
// }

void test3()
{
    string s;
    //提高效率，减少扩容操作
    s.reserve(200);
    size_t sz = s.capacity();
    cout << sz <<endl;
    cout << "扩容情况：";
    for (int i = 0 ; i < 200 ; i++)
    {
        s.push_back(i);
        if (sz != s.capacity())
        {
            sz = s.capacity();
            cout << sz << endl;
        }
    }
    cout << endl;
}


class Solution
{
public:
    long long StrToInt(string str)
    {
        if (str.empty())
            return 0;
        string::iterator sit = str.begin();
        long long ret = 0;
        int flag = 1;
        while (sit != str.end())
        {
            ret *= 10;
            if (*sit >= '0' && *sit <= '9')
            {
                ret += *sit - '0';
            }
            else if (*sit == '-' || *sit == '+')
            {
                if(*sit == '-')
                    flag = -1;
            }
            else
            {
                return 0;
            }  
            sit++;
        }
        ret = ret * flag;
        cout << INT_MAX << "  " << INT_MIN << endl;
        if(ret > INT_MAX || ret < INT_MIN)
        {
            return 0;
        }
        return ret;
    }
// private:
//     string _s;
};


int main()
{
    //test1();
    //test2();
    //test3(); 
    Solution a;
    string s("-2147483649");
    cout << a.StrToInt(s) << endl;
    return 0;
} 