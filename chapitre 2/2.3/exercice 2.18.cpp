#include <iostream>
using namespace std;

int main()
{
    //创建一个指针
    int i = 42, *p = &i;
    //更改指针的值
    cout << p << endl; //输出旧指针值
    int i2 = 0;
    p = &i2;
    cout << p << endl; //输出新指针值

    cout << "-------------------------\n";

    //更改指针所指对象的值
    cout << *p << endl; //旧指针对象的值
    *p = 8.8;           // 8.8会下取整，转换成int后赋值给p所指对象
    cout << *p << endl; //新指针对象的值
    return 0;
}