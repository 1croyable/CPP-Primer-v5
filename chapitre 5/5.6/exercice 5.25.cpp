#include <iostream>
using namespace std;

int main()
{
    int a, b;
begin: // goto的标识符
    try
    {
        cin >> a >> b;//这边默认用户输入的就是int类型，学到后边可以用正则表达式检查
        if (b == 0)
            throw runtime_error("0不能作为除数");
        cout << static_cast<double>(a) / b << endl;
    }
    catch (runtime_error err)
    {
        cerr << err.what() << endl;
        cout << "要不要再来一次？(Y/N)" << endl;
        char ifzl;
    again:
        cin >> ifzl;
        if (ifzl == 'Y')
            goto begin;
        if (ifzl != 'Y' && ifzl != 'N')
            //重新输入Y ou N
            goto again;
    }
    return 0;
}