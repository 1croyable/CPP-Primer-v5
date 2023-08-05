#include <iostream>
using namespace std;
int main()
{
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;

    const auto f = ci;

    auto &g = ci;

    const auto &j = 42;

    auto k = ci, &l = i;
    auto &m = ci, *p = &ci;

    //---------------------------------------2.33
    a = 42; // a被推断成int，正确
    b = 42; // b被推断成int，正确
    c = 42; // c被推断成int，正确
    d = 42; // d被推断成整形指针，错误
    e = 42; // e被推断成底层const指针，错误（&ci，引用的const性质属于底层const，在auto中会被保留，因此e是const int*类型）
    g = 42; // g被推断成整形常量引用，auto &g会得到一个引用，这个时候得到的肯定是const &，否则就可以修改ci了
    //------------------------------------2.34
    //由上面标出的错误曲线可知
    return 0;
}