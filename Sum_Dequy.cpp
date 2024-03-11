#include <iostream>
using namespace std;

bool snt(int n)
{
    switch (n)
    {
    case 2:
    case 3:
    case 5:
    case 7:
        return true;
    default:
        if (n % 2 == 0 || n % 7 == 0 || n % 3 == 0 || n % 5 == 0 || n < 2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int sum(int array[], int size)
{
    int m = 0;
    if (size == 0)
    {
        return 0;
    }
    if (snt(array[size - 1]))
    {
        m = 1;
    }
    return array[size - 1] * m + sum(array, size - 1);
}
// 12  4 5 8 voi size = 4

/*
size == 0 return 0l
arr[ size - 1] % 2 != 0; return arr[size - 1] + sum(arr, size -1);
else{
    return sum(arr, size - 1);
}
*/
int main()
{
    int array[6] = {22, 23, 62, 83, 7, 1};
    int size = 6;
    int m = 0;
    int ketqua = sum(array, size);
    cout << ketqua;
    return 0;
}