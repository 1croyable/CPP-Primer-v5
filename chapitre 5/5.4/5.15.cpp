//编写一个打印vector的程序
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> ivec{1,2,3,4,5};
    //方案一：使用for循环
    for (auto it = ivec.begin(); it != ivec.end() ; ++it)
        cout << *it;
    cout << endl;

    //方案二：使用while循环
    auto it = ivec.begin();
    while (it != ivec.end())
    {
        cout << *it;
        ++it;
    }
    cout << endl;
    return 0;
}
//在打印程序中，我更倾向于使用for循环，不仅更简单好辨识，而且for循环的it会在跳出循环后析构，被销毁，而while的it因为是定义在while外边的，所以不会。