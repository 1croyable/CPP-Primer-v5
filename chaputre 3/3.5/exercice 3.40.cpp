#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const char c1[6] = "hello";
    const char c2[6] = "hello";
    char c3[15] = "";//大小容易估算错误，我们设定大一些,c3不能是const的

    strcpy(c3,c1);
    strcat(c3,c2);

    cout << c1 << '\n' << c2 << '\n' << c3 << endl;
    return 0;
}