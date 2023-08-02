//抄一遍本节程序
#include <iostream>
using namespace std;
int main()
{
    // currVal眼下的数,val保存读入的新值
    int currVal = 0, val = 0;
    if (cin >> currVal) //在处理前先要确保读取到
    {
        int cnt = 1;
        while (cin >> val) //每读到一个数，就会开始判断是否与当前的相同，如果相同就递增计数器，不同就输出
        {
            if (val == currVal)
                ++cnt;
            else
            {
                cout << currVal << " occurs " << cnt << " times" << endl;
                currVal = val; //将眼下的数重置，供后续的比较
                cnt = 1;       //计数器重制，如果while判断通过那么肯定至少有1个，cnt赋值为1
            }
        }
        //除了while循环说明没有从cin读到数据了，我们就得打印最后一个从cin读到的数据
        cout << currVal << " occurs " << cnt << " times" << endl;
    }
    return 0;
}