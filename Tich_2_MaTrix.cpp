#include <iostream>
#include "Bb_01.cpp"
using namespace std;

void Tich_Matrix(int arr[][15], int arx[][15], int row1, int col1, int col2, int result[][15])
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int l = 0; l < col1; l++)
            {
                result[i][l] += arr[i][l] * arx[l][j];
            }
        }
    }
}
void Initial_Array(int array[][15], int r, int c) // ham dung de khoi tao cac gia tri ngau nhien cho 1 ma tran
{
    srand(static_cast<int>(time(0))); // ham de chon cac gia tri ngau nhien duong theo thoi gian
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            array[i][j] = rand() % 10; // gioi han tu 0 toi 9
        }
    }
}
int main()
{
    int arr[15][15];
    int arx[15][15];
    int result[15][15];

    int row1 = 2, col1 = 2, col2 = 2;
    Initial_Array(arr, row1, col1);
    cout << "Matrix01" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cin.get();// đợi người dùng ấn enter để tiếp tục
    Initial_Array(arx, row1, row1);
    cout << "Matrix02" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << arx[i][j] << " ";
        }
        cout << endl;
    }
    Tich_Matrix(arr, arx, row1, col1, col2, result);
    cout << "Matrix03" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}