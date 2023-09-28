#include <iostream>
using namespace std;

int absolute(int n){
    return (n >= 0) ? n : -n;
}

int main(){
    cout << "传入一个值: " << endl;
    int val;
    cin >> val;
    val = absolute(val);
    cout << "绝对值是：" << val << endl;
    return 0;
}