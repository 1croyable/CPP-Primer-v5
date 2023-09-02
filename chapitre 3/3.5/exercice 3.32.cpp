#include <iostream>
#include <vector>
using namespace std;

int ia[10];

int main()
{
    for (int ix = 0; ix != 10; ++ix)
        ia[ix] = ix;

    //数组不能直接用=运算符拷贝赋值
    int ia2[10];
    for (int ix = 0; ix != 10; ++ix)
        ia2[ix] = ia[ix];

    //输出ia2中的元素
    for (auto i : ia2)
        cout << i << " ";
    cout << endl;

    cout << "\nuse vector:" << endl;

    //创建第一个vector
    vector<int> ivec(10);
    for (int ix = 0; ix != ivec.size(); ++ix)
        ivec[ix] = ix;

    //拷贝vector
    vector<int> ivec2 = ivec;

    //输出ivec2中的元素
    for (auto i : ivec2)
        cout << i << " ";
    cout << endl;

    return 0;
}