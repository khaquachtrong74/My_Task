#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
void task1(int *ptr)
{
    /*bai 1*/
    int x, y;
    ptr = &x;
    *ptr = 80;
    cout << "Dia chi cua x " << &x << endl;
    cout << "Dia chi cua con tro dang luu giu " << ptr << endl;
    cout << "Gia tri cua bien con tro tro den " << *ptr << endl;
    cout << "Gia tri cua bien x" << endl;
    if (x == *ptr)
    {
        cout << "gia tri con tro = gia tri x" << endl;
    }
}
void task2(int *ptr)
{
    /*bai 2*/
    int arr[30];
    for (int i = 0; i < 30; i++)
    {
        arr[i] = rand() % 10;
    }
    ptr = arr;
    cout << "Gia tri cua mang " << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << arr[i] << " ";
    }
    /*Ky phap do doi*/
    cout << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << *(ptr + i) << " ";
    }
    /*Ky phap chi so */
    cout << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << ptr[i] << " ";
    }
}
void task3(int *ptr_01, int *ptr)
{
    cout << endl;
    int x, y;
    cin >> x >> y;
    ptr_01 = &y;
    ptr = &x;
    while (*ptr_01 != 0)
    {
        int r = *ptr_01;
        *ptr_01 = *ptr % *ptr_01;
        *ptr = r;
    }
    cout << "uoc chung lon nhat la " << *ptr;
    delete ptr;
    ptr = nullptr;
}
bool odd(int a)
{
    return a % 2 != 0 ? true : false;
}
void swarp(int *ptr_a, int *ptr_b)
{
    int *tp = ptr_a;
    ptr_a = ptr_b;
    ptr_b = tp;
}

void task4(int arr[], int *ptr)
{
    int size = 30;

    ptr = arr;
    for (int i = 0; i < size; i++)
    {
        if (odd(*(ptr + i)))
        {
            cout << *(ptr + i) << " ";
        }
    }
    int right = 30;
    int left = 0;
    while (right - left != 1)
    {
        if (*(ptr + right) < *(ptr + left))
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    cout << "Max is :" << *(ptr + left);
}
int main()
{
    int *ptr;
    int *ptr_01;
    // task1(ptr);
    // task2(ptr);
    // task3(ptr_01, ptr);
    int arr[30];
    for (int i = 0; i < 30; i++)
    {
        arr[i] = rand() % 100;
    }
    task4(arr, ptr);

    return 0;
}