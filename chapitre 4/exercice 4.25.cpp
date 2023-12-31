/*
运算符及优先级（从上到下是从高到低）:

~（位求反的优先级比较高，和解引用一样高）

        ...
        加减乘除

左右移 << >>

        大于小于相等不相等的判断

&
^
|

*/

#include <iostream>
using namespace std;

int main(){
    //'q'是01110001 char被提升成int，先位求反是11111111 11111111 11111111 10001110 再左移6位
    //左移6位，变成 11111111 11111111 11100011 10000000
    //但是int是带符号的，会发生环绕
    cout << ( ~'q'<<6 );
    return 0;
}