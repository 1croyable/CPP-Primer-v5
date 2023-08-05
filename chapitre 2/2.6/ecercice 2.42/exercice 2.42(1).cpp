#include "Sales_data.hpp"
#include <iostream>
using namespace std;

//其他照抄exercice 2.41

int main()
{
    Sales_data data1;

    cout << "bookNo: ";
    cin >> data1.bookNo;
    cout << endl;

    cout << "units_sold: ";
    cin >> data1.units_sold;
    cout << endl;

    cout << "revenue: ";
    cin >> data1.revenue;
    cout << endl;

    cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << endl;
    return 0;
}