#include <iostream>

using namespace std;

void spiral_matrix(int n, int matrix[10][10])
{
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (num <= n * n)
    {
        for (int i = left; i <= right && num <= n * n; i++)
        {
            matrix[top][i] = num;
            num++;
        }
        top++;
        for (int i = top; i <= bottom && num <= n * n; i++)
        {
            matrix[i][right] = num;
            num++;
        }
        right--;
        for (int i = right; i >= left && num <= n * n; i--)
        {
            matrix[bottom][i] = num;
            num++;
        }
        bottom--;
        for (int i = bottom; i >= top && num <= n * n; i--)
        {
            matrix[i][left] = num;
            num++;
        }
        left++;
    }
}

int main()
{

    string a = " a ";
    string b;
    getline(cin, b);
    if (a == b)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }

    return 0;
}