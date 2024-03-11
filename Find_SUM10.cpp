#include <iostream>
#include "Bb_01.cpp"
using namespace std;

// Max la 30
int check_rc(int n)
{
    if (n > 30)
    {
        cout << "Nhap lai gia tri nho hon 30: ";
        cin >> n;
        check_rc(n);
    }
    return n;
}
// Ham khoi tao mang
void Initial_Array(int array[][30], int r, int c);
// Ham show gia tri trong mang
void Show_Array(int array[][30], int r, int c);
// Ham loai bo cac gia tri trong mang giong nhau;

// ham tim tong 10;
void find_SUM10(int array[][30], int r, int c)
{

    int ans[50], anx[50], a = 0, b = 0, dem = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            switch (array[i][j])
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                ans[a] = array[i][j];
                a++;
            case 6:
            case 7:
            case 8:
            case 9:
                anx[b] = array[i][j];
                b++;
            }
        }
    }

    int vitri[30][30], m = 0;
    if (a >= b)
    {

        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < b; j++)
            {
                if (ans[i] + anx[j] == 10)
                {
                    vitri[dem][0] = i; // luu vi tri
                    vitri[dem][1 + 1] = j;
                    dem++;
                }
            }
        }
        if (dem == 0)
        {
            cout << "Khong co cap nao co tong = 10";
            exit(0);
        }
        cout << "Cac cap co tong = 10;" << endl;
        for (int i = 0; i < dem; i++)
        {
            cout << "[" << vitri[i][0] << "]"
                 << "[" << vitri[i][1] << "]";
        }
    }
    else
    {
        for (int i = 0; i < b; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                if (ans[i] + anx[j] == 10)
                {
                    vitri[dem][0] = ans[i]; // luu vi tri
                    vitri[dem][1] = anx[j];
                    dem++;
                }
            }
        }
        if (dem == 0)
        {
            cout << "Khong co cap nao co tong = 10";
            exit(0);
        }
        cout << "Cac cap co tong = 10;" << endl;
        for (int i = 0; i < dem; i++)
        {
            cout << "[" << vitri[i][0] << "]"
                 << "[" << vitri[i][1] << "]";
            cout << "::";
        }

        cout << "ne" << vitri[dem - 1][0];
    }
}
int main()
{
    int array[30][30];
    int cot, hang;
    cout << "Nhap cot, hang := ";
    cin >> cot >> hang;
    check_rc(cot);
    check_rc(hang);

    Initial_Array(array, cot, hang);
    Show_Array(array, cot, hang);
    find_SUM10(array, cot, hang);
    return 0;
}