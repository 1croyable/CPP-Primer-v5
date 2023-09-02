#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string record, in;
    int compt = 0;

    if (cin >> record)
    {
        int max;
        compt = max = 1;
        vector<string> max_str;

        //下面是基本的比较记录的值和输入的值，并且执行相关动作还有重置新的记录
        while (cin >> in)
        {
            if (record == in)
                ++compt;
            else
            {
                if (compt > max)
                {
                    max = compt;
                    // max_str里只能存在一个记录，要pop_back掉所有的
                    max_str.clear();
                    max_str.push_back(record); //重新添加
                }
                else
                {
                    if (compt == max)
                        max_str.push_back(record);
                } //经过测试发现这里一定要有else,否则第72行已经man = compt了，这里if语句永远是对的
                //做好一切记录工作后，保存当前的输入。
                    record = in;
                    compt = 1;
            }
        }

        //跳出while循环后，最后一种单词没有比较，所以要复制下来
        if (compt > max)
        {
            max = compt;
            // max_str里只能存在一个记录，要clear掉所有的
            max_str.clear();
            max_str.push_back(record); //重新添加
        }
        else
        {
            if (compt == max)
                max_str.push_back(record);
        }

        //结束，最后输出结果
        if (max == 1)
            cout << "没有连续出现的单词" << endl;
        else
        {
            //如果max_str大于1个，输出的方式和等于1个是不同的，其实是说的话不同，所以我这边分开写
            if (max_str.size() > 1)
            {
                cout << "这些单词重复出现次数最多且相同：";
                for (auto it = max_str.begin(); it != max_str.end(); ++it)
                    cout << *it << " ";
                cout << endl
                     << "重复出现了： " << max << "次" << endl;
                return 0;
            }
            
            if (max_str.size() == 1)
            {
                cout << "单词" << max_str[0] << "重复出现次数最多，有" << max << "次" << endl;
                return 0;
            }
        }
    }
    else
    {
        cout << "没有输入？";
        return 0;
    }
}

//程序的核心是比较记录值和当前值。
//所以还可以改进的地方是创建一个类，来维护输出结果，即保存重复出现次数最大的那一些单词和出现的次数