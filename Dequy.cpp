#include <iostream>
using namespace std;

// Lưu đồ thuật toán
int POW(int n, int a)
{
    if (a == 1)
    {
        return n;
    }
    return n * POW(n, a - 1);
}
int S(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + S(n - 1);
}
int S_2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return POW(n, 2) + S_2(n - 1);
}
double S_3(double n)
{
    if (n == 1)
    {
        return 1;
    }
    return (1.0 / n) + S_3(n - 1);
}
int giaithua(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * giaithua(n - 1);
}
int S_11(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return giaithua(n) + S_11(n - 1);
}