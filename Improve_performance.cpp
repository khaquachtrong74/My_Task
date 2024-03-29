#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> my_int;
    my_int.push(4);
    my_int.push(5);
    my_int.push(123);
    my_int.push(255);
    my_int.push(240);
    my_int.push(2560000);
    cout << "dia chi cua my_int " << &my_int << endl;
    while (!my_int.empty())
    {
        cout << "dia chi phan tu: " << &(my_int.top()) << endl;
        my_int.pop();
    }
}