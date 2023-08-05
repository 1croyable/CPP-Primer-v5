#include <iostream>
using namespace std;
int main()
{
    cout << "-----------------------------------------2.36\n" << endl;

    int a = 3, b = 4;    // a, b是int
    decltype(a) c = a;   // c是int, c = 3
    decltype((b)) d = a; // d是int &.引用指向了a
    ++c;
    ++d;
    cout << a << " " << b << " " << c << " " << d << endl;

    cout << "--------------------------------2.37\n" <<endl;
    int a = 3,b = 4;            //a,b是int
    decltype(a) c = a;          //c是int
    decltype(a = b) d = a;      //d是int&

    
    return 0;
}
//结束后a = 4, b = 4, c = 4,d即a的引用，也是4