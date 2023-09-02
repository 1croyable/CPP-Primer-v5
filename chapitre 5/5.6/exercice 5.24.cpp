#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
        throw runtime_error("0不能作为除数");
    cout << static_cast<double>(a) / b << endl;
    return 0;
}

/*
没有找到catch子句，从调用链向上推，直到terminate函数，终止程序，并且输出what()
*/