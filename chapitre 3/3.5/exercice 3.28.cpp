#include <string>
#include <iostream>
using namespace std;

string sa[10]; // sa是一个最多存放10个string对象的数组,10个空串
int ia[10];    // ia是一个最多存放10个int对象的数组，10个0
int main()
{
    string sa2[10]; //在函数内部定义了某种内置类型的数组，默认初始化会令数组含有未定义的值
    int ia2[10];

    //验证
    for (auto s : sa)
        cout << s << " ";
    cout << endl;

    for (auto i : ia)
        cout << i << " ";
    cout << endl;

//其实下面的这两个都是有误的（输入了未定义的值），但是编译器不会报错
//运行可以看到未定义的值每次都是变化的
    for (auto s : sa2)
        cout << s << " ";
    cout << endl;

    for (auto i : ia2)
        cout << i << " ";
    cout << endl;

    return 0;
}