#include <iostream>
using namespace std;

int find_max(int arr[], int size)
{
    int m = arr[0];
    int pos = 0;
    for (int i = 0; i < size; i++)
    {
        if (m < arr[i])
        {
            m = arr[i];
            pos = i;
        }
    }
    return pos;
}
int find_min(int arr[], int size)
{
    int m = arr[0];
    int pos = 0;
    for (int i = 0; i < size; i++)
    {
        if (m > arr[i])
        {
            m = arr[i];
            pos = i;
        }
    }
    return pos;
}

void sapxep(int arr[], int size)
{
    if (size == 1)
        return;
    int temp = arr[size - 1];
    arr[size - 1] = arr[find_min(arr, size)];
    arr[find_min(arr, size)] = temp;
    size--;
    sapxep(arr, size);
}
int tinhtong(int arr[], int size)
{
    if (size == 1)
    {
        return arr[0];
    }
    arr[0] += arr[size - 1];
    return tinhtong(arr, size - 1);
}
int main()
{
    int a[] = {1, 5, 1, 23};
    int size = sizeof(a) / sizeof(a[0]);
    cout << tinhtong(a, 4);
}
