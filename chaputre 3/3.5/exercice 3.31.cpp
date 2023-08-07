#include <iostream>
using namespace std;

int ia[10];

int main()
{
    for (int ix = 0; ix != 10; ++ix)
        ia[ix] = ix;
    
    for (auto i : ia)
        cout << i << " ";
    cout << endl;

    return 0;
}