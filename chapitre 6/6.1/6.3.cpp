#include <iostream>
using namespace std;

long long fact(int n){
    //严格来说要检测n>=1
    long long result = 1;
    while(n != 0)
        result *= n--;
    return result;
}

int main(){
    int n;
    cin >> n;
    cout << n << "的阶乘是：" << fact(n) << endl;
    return 0;
}