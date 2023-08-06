#include <vector>
#include <string>
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

    return 0;
}