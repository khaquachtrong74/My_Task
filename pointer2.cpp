#include <iostream>
using namespace std;
#include<windows.h>
int main()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    short x = 12;
    short *ptr_1 = &x;
    short **ptr_2 = &ptr_1;
    cout << "Dia chi cua bien x " << &x << endl;
    cout << "Gia tri cua bien x " << x << endl;
    cout << "Dia chi cua ptr_1 dang giu " << ptr_1 << endl;
    cout << "Dia chi cua ptr_1 " << &ptr_1 << endl;
    cout << "Gia tri cua ptr_1 " << *ptr_1 << endl;
    cout << "Dia chi ma ptr_2 dang giu " << ptr_2 << endl;
    cout << "Gia tri ma ptr_2 dang giu " << *ptr_2 << endl;
    return 0;
}

// // hằng con trỏ
// int x = 5; // &x = 0x61ff04
// const int *ptr = &x;
// cout << "&x = " << ptr << endl;
// //*ptr = 4; lỗi biên dịch
// // nhưng mà ta có thể thay đổi giá trị từ biến
// cout << "Truoc khi " << *ptr << endl;
// x = 4;
// cout << "Sau khi " << *ptr;

// // con trỏ hằng
// int a = 3;
// int *const ptr = &a;
// cout << "Gia tri truoc khi thay doi " << *ptr << endl;

// // ngược lại với hằng con trỏ, không thể thay đổi địa chỉ nhưng ta có thể thay đổi giá trị
// *ptr = 4; // hợp lệ
// // ptr++; thay đổi địa chỉ không hợp lệ
// cout << "Dia chi " << ptr << endl;
// cout << "Gia tri sau khi thay doi " << *ptr << endl;

// hằng con trỏ hằng
// int x = 5;
// const int *const ptr_a = &x;
// /*ptr_a = 4; không thể thay đổi giá trị*/
// int y = 4;
// /* ptr_a = &y; không thể thay đổi địa chỉ*/
// // ta có thể thấy hằng con trỏ hằng chỉ có thể trỏ không thể làm gì cả/