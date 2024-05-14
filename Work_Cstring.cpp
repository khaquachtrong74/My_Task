#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void inhoakytudau(char *&arr)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        if (i != 0)
        {
            if (isspace(arr[i]) && islower(arr[i + 1]))
            {
                arr[i + 1] -= 32;
            }
        }
        else
        {
            if (islower(arr[i]))
            {
                arr[i] -= 32;
            }
        }
    }
}
void concat(char *&arr, char *&arb)
{
    strcat(arr, arb);
}
void bai1(char *&arr, char *&arb)
{
    arr = new char[100];
    arb = new char[100];
    cout << "Nhap chuoi mot ";
    cin.getline(arr, 100);

    cout << "Nhap chuoi thu hai ";
    cin.getline(arb, 100);

    if (strlen(arr) < strlen(arb))
    {
        cout << "Chuoi 2 lon hon chuoi 1 " << endl;
    }
    else
    {
        if (strlen(arr) > strlen(arb))
        {
            cout << "chuoi 1 lon hon chuoi 2 " << endl;
        }
        else
        {
            cout << "2 chuoi bang nhau" << endl;
        }
    }
    inhoakytudau(arr);
    inhoakytudau(arb);
    cout << arr << endl;
    cout << arb << endl;
    concat(arr, arb);
    cout << arr;
}

void bai2(char *&arr)
{
    arr = new char[100];
    cin.getline(arr, 100);
    char *ans = strtok(arr, ",");
    char *ptr_ans = new char[100];
    char ketqua[50];
    while (ans != NULL)
    {
        strcat(ketqua, ans);
        ans = strtok(NULL, ",");
    }
    cout << ketqua;
    delete[] ptr_ans;
    ptr_ans = NULL;
}

void a3(char *&arr)
{
    arr = new char[100];
    cin.get(arr, 100);
    cout << "Truoc khi bo khoang trang" << endl;
    cout << "|" << arr << "|" << endl;
    cout << "Sau khi bo khoang trang" << endl;
    cout << "|";
    for (int i = 0; i < strlen(arr); i++)
    {
        if (!isspace(arr[i]) && arr[i] <= 'z' && arr[i] >= 'A')
        {
            cout << arr[i];
        }
    }
    cout << "|" << endl;
}

int demsokhoangtrang(char *&arr)
{
    arr = new char[3000];
    cin.getline(arr, 3000);
    int dem = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (isspace(arr[i]))
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    char *arr;
    char *arb;
    // bai1(arr, arb);
    // bai2(arr);
    cout<<demsokhoangtrang(arr);

    delete[] arr;
    delete[] arb;
//    arr = nullptr;
//    arb = nullptr;
	arr = NULL;
	arb = NULL;
    if (arr == NULL && arb == NULL)
    {
        cout << "Giai phong bo nho thanh cong" << endl;
    }
    else
    {
        cout << "Giai phong bo nho that bai" << endl;
    }
}
