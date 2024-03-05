#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
void Initial_Array(int array[][30], int r, int c) // ham dung de khoi tao cac gia tri ngau nhien cho 1 ma tran
{
    srand(static_cast<int>(time(0))); // ham de chon cac gia tri ngau nhien duong theo thoi gian
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            array[i][j] = rand() % 100; // gioi han tu 0 toi 9
        }
    }
}
void Show_Array(int array[][30], int r, int c) // Ham nay dung de ve ma tran (matrix)
{
    cout << "Array with " << r << " Row and " << c << " Column." << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
void Initial2_Array(int array[][6], int r, int c)
{ // phuong phap thu 2 dung de khoi tao va ve hinh cho matrix
    srand(static_cast<int>(time(0)));
    int i = 0;
    while (i < r)
    {
        int j = 0;
        while (j < c)
        {
            array[i][j] = rand() % 10;
            j++;
        }
        i++;
    }
    int k = 0;
    while (k < r)
    {
        int j = 0;
        while (j < c)
        {
            cout << array[k][j] << " ";
            j++;
        }
        cout << endl;
        k++;
    }
}
void Initial3_Array(int array[][6], int r, int c)
{ // phuong phap thu 3 dung de tao ra cac gia tri am cho ma tran
    srand(static_cast<int>(time(0)));
    int i = 0;
    while (i < r)
    {
        int j = 0;
        while (j < c)
        {
            array[i][j] = rand() % 10 - rand() % 5;
            j++;
        }
        i++;
    }
    int k = 0;
    while (k < r)
    {
        int j = 0;
        while (j < c)
        {
            cout << array[k][j] << " ";
            j++;
        }
        cout << endl;
        k++;
    }
}

void check_value(int &a, int &b, int m, int n) // m & n is limits
{                                              // kiem tra cac gia tri row va column so voi m, n
    if ((a < 0 || a > m) || (b < 0 || b > n))
    {
        cout << "Wrong, please try again!" << endl;
        cout << "Enter row: ";
        cin >> a;
        cout << "Enter column: ";
        cin >> b;
        check_value(a, b, m, n);
    }
}
int sum_Array(int array[][30], int r, int c)
{ // tong cac gia tri cong trong mang 2 chieu
    int tong = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            tong += array[i][j];
        }
    }
    return tong;
}
int find_max(int array[][30], int r, int c, int &hang, int &cot)
{ // tim kiem gia tri lon nhat trong mang va vi tri
    int max = array[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (array[i][j] >= max)
            {
                max = array[i][j];
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (array[i][j] == max)
            {
                hang = i;
                cot = j;
            }
        }
    }
    return max;
}
int find_min(int array[][30], int r, int c, int &hang, int &cot)
{ // ham dung de tim kiem gia tri nho nhat va vi tri cua no
    int min = array[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (array[i][j] <= min)
            {
                min = array[i][j];
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (array[i][j] == min)
            {
                hang = i;
                cot = j;
            }
        }
    }
    return min;
}
int Sum_array(int array[][6], int x, int y, int r, int c)
{ // sum array in Ex4_b;
    // x, y are entered by user and r, c are limit (row 5,column 6) setting by QuachKha!
    int ans = 0, ans1 = 0;
    x -= 1;
    y -= 1;
    if (x != -1 && y != -1) // 4 situation maybe appear!
    {
        for (int i = 0; i < c; i++)
        {
            ans += array[x][i];
        }
        for (int j = 0; j < r; j++)
        {
            ans1 += array[j][y];
        }
        cout << "Sum_x = " << ans << " Sum_y = " << ans1 << endl;
        return 0;
    }
    else if (x != -1 && y == -1)
    {
        for (int i = 0; i < c; i++)
        {
            ans += array[x][i];
        }
        cout << "Sum_x = " << ans << endl;
        return 0;
    }
    else if (x == -1 && y != -1)
    {
        for (int j = 0; j < r; j++)
        {
            ans1 += array[j][y];
        }
        cout << "Sum_y = " << ans1 << endl;
        return 0;
    }
    else
    {
        return -1;
    }
}
void Find_located(int array[][6], int r, int c)
{
    // ham nay se tim kiem 1 gia tri ngau nhien co xuat hien trong matrix
    // enter location
    Initial2_Array(array, r, c);
    int x, y;
    cout << " enter x, y to sum Row x or Column y if u don't want please press -1" << endl;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    int ans = Sum_array(array, x, y, r, c);
    cout << ans;
    int value, hang[36], cot[36], dem = 0;
    cout << "Enter your value want to find in array~1 := ";
    cin >> value;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (array[i][j] == value)
            {
                hang[dem] = i;
                cot[dem] = j;
                dem++;
            }
        }
    }
    cout << "Your value is appear " << dem << " times." << endl;
    for (int i = 0; i < dem; i++)
    {
        cout << "Row: " << hang[i] << " and Col: " << cot[i] << endl;
    }
}

