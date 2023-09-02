#include <iostream>
#include <string>
using namespace std;


int main(){
    int aCnt = 0;
    int eCnt = 0;
    int iCnt = 0;
    int oCnt = 0;
    int uCnt = 0;
    int spCnt = 0;
    int tabCnt = 0;
    int nCnt = 0;
    string in;
    //统计空格可以用getline读入空格
    //统计\t也可以用geiline读入按下的Tab键
    //统计\n可以统计读了多少次getline，就是有多少行
    while(getline(cin,in))
    {
        ++nCnt;
        for(auto c : in)
        {
            switch(c){
                case 'a': case 'A':
                    ++aCnt;
                    break;
                case 'e': case 'E':
                    ++eCnt;
                    break;
                case 'i': case 'I':
                    ++eCnt;
                    break;
                case 'o': case 'O':
                    ++eCnt;
                    break;
                case 'u': case 'U':
                    ++eCnt;
                    break;
                case ' ':
                    ++spCnt;
                    break;
                case '\t':
                    ++tabCnt;
                    break;
            }
        }
    }
    cout << "aCnt:" << aCnt << endl;
    cout << "eCnt:" << eCnt << endl;
    cout << "iCnt:" << iCnt << endl;
    cout << "oCnt:" << oCnt << endl;
    cout << "uCnt:" << uCnt << endl;
    cout << "spCnt:" << spCnt << endl;
    cout << "tabCnt:" << tabCnt << endl;
    cout << "nCnt:" << nCnt << endl;
    return 0;
}