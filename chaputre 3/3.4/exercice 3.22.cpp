#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello World!";
    for (string::iterator it = str.begin(); it != str.end() ; ++it)
    {
        if(islower(*it))
            *it = toupper(*it);
    }
    cout << str << endl;
    return 0;
}