#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string str;
    cin >> str;
    //如果是标点符号，就不拷贝进新的string去
    string newstr;
    for (auto &c : str)
    {
        if (!ispunct(c))
            newstr = newstr + c;
    }
    cout << newstr << endl;
    return 0;
}