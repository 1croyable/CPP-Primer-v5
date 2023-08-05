#ifndef _SALES_DATA_CPP_
#define _SALES_DATA_CPP_

#include <string>
using namespace std;
struct Sales_data
{
    string bookNo;       //书号
    unsigned units_sold = 0; //售出数量
    double revenue = 0.0;    //收益
};

#endif