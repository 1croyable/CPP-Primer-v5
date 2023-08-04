//抄一遍1.6节的书店程序
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item total; //(*)
    if (cin >> total)
    {
        Sales_item trans; 
        //trans对象在这里创建有一个好处，
        //就是当if从句没有读到输入的时候（现在应该跳转到else里），
        //trans对象不会被创建，内存不会被分配，
        //比起我们之前写在(*)行的性能来得好
        while (cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}