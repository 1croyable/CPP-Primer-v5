#include <iostream>
using namespace std;

int main(){
    int n = 0;
    while (cin >> n)
    {
        if ( n != 42 )
            cout << n << " ";
        else break;
    }
    return 0;
}