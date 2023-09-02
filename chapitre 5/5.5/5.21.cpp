#include <string>
#include <iostream>
using namespace std;

int main(){
    string str1 = "", str2 = "";
    //先要读取第一个单词，保证可以在while里比较
    cin >> str1;
    while(cin >> str2)
    {
        if(str1 == str2)
        {
            //进一步判断是不是以大写字母开头
            if (isupper(str1[0]) && isupper(str2[0]))
            {
                cout << "找到了！   break!" << endl;
                break;
            }
            else
            {
                cout << "两个单词相同，但是没有以大写字母开头   continue!" << endl;
                str1 = str2;
                continue;
            }
        }
        else
            //如果不同，把str2记录到str1上，继续读取新的str2和老的那个比较
            str1 = str2;
    }
    //如果只读取了1个
    if(str2 == "")
        cerr << "只有一个？" << endl;
    return 0;
}