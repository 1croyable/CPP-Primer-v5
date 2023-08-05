#include <iostream>
#include <string>
using namespace std;

struct Sales_data
{
    string bookNo;           //书号
    unsigned units_sold = 0; //售出数量
    double revenue = 0.0;    //收益
};

//复制了exercice 1.25.cpp文件里的再修改一下
int main()
{
    Sales_data total; //(*)
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}