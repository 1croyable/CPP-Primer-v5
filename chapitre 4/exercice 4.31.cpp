//后置版本返回的是改动前的内容，因为会拷贝一份，所以效率相对较低
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> ivec(5,0);
    int cnt = 5;

    //第一次ix = 0进去
    //ivec[0]被赋值为5，然后对ix+1，cnt-1

    //逗号运算符左侧对象的求值结果会被丢弃，右侧对象的结果作为逗号运算符的结果。
    //这里的逗号运算符的结果是cnt，是一个左值，值是5
    //但是这个逗号运算符并没有干些什么别的事，cnt被减了1,他变成了4,我们没有拿ix++,cnt--这个左值去做其他事
    //所以结果和前置是一样的，仍然是5,4,3,2,1

    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;
    
    for (int ix = 0; ix != 5 ; ++ix)
        cout << ivec[ix] << " ";
    cout << endl;
    return 0;
}