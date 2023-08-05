#include <iostream>
#include <string>
using namespace std;

struct Sales_data
{
    string bookNo;           //书号
    unsigned units_sold = 0; //售出数量
    double revenue = 0.0;    //收益
};

//复制了exercice 1.23.cpp文件里的再修改一下
//在struct里并没有定义>> << =等运算符，除了=运算符编译器会为我们自动生成外，其他的如读入>>只能通过'.'运算符，一个一个地
//将信息读入对象的每个成员数据里。此时使用的>> <<等运算符属于string或内置类型
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