//无变化
#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string str;
    cin >> str;
    for (char &c : str)
        c = 'X';

    cout << str << endl;;
    return 0;
}