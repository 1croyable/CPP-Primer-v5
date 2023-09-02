//思路：先记录第一个读取的单词，compt设为1
//然后读取下一个单词，如果与记录相同，则++compt
//如果不同了，那么重新记录下这个新的单词，compt重置为1
//但是为了记录最大出现次数以及对应的单词，需要比较新的compt与纪录保持者的max谁大，并且记录下来

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string record, in; //用于比较的两个string
    int compt = 0;     //用于记录次数

    //首先要记录下第一个读取的单词，再while循环
    if (cin >> record)
    {
        //为了有比较对象，我们将第一个输入的单词作为max_str和max的拥有者
        int max;
        compt = max = 1;
        string max_str = record;

        while (cin >> in)
        {
            if (record == in)
                ++compt;
            else
            {
                //首先在不同的时候要比较compt和之前单词的max谁大
                if (compt > max)
                {
                    //如果现在的大，那么就要替换掉老的max_str和max
                    max_str = record;
                    max = compt;
                }
                //然后重置
                record = in;
                compt = 1;
            }
        }
        //提出while循环之后，没有处理最后一种单词，所以要复制一遍
        if (compt > max)
        {
            max_str = record;
            max = compt;
        }
        //结束，输出结果
        if (max == 1)
            cout << "没有连续出现的单词" << endl;
        else
            cout << max_str << "重复出现次数最多，有" << max << "次" << endl;
    }
    return 0;
}

//上面这个足以满足题目要求，输入how now now now brown cow cow
//如果有两种单词重复出现的次数相同，该怎么办？
//所以max_str记录需要使用一个数组或vector
//我写在了5.14_version2.cpp里
//用到了后边的知识，可以先不看