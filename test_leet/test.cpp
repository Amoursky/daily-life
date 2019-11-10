#include<iostream>
#include<string>
using namespace std;
// class Solution {
// public:
//     int firstUniqChar(string s)
//     {
//         if(s.size())
//         {
//             string::iterator p = s.begin();
//             string::iterator q = p;
//             while(p <= (s.end() - 1))
//             {
//                 if(*p == *q && p != q)
//                 {
//                     p++;
//                     q = s.begin();
//                     continue;
//                 }
//                 if(q == (s.end() - 1))
//                 {
//                     size_t pos = s.find(*p);
//                     return pos;
//                 }
//                 q++;
//             }
//             return -1;
//         }
//         return -1;
//     }
// };

// int main()
// {
//     Solution a;
//     string s("loveleetcode");
//     cout << a.firstUniqChar(s) << endl;
//     return 0;
// }

// class Test
// {
// public:
//     int Last_length(string& s)
//     {
//         int num = 0;
//         if(s.size())
//         {
//             size_t pos = s.rfind(" ");
//             cout << pos << "   " << s.size() <<endl;
//             num = (s.size() - (pos + 1));
//             return num;
//         }
//         return 0;
//     }
// };

// int main()
// {
//     Test a;
//     string s("hellohello");
//     cout << a.Last_length(s) << endl;
//     return 0;
// }

class Solution {
public:
    bool isPalindrome(string s) 
    {
        size_t start = 0;
        size_t end = s.size() - 1;
        while(start < end)
        {
            while(start < end)//从前往后查找一个数字字符或者字母
            {
                if(yesorno(s[start]))
                {
                    break;
                }
                start++;
            }

            while(start < end)//从后往前查找一个数字字符或者字母
            {
                if(yesorno(s[end]))
                {
                    break;
                }
                end--;
            }

            if(start < end)
            {
                if ((s[start] + 32 - 'a') % 32 != (s[end] + 32 - 'a') % 32)
                    return false;

                ++start; 
                --end;
            }
        }
        return true;
    }

    bool yesorno(char c)//判断当前字符是否是一个数字字符或者字母
    {
        if((c >= '0' && c <= '9')||
           (c >= 'A' && c <= 'Z')||
           (c >= 'a' && c <= 'z'))
        {
            return true;
        } 
        return false;
    }

};

int main()
{
    Solution a;
    string s("abccbc");
    cout << a.isPalindrome(s) << endl;
    return 0;
}