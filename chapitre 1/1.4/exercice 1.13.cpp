#include <iostream>
using namespace std;
int main()
{
    //练习1.9的for版本
    int sum = 0;
    for (int i = 50; i != 101; ++i)
        sum += i;
    cout << "50+51+...+100 = " << sum << endl;
    //练习1.10的for版本
    for (int i = 9; i != 0; --i)
        cout << i << " ";
    cout << endl;
    //练习1.11的for版本
    cout << "enter 2 integers(val1<val2):";
    int val1, val2;
    cin >> val1 >> val2;
    for (int i = val1 + 1; i != val2; ++i)
        ( (i-val1)%10 ) ? (cout << i << " ") : (cout << i << "\n" << " "); //每行输出10个
    cout << endl;

    return 0;
}