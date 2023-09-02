#include <iostream>
using namespace std;

int x[10]; int *p = x;//x定义在main里边会产生未定义的值

int main(){
    cout << sizeof(x)/sizeof(*x) << endl;//*x的x被处理成指针，指向第一个数     40/4
    cout << sizeof(p)/sizeof(*p) << endl;//p的初始值指向的是*x位置,即第一个0   8/4
    return 0;
}