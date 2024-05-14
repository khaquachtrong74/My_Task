#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
// function inline
inline bool check(int a)
{
    return a > 0 ? true : false;
}

// Exclusion

// Tính tổng của một dãy số

int sum_list(int n)
{

    if (n == 1)
        return 1;
    return n + sum_list(n - 1);
}

// TÍnh giai thừa của một số
int giaithua(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * giaithua(n - 1);
}

// dãy Fibonacci - in ra n số đầu tiên

// hàm tìm giá trị của fibonacci tại vị trí n
int fibo_Value(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
        return 1;
    return fibo_Value(n - 1) + fibo_Value(n - 2);
}

// hàm in ra các giá trị n số đầu tiên của dãy fibo

void prin_fibo(int n, int dem)
{
    if (n < dem)
    {
        return;
    }
    cout << fibo_Value(dem) << " ";
    prin_fibo(n, dem + 1);
}

// Đảo ngược chuỗi - Hello = olleH
char reverse_str(char s[], int size)
{
    if (size == -1)
        return '\0';
    cout << s[size];
    return reverse_str(s, size - 1);
}

// tính luỹ thừa
int luythua(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * luythua(x, n - 1);
}

// ước chung lớn nhất giữa n, m
int UCM(int n, int m)
{
    if (m == 0)
    {
        return n;
    }
    return n > m ? UCM(m, n % m) : UCM(n, m % n);
}

// Kiểm tra số nguyên tố
bool Snt(int n, int dem)
{
    if (n != dem && (n % dem == 0))
    {
        return false; // 0
    }
    if (n == dem)
    {
        return true; // 1
    }
    if (n < dem)
        return false;
    return Snt(n, dem + 1);
}

// Tính tổng các phần tử trong mảng

int sum_array(int *&arr, int size)
{
    int ketqua = 0;

    for (int i = 0; i < size; i++)
    {
        ketqua += arr[i];
    }
    return ketqua;
}
int main()
{
    ////đệ quy
    // cout << sum_list(3);
    // cout << endl
    //      << giaithua(4);
    // system("pause");
    // char s[] = "Hello";
    // cout << reverse_str(s, strlen(s)) << endl;
    // prin_fibo(5, 0);
    // cout << luythua(5, 5) << endl;
    // cout << UCM(12, 24) << endl;
    // cout << bool(Snt(5, 2));

    ////con trỏ
    int *ptr_r = new int[10];
    for (int i = 0; i < 10; i++)
    {
        ptr_r[i] = i;
    }
    cout << sum_array(ptr_r, 10);
    delete[] ptr_r;
    ptr_r = nullptr;
    return 0;
}