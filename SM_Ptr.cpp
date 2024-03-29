#include <iostream>
using namespace std;
// Hàm nhập
void nhap(int *&ptr, int n)
{
    ptr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap cac gia tri thu " << i + 1 << " vao day = ";
        cin >> *(ptr + i);
    }
}
void xuat(int *&ptr, int n)
{
    cout << "Ouput/" << endl;
    for (int i = 0; i < n; i++)
    {

        cout << *(ptr + i) << " ";
    }
    cout << endl;
}
// Tham chiếu mảng con trỏ
int *Adress_Max(int *&ptr, int n)
{
    int *ptr_c = ptr; // vì biến *ptr_c là một biến cục bộ nên khi hàm kết thúc thì nó sẽ tự động giải phóng nên không cần phải lo :v
    for (int i = 0; i < n; i++)
    {
        if (*ptr_c < *(ptr + i))
        {
            ptr_c = ptr + i;
        }
    }
    return ptr_c;
}
void doicho(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sapxep(int *&ptr, int n)
{
    int k = 0;
    while (k != n)
    {// Thay vì phải chạy 2 vòng for lồng nhau ta tách riêng ra 1 vòng lặp chạy riêng. -- lúc này nó sẽ tối ưu hơn
        for (int i = n - 1; i >= 1; i--)
        {
            if (*(ptr + i) < *(ptr + i - 1))
            {
                doicho(*(ptr + i), *(ptr + i - 1));
            }
        }
        k++;
    }
}
int main()
{
    int n;
    cin >> n;
    int *ptr_a;
    // Ký pháp độ dời với thao tác I/O;
    nhap(ptr_a, n);
    xuat(ptr_a, n);
    int *ptr_b = Adress_Max(ptr_a, n);
    cout << "Dia chi cua gia tri lon nhat trong mang la " << ptr_b << endl;
    cout << "Gia tri lon nhat trong mang la " << *ptr_b << endl;
    // Thao tác chứng tỏ bạn là người văn minh;
    cout << "Sap xep theo tang dan gia tri : " << endl;
    sapxep(ptr_a, n);
    xuat(ptr_a, n);
    delete[] ptr_a;
    ptr_a = nullptr;
    ptr_b = nullptr;
    if (ptr_a != nullptr || ptr_b != nullptr)
    {
        cout << "BO nho chua duoc giai phong";
    }
    cout << endl
         << "Bo nho da duoc giai phong";
    return 0;
}