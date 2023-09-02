#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)

        cout << static_cast<double>(a) / b << endl;

    return 0;
}