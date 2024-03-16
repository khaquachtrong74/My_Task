#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // hàm dùng để truy vấn các phần tử có trong mảng
    int n, q, k, row, col;
    cin >> n >> q;

    // dung vector de luu tru
    //  vector<vector<int>> a(n);
    // dùng mảng động 2 chiều để lưu trữ
    int **a = new int *[n];
    // mảng 2 chiều a

    for (int i = 0; i < n; i++)
    {

        // k is the number of colume
        cin >> k; // số cột

        // resize(size) function will create array at index a[i] which has k number of element

        // phương thức sẽ tạo ra 1 dãy index với k phần tử
        // khi dùng vector thì : a[i].resize(k);
        a[i] = new int[k];

        // inserting value in matrix
        for (int j = 0; j < k; j++)
            cin >> a[i][j]; // nhập giá trị các phần tử vào
    }

    // q is number of opration to perform on matrix
    while (q--)
    {
        // số phép toán thực hiện trên ma trận
        // get index's of matrix
        cin >> row >> col;

        cout << a[row][col] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    } // Giai phong bo nho
    delete[] a;
    return 0;
}