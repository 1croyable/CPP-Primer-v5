//反过来就比较麻烦，数组不能接受指针对形式的直接初始化
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> ivec(10,1);//10个1
    int dim = ivec.size();
    int ia[dim] = {};//10个0
    for (int ix = 0; ix != dim ; ++ix)
        ia[ix] = ivec[ix];
    
    for (auto i : ia)
        cout << i;
    cout << endl;

    return 0;
}