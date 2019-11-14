#include<iostream>
#include<string>
using namespace std;

// string addStrings(string num1, string num2)
//   {
//         string s;
//         int n1 = num1.size() - 1;
//         int n2 = num2.size() - 1;
//         int step = 0;
//         int sum = 0;
//         while(n1 >= 0 || n2 >= 0)
//         {
//             sum = 0;
//             sum = sum + step;//当前位的和
//             if(n1 >= 0)
//             {
//                 sum = sum + num1[n1] - '0';
//             }
//             if(n2 >= 0)
//             {
//                 sum = sum + num2[n2] - '0';
//             }
//             if(sum > 9)//获取当前位的值
//             {
//                 sum -= 10;
//                 step = 1;
//             }
//             else
//             {
//                 step = 0;
//             }
//             // char c = sum + '0';
//             // s.insert(0 , 1 , c);
//             s += sum + '0';
//             n1--;
//             n2--;
//         }
//         if(step == 1)//判断最高位是否需要进位
//         {
//             //s.insert(0 , 1 , '1');
//             s += '1';
//         }
//         int i = s.size() - 1;
//         int j = 0;
//         while(i > j)
//         {
//             char c = s[i];
//             s[i] = s[j];
//             s[j] = c;
//             i--;
//             j++;
//         }
//         return s;
//   }
// int main()
// { 
//     string s1("999");
//     string s2("111");
//     cout << addStrings(s1,s2) << endl;
//     return 0;
// }


ListNode* Merge( ListNode* pHead1, ListNoe* pHead2 )
{
	if ( NULL == pHead1 )
		return pHead2;
	else if ( NULL == pHead2 )
		return pHead1;
 
	ListNode* pMergedHead = NULL;
 
	if ( pHead1->val < pHead2->val ){
		pMergeHead = pHead1;
		pMergeHead->next = Merge( pHead1->next, pHead2 );
	}
	else{
		pMergeHead = pHead2;
		pMergeHead->next = Merge( pHead1, pHead2->next );
	}
 
	return pMergedHead;
}

