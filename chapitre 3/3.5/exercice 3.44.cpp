#include <iostream>
using namespace std;

using int_array = int[4];//using的等号右边就像普通申明挖去了变量名
//或 typedef int int_array[4]       typedef后边的内容就想普通内容一样
int_array ia = {1,2,3,4};

int main(){
    // 1
    for(auto i : ia)
        cout << i << " ";
    cout << endl;

    // 2
    for (size_t i = 0; i != 4 ; ++i)
        cout << ia[i] << " ";
    cout << endl;

    // 3
    for (auto b = begin(ia) ; b != end(ia) ; ++b)
        cout << *b << " ";
    cout << endl;

    return 0;
}
