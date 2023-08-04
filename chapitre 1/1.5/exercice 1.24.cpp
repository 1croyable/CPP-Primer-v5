/*
输入：
1-1-1 1 1
1-1-1 2 2
1-1-1 2 3
2-2-2 2 2
2-2-2 1 1
2-2-2 1 1
2-2-2 1 1
3-4-5 1 1
3-3-3 1 1
control+z
*/
#include "Sales_item.h"
#include <iostream>
using namespace std;

int main()
{
    Sales_item item1, item2;//item2是新输入的，item1是用来与新输入的item2比较isbn号的那个Sales_item对象
    //这里放if的原因和上一题一样
    if (cin >> item1)
    {
        int count = 1;
        while (cin >> item2)
        {
            if (item1.isbn() == item2.isbn())
                count += 1;
            else{
                cout << item1.isbn() << " : " << count << endl;
                item1 = item2;
                count =  1;
            }
        }
        cout << item1.isbn() << " : " << count << endl;
    }
    return 0;
}