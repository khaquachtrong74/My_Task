#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include "Bb_02.cpp"
using namespace std;

int ucln(int a, int b)
{
    // Tim uoc chung lon nhat giua 2 so theo Eculid
    if (b == 0)
    {
        return a;
    }
    return ucln(b, a % b);
}
void init_array(int arr[], int size)
{ // ham khoi tao mang voi cac gia tri random tu 0 toi 99
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
int sumElement(int arr[], int size)
{ // ham tong cac gia tri co trong mang mot chieu
    if (size == 1)
    {
        return arr[0];
    }
    return arr[size - 1] + sumElement(arr, size - 1);
}
int findMin(int arr[], int size)
{ // ham tim gia tri nho nhat co trong mang
    if (size == 1)
    {
        return arr[0];
    }

    return arr[0] < findMin(arr + 1, size - 1) ? arr[0] : findMin(arr + 1, size - 1);
}
int giaiThua(int n)
{ // ham de quy giai thua
    if (n == 0)
    {
        return 1;
    }
    return n * giaiThua(n - 1);
}
// bool isDuong(int n)
// { // kiem tra gia tri duong am
//     return n < 0 ? false : true;
// }
int toHop(int n, int k)
{
    return (giaiThua(n) / (giaiThua(n - k) * giaiThua(k)));
}
// Ham de quy luy thua
int luyThua(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * luyThua(x, n - 1);
}
// ham chuyen so he 10 n sang so nhi phan
int nhiPhan(long long n, int array[], int &k)
{

    if (n == 0)
        return 0;
    if (n % 2 == 0)
    {
        array[k] = 0;
    }
    else
    {
        array[k] = 1;
    }
    k++;
    return nhiPhan(n / 2, array, k);
}
template <class val>
val thapPhan(val arr[], val size)
{
    if (size == 1)
    {
        return arr[0];
    }
    return luyThua(2 * arr[size - 1], size - 1) + thapPhan(arr, size - 1);
}

void nhap(int *&a, int size)
{
    a = new int[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = i;
    }
}
void xuat(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    // delete[] a;
}
int main()
{
    // int ketqua = ucln(25, 5);
    // cout << ketqua << endl;
    // int arr[ketqua];
    // init_array(arr, ketqua);
    // for (int i = 0; i < ketqua; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // int ans = sumElement(arr, ketqua);
    // cout << endl;
    // cout << ans << endl;
    // ans = findMin(arr, ketqua);
    // cout << ans;

    // int h; // chieu cao cua tam giac Pascal
    // cin >> h;
    // int ketqua = 0;
    // if (isDuong(h))
    // {
    //     for (int i = 0; i < h; i++)
    //     {
    //         for (int j = 0; j <= i; j++)
    //         {
    //             ketqua = toHop(i, j);
    //             cout << ketqua << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    // int ans = luyThua(5, 3);
    // cout << ans << endl;

    // int arr[1000], size = 0;
    // long long n;
    // cin >> n;
    // nhiPhan(n, arr, size);
    // for (int j = size - 1; j >= 0; j--)
    // {
    //     cout << arr[j];
    // }

    // int ans = thapPhan(arr, size);
    // cout << endl
    //      << ans;

    // double *p;
    // double x = 10;
    // p = &x;
    // cout << "Dia chi con tro hien tai " << *p << endl;
    // p += 4;
    // cout << "Dia chi con tro sau khi tang/giam gia tri " << *p << endl;

    // int *a = new int[6];
    // nhap(a, 6);
    // xuat(a, 6);
    // delete[] a;
    // a = nullptr;
    // if (a == nullptr)
    // {
    //     cout << true;
    // }
    // cout << false;
    int n;
    cin >> n;
    pascal_draw(n, 0);
    return 0;
}