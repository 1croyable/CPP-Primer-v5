#include "Sales_data.hpp"
#include <iostream>
using namespace std;

//其他照抄exercice 2.41

int main()
{
    Sales_data item1, item2;

    if (cin >> item1.bookNo >> item1.units_sold >> item1.revenue)
    {
        int count = 1;
        while (cin >> item2.bookNo >> item2.units_sold >> item2.revenue)
        {
            if (item1.bookNo == item2.bookNo)
                count += 1;
            else
            {
                cout << item1.bookNo << " : " << count << endl;
                item1 = item2; //我们在struct里并没有自定义过赋值运算符，在后边会学到，这里是编译器自动生成的合成拷贝赋值运算符
                count = 1;
            }
        }
        cout << item1.bookNo << " : " << count << endl;
    }
    return 0;
}