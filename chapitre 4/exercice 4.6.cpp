#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    (n%2) ? (cout << "odd" << endl) : (cout << "even" << endl);
    return 0;
}
//?:运算符的优先级很低，除了throw运算符，逗号运算符和各种（复合）赋值运算符外最低的