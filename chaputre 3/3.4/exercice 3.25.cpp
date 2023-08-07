#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<unsigned> vec(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        //防止成绩输入不对导致迭代器溢出，指向其他无意义的位置
        if (grade >= 0 && grade <= 100)
        { 
            //使用迭代器的加法，移动迭代器位置到对应的分数段
            vector<unsigned>::iterator it = vec.begin() + grade / 10;
            ++*it;
        }
        else
            cerr << "wrong number\n";
    }
    return 0;
}