#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

struct Sales_data
{
    string bookNo;       //书号
    unsigned units_sold = 0; //售出数量
    double revenue = 0.0;    //收益
};


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