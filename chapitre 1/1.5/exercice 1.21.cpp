#include "Sales_item.h"
#include <iostream>
using namespace std;

int main()
{
    Sales_item item1, item2;
    cin >> item1 >> item2;
    if (item1.isbn() != item2.isbn())
    {
        cerr << "wrong isbn number"; // cerr不经过缓冲区直接输出
        return 0;
    }
    cout << item1 + item2 << endl;
}