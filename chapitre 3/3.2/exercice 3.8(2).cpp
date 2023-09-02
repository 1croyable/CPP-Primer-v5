#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string str;
    cin >> str;
    
    //遍历一个string
    for (size_t ix = 0; ix != str.size() ; ++ix)
        str[ix] = 'X';

    cout << str << endl;
    return 0;
}

//for循环更简洁