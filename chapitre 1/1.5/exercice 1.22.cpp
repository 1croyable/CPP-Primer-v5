#include "Sales_item.h"
#include <iostream>
using namespace std;

int main()
{
    Sales_item item1, item2;
    //不知道要读取多少个，用while循环，但是while只能读取一个，还需要一个才能在while中比较，因此引入一个if确保有1个读取
    if (cin >> item1) //确保有1个读取
    {
        while (cin >> item2)
        {
            if (item1.isbn() == item2.isbn())
            {
                item1 += item2;
            }
            else
            {
                cout << item1 << endl;
                return 0;
            }
        }
        //如果没有第二个读取，就输出item1
        cout << item1 << endl;
        return 0;
    }
}