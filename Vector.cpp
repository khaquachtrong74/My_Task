#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

void arrayMake(vector<int> &my_vector, istream &enter)
{
    my_vector.resize(0);
    int t;
    cout << "Enter Crtl + W to stop." << endl;
    while (enter >> t)
    {
        // điều kiện dừng khi nhấn tổ hợp phím crtl Q, crtl W...
        my_vector.push_back(t);
    }
}
void arrayOut(vector<int> const my_vector, ostream &dev)
{
    // in mảng ra
    for (int i = 0; i < my_vector.size(); i++)
    {
        dev << my_vector[i] << " ";
    }
    dev << endl;
}
void arrayCat(vector<int> &dest, vector<int> &src)
{
    int size1 = dest.size(), size2 = src.size();
    // nối 2 mảng lại vào nhau
    int newsizes = size1 + size2, index = size1, i = 0;
    dest.resize(newsizes);
    while (i < size2)
    {
        dest[index] = src[i];
        i++, index++;
    }
}



/*
| oldarr: mảng cần cắt
| newarr: mảng sau khi cắt ra
| post: vị trí cần cắt*/
void arrayCut(vector<int> &oldarr, int post, vector<int> &newarr)
{ // cắt mảng
    int i = post;
    int size = oldarr.size();
    if (i < 0 || i >= size)
    {
        return;
    }
    while (i < size)
    {
        newarr.push_back(oldarr[i]);
        i++;
    }
    oldarr.resize(post);
}  
void arrInsert(vector<int> &dest, int post, int elements)
{
    if (post < 0 || post > dest.size())
    {
        return;
    }
    vector<int> b;
    arrayCut(dest, post, b);
    dest.push_back(elements);
    arrayCat(dest, b);
}
int main()
{
    vector<int> mvt, nvt;
    time_t diff_1 = time(0);

    arrayMake(mvt, cin);
    cout << "mvt:";
    arrayOut(mvt, cout);
    cout << "cat mang" << endl;
    arrayCut(mvt, (mvt.size()) / 2, nvt);
    cout << "mvt new:";
    arrayOut(mvt, cout);
    cout << "nvt:";
    arrayOut(nvt, cout);
    cout << "Chen mang" << endl;
    arrInsert(mvt, (mvt.size() / 2), -3);
    cout << "Sau khi chen mvt: ";
    arrayOut(mvt, cout);
    cout << endl;
    time_t diff_2 = time(0);
    // difftime(end_time, start_time);
    float differ = difftime(diff_2, diff_1);
    cout << "Thoi gian chay la " << differ << " giay." << endl;
}



