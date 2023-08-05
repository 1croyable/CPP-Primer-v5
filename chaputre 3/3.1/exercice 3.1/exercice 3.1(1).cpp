#include <iostream>
using std::cout;
using std::endl;
int main(){
    int n = 50,sum = n;//注意这里sum和n的顺序不能变，因为要先定义n，才能用n来初始化sum
    while (n != 100){           //n是99时可以进来，先++n,sum+100，结束了，所以条件写!=100
        ++n;
        sum += n;
    }
    cout << "50 + ... + 1 = " << sum << endl;
    return 0;
}