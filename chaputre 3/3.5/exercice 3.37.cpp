#include <iostream>
using namespace std;

int main(){
    const char ca[] = {'h','e','l','l','o'};    //构造一个char数组（没有\0）
    const char *cp = ca;    //指针是底层const，不会改变ca，因此赋值合法，cp指向'h'
    while (*cp){
        cout << *cp << endl;
        ++cp;
    }

    return 0;
}
//循环当且仅当cp指针解引用对应的char对应的数值是0的时候才能退出
//输出不固定：
/*
h
e
l
l
o
...
*/