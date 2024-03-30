#include <cmath>
#include <cstdio>
#include <vector>

#include <iostream>
#include <algorithm>
using namespace std;

bool check(int a, int min, int max)
{
    return a < min || a > max ? false : true;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    if (!check(n, 1, pow(10, 5)))
    {
        return 0;
    }
    vector<int> my_vector;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (!check(t, 1, pow(10, 9)))
        {
            return 0;
        }
        my_vector.push_back(t);
    }
    int m;
    cin >> m;
    if (!check(m, 1, pow(10, 5)))
    {
        return 0;
    }
    vector<int> x;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        if (!check(t, 1, pow(10, 9)))
        {
            return 0;
        }
        x.push_back(t);
    }
    int Yes[m], No[m];
    int i = 0, dem = 0;
    for (int i = 0; i < m; i++)
    {
        auto it = lower_bound(my_vector.begin(), my_vector.end(), x[i]);
        if (it != my_vector.end())
        {
            if (x[i] == *it)
            {
                Yes[i] = it - my_vector.begin() + 1;
                No[i] = 0;
            }
            else
            {
                No[i] = it - my_vector.begin() + 1;
                Yes[i] = 0;
            }
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (Yes[i] != 0)
        {
            cout << "Yes " << Yes[i] << endl;
        }
        if (No[i] != 0)
        {
            cout << "No " << No[i] << endl;
        }
    }
    return 0;
}
