#include <iostream>
using namespace std;
int main()
{
    double value, result;
    while (cin >> value)
    {
        cout << "enter value:" << value << endl;
        //cout << "IOstatus: " << cin.bad() << cin.fail() << cin.eof() << cin.good() << endl;
        result += value;
    }
    cout << result << endl;
    //cout << "IOstatus: " << cin.bad() << cin.fail() << cin.eof() << cin.good() << endl;

    return 0;
}
/*IO类有自己的一些成员表示流的状态（279页），while检测的就是cin的状态
假设strm是一种IO类型（比如istream），strm::iostate,strm::badbit等是表示4个状态的类型
一共有badbit（流已经崩溃）,failbit（IO失败）,eofbit（结束）,goodbit（指出未处于错误状态）
函数bad(),fail(),eof(),good()分别可以显示这四种状态
在这段代码中插入
cout << "IOstatus: " << cin.bad() << cin.fail() << cin.eof() << cin.good() << endl;
后可以查看4种状态*/