#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string str;
    cin >> str;
    
    //遍历一个string
    size_t index = 0;
    while (index != str.size())
    {
        str[index] = 'X';
        ++index;
    }

    cout << str << endl;
    return 0;
}