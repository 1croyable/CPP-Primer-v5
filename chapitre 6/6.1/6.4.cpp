#include <iostream>
using namespace std;

long long fact(int n){
    //严格来说要检测n>=1
    long long result = 1;
    while(n != 0)
        result *= n--;
    return result;
}

//阶乘是上一道题编写的fact函数
void fnc(){
    cout << "输入一个正整数: " << endl;
    int val;
    cin >> val;
    long long result = fact(val);
    cout << val << "的阶乘是：" << result << endl;
}

int main(){
    fnc();
    return 0;
}