#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>
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

// int demso(int n, int &count)
// {
//     isDuong(n);
//     if (n == 0)
//     {
//         return 0;
//     }
//     count++;
//     return demso(n / 10, count); // ham dem so chu xuat hien cua mot so nguyen duong
// }
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
    return sodaonguoc(n /= 10, m = m * 10 + n % 10);
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

// hàm vẽ pascal
/*_________________________________________________________*/
int tohop(int n, int k)
{
    return giaithua(n) / ((giaithua(k) * giaithua(n - k)));
}

void pascal_row(int n, int index)
{
    if (index > n)
    {
        return;
    }
    cout << tohop(n, index) << " ";
    pascal_row(n, index + 1);
}

void pascal_draw(int n, int index)
{
    if (index == n)
    {
        return;
    }
    pascal_row(index, 0);
    cout << endl;
    pascal_draw(n, index + 1);
}
int ucln(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    int r = a % b;
}
/*______________________________________________________*/
// Làm quen với stack
bool guard_duong(int n)
{
    return n > 0 ? true : false;
}

void tietkiem(stack<int> &my_stack, int n)
{
    if (guard_duong(n))
        my_stack.push(n); // làm 1 ngăn xếp chỉ được nạp khi nhận giá trị dương
}

// hàm check xem ngoặc đóng mở đã đúng hay chưa
bool check_ngoac(char *arr, stack<char> &my_stack)
{
    // sẽ có 3 ngoặc : () , {} , []:
    // ngoặc hợp lệ là khi đóng mở phù hợp : ([]), []():
    // ngoặc không hợpr lệ : [(]);
    int i = 0;
    cin >> arr; // nhap 1 chuoi ki tu
}

// push pop top empty

int demso(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return 1 + demso(n - 1);
}

int fibonacci5(int n)
{
    if (n <= 1)
        return n;

    vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}
int fibonacciIndex(int n)
{
    if (n < 1 || n > 10)
        return -1;
    if (n == 1)
        return 0;
    int i = 0;
    while (true)
    {
        if (fibonacci5(i) > pow(10, n - 1))
        {
            return i;
        }
        i++;
    }
}

bool check(long long a)
{
    return a < 1 || a > pow(10, 15) ? true : false;
}
long long test(long long n, long long ck)
{
    return n % ck == 0 ? true : false;
}
long long max_xim(long long a, long long b)
{
    return a <= b ? b : a;
}
long long min_xim(long long a, long long b)
{
    return a <= b ? a : b;
}
long long cutCake(long long a, long long b, long long c)
{
    // chiều dài a: chiều rộng b: chiều cao c;
    long long arr[5] = {a, b, c};
    if (check(a) || check(b) || check(c))
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    // chia sao cho diện tính các mặt = nhau
    // thoa man la khoi lap phuong a*c=c*b=a*b
    int index = 0;
    long long tich = max_xim(max_xim(a, b), c);
    while (index < 3)
    {
        for (int i = 5; i >= 1; i--)
        {
            if (tich % i == 0 && tich == arr[index])
            {
                arr[index] = tich / i;
                break;
            }
        }
        index++;
    }
    double ans = double(max_xim(max_xim(arr[0], arr[1]), arr[2])) / double(min_xim(min_xim(arr[0], arr[1]), arr[2]));
    long long kq = long(round(ans));
    return kq;
}
int fiboo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fiboo(n - 1) + fiboo(n - 2);
}

int fibSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return fiboo(n) + fibSum(n - 1);
}
bool isMonotonous(std::vector<int> sequence)
{
    if (sequence.size() == 1)
    {
        return true;
    }
    for (int i = sequence.size() - 1; i > 0; i--)
    {
        if (sequence[i] - sequence[i - 1] > 0)
        {
            return false;
        }
    }
    return true;
}
int two_ten(int n)
{
    int dem = 0;
    int ketqua = 0;
    while (n != 0)
    {
        ketqua += (n % 10) * pow(2, dem);
        n /= 10;
        dem++;
    }
    return ketqua;
}
// // time_t time1, time2;
// // time(&time1); // thời gian lúc bắt đầu
// // // int kq = fibonacci5(45);
// // // cout << kq << en

// // cout << long(fiboo(4));
// // time1 = time(NULL);
// // cout << "Thoi gian hien tai " << time1 << endl;
// // time(&time2); // thời gian sau khi chạy xong
// // double timeDiff = difftime(time2, time1);
// // cout << "Time_1" << ctime(&time1) << endl;
// // cout << "Time taken: " << timeDiff << " seconds" << endl;
// // cout<<"Time _ 1";
// vector<int> s = {5, 3, 1};
// bool kq = isMonotonous(s);
// cout << bool(kq);

// hàm nội tuyến
inline int find(int a)
{
    return a;
}
int findx(int a)
{
    return a;
}

int t_ten(string s, int dem, int ketqua)
{
    if (s.size() + 1 == dem)
    {
        return ketqua;
    }
    ketqua += (s[dem - 1] - '0') * pow(2, s.size() - dem);
    return t_ten(s, dem + 1, ketqua);
}
int sum_2(int a, int b)
{
    cout << a << " + " << b << " = ";
    return a + b;
}
void nhap(int &a, int &b)
{
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
}
int main()
{
    // int x, y;
    // cout << "Enter any char to end programs." << endl;
    // while (cin >> x)
    // {
    //     nhap(x, y);

    //     cout << sum_2(x, y) << endl;
    // }
    const char *chuoi_chinh = "Chuỗi chính để tìm kiếm";
    const char *chuoi_con = "chính";

    // Sử dụng hàm strstr() để tìm kiếm chuỗi con trong chuỗi chính
    const char *ket_qua = strstr(chuoi_chinh, chuoi_con);

    // Kiểm tra kết quả
    if (ket_qua != nullptr)
    {
        std::cout << "Chuoi con '" << chuoi_con << "' duoc tim thay tai vi tri: " << ket_qua - chuoi_chinh << std::endl;
    }
    else
    {
        std::cout << "Chuoi con '" << chuoi_con << "' khong duoc tim thay trong chuoi chinh." << std::endl;
    }

    return 0;
}
