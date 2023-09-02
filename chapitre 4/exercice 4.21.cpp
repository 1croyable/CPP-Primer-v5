#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    for (auto &i : vec)
        (i%2) ? (i *= 2) : (i = i);
    for (auto i : vec)
        cout << i << endl;
    return 0;
}