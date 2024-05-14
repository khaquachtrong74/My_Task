#include <stack>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;
#include <vector>
// class Solution
// {
// public:
//     string longestCommonPrefix(vector<string> &strs)
//     {
//         if (strs.size() > 200)
//         {
//             return 0;
//         }
//         int index = 0;
//         stack<char> my_stack;
//         for (int i = strs[0].size() - 1; i >= 0; i--)
//         {
//             my_stack.push(strs[0][i]);
//         }
//         int k = 1;
//         vector<char> ans;
//         while (k < strs.size())
//         {
//             for (int i = 0; i < strs[k].size(); i++)
//             {
//                 if (strs[k][i] == my_stack.top())
//                 {
//                     ans.push_back(my_stack.top());
//                     my_stack.pop();
//                 }
//             }
//             while (!my_stack.empty())
//             {
//                 my_stack.pop();
//             }
//             for (int i = ans.size() - 1; i >= 0; i--)
//             {
//                 my_stack.push(ans[i]);
//             }
//             if (k != strs.size() - 1)
//             {
//                 ans.resize(0);
//             }
//             k++;
//         }

//         for (int i = 0; i < ans.size(); i++)
//         {
//             cout << ans[i];
//         }
//         return "OK r";
//     }
//     mode_
// };
int soep(int n, int k)
{
    long long s = 0, a, d = pow(10, 9) + 7;
    for (int i = 1; i <= n; i++)
    {
        a = 1;
        for (int j = 0; j < k; j++)
        {                    // i tại 3 mũ k = 4;
                             /* 3*3*3*3*/
            a = (a * i) % d; // cách tối ưu hoá thay cho pow khi có modulo
        }
        s = (s + a) % d;
    }
    return s;
}
int POw(int n, int k)
{
    // giả sử cho 4 mũ 5 : n = 4; k = 5;
    int b = 1;
    int i = 0;
    while (i < k)
    {           // while lặp đi k lần
        b *= n; // mỗi lần sẽ nhân n
        i++;
    }
    return b;
}