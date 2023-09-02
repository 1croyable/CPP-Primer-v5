#include <vector>
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    string str;
    vector<string> strvec;
    while (cin >> str)
        strvec.push_back(str);
    
    for (auto &s : strvec)
    {
        for (auto &c : s)
        {
            if (islower(c))
                c = toupper(c);
        }
        cout << s << " ";
    }
    cout << endl;
    return 0;
}