#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string str;
    cin >> str;
    for (auto &c : str)
        c = 'X';

    cout << str << endl;
    return 0;
}

    //如果第12行写"X",实际上你写进去的是X\0，占有2个字符，这是一个char数组，
    //因此你给到=运算符的是一个const char*，指向这个数组的第一个元素，
    //然而const char*不能赋值给char，一个指针，另一个是char类型

    // char name[60] = "test"是对的
    // char name[60];     name = "test"是错的
    //这也是一个道理，第二句话里的name已经是一个数组对象了，里面最多能存放60个char，而右边是一个const char*