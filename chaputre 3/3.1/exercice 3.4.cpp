#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "------------------------1----------------------------" << endl;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
        cout << "equal" << endl;
    else
    {
        if (s1 > s2)
            cout << s1 << endl;
        else
            cout << s2 << endl;
    }

    cout << "------------------------2----------------------------" << endl;
    cin >> s1 >> s2;
    if (s1.size() == s2.size())
        cout << "equal" << endl;
    else
    {
        if (s1.size() < s2.size())
            cout << s2 << endl;
        else
            cout << s1 << endl;
    }
    return 0;
}