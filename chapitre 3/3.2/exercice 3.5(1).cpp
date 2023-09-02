#include <string>
#include <iostream>
using namespace std;

int main(){
    string in , result;
    while(cin >> in)
        result = result + in;

    cout << result;

    return 0;
}