//数组没有==运算符，vector有==运算符
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int ia1[3] = {1,2,3};
    int ia2[3] = {1,2,3};
    //关键是用什么来表征两个数组相同
    //大小不方便获取，sizeof()获取的是字节数，我们默认知道大小都是3
    //值但凡有一个不对应相等，就不相等，干脆不用再比较了，直接break
    //但是为了表示它们相等，不能直接加上else，否则每次循环都会输出equal
    //也不能放在外边，不然不论怎么样，只要跳出了循环，都会equal
    //所以不得不引入一个新的对象
    //网上有一个解决办法是引入一个计数器，如果相等的数量等于数组大小，就是相等
    //我们也可以用一个bool对象
    //很多情况下引入一个新的对象来表示一些状态是个好办法！
    bool if_equal = true;
    for (int ix = 0; ix != 3 ; ++ix)
    {
        if (ia1[ix] != ia2[ix])
        {
            cout << "not equal";
            if_equal = false;
            break;
        }
    }
    if (if_equal)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    
    //下面比较vector
    vector<int> v1(3,1);
    vector<int> v2(3,1);
    if (v1 == v2)
        cout << "equal" << endl;

    return 0;
}