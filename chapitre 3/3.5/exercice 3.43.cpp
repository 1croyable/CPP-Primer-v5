#include <iostream>
using namespace std;

int ia[4] = {1,2,3,4};

int main(){
    // 1
    for(auto i : ia)
        cout << i << " ";
    cout << endl;

    // 2
    for (size_t i = 0; i != 4 ; ++i)
        cout << ia[i] << " ";
    cout << endl;

    // 3
    for (auto b = begin(ia) ; b != end(ia) ; ++b)
        cout << *b << " ";
    cout << endl;

    return 0;
}
