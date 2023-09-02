// p2-p1返回的是这两个指针间的距离（p1向右边多少个位置能到达p2位置）
// p1 += p2 - p1，p1在原来的基础上加上p1与p2之间的距离，意味着p1将会到达p2
#include <iostream>
using namespace std;

int main()
{
    //下面三行是验证指针的减法规则
    int ia[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = ia + 9;        // p从ia向右移9个位置，现在的p指向了9的位置
    cout << p - ia << endl; //结果是9，ia要向右移动9个单位才能到p

    //下面四行是验证p1+=p2-p1的用处
    int *p1 = ia;     // p1指向0
    int *p2 = ia + 5; // p2指向5，p2-p1结果是5
    p1 += p2 - p1;
    cout << *p1 << endl; //结果是5

    return 0;
}

//当p1是指针常量时，程序非法