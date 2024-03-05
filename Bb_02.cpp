#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

// De quy _ Recursion

// Giai thua
int giaithua(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * giaithua(n - 1); // giai thua la n * (n-1) giam dan
    }
}

// fibonacci

int fibonacci(int n) // ham nay tra ve gia tri thu n cua day fibonacci
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n > 1)
        return fibonacci(n - 1) + fibonacci(n - 2);
    // fibonacci la day so bat dau tu 0 voi 1 va so tiep theo = tong cua 2 so dang truoc
}

int sum(int n, int ketqua)
{
    if (n == 0)
        return ketqua;
    ketqua += fibonacci(n);
    n--;
    return sum(n, ketqua); // ham nay tra ve tong day so fibonacci
}

int fib(int n)
{
    if (n <= 2)
        return 1; // điểm dừng
    return fib(n - 1) + fib(n - 2);
}

// De quy tuong ho
bool isEven(int n);
bool isOdd(int n);

bool isEven(int n) // kiem dinh n co phai so chan
{
    if (n == 0)
        return true;
    else
        return isOdd(n - 1); // de quy tuyen tinh bang cach goi 1 ham isOdd
}

bool isOdd(int n)
{
    return !isEven(n); // de quy tuyen tinh
}

// bai tap;

int Sum_All(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + Sum_All(n - 1); // tong tu 1 toi n
}
int SUM_Square(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n * n + SUM_Square(n - 1); // tong tu 1^1 toi n^n
}

double Sum_Third(double n)
{
    if (n == -1)
    {
        return 0;
    }
    return (1.0 / ((n * 2.0) + 1.0)) + Sum_Third(n - 1.0); // tong dua tren cong thuc 1/(2*n+1);
}

int Sum_GiaiThua(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return giaithua(n) + Sum_GiaiThua(n - 1); // tong cac so giai thua
}
int isDuong(int n)
{
    if (n >= 0)
    {
        return n;
    }
    cout << "Invaild, vui long nhap so >= 0 :";
    cin >> n;
    return isDuong(n); // ham check xem gia tri nhap vao co am hay khong
}

// bai tap 5

int demso(int n, int &count)
{
    isDuong(n);
    if (n == 0)
    {
        return 0;
    }
    count++;
    return demso(n / 10, count); // ham dem so chu xuat hien cua mot so nguyen duong
}
int Pow(int a, int b)
{
    if (b == 0)
        return 1;
    return a * Pow(a, b - 1);
}
int sodaonguoc(int n, int m) // m o lan dau se = 0;
// ve co ban m se la bien de luu tru gia tri dao nguoc cua chu so n
{
    if (n == 0)
    {
        return m;
    }
    m = m * 10 + n % 10;
    n /= 10;
    return sodaonguoc(n, m);
}

// Tong cac chu so chan va le

int sum_even_odd(int n)
{
    isDuong(n);
    if (n == 0)
        return 0;
    return n + sum_even_odd(n - 2); // ham tinh tong tu 1 toi n theo chan hoac le
}

int binary_Ten(int n, int array[], int &k)
{
    // ham chuyen so he 10 n sang so nhi phan
    if (n == 0)
        return 0;
    int m = n;
    n = double(n) / 2.0;
    if (m == int(n * 2))
    {
        array[k] = 0;
    }
    else
    {
        array[k] = 1;
    }
    k++;
    return binary_Ten(int(n), array, k);
}

int Ten_Binary(int k, int array[])
{ // ham chuyen tu nhi phan sang thap phan
    if (k == -1)
        return 0;
    int m = Pow(2 * array[k], k);
    k--;
    return m + Ten_Binary(k, array);
}