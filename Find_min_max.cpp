#include <iostream>
#include <climits> // Để sử dụng INT_MAX và INT_MIN
using namespace std;

int findMin(int arr[], int size)
{
    // Nếu chỉ có một phần tử trong mảng, trả về giá trị của nó
    if (size == 1)
        return arr[0];
    // Gọi đệ quy để tìm giá trị nhỏ nhất trong mảng con từ phần tử thứ hai trở đi
    int min_rest = findMin(arr + 1, size - 1);
    // So sánh giá trị nhỏ nhất của mảng con với giá trị của phần tử đầu tiên
    return (arr[0] < min_rest) ? arr[0] : min_rest;
}

int findMax(int arr[], int size)
{
    // Nếu chỉ có một phần tử trong mảng, trả về giá trị của nó
    if (size == 1)
        return arr[0];
    // Gọi đệ quy để tìm giá trị lớn nhất trong mảng con từ phần tử thứ hai trở đi
    int max_rest = findMax(arr + 1, size - 1);
    // So sánh giá trị lớn nhất của mảng con với giá trị của phần tử đầu tiên
    return (arr[0] > max_rest) ? arr[0] : max_rest;
}

int main()
{
    int arr[] = {5, 3, 2, 1, 54, 52, -4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Min value: " << findMin(arr, size) << endl;
    cout << "Max value: " << findMax(arr, size) << endl;

    return 0;
}
