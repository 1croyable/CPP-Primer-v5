#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> v {1,2,3,4,5,6};
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg > 0)
        cout << *++pbeg << endl;
    return 0;
}
//前置递增和解引用时评级的
//第一个进去的pbeg先被递增后被解引用
//到pbeg指向6的时候先递增后被解引用，但是递增了就会导致pbeg指向未定义的值