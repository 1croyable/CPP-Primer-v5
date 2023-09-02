#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> ivec;
    int i;
    while (cin >> i)
        ivec.push_back(i);

    for (size_t ix = 0; ix != ivec.size() - 1; ++ix) //按道理!= .size()就行了，这样读取到的是倒数第二个+最后一个数就结束了，但是因为会读取control+z的^Z符号，所以再-1
        cout << ivec[ix] + ivec[ix + 1] << " ";
    cout << endl;

    return 0;
}