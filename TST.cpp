#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// int rightTurn(std::vector<std::vector<int>> move)
// {
//     int turnR = 0;
//     for (int i = 0; i < move.size() - 1; i += 2)
//     {
//         if (abs(move[i][0] - move[i + 1][0]) + abs(move[i][1] - move[i + 1][1]) == 1)
//         {
//             turnR++;
//         }
//     }
//     return turnR;
// }

// int giaithua(int n)
// {
//     int ans = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         ans *= i;
//     }
//     return ans;
// }
// bool ck(int n)
// {
//     return n % 10 == 0;
// }
// int lastDigitDiffZero(int n)
// {
//     int check = giaithua(n);
//     while (ck(check) == true)
//     {
//         check /= 10;
//     }
//     return check % 10;
// }

// class Box
// {
// private:
//     int l;
//     int b;
//     int h;

// public:
//     struct test
//     {
//         int a;
//         double b;
//     };
//     Box() {}
//     Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}
//     Box(const Box &a) : l(a.l), b(a.b), h(a.h) {}
//     ~Box() {}
//     /*Hàm lấy giá trị*/
//     int getLength() { return l; }
//     int getBreadth() { return b; }
//     int getHeight() { return h; }
//     /*Hàm tính*/
//     long long caculate() { return b * l * h; }
//     friend bool compare(Box &const A, Box &const B) { return (A.l < B.l || A.l < B.l && A.b < B.b || A.l < B.l && A.b < B.b && A.h < B.h) ? true : false; }
//     /*việc dùng ostream thay vì cout bình thường là để người viết có thể linh động
//     trong việc sử dụng các tham chiếu như ostringstream, cout, ofstream name_ -> name.//*/
//     friend ostream &operator<<(ostream &output, const Box &B)
//     {
//         output << B.l << " " << B.b << " " << B.h;
//         return output;
//     }
//     friend istream &operator>>(istream &input, test &a)
//     {
//         input >> a.a >> a.b;
//         return input;
//     }
// };
int main()
{
    // std::vector<std::vector<int>> move = {{0, 0}, {1, 0}, {1, 1}, {2, 1}, {2, 0}, {3, 0}, {3, -1}};
    // // int kq = rightTurn(move);
    // // std::cout << kq << std::endl;
    // int n;
    // cin >> n;
    // int asn = lastDigitDiffZero(n);
    // // true la 1, false = 0
    // cout << 12 % 100;

    double a = 2.5;
    double b = double(a);
    long long t = round(a);
    cout << t;

    return 0;
}
