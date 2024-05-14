#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s; // khởi tạo 1 set với kiểu integer.
    int Q;
    cin >> Q;
    if (Q < 1 || Q > pow(10, 5))
    {
        return 0;
    }
    for (int i = 0; i < Q; i++)
    {
        int y;
        int x;
        cin >> y;
        cin >> x;
        switch (y)
        {
        case 1:
            s.insert(x); // chèn giá trị x vào set
            break;
        case 2:
            s.erase(x); // xoá giá trị x trong set
            break;
        case 3:
            auto it = s.find(x); // tạo 1 cái iterator để chứa nếu x không tìm thấy thì gán s.end() vào iterator đó
            if (it != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;
        }
    }
    return 0;
}
