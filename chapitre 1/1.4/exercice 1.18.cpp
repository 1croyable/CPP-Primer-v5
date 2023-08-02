#include <iostream>
using namespace std;
int main(){
    cout << "Enter 2 integers" << endl;

    int val1, val2;
    cin >> val1 >> val2;
    if (val1 > val2)
    {
        //如果第一个数比第二个数大，就交换两个数
        int temp = val1;
        val1 = val2;
        val2 = temp;
    }
    if (val1 == val2)
    {
        //如果两个数相等，就输出一条信息并且结束程序
        cout << "No numbers between them.";
        return 0;
    }
    cout << "between " << val1 << " and " << val2 << " : ";
    while(val1 != val2 -1)//因为val1和val2在之后不会被用到了，所以我在这里直接改变val1或val2
    {
        ++val1;
        cout << val1 << " ";
    }
    cout << " ";
    return 0;
}