#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> ivec(10, 1); // 10个1
    for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it *= 2;
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}