#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v1;              //空vector
    vector<int> v2(10);          //直接初始化，由10个空位置
    vector<int> v3(10, 42);      //直接初始化，有10个42
    vector<int> v4{10};          //列表初始化，有1个10
    vector<int> v5{10, 42};      //列表初始化，有2个元素10和42
    vector<string> v6{10};       //值初始化，有10个空串
    vector<string> v7{10, "hi"}; //值初始化，有10个hi

    //为了方便一次性输出，我们把所有相同类型的vector放入一个ventor中
    vector<vector<int> > iv{v1, v2, v3, v4, v5};
    //遍历容器
    for (int ix = 0; ix != 5; ++ix)
    {
        cout << "v" << ix+1 << ".size() = " << iv[ix].size() << endl;
        cout << "v" << ix+1 << ":   ";
        for (auto i : iv[ix])//iv[i]是第i+1个vector，从里面拿int元素
            cout << i << " ";
        cout << endl;
    }
    cout << '\n';

    //2个string的处理相同
    vector<vector<string> > sv{v6,v7};
    //遍历容器
    for (int ix = 0; ix != 2; ++ix)
    {
        cout << "v" << ix+6 << ".size() = " << sv[ix].size() << endl;
        cout << "v" << ix+6 << ":   ";
        for (auto str : sv[ix])
            cout << str << " ";
        cout << endl;
    }
    cout << '\n';

    return 0;
}