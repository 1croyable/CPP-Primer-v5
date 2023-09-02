#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> ivec;
    int i;
    while (cin >> i)
        ivec.push_back(i);

    for (size_t ix = 0; ix != (ivec.size() - 1) / 2 + 1; ++ix)
        cout << ivec[ix] + ivec[ivec.size() - 1 - ix] << " ";
    cout << endl;

    return 0;
}