#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // make_pair

    int Q;
    cin >> Q;
    map<string, int> my_map;
    if (Q < 1 || Q > pow(10, 5))
    {
        return 0;
    }
    for (int i = 0; i < Q; i++)
    {
        int x;
        string s;
        int chose;
        cin >> chose;

        switch (chose)
        {
        case 1:
            cin >> s;
            cin >> x;
            my_map[s] += x;
            break;
        case 2:
            cin >> s;
            my_map.erase(s);
            break;
        case 3:
            cin >> s;
            auto it = my_map.find(s);
            if (it != my_map.end())
            {
                cout << my_map[s] << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
