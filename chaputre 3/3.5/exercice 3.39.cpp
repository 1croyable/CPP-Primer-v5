#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    //比较2个string，用内置的比较运算符
    string str1 = "string";
    string str2 = "string";
    if (str1 == str2)
        cout << "equal" << endl;;
    
    //C风格字符串
    const char c1[7] = "string";
    const char c2[7] = "string";
    cout << strcmp(c1,c2) << endl;//相等的时候输出为0
    if (!strcmp(c1,c2))
        cout << "equal" << endl;
    
    return 0;
}