void matrix_01(int array[][6], int n)
{ // tao 1 matrix sau do tong cac gia tri nam tren duong cheo chinh va duong cheo phu
    Initial2_Array(array, n, n);
    int sum_main = 0, sum_extra = 0;
    for (int i = 0; i < n; i++)
    {
        sum_main += array[i][i];
    }
    int m = n - 1;
    for (int i = 0; i < n; i++)
    {
        sum_extra += array[i][m];
        m--;
    }
    cout << "Sum in main line matrix is := " << sum_main << endl;
    cout << "Sum in extra line matrix is := " << sum_extra << endl;
}
bool compare01(int a, int b)
{ // so sanh 2 so
    return a == b ? true : false;
}
bool compare(int a, int b)
{
    {
        return a > b ? true : false;
    }
}

void loop_compare(int sum_matrix01, int sum_matrix02)
{ // so sanh cac gia tri tong va tich giua 2 matrix
    if (compare01(sum_matrix01, sum_matrix02))
    {
        cout << "total matrix 1 is equal matrix 2!" << endl;
    }
    else
    {
        if (compare(sum_matrix01, sum_matrix02))
        {
            cout << "total matrix 1 is bigger than matrix 2" << endl;
        }
        else
        {
            cout << "total matrix 2 is bigger than matrix 1" << endl;
        }
    }
}
void matrix_02(int array[][6], int array2[][6], int n, int m)
{ // phien ban nayse tao ra 2 matrix voi cac gia tri khac nhau
    cout << "Matrix 01" << endl;
    Initial2_Array(array, n, n);
    cout << "Matrix 02" << endl;
    Initial3_Array(array2, m, m);
    int sum_matrix01 = 0, sum_matrix02 = 0, multip_matrix01 = 1, multip_matrix02 = 1;
    // cac buoc tinh toan, tong va tich
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum_matrix01 += array[i][j];
            multip_matrix01 *= array[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum_matrix02 += array2[i][j];
            multip_matrix02 *= array2[i][j];
        }
    }
    cout << "Compare sum !" << endl;
    loop_compare(sum_matrix01, sum_matrix02);
    cout << "Compare Multiplies !" << endl;
    loop_compare(multip_matrix01, multip_matrix02);
}
void swarps(int &a, int &b)
{ // ham swarp nhung phien ban handmade
    int tp;
    tp = a;
    a = b;
    b = tp;
}
void zigzag_Matrix(int array[][10], int n)
{ // Ham nay tao nen 1 ma tran voi cac gia tri duoc in theo kieu zigzag
    cout << "enter value into matrix 1" << endl;
    int value = 1; // gan gia tri
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j] = value;
            value++;
        }
    } // show ra matrix truoc khi setting
    cout << "We have matrix 1." << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "After edit into zigzag!" << endl;
    // vong lap dung de hoan doi nhung vi tri can thiet
    for (int i = 0; i < n; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (i != j)
            {
                swarps(array[i][j], array[j][i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (j % 2 != 0 && i < n / 2)
            {
                swarps(array[i][j], array[n - 1 - i][j]);
            }
        }
    }
    // ve ra 1 bang ma tran cho nguoi dung co the danh gia
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void Check_Limit(int n)
{ // kiem tra xem col va row cua cac matrix sau co vuot qua giooi han khong
    if (n < 2 || n > 10)
    {
        cout << "Enter limit: ";
        cin >> n;
        Check_Limit(n);
    }
}

// phien ban 1 cua matrix xoan nhung hoi bi fail :vv;
// void twisted_matrix(int array[][10], int n)
// {

//     cout << "enter value into matrix 1" << endl;
//     int value = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             array[i][j] = value;
//             value++;
//         }
//     }

//     int tich = 0;
//     int tich2 = 1;
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j == n - 1)
//             {
//                 swarps(array[i][j], array[1][tich]);
//                 tich++;
//             }
//             if (j != n - 1 && i == n - 1)
//             {
//                 swarps(array[i][j], array[tich2][0]);
//                 tich2++;
//             }
//         }
//     }

//     swarps(array[3][0], array[2][1]);
//     swarps(array[2][0], array[2][2]);
//     swarps(array[1][0], array[1][1]);

//     swarps(array[2][1], array[2][2]);
//     swarps(array[2][2], array[1][2]);
//     cout << "The matrix. " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << array[i][j] << " ";
//         }

//         cout << endl;
//     }
// }
// cai kho lo cai khon
// phien ban gan cac gia tri theo vong xoan ngay tu dau! <3;
void spiral_matrix(int array[10][10], int n)
{
    int num = 1;
    int left = 0, right = n - 1, top = 0, bot = n - 1;
    while (num <= n * n)
    {
        for (int i = left; i <= right; i++)
        {
            array[top][i] = num;
            num++;
        }
        top++;
        for (int i = top; i <= bot; i++)
        {
            array[i][right] = num;
            num++;
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            array[bot][i] = num;
            num++;
        }
        bot--;
        for (int i = bot; i >= top; i--)
        {
            array[i][left] = num;
            num++;
        }
        left++;
    }
}

void check_Column(int a, int b, int &col)
{ // ham nay dung de check xem ban co chon hang phu hop voi loai ve khong
    if (col < a || col > b)
    {
        cout << "Ve thuong gia o hang 1, 2!" << endl;
        cout << "Ve thuong o hang 3 den 8!" << endl;
        cout << "Ve tiet kiem o hang 9 den 13" << endl;
        cout << "Hay nhap dung hang ma ban da mua ve, xin cam on";
        cin >> col;
        check_Column(a, b, col);
    }
}
void check_tiket(int &a)
{ // check ve chon
    if (a < 1 || a > 3)
    {
        cout << "Ve ban chon khong phu hop, xin hay nhap lai!";
        cin >> a;
        check_tiket(a);
    }
}
void Plane_seat(string array[16][8])
{ // Chuong trinh mua ve may bay, phien ban sieu cap vip pro :>
    // hang 0 1 = thuong gia
    // hang 2 6 = thuong
    // tu 7 tro di la hang tiet kiem
    char Col[8] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char buffer[50];
    for (int i = 0; i < 14; i++)
    {
        if (i != 0 && i < 10)
        {
            array[i][0] = "Hang  ";
            sprintf(buffer, "%d", i); // dinh dang i thang ki tu
            array[i][1] = buffer;
        }
        else if (i != 0 && i >= 10)
        {
            array[i][0] = "Hang ";
            sprintf(buffer, "%d", i); // dinh dang i thang ki tu
            array[i][1] = buffer;
        }
    } // tao o trong de can chinh
    for (int i = 0; i < 8; i++)
    {
        if (i < 2)
        {
            array[0][i] = "    ";
        }
    }
    for (int i = 1; i < 14; i++)
    {
        for (int j = 2; j < 8; j++)
        {
            array[i][j] = " * ";
        }
    } // ten cac day cot
    array[0][2] = "A ";
    array[0][3] = " B ";
    array[0][4] = " C ";
    array[0][5] = " D ";
    array[0][6] = " E ";
    array[0][7] = " F ";
label1:
{
    cout << "Hay chon loai ve: 1 2 3" << endl;
    cout << "1. Ve thuong gia!" << endl;
    cout << "2. Ve hang thuong" << endl;
    cout << "3. Ve tiet kiem" << endl;
    int chonve;
    cin >> chonve;
    check_tiket(chonve);
    cout << "Hay chon vi tri ngoi dua tren cac vi tri co trong bang sau" << endl;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    int hang, col = 0;

    char cot;
    cout << "Nhap hang ghe vao ";
    cin >> hang;
    cout << "Nhap vao cot ghe ";
    cin >> cot;
    switch (chonve)
    {
    case 1:
        check_Column(1, 2, hang);
        break;
    case 2:
        check_Column(3, 8, hang);
        break;
    case 3:
        check_Column(9, 13, hang);
        break;
    }

    for (int i = 0; i < 8; i++)
    {
        if (Col[i] == cot)
        {
            col = i + 2;
        }
    }

    if (array[hang][col] != " X ")
    {
        array[hang][col] = " X ";
    }
    else
    {
        cout << "Rat tiec vi tri do da co nguoi su dung, xin ban hay mua ve o vi tri khac!" << endl;
        goto label1;
    }
    cout << "Cap nhap lai vi tri tren may bay!";
    cout << endl;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    int tieptuc;
    cout << "Ghe cua ban o hang " << hang << " tai cot " << cot << endl;
    cout << "Xin cam on vi da tin tuong va su dung dich vu ben hang airline K! <3" << endl;
    cout << "Tiep tuc chuong trinh an phim 1!";
    cin >> tieptuc;
    if (tieptuc == 1)
    {
        goto label1;
    }
    else
    {
        cout << "Ket thuc chuong trinh";
    }
}
}