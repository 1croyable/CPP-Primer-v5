#include <iostream>
#include <string>
using namespace std;


int main(){
    int num = 0;
    //读入一些文本
    string in;
    while(cin >> in)
    {
        //拿出每一个字母去比较
        for(auto c : in)
        {
            if (c == 'a')
                ++num;
            if (c == 'e')
                ++num;
            if (c == 'i')
                ++num;
            if (c == 'o')
                ++num;
            if (c == 'u')
                ++num;
        }
    }
    cout << num;
    return 0;
}