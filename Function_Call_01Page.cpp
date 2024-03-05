#include <iostream>
#include "Bb_01.cpp"
// Bai tap chuong 1
// cac bai tap tu 1 toi 13;
void Ex1_2()
{
    int array[3][6];
    Initial2_Array(array, 3, 4);
}

void Ex3()
{
    int r, c, hang = 0, cot = 0;
    cout << "Enter Row: ";
    cin >> r;
    cout << "Enter Col: ";
    cin >> c;
    check_value(r, c, 10, 15);
    int array3[10][30];
    Initial_Array(array3, r, c);
    int ketqua = sum_Array(array3, r, c);
    Show_Array(array3, r, c);
    cout << "Sum all elements in array " << ketqua << endl;
    int Max = 0, Min = 0;
    Max = find_max(array3, r, c, hang, cot);

    cout << "Max:= " << Max << " in Row " << hang << " and Col " << cot << endl;
    Min = find_min(array3, r, c, hang, cot);
    cout << "Min:= " << Min << " in Row " << hang << " and Col " << cot << endl;
}
void ex4()
{
    int array[5][6]; // r, c == Row, Column
    int r, c;
    cout << "Enter r: ";
    cin >> r;
    cout << "Enter c: ";
    cin >> c;
    check_value(r, c, 5, 6);
    Find_located(array, r, c);
}

void ex5()
{
    int array[6][6], n;
    cout << "Enter your limit matrix. ";
    cin >> n;
    matrix_01(array, n);
}

void ex6()
{
    int array[6][6], array2[6][6], n, m;
    cout << "Enter your limit matrix 01 : ";
    cin >> n;
    cout << "Enter your limit matrix 02 : ";
    cin >> m;
    matrix_02(array, array2, n, m);
}

void ex9()
{
    int array[10][10];
    int n;
    cout << "Enter n > 2 && n <= 10";
    cin >> n;
    Check_Limit(n);
    zigzag_Matrix(array, n);
}
void swarps(int &a, int &b);
void twisted_matrix(int array[][10], int n);

void ex10()
{
    int array[10][10];
    int n;
    cout << "Enter n > 2 && n <=10 ";
    cin >> n;
    Check_Limit(n);
    spiral_matrix(array, n);
    cout << "The matrix." << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void ex11() // :)) bai tap dinh nhat
{
    string array[16][8];
    Plane_seat(array);
}

// Bai tap chuong 2
#include "Bb_02.cpp"
// cac ham dinh danh se khien cho ban goc nhu dang o day;
int giaithua(int n);
int fibonacci(int n);
int sum(int n);
int fib(int n);
bool isEven(int n);
bool isOdd(int n);
int isDuong(int &n);
double Sum_Third(double n);
int Pow(int a, int b);
// cac bai tap tu 1 toi 8'
void EXC201(int n)
{
    int ketqua[10], i = 0;
    ketqua[i] = Sum_All(n);
    cout << "Sum all = " << ketqua[i] << endl;
    i++;
    ketqua[i] = SUM_Square(n);
    cout << "Sum square = " << ketqua[i] << endl;
    i++;
    ketqua[i] = Sum_GiaiThua(n);
    cout << "Sum Giai Thua = " << ketqua[i] << endl;
}

void EXC202(double n)
{
    n--;
    double ketqua = Sum_Third(n);
    cout << "Sum isOdd = " << ketqua << endl;
}
void EXC205(int n)
{
    int count = 0, ketqua = demso(n, count);

    cout << "So chu so cua " << n << " la := " << count << endl;
    count = 0;
    ketqua = sodaonguoc(n, count);
    cout << "So dao nguoc := " << ketqua << endl;
}

void EXC207(int n)
{
    int ketqua;

    switch (isEven(n))
    { // Sum_ALL o day la ham de tinh tong tu 1 toi n
    case true:
        ketqua = sum_even_odd(n); // khi ket qua n la so chan thi de quy n + (n-2) se la tong tu 1 toi n so chan
        cout << "Tong cac so chan tu 1 toi n la " << ketqua << endl;
        cout << "Tong cac so le tu 1 toi n la " << Sum_All(n) - ketqua << endl;
        // nguoc lai tong tu 1 toi n - cac so chan tu 1 toi n se la tong cac so le
        break;
    default: // truong hop nguoc lai
        ketqua = sum_even_odd(n);
        cout << "Tong cac so chan tu 1 toi n la " << Sum_All(n) - ketqua << endl;
        cout << "Tong cac so le tu 1 toi n la " << ketqua << endl;
    }
}
void EXC209(int n)
{
    int array[64], k = 0;
    binary_Ten(n, array, k);
    for (int i = k - 1; i >= 0; i--)
    {
        cout << array[i];
    }
    k--;
    cout << endl;
    int thapphan;
    thapphan = Ten_Binary(k, array);
    cout << "Day so nhi phan tren chuyen sang thanh so " << thapphan << " Thap phan" << endl;
}