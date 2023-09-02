#include <iostream>
#include <string>
using namespace std;


int main(){
    int aCnt = 0;
    int eCnt = 0;
    int iCnt = 0;
    int oCnt = 0;
    int uCnt = 0;
    //读入一些文本
    string in;
    while(cin >> in)
    {
        //拿出每一个字母去比较
        for(auto c : in)
        {
            if (c == 'a' || c == 'A')
                ++aCnt;
            if (c == 'e' || c == 'E')
                ++eCnt;
            if (c == 'i' || c == 'I')
                ++iCnt;
            if (c =='o' || c == 'O')
                ++oCnt;
            if (c == 'u' || c == 'U')
                ++uCnt;
        }
    }
    cout << "aCnt:" << aCnt << '\n';
    cout << "eCnt:" << eCnt << '\n';
    cout << "iCnt:" << iCnt << '\n';
    cout << "oCnt:" << oCnt << '\n';
    cout << "uCnt:" << uCnt << endl;
    return 0;
}