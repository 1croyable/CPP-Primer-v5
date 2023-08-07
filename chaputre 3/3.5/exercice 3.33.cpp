#include <iostream>
using namespace std;

int main(){
    unsigned scores[11];//未定义的，初始数字谁也不知道是多少，++的操作会出问题。一定要保证初始的数字是0
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
            ++scores[grade/10];
    }

    for(auto u : scores)
        cout << u << " ";
    cout << endl;

    return 0;
}