#include <iostream>

using namespace std;
void ThapHaNoi(int n, char A, char B, char C)
{ // n là số vòng
    // A, B, C đại diện cho các cột
    /*A: Cột vật thể
    B: Cột Trung Gian
    C: cột Mục Tiêu*/
    if (n == 1)
    {
        int a = 1;
        cout << "Di chuyen  " << A << " den " << C << endl;
        return;
    }
    ThapHaNoi(n - 1, A, C, B);
    cout << "Di chuyen " << A << " den " << C << endl;
    ThapHaNoi(n - 1, B, A, C);
    /*QUy Trình:
    if n==1 =>Cột vật thể sang mục tiêu
    else:
    gọi lại hàm với (n-1,vật thể, mục tiêu, trung gian);
    cout<<cột vật thể => mục tiêu;
    gọi lại hàm với (n-1,trung gian, vật thể, mục tiêu);*/
}
int main()
{
    int n;
    cin >> n;
    ThapHaNoi(n, 'A', 'B', 'C');
    return 0;
}